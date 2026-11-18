#ifndef ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H
#define ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H
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
typedef struct LayerPlacementType LayerPlacementType;
#if __has_include("org/allbinary/game/layer/LayerPlacementType.h")
#include "org/allbinary/game/layer/LayerPlacementType.h"
#endif

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
#define BasicLayerPlacement_new3 BasicLayerPlacement_new
#define BasicLayerPlacement_init3 BasicLayerPlacement_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicLayerPlacement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicLayerPlacement_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_H
