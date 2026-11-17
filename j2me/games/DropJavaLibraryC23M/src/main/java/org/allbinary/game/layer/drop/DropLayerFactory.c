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
// package org.allbinary.game.layer.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct DropLayerFactory DropLayerFactory;
struct DropLayerFactory {
    BasicArrayList* list;
    BasicArrayListUtil* basicArrayListUtil;
};

static DropLayerFactory* DropLayerFactory_DROP_LAYER_FACTORY;

DropLayerFactory* DropLayerFactory_new(void);

void DropLayerFactory_init(DropLayerFactory* this);
void DropLayerFactory_clear(DropLayerFactory* this);
DropLayerFactory* DropLayerFactory_getInstance(void);
int32_t DropLayerFactory_getSize(DropLayerFactory* this);
PickedUpLayerInterfaceFactoryInterface* DropLayerFactory_getRandomInstance(DropLayerFactory* this);
void DropLayerFactory_add(DropLayerFactory* this, PickedUpLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);
BasicArrayList* DropLayerFactory_getList(DropLayerFactory* this);

// Static fields with runtime initializers: call this once at startup
void DropLayerFactory_staticInit(void) {
    DropLayerFactory_DROP_LAYER_FACTORY = DropLayerFactory_new();
}

static void DropLayerFactory_initFields(DropLayerFactory* this) {
    this->list = BasicArrayListD_new();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void DropLayerFactory_init(DropLayerFactory* this) {
    DropLayerFactory_initFields(this);
}

DropLayerFactory* DropLayerFactory_new(void) {
    DropLayerFactory* this = calloc(1, sizeof(DropLayerFactory));
    DropLayerFactory_init(this);
    return this;
}


void DropLayerFactory_clear(DropLayerFactory* this) {
        BasicArrayList_clear(this->list);
}


DropLayerFactory* DropLayerFactory_getInstance(void) {
        return DropLayerFactory_DROP_LAYER_FACTORY;
}


int32_t DropLayerFactory_getSize(DropLayerFactory* this) {
        return BasicArrayList_size(this->list);
}


PickedUpLayerInterfaceFactoryInterface* DropLayerFactory_getRandomInstance(DropLayerFactory* this) {
        return ((PickedUpLayerInterfaceFactoryInterface*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->list));
}


void DropLayerFactory_add(DropLayerFactory* this, PickedUpLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}


BasicArrayList* DropLayerFactory_getList(DropLayerFactory* this) {
        return this->list;
}

