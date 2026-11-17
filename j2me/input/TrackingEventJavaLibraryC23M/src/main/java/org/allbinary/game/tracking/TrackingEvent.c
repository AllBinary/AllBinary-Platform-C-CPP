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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct TrackingEvent TrackingEvent;
struct TrackingEvent {
    AllBinaryEventObject base;
    AllBinaryLayer* layerInterface;
};


TrackingEvent* TrackingEvent_new(Any* allBinaryLayerInterface);

void TrackingEvent_init(TrackingEvent* this, Any* allBinaryLayerInterface);
void TrackingEvent_init(TrackingEvent* this, Any* anyType);
AllBinaryLayer* TrackingEvent_getLayerInterface(TrackingEvent* this);
static void TrackingEvent_setLayerInterface(TrackingEvent* this, AllBinaryLayer* layerInterface);
void TrackingEvent_setLayerInterfaceForCircularStaticPool(TrackingEvent* this, AllBinaryLayer* layerInterface);
const char* TrackingEvent_toString(TrackingEvent* this);

static void TrackingEvent_initFields(TrackingEvent* this) {
    this->layerInterface = AllBinaryLayer_NULL_ALLBINARY_LAYER;
}


void TrackingEvent_init(TrackingEvent* this, Any* allBinaryLayerInterface) {
        AllBinaryEventObject_init(&this->base, allBinaryLayerInterface);
        TrackingEvent_initFields(this);
        if (allBinaryLayerInterface != TrackingEventHandler_getInstance()) {
            TrackingEvent_setLayerInterface(this, ((AllBinaryLayer*) allBinaryLayerInterface));
        }
}

TrackingEvent* TrackingEvent_new(Any* allBinaryLayerInterface) {
    TrackingEvent* this = calloc(1, sizeof(TrackingEvent));
    TrackingEvent_init(this, allBinaryLayerInterface);
    return this;
}


void TrackingEvent_init(TrackingEvent* this, Any* anyType) {
        TrackingEvent_setSource(this, anyType);
}


AllBinaryLayer* TrackingEvent_getLayerInterface(TrackingEvent* this) {
        return this->layerInterface;
}


static void TrackingEvent_setLayerInterface(TrackingEvent* this, AllBinaryLayer* layerInterface) {
        this->layerInterface = layerInterface;
}


void TrackingEvent_setLayerInterfaceForCircularStaticPool(TrackingEvent* this, AllBinaryLayer* layerInterface) {
        this->layerInterface = layerInterface;
}


const char* TrackingEvent_toString(TrackingEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "TrackingEvent: \n");
        StringMaker_append(stringBuffer, "LayerInterface: ");
        StringMaker_append(stringBuffer, AllBinaryLayer_toString(this->layerInterface));
        return StringMaker_toString(stringBuffer);
}

