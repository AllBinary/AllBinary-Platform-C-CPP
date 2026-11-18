#ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H
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
typedef struct DestroyEventFactory DestroyEventFactory;
typedef struct DestroyedEvent DestroyedEvent;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryEventCircularPool AllBinaryEventCircularPool;
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventCircularPool.h")
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#endif

typedef struct DestroyEventCircularStaticPool DestroyEventCircularStaticPool;
struct DestroyEventCircularStaticPool {
    AllBinaryEventCircularPool* EVENT_POOL;
};


DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_new(void);

DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_getInstance(void);

void DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool* this);

void DestroyEventCircularStaticPool_initMethod(DestroyEventCircularStaticPool* this, AllBinaryGameCanvas* combatGameCanvas);

DestroyedEvent* DestroyEventCircularStaticPool_getInstanceForLayer(DestroyEventCircularStaticPool* this, AllBinaryLayer* layerInterface);
#define DestroyEventCircularStaticPool_new0 DestroyEventCircularStaticPool_new
#define DestroyEventCircularStaticPool_init0 DestroyEventCircularStaticPool_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DestroyEventCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DestroyEventCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_H
