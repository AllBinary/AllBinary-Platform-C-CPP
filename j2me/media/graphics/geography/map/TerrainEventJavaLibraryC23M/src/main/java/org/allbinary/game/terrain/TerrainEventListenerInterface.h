#ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENERINTERFACE_H
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
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct TerrainEventListenerInterface TerrainEventListenerInterface;
struct TerrainEventListenerInterface {
    void (*onTerrainEvent)(void* this, TerrainEvent* trackingEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainEventListenerInterface_staticInit(void);

static inline void TerrainEventListenerInterface_onTerrainEvent(void* this, TerrainEvent* trackingEvent) {
    ((__typeof__(((TerrainEventListenerInterface*) nullptr)->onTerrainEvent)) java_method_of(this, "onTerrainEvent"))(this, trackingEvent);
}
#define TerrainEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTLISTENERINTERFACE_H
