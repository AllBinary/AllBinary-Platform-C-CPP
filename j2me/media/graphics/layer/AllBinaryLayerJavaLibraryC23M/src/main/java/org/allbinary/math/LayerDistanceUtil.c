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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/MathUtil.h"

typedef struct LayerDistanceUtil LayerDistanceUtil;
struct LayerDistanceUtil {
    MathUtil* mathUtil;
};

static LayerDistanceUtil* LayerDistanceUtil_instance;

LayerDistanceUtil* LayerDistanceUtil_new(void);
LayerDistanceUtil* LayerDistanceUtil_getInstance(void);
int32_t LayerDistanceUtil_getDistance(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2);
int32_t LayerDistanceUtil_getDistance3D(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2);
int32_t LayerDistanceUtil_getDistanceAt(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, GPoint* point);

// Static fields with runtime initializers: call this once at startup
void LayerDistanceUtil_staticInit(void) {
    LayerDistanceUtil_instance = LayerDistanceUtil_new();
}

static void LayerDistanceUtil_initFields(LayerDistanceUtil* this) {
    this->mathUtil = MathUtil_getInstance();
}

void LayerDistanceUtil_init(LayerDistanceUtil* this) {
    LayerDistanceUtil_initFields(this);
}

LayerDistanceUtil* LayerDistanceUtil_new(void) {
    LayerDistanceUtil* this = calloc(1, sizeof(LayerDistanceUtil));
    LayerDistanceUtil_init(this);
    return this;
}


LayerDistanceUtil* LayerDistanceUtil_getInstance(void) {
        return LayerDistanceUtil_instance;
}


int32_t LayerDistanceUtil_getDistance(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2) {
        int32_t dx = (AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getHalfWidth(layerInterface)) - (AllBinaryLayer_getXP(layerInterface2) + AllBinaryLayer_getHalfWidth(layerInterface2));
        int32_t dy = (AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHalfHeight(layerInterface)) - (AllBinaryLayer_getYP(layerInterface2) + AllBinaryLayer_getHalfHeight(layerInterface2));
        return ((int32_t) MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy)));
}


int32_t LayerDistanceUtil_getDistance3D(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2) {
        int32_t dx = (AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getHalfWidth(layerInterface)) - (AllBinaryLayer_getXP(layerInterface2) + AllBinaryLayer_getHalfWidth(layerInterface2));
        int32_t dy = (AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHalfHeight(layerInterface)) - (AllBinaryLayer_getYP(layerInterface2) + AllBinaryLayer_getHalfHeight(layerInterface2));
        int32_t dz = (AllBinaryLayer_getZP(layerInterface) + AllBinaryLayer_getHalfDepth(layerInterface)) - (AllBinaryLayer_getZP(layerInterface2) + AllBinaryLayer_getHalfDepth(layerInterface2));
        return ((int32_t) MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy) + (dz * dz)));
}


int32_t LayerDistanceUtil_getDistanceAt(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, GPoint* point) {
        int32_t dx = AllBinaryLayer_getXP(layerInterface) - GPoint_getX(point);
        int32_t dy = AllBinaryLayer_getYP(layerInterface) - GPoint_getY(point);
        return ((int32_t) MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy)));
}

