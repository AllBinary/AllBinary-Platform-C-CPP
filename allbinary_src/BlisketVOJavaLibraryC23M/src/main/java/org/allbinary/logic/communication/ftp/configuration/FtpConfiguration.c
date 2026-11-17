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
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h"

typedef struct FtpConfiguration FtpConfiguration;
struct FtpConfiguration {
    FtpConfigurationInterface FtpConfigurationInterface_interface;
    const char* ftpServer;
    const char* ftpPath;
    const char* ftpUserName;
    const char* ftpPassword;
};


FtpConfiguration* FtpConfiguration_new(void);

void FtpConfiguration_init(FtpConfiguration* this);

FtpConfiguration* FtpConfiguration_new1(HashMap* hashMap);
void FtpConfiguration_init1(FtpConfiguration* this, HashMap* hashMap);
const char* FtpConfiguration_getServer(FtpConfiguration* this);
const char* FtpConfiguration_getPath(FtpConfiguration* this);
const char* FtpConfiguration_getUserName(FtpConfiguration* this);
const char* FtpConfiguration_getPassword(FtpConfiguration* this);
void FtpConfiguration_setServer(FtpConfiguration* this, const char* value);
void FtpConfiguration_setPath(FtpConfiguration* this, const char* value);
void FtpConfiguration_setUserName(FtpConfiguration* this, const char* value);
void FtpConfiguration_setPassword(FtpConfiguration* this, const char* value);

static void FtpConfiguration_initFields(FtpConfiguration* this) {
    
    
    
    
}


void FtpConfiguration_init(FtpConfiguration* this) {
    FtpConfiguration_initFields(this);
}

FtpConfiguration* FtpConfiguration_new(void) {
    FtpConfiguration* this = calloc(1, sizeof(FtpConfiguration));
    FtpConfiguration_init(this);
    return this;
}


void FtpConfiguration_init1(FtpConfiguration* this, HashMap* hashMap) {
    FtpConfiguration_initFields(this);
        this->ftpServer = ((const char*) HashMap_get(hashMap, FtpConfigurationData_SERVER));
        this->ftpPath = ((const char*) HashMap_get(hashMap, FtpConfigurationData_PATH));
        this->ftpUserName = ((const char*) HashMap_get(hashMap, FtpConfigurationData_USERNAME));
        this->ftpPassword = ((const char*) HashMap_get(hashMap, FtpConfigurationData_PASSWORD));
}

FtpConfiguration* FtpConfiguration_new1(HashMap* hashMap) {
    FtpConfiguration* this = calloc(1, sizeof(FtpConfiguration));
    FtpConfiguration_init1(this, hashMap);
    return this;
}


const char* FtpConfiguration_getServer(FtpConfiguration* this) {
        return this->ftpServer;
}


const char* FtpConfiguration_getPath(FtpConfiguration* this) {
        return this->ftpPath;
}


const char* FtpConfiguration_getUserName(FtpConfiguration* this) {
        return this->ftpUserName;
}


const char* FtpConfiguration_getPassword(FtpConfiguration* this) {
        return this->ftpPassword;
}


void FtpConfiguration_setServer(FtpConfiguration* this, const char* value) {
        this->ftpServer = value;
}


void FtpConfiguration_setPath(FtpConfiguration* this, const char* value) {
        this->ftpPath = value;
}


void FtpConfiguration_setUserName(FtpConfiguration* this, const char* value) {
        this->ftpUserName = value;
}


void FtpConfiguration_setPassword(FtpConfiguration* this, const char* value) {
        this->ftpPassword = value;
}

