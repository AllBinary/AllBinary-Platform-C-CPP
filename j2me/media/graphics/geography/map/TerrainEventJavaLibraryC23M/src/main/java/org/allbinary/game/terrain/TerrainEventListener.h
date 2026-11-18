#ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H
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
typedef struct TerrainEventListenerInterface TerrainEventListenerInterface;
typedef struct TerrainEvent TerrainEvent;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"

typedef struct TerrainEventListener TerrainEventListener;
struct TerrainEventListener {
    TerrainEventListenerInterface TerrainEventListenerInterface_interface;
    BasicArrayList* list;
};


TerrainEventListener* TerrainEventListener_new(void);
void TerrainEventListener_init(TerrainEventListener* this);

void TerrainEventListener_onEvent(TerrainEventListener* this, AllBinaryEventObject* eventObject);

void TerrainEventListener_onTerrainEvent(TerrainEventListener* this, TerrainEvent* terrainEvent);

BasicArrayList* TerrainEventListener_getList(TerrainEventListener* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TerrainEventListener_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENER_H
