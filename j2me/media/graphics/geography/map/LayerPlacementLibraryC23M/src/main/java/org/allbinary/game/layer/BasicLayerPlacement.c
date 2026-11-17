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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicLayerPlacement BasicLayerPlacement;
struct BasicLayerPlacement {
    LayerPlacementType* layerType;
    int32_t width;
    int32_t height;
};


BasicLayerPlacement* BasicLayerPlacement_new(LayerPlacementType* layerType, int32_t width, int32_t height);

void BasicLayerPlacement_init(BasicLayerPlacement* this, LayerPlacementType* layerType, int32_t width, int32_t height);
int32_t BasicLayerPlacement_getWidth(BasicLayerPlacement* this);
int32_t BasicLayerPlacement_getHeight(BasicLayerPlacement* this);
LayerPlacementType* BasicLayerPlacement_getLayerType(BasicLayerPlacement* this);
void BasicLayerPlacement_setLayerType(BasicLayerPlacement* this, LayerPlacementType* layerType);

static void BasicLayerPlacement_initFields(BasicLayerPlacement* this) {
    
    
    
}


void BasicLayerPlacement_init(BasicLayerPlacement* this, LayerPlacementType* layerType, int32_t width, int32_t height) {
    BasicLayerPlacement_initFields(this);
        this->layerType = layerType;
        this->width = width;
        this->height = height;
}

BasicLayerPlacement* BasicLayerPlacement_new(LayerPlacementType* layerType, int32_t width, int32_t height) {
    BasicLayerPlacement* this = calloc(1, sizeof(BasicLayerPlacement));
    BasicLayerPlacement_init(this, layerType, width, height);
    return this;
}


int32_t BasicLayerPlacement_getWidth(BasicLayerPlacement* this) {
        return this->width;
}


int32_t BasicLayerPlacement_getHeight(BasicLayerPlacement* this) {
        return this->height;
}


LayerPlacementType* BasicLayerPlacement_getLayerType(BasicLayerPlacement* this) {
        return this->layerType;
}


void BasicLayerPlacement_setLayerType(BasicLayerPlacement* this, LayerPlacementType* layerType) {
        this->layerType = layerType;
}

