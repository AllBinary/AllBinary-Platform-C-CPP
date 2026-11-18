#ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H
#define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H
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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TerrainEvent TerrainEvent;
typedef struct NullUtil NullUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface;
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct TerrainEventFactory TerrainEventFactory;
struct TerrainEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
};


TerrainEventFactory* TerrainEventFactory_new(void);

void TerrainEventFactory_init(TerrainEventFactory* this);

AllBinaryEventObject* TerrainEventFactory_getInstance(TerrainEventFactory* this);
#define TerrainEventFactory_new0 TerrainEventFactory_new
#define TerrainEventFactory_init0 TerrainEventFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TerrainEventFactory_register(void);

#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObject.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#endif

#endif // ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H
