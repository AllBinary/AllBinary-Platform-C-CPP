#ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTINTERFACE_H
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
typedef struct ABHashtable ABHashtable;

typedef struct LayerPlacementInterface LayerPlacementInterface;
struct LayerPlacementInterface {
    int32_t (*getWidth)(void* this);
    int32_t (*getHeight)(void* this);
    LayerPlacementType* (*getLayerType)(void* this);
    ABHashtable* (*getInstance)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerPlacementInterface_staticInit(void);

static inline int32_t LayerPlacementInterface_getWidth(void* this) {
    return ((__typeof__(((LayerPlacementInterface*) nullptr)->getWidth)) java_method_of(this, "getWidth"))(this);
}

static inline int32_t LayerPlacementInterface_getHeight(void* this) {
    return ((__typeof__(((LayerPlacementInterface*) nullptr)->getHeight)) java_method_of(this, "getHeight"))(this);
}

static inline LayerPlacementType* LayerPlacementInterface_getLayerType(void* this) {
    return ((__typeof__(((LayerPlacementInterface*) nullptr)->getLayerType)) java_method_of(this, "getLayerType"))(this);
}

static inline ABHashtable* LayerPlacementInterface_getInstance(void* this) {
    return ((__typeof__(((LayerPlacementInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this);
}

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTINTERFACE_H
