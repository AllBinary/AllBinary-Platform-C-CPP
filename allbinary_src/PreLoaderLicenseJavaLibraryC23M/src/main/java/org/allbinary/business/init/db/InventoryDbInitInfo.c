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

typedef struct InventoryDbInitInfo InventoryDbInitInfo;
struct InventoryDbInitInfo {
    DbInitInfo base;
};

static const char* InventoryDbInitInfo_INITFILE = "inventorydbinitdata.dat";

InventoryDbInitInfo* InventoryDbInitInfo_new(void);

void InventoryDbInitInfo_init(InventoryDbInitInfo* this);

InventoryDbInitInfo* InventoryDbInitInfo_new1(bool read);
void InventoryDbInitInfo_init1(InventoryDbInitInfo* this, bool read);


void InventoryDbInitInfo_init(InventoryDbInitInfo* this) {
        DbInitInfo_init(&this->base, InventoryDbInitInfo_INITFILE, true);
}

InventoryDbInitInfo* InventoryDbInitInfo_new(void) {
    InventoryDbInitInfo* this = calloc(1, sizeof(InventoryDbInitInfo));
    InventoryDbInitInfo_init(this);
    return this;
}


void InventoryDbInitInfo_init1(InventoryDbInitInfo* this, bool read) {
        DbInitInfo_init(&this->base, InventoryDbInitInfo_INITFILE, read);
}

InventoryDbInitInfo* InventoryDbInitInfo_new1(bool read) {
    InventoryDbInitInfo* this = calloc(1, sizeof(InventoryDbInitInfo));
    InventoryDbInitInfo_init1(this, read);
    return this;
}

