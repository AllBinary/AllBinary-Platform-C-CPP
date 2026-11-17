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
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPositionBase.h"

typedef struct ViewPosition ViewPosition;
struct ViewPosition {
    ViewPositionBase base;
    AllBinaryLayer* allbinaryLayer;
};


ViewPosition* ViewPosition_new(int32_t x, int32_t y, int32_t z);
ViewPosition* ViewPosition_getInstanceD(void);

void ViewPosition_init(ViewPosition* this, int32_t x, int32_t y, int32_t z);
int32_t ViewPosition_getX(ViewPosition* this);
int32_t ViewPosition_getY(ViewPosition* this);
int32_t ViewPosition_getZ(ViewPosition* this);
int32_t ViewPosition_getX2(ViewPosition* this);
int32_t ViewPosition_getY2(ViewPosition* this);
int32_t ViewPosition_getZ2(ViewPosition* this);
void ViewPosition_setAllbinaryLayer(ViewPosition* this, Any* allbinaryLayer);

static void ViewPosition_initFields(ViewPosition* this) {
    this->allbinaryLayer = AllBinaryLayer_NULL_ALLBINARY_LAYER;
}


ViewPosition* ViewPosition_getInstanceD(void) {
        return ViewPosition_new(0, 0, 0);
}


void ViewPosition_init(ViewPosition* this, int32_t x, int32_t y, int32_t z) {
        ViewPositionBase_init(&this->base, x, y, z);
        ViewPosition_initFields(this);
}

ViewPosition* ViewPosition_new(int32_t x, int32_t y, int32_t z) {
    ViewPosition* this = calloc(1, sizeof(ViewPosition));
    ViewPosition_init(this, x, y, z);
    return this;
}


int32_t ViewPosition_getX(ViewPosition* this) {
        return AllBinaryLayer_getXP(this->allbinaryLayer);
}


int32_t ViewPosition_getY(ViewPosition* this) {
        return AllBinaryLayer_getYP(this->allbinaryLayer);
}


int32_t ViewPosition_getZ(ViewPosition* this) {
        return AllBinaryLayer_getZP(this->allbinaryLayer);
}


int32_t ViewPosition_getX2(ViewPosition* this) {
        return ViewPosition_getX(this) + AllBinaryLayer_getWidth(this->allbinaryLayer);
}


int32_t ViewPosition_getY2(ViewPosition* this) {
        return ViewPosition_getY(this) + AllBinaryLayer_getHeight(this->allbinaryLayer);
}


int32_t ViewPosition_getZ2(ViewPosition* this) {
        return ((int32_t) (ViewPosition_getZ(this) + AllBinaryLayer_getDepth(this->allbinaryLayer)));
}


void ViewPosition_setAllbinaryLayer(ViewPosition* this, Any* allbinaryLayer) {
        this->allbinaryLayer = ((AllBinaryLayer*) allbinaryLayer);
}

