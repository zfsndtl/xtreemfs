package org.xtreemfs.common.monitoring.generatedcode;

//
// Generated by mibgen version 5.1 (03/08/07) when compiling XTREEMFS-MIB in standard metadata mode.
//


// jmx imports
//
import com.sun.management.snmp.SnmpStatusException;

/**
 * This interface is used for representing the remote management interface for the "General" MBean.
 */
public interface GeneralMBean {

    /**
     * Getter for the "NumPendingRequests" variable.
     */
    public Long getNumPendingRequests() throws SnmpStatusException;

    /**
     * Getter for the "NumClientConnections" variable.
     */
    public Integer getNumClientConnections() throws SnmpStatusException;

    /**
     * Getter for the "DebugLevel" variable.
     */
    public Integer getDebugLevel() throws SnmpStatusException;

    /**
     * Getter for the "TcpPort" variable.
     */
    public Integer getTcpPort() throws SnmpStatusException;

    /**
     * Getter for the "DatabaseVersion" variable.
     */
    public String getDatabaseVersion() throws SnmpStatusException;

    /**
     * Getter for the "RpcInterface" variable.
     */
    public Integer getRpcInterface() throws SnmpStatusException;

    /**
     * Getter for the "ServiceUUID" variable.
     */
    public String getServiceUUID() throws SnmpStatusException;

    /**
     * Getter for the "ServiceType" variable.
     */
    public String getServiceType() throws SnmpStatusException;

    /**
     * Getter for the "JvmFreeMemory" variable.
     */
    public Long getJvmFreeMemory() throws SnmpStatusException;

    /**
     * Getter for the "JvmMaxMemory" variable.
     */
    public Long getJvmMaxMemory() throws SnmpStatusException;

    /**
     * Getter for the "IsRunning" variable.
     */
    public String getIsRunning() throws SnmpStatusException;

    /**
     * Getter for the "CurrentTime" variable.
     */
    public Long getCurrentTime() throws SnmpStatusException;

    /**
     * Getter for the "JvmUsedMemory" variable.
     */
    public Long getJvmUsedMemory() throws SnmpStatusException;

}