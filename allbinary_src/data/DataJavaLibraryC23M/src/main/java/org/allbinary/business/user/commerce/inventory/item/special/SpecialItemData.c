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
// package org.allbinary.business.user.commerce.inventory.item.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SpecialItemData SpecialItemData;
struct SpecialItemData {
    char unused;
};

const char* SpecialItemData_START_TIME = "SPECIALITEM_START_TIME";
const char* SpecialItemData_END_TIME = "SPECIALITEM_END_TIME";

SpecialItemData* SpecialItemData_new(void);

void SpecialItemData_init(SpecialItemData* this) {
}

SpecialItemData* SpecialItemData_new(void) {
    SpecialItemData* this = calloc(1, sizeof(SpecialItemData));
    SpecialItemData_init(this);
    return this;
}

