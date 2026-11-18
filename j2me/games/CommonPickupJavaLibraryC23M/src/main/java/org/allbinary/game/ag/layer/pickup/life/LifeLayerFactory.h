#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYERFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYERFACTORY_H
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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LifeLayer LifeLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct LifeLayerFactory LifeLayerFactory;
struct LifeLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
};


LifeLayerFactory* LifeLayerFactory_new(void);
void LifeLayerFactory_init(LifeLayerFactory* this);

AllBinaryLayer* LifeLayerFactory_getInstance(LifeLayerFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LifeLayerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LifeLayerFactory_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYERFACTORY_H
