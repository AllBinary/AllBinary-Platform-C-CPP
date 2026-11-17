/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct RTSLayerEvent RTSLayerEvent;
struct RTSLayerEvent {
    AllBinaryEventObject base;
    PathFindingLayerInterface* rtsLayer;
};


RTSLayerEvent* RTSLayerEvent_new(PathFindingLayerInterface* rtsLayer);

void RTSLayerEvent_init(RTSLayerEvent* this, PathFindingLayerInterface* rtsLayer);
const char* RTSLayerEvent_toString(RTSLayerEvent* this);
PathFindingLayerInterface* RTSLayerEvent_getRtsLayer(RTSLayerEvent* this);
void RTSLayerEvent_setRtsLayer(RTSLayerEvent* this, PathFindingLayerInterface* rtsLayer);

static void RTSLayerEvent_initFields(RTSLayerEvent* this) {
    this->rtsLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
}


void RTSLayerEvent_init(RTSLayerEvent* this, PathFindingLayerInterface* rtsLayer) {
        AllBinaryEventObject_init(&this->base, rtsLayer);
        RTSLayerEvent_initFields(this);
}

RTSLayerEvent* RTSLayerEvent_new(PathFindingLayerInterface* rtsLayer) {
    RTSLayerEvent* this = calloc(1, sizeof(RTSLayerEvent));
    RTSLayerEvent_init(this, rtsLayer);
    return this;
}


const char* RTSLayerEvent_toString(RTSLayerEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "RTSLayerEvent: \n");
        StringMaker_append(stringBuffer, "RTSLayer: ");
        StringMaker_append(stringBuffer, JAVA_CALL(RTSLayerEvent_getRtsLayer(this), toString));
        return StringMaker_toString(stringBuffer);
}


PathFindingLayerInterface* RTSLayerEvent_getRtsLayer(RTSLayerEvent* this) {
        return this->rtsLayer;
}


void RTSLayerEvent_setRtsLayer(RTSLayerEvent* this, PathFindingLayerInterface* rtsLayer) {
        this->rtsLayer = rtsLayer;
}

