#ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTFACTORY_H
#define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTFACTORY_H
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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TrackingEvent TrackingEvent;
typedef struct TrackingEventHandler TrackingEventHandler;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface;
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct TrackingEventFactory TrackingEventFactory;
struct TrackingEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
};


TrackingEventFactory* TrackingEventFactory_new(void);

void TrackingEventFactory_init(TrackingEventFactory* this);

AllBinaryEventObject* TrackingEventFactory_getInstance(TrackingEventFactory* this);
#define TrackingEventFactory_new0 TrackingEventFactory_new
#define TrackingEventFactory_init0 TrackingEventFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrackingEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrackingEventFactory_register(void);

#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObject.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#endif

#endif // ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTFACTORY_H
