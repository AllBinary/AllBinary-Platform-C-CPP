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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"

typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
struct CountedPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    CountedPickedUpLayerInterfaceFactoryInterface CountedPickedUpLayerInterfaceFactoryInterface_interface;
    int32_t id;
};

CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;

CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

void CountedPickedUpLayerInterfaceFactory_init(CountedPickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);
AllBinaryLayer* CountedPickedUpLayerInterfaceFactory_getNextInstance(CountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);
int32_t CountedPickedUpLayerInterfaceFactory_getTotal(CountedPickedUpLayerInterfaceFactory* this);
int32_t CountedPickedUpLayerInterfaceFactory_getId(CountedPickedUpLayerInterfaceFactory* this);

// Static fields with runtime initializers: call this once at startup
void CountedPickedUpLayerInterfaceFactory_staticInit(void) {
    CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY = CountedPickedUpLayerInterfaceFactory_new(PickedUpLayerTypeFactory_getInstance()->NONE, IconLayer_NULL_ICON_LAYER, JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0));
}

static void CountedPickedUpLayerInterfaceFactory_initFields(CountedPickedUpLayerInterfaceFactory* this) {
    
}


void CountedPickedUpLayerInterfaceFactory_init(CountedPickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
        PickedUpLayerInterfaceFactory_init(&this->base, pickeUpLayerType, iconLayer, animationInterface);
        CountedPickedUpLayerInterfaceFactory_initFields(this);
        BasicArrayList* list = CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool_getInstance());
        this->id = BasicArrayList_size(list);
        BasicArrayList_add(list, this);
}

CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    CountedPickedUpLayerInterfaceFactory* this = calloc(1, sizeof(CountedPickedUpLayerInterfaceFactory));
    CountedPickedUpLayerInterfaceFactory_init(this, pickeUpLayerType, iconLayer, animationInterface);
    return this;
}


// throws Exception
AllBinaryLayer* CountedPickedUpLayerInterfaceFactory_getNextInstance(CountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}


int32_t CountedPickedUpLayerInterfaceFactory_getTotal(CountedPickedUpLayerInterfaceFactory* this) {
        return -1;
}


int32_t CountedPickedUpLayerInterfaceFactory_getId(CountedPickedUpLayerInterfaceFactory* this) {
        return this->id;
}

