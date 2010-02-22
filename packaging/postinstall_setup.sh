#!/bin/bash

XTREEMFS_LOG_DIR=/var/log/xtreemfs
XTREEMFS_HOME=/var/lib/xtreemfs
XTREEMFS_USER=xtreemfs
XTREEMFS_GROUP=xtreemfs

exists=`grep -c $XTREEMFS_USER /etc/passwd`
group_exists=`grep -c $XTREEMFS_GROUP /etc/group`
if [ $group_exists -eq 0 ]
then
	groupadd $XTREEMFS_GROUP
	echo "created group XTREEMFS_GROUP"
fi
if [ $exists -eq 0 ]
then
        mkdir $XTREEMFS_HOME
        useradd -r --home $XTREEMFS_HOME -g $XTREEMFS_GROUP $XTREEMFS_USER
        chown $XTREEMFS_USER $XTREEMFS_HOME
        echo "created user $XTREEMFS_USER and data directory $XTREEMFS_HOME"
else
        if [ ! -d $XTREEMFS_HOME ]
        then
            mkdir $XTREEMFS_HOME
            echo "user $XTREEMFS_USER exists but created data directory $XTREEMFS_HOME"
        fi
        owner=`stat -c %U $XTREEMFS_HOME`
        if [ $owner != $XTREEMFS_USER ]
        then
            echo "directory $XTREEMFS_HOME is not owned by $XTREEMFS_USER, executing chmod (may take some time)"
            chown -R $XTREEMFS_USER $XTREEMFS_HOME
        fi
fi

if [ ! -e $XTREEMFS_LOG_DIR ]
then
        mkdir $XTREEMFS_LOG_DIR
        chown -R $XTREEMFS_USER $XTREEMFS_LOG_DIR
fi
