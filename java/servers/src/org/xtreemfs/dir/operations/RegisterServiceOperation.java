/*
 * Copyright (c) 2009-2011 by Bjoern Kolbeck,
 *               Zuse Institute Berlin
 *
 * Licensed under the BSD License, see LICENSE file for details.
 *
 */

package org.xtreemfs.dir.operations;

import java.util.ConcurrentModificationException;

import org.xtreemfs.common.HeartbeatThread;
import org.xtreemfs.common.stage.BabuDBComponent;
import org.xtreemfs.common.stage.RPCRequestCallback;
import org.xtreemfs.common.stage.BabuDBComponent.BabuDBDatabaseRequest;
import org.xtreemfs.dir.DIRRequest;
import org.xtreemfs.dir.DIRRequestDispatcher;
import org.xtreemfs.dir.data.ServiceRecord;
import org.xtreemfs.foundation.buffer.ReusableBuffer;
import org.xtreemfs.pbrpc.generatedinterfaces.DIRServiceConstants;
import org.xtreemfs.pbrpc.generatedinterfaces.DIR.Service;
import org.xtreemfs.pbrpc.generatedinterfaces.DIR.serviceRegisterRequest;
import org.xtreemfs.pbrpc.generatedinterfaces.DIR.serviceRegisterResponse;

import com.google.protobuf.Message;

/**
 * 
 * @author bjko
 */
public class RegisterServiceOperation extends DIROperation {
    
    private final BabuDBComponent database;
    
    public RegisterServiceOperation(DIRRequestDispatcher master) {
        super(master);
        database = master.getDatabase();
    }
    
    @Override
    public int getProcedureId() {
        return DIRServiceConstants.PROC_ID_XTREEMFS_SERVICE_REGISTER;
    }
    
    @Override
    public void startRequest(DIRRequest rq, RPCRequestCallback callback) throws Exception {
        
        final serviceRegisterRequest request = (serviceRegisterRequest) rq.getRequestMessage();
        
        final Service.Builder reg = request.getService().toBuilder();
                
        database.lookup(callback, DIRRequestDispatcher.INDEX_ID_SERVREG, reg.getUuid().getBytes(), 
                rq.getMetadata(), database.new BabuDBPostprocessing<byte[]>() {
                    
            @Override
            public Message execute(byte[] result, BabuDBDatabaseRequest rq) throws Exception {
                
                long currentVersion = 0;
                if (result != null) {
                    ReusableBuffer buf = ReusableBuffer.wrap(result);
                    ServiceRecord dbData = new ServiceRecord(buf);
                    currentVersion = dbData.getVersion();
                } else {
                    // The registered service wasn't registered before. 
                    // Collect data from the request and inform all listeners about this registration
                    String uuid, name, type, pageUrl, geoCoordinates;
                    long totalRam, usedRam, lastUpdated;
                    int status, load, protoVersion;
                    
                    ServiceRecord sRec = new ServiceRecord(request.getService().toBuilder().build());
                    
                    uuid = sRec.getUuid();
                    name = sRec.getName();
                    type = sRec.getType().toString();
                    
                    
                    pageUrl = sRec.getData().get("status_page_url") == null ? "": sRec.getData().get("status_page_url");
                    geoCoordinates = sRec.getData().get("vivaldi_coordinates") == null ? "" :
                        sRec.getData().get("vivaldi_coordinates");
                    try {
                        totalRam = Long.parseLong(sRec.getData().get("totalRAM"));
                    } catch (NumberFormatException nfe) {
                        totalRam = -1;
                    }
                    try {
                        usedRam = Long.parseLong(sRec.getData().get("usedRAM"));
                    } catch (NumberFormatException nfe) {
                        usedRam = -1;
                    }
                    lastUpdated = System.currentTimeMillis() / 1000l;
                    try {
                        status = Integer.parseInt(sRec.getData().get(HeartbeatThread.STATUS_ATTR));
                    } catch (NumberFormatException nfe) {
                        status = -1;
                    }
                    try {
                        load = Integer.parseInt(sRec.getData().get("load"));
                    } catch (NumberFormatException nfe) {
                        load = -1;
                    }
                    try {
                        protoVersion = Integer.parseInt(sRec.getData().get("proto_version"));
                    } catch (NumberFormatException nfe) {
                        protoVersion = -1;
                    }
                    
                    master.notifyServiceRegistred(uuid, name, type, pageUrl, geoCoordinates, totalRam, usedRam, 
                            lastUpdated, status, load, protoVersion);
                }
                
                if (reg.getVersion() != currentVersion) {
                    throw new ConcurrentModificationException("The requested version number ("
                        + reg.getVersion() + ") did not match the " + "expected version ("
                        + currentVersion + ")!");
                }
                                
                reg.setVersion(++currentVersion);
                reg.setLastUpdatedS(System.currentTimeMillis() / 1000l);

                return null;
            }
            
            @Override
            public void requeue(BabuDBDatabaseRequest request) {
                                
                ServiceRecord newRec = new ServiceRecord(reg.build());
                byte[] newData = new byte[newRec.getSize()];
                newRec.serialize(ReusableBuffer.wrap(newData));
                
                database.singleInsert(DIRRequestDispatcher.INDEX_ID_SERVREG, newRec.getUuid().getBytes(), 
                        newData, request, database.new BabuDBPostprocessing<Object>() {
                            
                    @Override
                    public Message execute(Object result, BabuDBDatabaseRequest request) throws Exception {
                        
                        return serviceRegisterResponse.newBuilder().setNewVersion(reg.getVersion()).build();
                    }
                });
            }
        });
    }
}
