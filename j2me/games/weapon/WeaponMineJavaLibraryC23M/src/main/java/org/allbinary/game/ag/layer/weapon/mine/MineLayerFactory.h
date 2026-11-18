#ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H
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
// package org.allbinary.game.ag.layer.weapon.mine

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct MineLayer MineLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
typedef struct ViewPositionFactoryInterface ViewPositionFactoryInterface;
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#if __has_include("org/allbinary/view/ViewPositionFactoryInterface.h")
#include "org/allbinary/view/ViewPositionFactoryInterface.h"
#endif

typedef struct MineLayerFactory MineLayerFactory;
struct MineLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
    ViewPositionFactoryInterface* viewPositionFactoryInterface;
};


MineLayerFactory* MineLayerFactory_new(ViewPositionFactoryInterface* viewPositionFactoryInterface);

void MineLayerFactory_init(MineLayerFactory* this, ViewPositionFactoryInterface* viewPositionFactoryInterface);

AllBinaryLayer* MineLayerFactory_getInstance(MineLayerFactory* this);
#define MineLayerFactory_new1 MineLayerFactory_new
#define MineLayerFactory_init1 MineLayerFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MineLayerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MineLayerFactory_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H
