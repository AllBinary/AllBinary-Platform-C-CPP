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
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct GenericTrackingLayerCircularStaticPool GenericTrackingLayerCircularStaticPool;
struct GenericTrackingLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};

static GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_SINGLETON;

GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_new(void);

void GenericTrackingLayerCircularStaticPool_init(GenericTrackingLayerCircularStaticPool* this);
GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GenericTrackingLayerCircularStaticPool_staticInit(void) {
    GenericTrackingLayerCircularStaticPool_SINGLETON = GenericTrackingLayerCircularStaticPool_new();
}


void GenericTrackingLayerCircularStaticPool_init(GenericTrackingLayerCircularStaticPool* this) {
    AllBinaryLayerCircularPool_init(&this->base);
}

GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_new(void) {
    GenericTrackingLayerCircularStaticPool* this = calloc(1, sizeof(GenericTrackingLayerCircularStaticPool));
    GenericTrackingLayerCircularStaticPool_init(this);
    return this;
}


GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_getInstance(void) {
        return GenericTrackingLayerCircularStaticPool_SINGLETON;
}

