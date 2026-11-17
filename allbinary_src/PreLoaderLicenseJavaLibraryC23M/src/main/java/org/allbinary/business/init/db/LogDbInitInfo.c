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
#include "org/allbinary/business/init/db/DbInitInfo.h"

typedef struct LogDbInitInfo LogDbInitInfo;
struct LogDbInitInfo {
    DbInitInfo base;
};

static const char* LogDbInitInfo_INITFILE = "logdbinitdata.dat";

LogDbInitInfo* LogDbInitInfo_new(void);

void LogDbInitInfo_init(LogDbInitInfo* this);

LogDbInitInfo* LogDbInitInfo_new1(bool read);
void LogDbInitInfo_init1(LogDbInitInfo* this, bool read);


void LogDbInitInfo_init(LogDbInitInfo* this) {
        DbInitInfo_init(&this->base, LogDbInitInfo_INITFILE, true);
}

LogDbInitInfo* LogDbInitInfo_new(void) {
    LogDbInitInfo* this = calloc(1, sizeof(LogDbInitInfo));
    LogDbInitInfo_init(this);
    return this;
}


void LogDbInitInfo_init1(LogDbInitInfo* this, bool read) {
        DbInitInfo_init(&this->base, LogDbInitInfo_INITFILE, read);
}

LogDbInitInfo* LogDbInitInfo_new1(bool read) {
    LogDbInitInfo* this = calloc(1, sizeof(LogDbInitInfo));
    LogDbInitInfo_init1(this, read);
    return this;
}

