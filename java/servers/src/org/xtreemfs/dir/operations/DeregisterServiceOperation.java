/*
 * Copyright (c) 2009-2011 by Bjoern Kolbeck,
 *               Zuse Institute Berlin
 *
 * Licensed under the BSD License, see LICENSE file for details.
 *
 */

package org.xtreemfs.dir.operations;

import org.xtreemfs.babudb.api.database.DatabaseInsertGroup;
import org.xtreemfs.babudb.api.exception.BabuDBException;
import org.xtreemfs.common.stage.BabuDBComponent;
import org.xtreemfs.common.stage.RPCRequestCallback;
import org.xtreemfs.common.stage.BabuDBComponent.BabuDBDatabaseRequest;
import org.xtreemfs.dir.DIRRequest;
import org.xtreemfs.dir.DIRRequestDispatcher;
import org.xtreemfs.pbrpc.generatedinterfaces.Common.emptyResponse;
import org.xtreemfs.pbrpc.generatedinterfaces.DIRServiceConstants;
import org.xtreemfs.pbrpc.generatedinterfaces.DIR.serviceDeregisterRequest;

import com.google.protobuf.Message;

/**
 * 
 * @author bjko
 */
public class DeregisterServiceOperation extends DIROperation {
    
    private final BabuDBComponent database;
    
    public DeregisterServiceOperation(DIRRequestDispatcher master) {
        
        super(master);
        database = master.getDatabase();
    }
    
    @Override
    public int getProcedureId() {
        
        return DIRServiceConstants.PROC_ID_XTREEMFS_SERVICE_DEREGISTER;
    }
    
    @Override
    public void startRequest(DIRRequest rq, RPCRequestCallback callback) throws BabuDBException {
        
        final serviceDeregisterRequest request = (serviceDeregisterRequest) rq.getRequestMessage();
        
        DatabaseInsertGroup ig = database.createInsertGroup();
        ig.addDelete(DIRRequestDispatcher.INDEX_ID_SERVREG, request.getUuid().getBytes());
        database.insert(callback, ig, rq.getMetadata(), database.new BabuDBPostprocessing<Object>() {
            
            @Override
            public Message execute(Object result, BabuDBDatabaseRequest rq) throws Exception {
                
                master.notifyServiceDeregistred(request.getUuid());
                return emptyResponse.getDefaultInstance();
            }
        });
    }
}
