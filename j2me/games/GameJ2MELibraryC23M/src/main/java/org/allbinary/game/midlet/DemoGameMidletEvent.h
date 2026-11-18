#ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H
#define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DemoGameMidletState DemoGameMidletState;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#if __has_include("org/allbinary/game/midlet/DemoGameMidletState.h")
#include "org/allbinary/game/midlet/DemoGameMidletState.h"
#endif

typedef struct DemoGameMidletEvent DemoGameMidletEvent;
struct DemoGameMidletEvent {
    AllBinaryEventObject base;
    DemoGameMidletState* demoGameMidletState;
};


DemoGameMidletEvent* DemoGameMidletEvent_new(void* anyType, DemoGameMidletState* demoGameMidletState);

void DemoGameMidletEvent_init(DemoGameMidletEvent* this, void* anyType, DemoGameMidletState* demoGameMidletState);

void DemoGameMidletEvent_initMethod(DemoGameMidletEvent* this, void* anyType);

void DemoGameMidletEvent_setDemoGameMidletState(DemoGameMidletEvent* this, DemoGameMidletState* demoGameMidletState);

DemoGameMidletState* DemoGameMidletEvent_getDemoGameMidletState(DemoGameMidletEvent* this);
#define DemoGameMidletEvent_new2 DemoGameMidletEvent_new
#define DemoGameMidletEvent_init2 DemoGameMidletEvent_init
#ifndef DemoGameMidletEvent_getSource
#define DemoGameMidletEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef DemoGameMidletEvent_setSource
#define DemoGameMidletEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameMidletEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameMidletEvent_register(void);


#endif // ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H
