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
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"

typedef struct ViewPositionBase ViewPositionBase;
struct ViewPositionBase {
    GPoint base;
};

ViewPositionBase* ViewPositionBase_NULL_VIEW_POSITION;

ViewPositionBase* ViewPositionBase_new(int32_t x, int32_t y, int32_t z);

void ViewPositionBase_init(ViewPositionBase* this, int32_t x, int32_t y, int32_t z);
int32_t ViewPositionBase_getX2(ViewPositionBase* this);
int32_t ViewPositionBase_getY2(ViewPositionBase* this);
int32_t ViewPositionBase_getZ2(ViewPositionBase* this);
void ViewPositionBase_setAllbinaryLayer(ViewPositionBase* this, Any* allbinaryLayer);

// Static fields with runtime initializers: call this once at startup
void ViewPositionBase_staticInit(void) {
    ViewPositionBase_NULL_VIEW_POSITION = ViewPositionBase_new(0, 0, 0);
}


void ViewPositionBase_init(ViewPositionBase* this, int32_t x, int32_t y, int32_t z) {
        GPoint_init(&this->base, x, y, z);
}

ViewPositionBase* ViewPositionBase_new(int32_t x, int32_t y, int32_t z) {
    ViewPositionBase* this = calloc(1, sizeof(ViewPositionBase));
    ViewPositionBase_init(this, x, y, z);
    return this;
}


int32_t ViewPositionBase_getX2(ViewPositionBase* this) {
        return ViewPositionBase_getX(this);
}


int32_t ViewPositionBase_getY2(ViewPositionBase* this) {
        return ViewPositionBase_getY(this);
}


int32_t ViewPositionBase_getZ2(ViewPositionBase* this) {
        return ViewPositionBase_getZ(this);
}


void ViewPositionBase_setAllbinaryLayer(ViewPositionBase* this, Any* allbinaryLayer) {
}

