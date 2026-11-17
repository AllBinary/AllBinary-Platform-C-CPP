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
// package org.allbinary.business.user.commerce.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InventoryData InventoryData;
struct InventoryData {
    char unused;
};

const char* InventoryData_INVENTORY = "INVENTORY";

InventoryData* InventoryData_new(void);

void InventoryData_init(InventoryData* this) {
}

InventoryData* InventoryData_new(void) {
    InventoryData* this = calloc(1, sizeof(InventoryData));
    InventoryData_init(this);
    return this;
}

