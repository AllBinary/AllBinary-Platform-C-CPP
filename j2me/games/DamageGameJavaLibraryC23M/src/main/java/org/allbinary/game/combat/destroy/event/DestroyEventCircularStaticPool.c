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
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"

typedef struct DestroyEventCircularStaticPool DestroyEventCircularStaticPool;
struct DestroyEventCircularStaticPool {
    AllBinaryEventCircularPool* EVENT_POOL;
};

static DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_instance;

DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_new(void);
DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_getInstance(void);

void DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool* this);
void DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool* this, AllBinaryGameCanvas* combatGameCanvas);
DestroyedEvent* DestroyEventCircularStaticPool_getInstanceForLayer(DestroyEventCircularStaticPool* this, AllBinaryLayer* layerInterface);

// Static fields with runtime initializers: call this once at startup
void DestroyEventCircularStaticPool_staticInit(void) {
    DestroyEventCircularStaticPool_instance = DestroyEventCircularStaticPool_new();
}

static void DestroyEventCircularStaticPool_initFields(DestroyEventCircularStaticPool* this) {
    this->EVENT_POOL = AllBinaryEventCircularPool_new(20);
}


DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_getInstance(void) {
        return DestroyEventCircularStaticPool_instance;
}


void DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool* this) {
    DestroyEventCircularStaticPool_initFields(this);
}

DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_new(void) {
    DestroyEventCircularStaticPool* this = calloc(1, sizeof(DestroyEventCircularStaticPool));
    DestroyEventCircularStaticPool_init(this);
    return this;
}


void DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool* this, AllBinaryGameCanvas* combatGameCanvas) {
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->EVENT_POOL, DestroyEventFactory_new(combatGameCanvas));
}


// throws Exception
DestroyedEvent* DestroyEventCircularStaticPool_getInstanceForLayer(DestroyEventCircularStaticPool* this, AllBinaryLayer* layerInterface) {
        DestroyedEvent* destroyedEvent = ((DestroyedEvent*) AllBinaryEventCircularPool_getNextInstance(this->EVENT_POOL));
        DestroyedEvent_setLayerInterfaceForCircularStaticPool(destroyedEvent, layerInterface);
        return destroyedEvent;
}

