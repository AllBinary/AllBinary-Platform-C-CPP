#ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H
#define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H
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
typedef struct TrackingEventHandler TrackingEventHandler;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct TrackingEvent TrackingEvent;
struct TrackingEvent {
    AllBinaryEventObject base;
    AllBinaryLayer* layerInterface;
};


TrackingEvent* TrackingEvent_new(void* allBinaryLayerInterface);

void TrackingEvent_init(TrackingEvent* this, void* allBinaryLayerInterface);

void TrackingEvent_initMethod(TrackingEvent* this, void* anyType);

AllBinaryLayer* TrackingEvent_getLayerInterface(TrackingEvent* this);


void TrackingEvent_setLayerInterfaceForCircularStaticPool(TrackingEvent* this, AllBinaryLayer* layerInterface);

const char* TrackingEvent_toString(TrackingEvent* this);
#define TrackingEvent_new1 TrackingEvent_new
#define TrackingEvent_init1 TrackingEvent_init
#ifndef TrackingEvent_getSource
#define TrackingEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef TrackingEvent_setSource
#define TrackingEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrackingEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrackingEvent_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H
