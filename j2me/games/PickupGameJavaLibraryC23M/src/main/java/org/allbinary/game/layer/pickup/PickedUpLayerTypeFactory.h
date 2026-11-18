#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H
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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PickedUpLayerType PickedUpLayerType;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerType.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#endif

typedef struct PickedUpLayerTypeFactory PickedUpLayerTypeFactory;
struct PickedUpLayerTypeFactory {
    PickedUpLayerType* NONE;
    PickedUpLayerType* BEAM;
    PickedUpLayerType* MINE;
    PickedUpLayerType* PROJECTILE;
    PickedUpLayerType* ENHANCEMENT;
    PickedUpLayerType* MORPH;
    PickedUpLayerType* PART;
    PickedUpLayerType* HEAL;
    PickedUpLayerType* LIFE;
    PickedUpLayerType* POINTS;
};


PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_new(void);
void PickedUpLayerTypeFactory_init(PickedUpLayerTypeFactory* this);

PickedUpLayerTypeFactory* PickedUpLayerTypeFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickedUpLayerTypeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PickedUpLayerTypeFactory_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H
