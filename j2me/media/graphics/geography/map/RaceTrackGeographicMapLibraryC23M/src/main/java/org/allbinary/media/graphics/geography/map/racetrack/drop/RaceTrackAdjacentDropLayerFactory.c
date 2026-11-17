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
// package org.allbinary.media.graphics.geography.map.racetrack.drop

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
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"

typedef struct RaceTrackAdjacentDropLayerFactory RaceTrackAdjacentDropLayerFactory;
struct RaceTrackAdjacentDropLayerFactory {
    BasicArrayList* list;
    BasicArrayListUtil* basicArrayListUtil;
};

static RaceTrackAdjacentDropLayerFactory* RaceTrackAdjacentDropLayerFactory_DROP_LAYER_FACTORY;

RaceTrackAdjacentDropLayerFactory* RaceTrackAdjacentDropLayerFactory_new(void);

void RaceTrackAdjacentDropLayerFactory_init(RaceTrackAdjacentDropLayerFactory* this);
void RaceTrackAdjacentDropLayerFactory_clear(RaceTrackAdjacentDropLayerFactory* this);
RaceTrackAdjacentDropLayerFactory* RaceTrackAdjacentDropLayerFactory_getInstance(void);
int32_t RaceTrackAdjacentDropLayerFactory_getSize(RaceTrackAdjacentDropLayerFactory* this);
LayerInterfaceFactoryInterface* RaceTrackAdjacentDropLayerFactory_getRandomInstance(RaceTrackAdjacentDropLayerFactory* this);
void RaceTrackAdjacentDropLayerFactory_add(RaceTrackAdjacentDropLayerFactory* this, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

// Static fields with runtime initializers: call this once at startup
void RaceTrackAdjacentDropLayerFactory_staticInit(void) {
    RaceTrackAdjacentDropLayerFactory_DROP_LAYER_FACTORY = RaceTrackAdjacentDropLayerFactory_new();
}

static void RaceTrackAdjacentDropLayerFactory_initFields(RaceTrackAdjacentDropLayerFactory* this) {
    this->list = BasicArrayListD_new();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void RaceTrackAdjacentDropLayerFactory_init(RaceTrackAdjacentDropLayerFactory* this) {
    RaceTrackAdjacentDropLayerFactory_initFields(this);
}

RaceTrackAdjacentDropLayerFactory* RaceTrackAdjacentDropLayerFactory_new(void) {
    RaceTrackAdjacentDropLayerFactory* this = calloc(1, sizeof(RaceTrackAdjacentDropLayerFactory));
    RaceTrackAdjacentDropLayerFactory_init(this);
    return this;
}


void RaceTrackAdjacentDropLayerFactory_clear(RaceTrackAdjacentDropLayerFactory* this) {
        BasicArrayList_clear(this->list);
}


RaceTrackAdjacentDropLayerFactory* RaceTrackAdjacentDropLayerFactory_getInstance(void) {
        return RaceTrackAdjacentDropLayerFactory_DROP_LAYER_FACTORY;
}


int32_t RaceTrackAdjacentDropLayerFactory_getSize(RaceTrackAdjacentDropLayerFactory* this) {
        return BasicArrayList_size(this->list);
}


LayerInterfaceFactoryInterface* RaceTrackAdjacentDropLayerFactory_getRandomInstance(RaceTrackAdjacentDropLayerFactory* this) {
        return ((LayerInterfaceFactoryInterface*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->list));
}


void RaceTrackAdjacentDropLayerFactory_add(RaceTrackAdjacentDropLayerFactory* this, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}

