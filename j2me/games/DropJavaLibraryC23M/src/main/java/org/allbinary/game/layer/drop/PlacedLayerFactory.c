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
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct PlacedLayerFactory PlacedLayerFactory;
struct PlacedLayerFactory {
    BasicArrayList* list;
    BasicArrayListUtil* basicArrayListUtil;
};

static PlacedLayerFactory* PlacedLayerFactory_instance;

PlacedLayerFactory* PlacedLayerFactory_new(void);

void PlacedLayerFactory_init(PlacedLayerFactory* this);
void PlacedLayerFactory_clear(PlacedLayerFactory* this);
PlacedLayerFactory* PlacedLayerFactory_getInstance(void);
int32_t PlacedLayerFactory_getSize(PlacedLayerFactory* this);
AllBinaryLayerFactoryInterface* PlacedLayerFactory_getRandomInstance(PlacedLayerFactory* this);
void PlacedLayerFactory_add(PlacedLayerFactory* this, AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface);

// Static fields with runtime initializers: call this once at startup
void PlacedLayerFactory_staticInit(void) {
    PlacedLayerFactory_instance = PlacedLayerFactory_new();
}

static void PlacedLayerFactory_initFields(PlacedLayerFactory* this) {
    this->list = BasicArrayListD_new();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void PlacedLayerFactory_init(PlacedLayerFactory* this) {
    PlacedLayerFactory_initFields(this);
}

PlacedLayerFactory* PlacedLayerFactory_new(void) {
    PlacedLayerFactory* this = calloc(1, sizeof(PlacedLayerFactory));
    PlacedLayerFactory_init(this);
    return this;
}


void PlacedLayerFactory_clear(PlacedLayerFactory* this) {
        BasicArrayList_clear(this->list);
}


PlacedLayerFactory* PlacedLayerFactory_getInstance(void) {
        return PlacedLayerFactory_instance;
}


int32_t PlacedLayerFactory_getSize(PlacedLayerFactory* this) {
        return BasicArrayList_size(this->list);
}


AllBinaryLayerFactoryInterface* PlacedLayerFactory_getRandomInstance(PlacedLayerFactory* this) {
        return ((AllBinaryLayerFactoryInterface*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->list));
}


void PlacedLayerFactory_add(PlacedLayerFactory* this, AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}

