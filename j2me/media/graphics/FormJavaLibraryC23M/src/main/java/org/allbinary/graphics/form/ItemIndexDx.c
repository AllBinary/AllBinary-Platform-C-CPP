/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct ItemIndexDx ItemIndexDx;
struct ItemIndexDx {
    char unused;
};

static ItemIndexDx* ItemIndexDx_instance;

ItemIndexDx* ItemIndexDx_new(void);
ItemIndexDx* ItemIndexDx_getInstance(void);
int32_t ItemIndexDx_getDx(ItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

// Static fields with runtime initializers: call this once at startup
void ItemIndexDx_staticInit(void) {
    ItemIndexDx_instance = ItemIndexDx_new();
}

void ItemIndexDx_init(ItemIndexDx* this) {
}

ItemIndexDx* ItemIndexDx_new(void) {
    ItemIndexDx* this = calloc(1, sizeof(ItemIndexDx));
    ItemIndexDx_init(this);
    return this;
}


ItemIndexDx* ItemIndexDx_getInstance(void) {
        return ItemIndexDx_instance;
}


// throws Exception
int32_t ItemIndexDx_getDx(ItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return 0;
}

