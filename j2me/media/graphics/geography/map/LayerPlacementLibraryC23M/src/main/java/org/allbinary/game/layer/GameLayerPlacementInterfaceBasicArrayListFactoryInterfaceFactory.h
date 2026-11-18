#ifndef ORG_ALLBINARY_GAME_LAYER_GAMELAYERPLACEMENTINTERFACEBASICARRAYLISTFACTORYINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_GAMELAYERPLACEMENTINTERFACEBASICARRAYLISTFACTORYINTERFACEFACTORY_H
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
typedef struct LayerPlacementInterfaceBasicArrayListFactoryInterface LayerPlacementInterfaceBasicArrayListFactoryInterface;

typedef struct GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
struct GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory {
    LayerPlacementInterfaceBasicArrayListFactoryInterface* (*getInstance)(void* this, int32_t level);
    int32_t (*size)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory_staticInit(void);

static inline LayerPlacementInterfaceBasicArrayListFactoryInterface* GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory_getInstance(void* this, int32_t level) {
    return ((__typeof__(((GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this, level);
}

static inline int32_t GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory_size(void* this) {
    return ((__typeof__(((GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory*) nullptr)->size)) java_method_of(this, "size"))(this);
}


#endif // ORG_ALLBINARY_GAME_LAYER_GAMELAYERPLACEMENTINTERFACEBASICARRAYLISTFACTORYINTERFACEFACTORY_H
