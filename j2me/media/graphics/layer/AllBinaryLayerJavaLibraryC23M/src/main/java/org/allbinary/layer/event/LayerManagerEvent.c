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
// package org.allbinary.layer.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct LayerManagerEvent LayerManagerEvent;
struct LayerManagerEvent {
    AllBinaryEventObject base;
    AllBinaryLayer* layerInterface;
    const char* crud;
};


LayerManagerEvent* LayerManagerEvent_new(LayerManager* layerManager, const char* crud);

void LayerManagerEvent_init(LayerManagerEvent* this, LayerManager* layerManager, const char* crud);
AllBinaryLayer* LayerManagerEvent_getLayerInterface(LayerManagerEvent* this);
void LayerManagerEvent_setLayerInterface(LayerManagerEvent* this, AllBinaryLayer* layerInterface);
const char* LayerManagerEvent_toString(LayerManagerEvent* this);

static void LayerManagerEvent_initFields(LayerManagerEvent* this) {
    this->layerInterface = AllBinaryLayer_NULL_ALLBINARY_LAYER;
    
}


void LayerManagerEvent_init(LayerManagerEvent* this, LayerManager* layerManager, const char* crud) {
        AllBinaryEventObject_init(&this->base, layerManager);
        LayerManagerEvent_initFields(this);
        this->crud = crud;
}

LayerManagerEvent* LayerManagerEvent_new(LayerManager* layerManager, const char* crud) {
    LayerManagerEvent* this = calloc(1, sizeof(LayerManagerEvent));
    LayerManagerEvent_init(this, layerManager, crud);
    return this;
}


AllBinaryLayer* LayerManagerEvent_getLayerInterface(LayerManagerEvent* this) {
        return this->layerInterface;
}


void LayerManagerEvent_setLayerInterface(LayerManagerEvent* this, AllBinaryLayer* layerInterface) {
        this->layerInterface = layerInterface;
}


const char* LayerManagerEvent_toString(LayerManagerEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "LayerManagerEvent: \n");
        StringMaker_append(stringBuffer, "LayerInterface: ");
        StringMaker_append(stringBuffer, JAVA_CALL(LayerManagerEvent_getLayerInterface(this), toString));
        StringMaker_append(stringBuffer, "\nCRUD: ");
        StringMaker_append(stringBuffer, this->crud);
        return StringMaker_toString(stringBuffer);
}

