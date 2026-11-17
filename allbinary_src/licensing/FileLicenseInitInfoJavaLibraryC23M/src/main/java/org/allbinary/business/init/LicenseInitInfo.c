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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct LicenseInitInfo LicenseInitInfo;
struct LicenseInitInfo {
    const char* id;
    BasicArrayList* serverVector;
};


LicenseInitInfo* LicenseInitInfo_new(void);

void LicenseInitInfo_init(LicenseInitInfo* this);
const char* LicenseInitInfo_getLicenseId(LicenseInitInfo* this);
const char* LicenseInitInfo_getServer(LicenseInitInfo* this, int32_t index);
int32_t LicenseInitInfo_getNumberOfServers(LicenseInitInfo* this);
void LicenseInitInfo_setLicenseId(LicenseInitInfo* this, const char* value);
void LicenseInitInfo_clearServers(LicenseInitInfo* this);
void LicenseInitInfo_setServer(LicenseInitInfo* this, const char* value, int32_t index);
void LicenseInitInfo_addServer(LicenseInitInfo* this, const char* value);
BasicArrayList* LicenseInitInfo_getServerList(LicenseInitInfo* this);
void LicenseInitInfo_setServerList(LicenseInitInfo* this, BasicArrayList* servers);

static void LicenseInitInfo_initFields(LicenseInitInfo* this) {
    this->id = StringUtil_getInstance()->EMPTY_STRING;
    this->serverVector = BasicArrayListD_new();
}


void LicenseInitInfo_init(LicenseInitInfo* this) {
    LicenseInitInfo_initFields(this);
}

LicenseInitInfo* LicenseInitInfo_new(void) {
    LicenseInitInfo* this = calloc(1, sizeof(LicenseInitInfo));
    LicenseInitInfo_init(this);
    return this;
}


const char* LicenseInitInfo_getLicenseId(LicenseInitInfo* this) {
        return this->id;
}


const char* LicenseInitInfo_getServer(LicenseInitInfo* this, int32_t index) {
        return ((const char*) this->serverVector->objectArray[index]);
}


int32_t LicenseInitInfo_getNumberOfServers(LicenseInitInfo* this) {
        return BasicArrayList_size(this->serverVector);
}


void LicenseInitInfo_setLicenseId(LicenseInitInfo* this, const char* value) {
        this->id = value;
}


void LicenseInitInfo_clearServers(LicenseInitInfo* this) {
        this->serverVector = BasicArrayListD_new();
}


void LicenseInitInfo_setServer(LicenseInitInfo* this, const char* value, int32_t index) {
        BasicArrayList_addAt(this->serverVector, index, value);
}


void LicenseInitInfo_addServer(LicenseInitInfo* this, const char* value) {
        BasicArrayList_add(this->serverVector, value);
}


BasicArrayList* LicenseInitInfo_getServerList(LicenseInitInfo* this) {
        return this->serverVector;
}


void LicenseInitInfo_setServerList(LicenseInitInfo* this, BasicArrayList* servers) {
        if (DebugFactory_getInstance() == NoDebug_getInstance()) {
            this->serverVector = servers;
        }
}

