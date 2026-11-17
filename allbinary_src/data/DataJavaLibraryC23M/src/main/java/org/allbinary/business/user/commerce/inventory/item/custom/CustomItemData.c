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
// package org.allbinary.business.user.commerce.inventory.item.custom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CustomItemData CustomItemData;
struct CustomItemData {
    char unused;
};

const char* CustomItemData_PACKAGE = "CUSTOMITEM_PACKAGE";

CustomItemData* CustomItemData_new(void);

void CustomItemData_init(CustomItemData* this) {
}

CustomItemData* CustomItemData_new(void) {
    CustomItemData* this = calloc(1, sizeof(CustomItemData));
    CustomItemData_init(this);
    return this;
}

