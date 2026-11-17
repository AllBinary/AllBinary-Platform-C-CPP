/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.communication.ftp.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct FtpConfigurationMapping FtpConfigurationMapping;
struct FtpConfigurationMapping {
    TableMappingInterface TableMappingInterface_interface;
    FtpConfigurationInterface* ftpConfigurationInterface;
};


FtpConfigurationMapping* FtpConfigurationMapping_new(FtpConfigurationInterface* ftpConfigurationInterface);

void FtpConfigurationMapping_init(FtpConfigurationMapping* this, FtpConfigurationInterface* ftpConfigurationInterface);
HashMap* FtpConfigurationMapping_toHashMap(FtpConfigurationMapping* this);
Any* FtpConfigurationMapping_getKey(FtpConfigurationMapping* this);
BasicArrayList* FtpConfigurationMapping_toVector(FtpConfigurationMapping* this);

static void FtpConfigurationMapping_initFields(FtpConfigurationMapping* this) {
    
}


void FtpConfigurationMapping_init(FtpConfigurationMapping* this, FtpConfigurationInterface* ftpConfigurationInterface) {
    FtpConfigurationMapping_initFields(this);
        this->ftpConfigurationInterface = ftpConfigurationInterface;
}

FtpConfigurationMapping* FtpConfigurationMapping_new(FtpConfigurationInterface* ftpConfigurationInterface) {
    FtpConfigurationMapping* this = calloc(1, sizeof(FtpConfigurationMapping));
    FtpConfigurationMapping_init(this, ftpConfigurationInterface);
    return this;
}


HashMap* FtpConfigurationMapping_toHashMap(FtpConfigurationMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, FtpConfigurationData_SERVER, FtpConfigurationInterface_getServer(this->ftpConfigurationInterface));
        HashMap_put(hashMap, FtpConfigurationData_USERNAME, FtpConfigurationInterface_getUserName(this->ftpConfigurationInterface));
        HashMap_put(hashMap, FtpConfigurationData_PASSWORD, FtpConfigurationInterface_getPassword(this->ftpConfigurationInterface));
        HashMap_put(hashMap, FtpConfigurationData_PATH, FtpConfigurationInterface_getPath(this->ftpConfigurationInterface));
        return hashMap;
}


// throws Exception
Any* FtpConfigurationMapping_getKey(FtpConfigurationMapping* this) {
        return FtpConfigurationData_NAME;
}


// throws Exception
BasicArrayList* FtpConfigurationMapping_toVector(FtpConfigurationMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, FtpConfigurationInterface_getServer(this->ftpConfigurationInterface));
        BasicArrayList_add(vector, FtpConfigurationInterface_getUserName(this->ftpConfigurationInterface));
        BasicArrayList_add(vector, FtpConfigurationInterface_getPassword(this->ftpConfigurationInterface));
        BasicArrayList_add(vector, FtpConfigurationInterface_getPath(this->ftpConfigurationInterface));
        return vector;
}

