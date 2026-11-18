#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENTHANDLER_H
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
// package org.allbinary.game.combat.destroy.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DestroyedEvent DestroyedEvent;
typedef struct DestroyedEventListenerInterface DestroyedEventListenerInterface;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct DestroyedEventHandler DestroyedEventHandler;
struct DestroyedEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};


DestroyedEventHandler* DestroyedEventHandler_new(void);

DestroyedEventHandler* DestroyedEventHandler_getInstance(void);

void DestroyedEventHandler_init(DestroyedEventHandler* this);

void DestroyedEventHandler_addListener(DestroyedEventHandler* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void DestroyedEventHandler_removeAllListeners(DestroyedEventHandler* this);

void DestroyedEventHandler_removeListener(DestroyedEventHandler* this, EventListenerInterface* eventListenerInterface);

void DestroyedEventHandler_fireEvent(DestroyedEventHandler* this, AllBinaryEventObject* eventObject);

void DestroyedEventHandler_process(DestroyedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define DestroyedEventHandler_new0 DestroyedEventHandler_new
#define DestroyedEventHandler_init0 DestroyedEventHandler_init
#ifndef DestroyedEventHandler_toString
#define DestroyedEventHandler_toString BasicEventHandler_toString
#endif
#ifndef DestroyedEventHandler_addListenerSingleThreaded
#define DestroyedEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef DestroyedEventHandler_addListenerInterface
#define DestroyedEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef DestroyedEventHandler_removeListenerSingleThreaded
#define DestroyedEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef DestroyedEventHandler_getEventListenerInterfaceListP
#define DestroyedEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef DestroyedEventHandler_addListeners
#define DestroyedEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef DestroyedEventHandler_removeListeners
#define DestroyedEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyedEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyedEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENTHANDLER_H
