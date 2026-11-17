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

typedef struct HistoryDbInitInfo HistoryDbInitInfo;
struct HistoryDbInitInfo {
    DbInitInfo base;
};

static const char* HistoryDbInitInfo_INITFILE = "historydbinitdata.dat";

HistoryDbInitInfo* HistoryDbInitInfo_new(void);

void HistoryDbInitInfo_init(HistoryDbInitInfo* this);

HistoryDbInitInfo* HistoryDbInitInfo_new1(bool read);
void HistoryDbInitInfo_init1(HistoryDbInitInfo* this, bool read);


void HistoryDbInitInfo_init(HistoryDbInitInfo* this) {
        DbInitInfo_init(&this->base, HistoryDbInitInfo_INITFILE, true);
}

HistoryDbInitInfo* HistoryDbInitInfo_new(void) {
    HistoryDbInitInfo* this = calloc(1, sizeof(HistoryDbInitInfo));
    HistoryDbInitInfo_init(this);
    return this;
}


void HistoryDbInitInfo_init1(HistoryDbInitInfo* this, bool read) {
        DbInitInfo_init(&this->base, HistoryDbInitInfo_INITFILE, read);
}

HistoryDbInitInfo* HistoryDbInitInfo_new1(bool read) {
    HistoryDbInitInfo* this = calloc(1, sizeof(HistoryDbInitInfo));
    HistoryDbInitInfo_init1(this, read);
    return this;
}

