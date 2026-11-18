#ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTINTERFACEBASICARRAYLISTFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTINTERFACEBASICARRAYLISTFACTORYINTERFACE_H
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
typedef struct BasicArrayList BasicArrayList;

typedef struct LayerPlacementInterfaceBasicArrayListFactoryInterface LayerPlacementInterfaceBasicArrayListFactoryInterface;
struct LayerPlacementInterfaceBasicArrayListFactoryInterface {
    BasicArrayList* (*getInstance)(void* this);
    int32_t* (*getOnDemandResources)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerPlacementInterfaceBasicArrayListFactoryInterface_staticInit(void);

static inline BasicArrayList* LayerPlacementInterfaceBasicArrayListFactoryInterface_getInstance(void* this) {
    return ((__typeof__(((LayerPlacementInterfaceBasicArrayListFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this);
}

static inline int32_t* LayerPlacementInterfaceBasicArrayListFactoryInterface_getOnDemandResources(void* this) {
    return ((__typeof__(((LayerPlacementInterfaceBasicArrayListFactoryInterface*) nullptr)->getOnDemandResources)) java_method_of(this, "getOnDemandResources"))(this);
}

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTINTERFACEBASICARRAYLISTFACTORYINTERFACE_H
