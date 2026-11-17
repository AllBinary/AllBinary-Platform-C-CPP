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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CountedPickedUpLayerInterfaceFactoryPool CountedPickedUpLayerInterfaceFactoryPool;
struct CountedPickedUpLayerInterfaceFactoryPool {
    BasicArrayList* list;
};

static CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_SINGLETON;

CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_new(void);

void CountedPickedUpLayerInterfaceFactoryPool_init(CountedPickedUpLayerInterfaceFactoryPool* this);
BasicArrayList* CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool* this);
CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_getInstance(void);
void CountedPickedUpLayerInterfaceFactoryPool_init(void);

// Static fields with runtime initializers: call this once at startup
void CountedPickedUpLayerInterfaceFactoryPool_staticInit(void) {
    CountedPickedUpLayerInterfaceFactoryPool_SINGLETON = CountedPickedUpLayerInterfaceFactoryPool_new();
}

static void CountedPickedUpLayerInterfaceFactoryPool_initFields(CountedPickedUpLayerInterfaceFactoryPool* this) {
    
}


void CountedPickedUpLayerInterfaceFactoryPool_init(CountedPickedUpLayerInterfaceFactoryPool* this) {
    CountedPickedUpLayerInterfaceFactoryPool_initFields(this);
        this->list = BasicArrayListD_new();
}

CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_new(void) {
    CountedPickedUpLayerInterfaceFactoryPool* this = calloc(1, sizeof(CountedPickedUpLayerInterfaceFactoryPool));
    CountedPickedUpLayerInterfaceFactoryPool_init(this);
    return this;
}


BasicArrayList* CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool* this) {
        return this->list;
}


CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_getInstance(void) {
        return CountedPickedUpLayerInterfaceFactoryPool_SINGLETON;
}


void CountedPickedUpLayerInterfaceFactoryPool_init(void) {
        CountedPickedUpLayerInterfaceFactoryPool_SINGLETON = CountedPickedUpLayerInterfaceFactoryPool_new();
}

