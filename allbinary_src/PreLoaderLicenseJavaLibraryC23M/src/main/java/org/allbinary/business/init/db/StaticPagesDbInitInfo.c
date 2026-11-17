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

typedef struct StaticPagesDbInitInfo StaticPagesDbInitInfo;
struct StaticPagesDbInitInfo {
    DbInitInfo base;
};

static const char* StaticPagesDbInitInfo_INITFILE = "staticpagesbinitdata.dat";

StaticPagesDbInitInfo* StaticPagesDbInitInfo_new(void);

void StaticPagesDbInitInfo_init(StaticPagesDbInitInfo* this);

StaticPagesDbInitInfo* StaticPagesDbInitInfo_new1(bool read);
void StaticPagesDbInitInfo_init1(StaticPagesDbInitInfo* this, bool read);


void StaticPagesDbInitInfo_init(StaticPagesDbInitInfo* this) {
        DbInitInfo_init(&this->base, StaticPagesDbInitInfo_INITFILE, true);
}

StaticPagesDbInitInfo* StaticPagesDbInitInfo_new(void) {
    StaticPagesDbInitInfo* this = calloc(1, sizeof(StaticPagesDbInitInfo));
    StaticPagesDbInitInfo_init(this);
    return this;
}


void StaticPagesDbInitInfo_init1(StaticPagesDbInitInfo* this, bool read) {
        DbInitInfo_init(&this->base, StaticPagesDbInitInfo_INITFILE, read);
}

StaticPagesDbInitInfo* StaticPagesDbInitInfo_new1(bool read) {
    StaticPagesDbInitInfo* this = calloc(1, sizeof(StaticPagesDbInitInfo));
    StaticPagesDbInitInfo_init1(this, read);
    return this;
}

