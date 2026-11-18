#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
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
typedef struct DestroyedEventHandler DestroyedEventHandler;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct NullGameCanvas NullGameCanvas;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct DestroyedEvent DestroyedEvent;
struct DestroyedEvent {
    AllBinaryEventObject base;
    AllBinaryGameCanvas* allBinaryGameCanvas;
    AllBinaryLayer* allBinaryLayerInterface;
};


DestroyedEvent* DestroyedEvent_new(AllBinaryGameCanvas* combatGameCanvas);

void DestroyedEvent_init(DestroyedEvent* this, AllBinaryGameCanvas* combatGameCanvas);

AllBinaryGameCanvas* DestroyedEvent_getAllBinaryGameCanvas(DestroyedEvent* this);

AllBinaryLayer* DestroyedEvent_getLayerInterface(DestroyedEvent* this);


void DestroyedEvent_setLayerInterfaceForCircularStaticPool(DestroyedEvent* this, AllBinaryLayer* allBinaryLayerInterface);

const char* DestroyedEvent_toString(DestroyedEvent* this);
#define DestroyedEvent_new1 DestroyedEvent_new
#define DestroyedEvent_init1 DestroyedEvent_init
#ifndef DestroyedEvent_getSource
#define DestroyedEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef DestroyedEvent_setSource
#define DestroyedEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyedEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyedEvent_register(void);

#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
