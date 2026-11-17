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
// package org.allbinary.business.init.db

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"

//import org.allbinary.logic.communication.log.config.type.LogConfigTypes;
typedef struct DbInitInfo DbInitInfo;
struct DbInitInfo {
    DbConnectionInfo base;
};


DbInitInfo* DbInitInfo_new(const char* initFileName, bool read);

void DbInitInfo_init(DbInitInfo* this, const char* initFileName, bool read);
const char* DbInitInfo_getUrl(DbInitInfo* this);
void DbInitInfo_write(DbInitInfo* this);
static void DbInitInfo_load(DbInitInfo* this);
void DbInitInfo_setHasRead(DbInitInfo* this, bool value);


void DbInitInfo_init(DbInitInfo* this, const char* initFileName, bool read) {
        DbConnectionInfo_init(&this->base);
}

DbInitInfo* DbInitInfo_new(const char* initFileName, bool read) {
    DbInitInfo* this = calloc(1, sizeof(DbInitInfo));
    DbInitInfo_init(this, initFileName, read);
    return this;
}


const char* DbInitInfo_getUrl(DbInitInfo* this) {
        const char* url = DbConnectionInfo_getUrl((&this->base));
        PreLogUtil_put(java_concat("Url: ", url), this, "getUrl");
        return url;
}


// throws Exception
// synchronized
void DbInitInfo_write(DbInitInfo* this) {
}


// throws Exception
// synchronized
static void DbInitInfo_load(DbInitInfo* this) {
}


// synchronized
void DbInitInfo_setHasRead(DbInitInfo* this, bool value) {
}

