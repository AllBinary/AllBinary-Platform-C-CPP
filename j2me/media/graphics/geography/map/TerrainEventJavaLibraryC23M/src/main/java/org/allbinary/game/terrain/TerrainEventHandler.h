#ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTHANDLER_H
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
typedef struct TerrainEventListener TerrainEventListener;
typedef struct TerrainEvent TerrainEvent;
typedef struct TerrainEventListenerInterface TerrainEventListenerInterface;
typedef struct StdUtil StdUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct TerrainEventHandler TerrainEventHandler;
struct TerrainEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};


TerrainEventHandler* TerrainEventHandler_new(void);

void TerrainEventHandler_initMethod(void);

TerrainEventHandler* TerrainEventHandler_getInstance(void* anyType);

void TerrainEventHandler_init(TerrainEventHandler* this);

void TerrainEventHandler_addListener(TerrainEventHandler* this, TerrainEventListener* terrainEventListener);

void TerrainEventHandler_removeAllListeners(TerrainEventHandler* this);

void TerrainEventHandler_removeListener(TerrainEventHandler* this, EventListenerInterface* eventListenerInterface);

void TerrainEventHandler_fireEvent(TerrainEventHandler* this, AllBinaryEventObject* eventObject);

void TerrainEventHandler_process(TerrainEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define TerrainEventHandler_new0 TerrainEventHandler_new
#define TerrainEventHandler_init0 TerrainEventHandler_init
#ifndef TerrainEventHandler_toString
#define TerrainEventHandler_toString BasicEventHandler_toString
#endif
#ifndef TerrainEventHandler_addListenerSingleThreaded
#define TerrainEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef TerrainEventHandler_addListenerInterface
#define TerrainEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef TerrainEventHandler_removeListenerSingleThreaded
#define TerrainEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef TerrainEventHandler_getEventListenerInterfaceListP
#define TerrainEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef TerrainEventHandler_addListeners
#define TerrainEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef TerrainEventHandler_removeListeners
#define TerrainEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TerrainEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTHANDLER_H
