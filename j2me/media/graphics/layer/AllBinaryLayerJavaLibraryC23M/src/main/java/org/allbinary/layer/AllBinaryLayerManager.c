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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#include "org/allbinary/layer/LayerManager.h"

typedef struct AllBinaryLayerManager AllBinaryLayerManager;
struct AllBinaryLayerManager {
    LayerManager base;
    LayerManagerEventHandler* layerManagerEventHandler;
    LayerManagerEvent* createLayerManagerEvent;
    LayerManagerEvent* deleteLayerManagerEvent;
    LayerProcessor** basicLayerProcessorArray;
};


AllBinaryLayerManager* AllBinaryLayerManager_new(void);

void AllBinaryLayerManager_init(AllBinaryLayerManager* this);
LayerProcessor** AllBinaryLayerManager_getLayerProcessorArray(AllBinaryLayerManager* this);
void AllBinaryLayerManager_setLayerProcessorArray(AllBinaryLayerManager* this, LayerProcessor** layerProcessorArray);
void AllBinaryLayerManager_log(AllBinaryLayerManager* this);
void AllBinaryLayerManager_append(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface);
void AllBinaryLayerManager_appendAt(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface, int32_t index);
static void AllBinaryLayerManager_appendProcessors(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface);
void AllBinaryLayerManager_remove(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface);
void AllBinaryLayerManager_process(AllBinaryLayerManager* this);
void AllBinaryLayerManager_cleanup(AllBinaryLayerManager* this);

static void AllBinaryLayerManager_initFields(AllBinaryLayerManager* this) {
    this->layerManagerEventHandler = LayerManagerEventHandler_getInstance();
    this->createLayerManagerEvent = LayerManagerEvent_new(this, this->layerManagerEventHandler->CREATE);
    this->deleteLayerManagerEvent = LayerManagerEvent_new(this, this->layerManagerEventHandler->DELETE);
    this->basicLayerProcessorArray = ((LayerProcessor**) java_array_new(sizeof(LayerProcessor*), 0));
}


void AllBinaryLayerManager_init(AllBinaryLayerManager* this) {
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
        AllBinaryLayerManager_initFields(this);
}

AllBinaryLayerManager* AllBinaryLayerManager_new(void) {
    AllBinaryLayerManager* this = calloc(1, sizeof(AllBinaryLayerManager));
    AllBinaryLayerManager_init(this);
    return this;
}


LayerProcessor** AllBinaryLayerManager_getLayerProcessorArray(AllBinaryLayerManager* this) {
        return this->basicLayerProcessorArray;
}


void AllBinaryLayerManager_setLayerProcessorArray(AllBinaryLayerManager* this, LayerProcessor** layerProcessorArray) {
        this->basicLayerProcessorArray = layerProcessorArray;
}


void AllBinaryLayerManager_log(AllBinaryLayerManager* this) {
        int32_t size = java_array_length(this->basicLayerProcessorArray);
        for (int32_t index = 0; index < size; index++) {
            LayerProcessor* layerProcessorInterface = this->basicLayerProcessorArray[index];
        }
}


// throws Exception
void AllBinaryLayerManager_append(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface) {
        if (!AllBinaryLayerManager_contains(this, layerInterface)) {
            AllBinaryLayerManager_appendProcessors(this, layerInterface);
            LayerManager_append((&this->base), layerInterface);
        }
}


// throws Exception
void AllBinaryLayerManager_appendAt(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface, int32_t index) {
        if (!AllBinaryLayerManager_contains(this, layerInterface)) {
            AllBinaryLayerManager_appendProcessors(this, layerInterface);
            LayerManager_appendAt((&this->base), layerInterface, index);
        }
}


// throws Exception
static void AllBinaryLayerManager_appendProcessors(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface) {
        LayerManagerEvent_setLayerInterface(this->createLayerManagerEvent, layerInterface);
        LayerManagerEventHandler_fireEvent(this->layerManagerEventHandler, this->createLayerManagerEvent);
        LayerProcessor* layerProcessorInterface = nullptr;
        for (int32_t index = java_array_length(this->basicLayerProcessorArray); --index >= 0; ) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            if (LayerProcessor_isProcessorLayer(layerProcessorInterface, layerInterface)) {
                JAVA_CALL(LayerProcessor_getLayerManager(layerProcessorInterface), append, layerInterface);
            }
        }
}


// throws Exception
// synchronized
void AllBinaryLayerManager_remove(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface) {
        LayerManagerEvent_setLayerInterface(this->deleteLayerManagerEvent, layerInterface);
        LayerManagerEventHandler_fireDeleteEvent(this->layerManagerEventHandler, this->deleteLayerManagerEvent);
        LayerProcessor* layerProcessorInterface = nullptr;
        for (int32_t index = java_array_length(this->basicLayerProcessorArray); --index >= 0; ) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            JAVA_CALL(LayerProcessor_getLayerManager(layerProcessorInterface), remove, layerInterface);
        }
        LayerManager_remove((&this->base), layerInterface);
}


// throws Exception
void AllBinaryLayerManager_process(AllBinaryLayerManager* this) {
        LayerProcessor* layerProcessorInterface = nullptr;
        int32_t size = java_array_length(this->basicLayerProcessorArray);
        for (int32_t index = 0; index < size; index++) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            LayerProcessor_process(layerProcessorInterface, this);
        }
}


// throws Exception
void AllBinaryLayerManager_cleanup(AllBinaryLayerManager* this) {
        LayerProcessor* layerProcessorInterface = nullptr;
        int32_t size = java_array_length(this->basicLayerProcessorArray);
        for (int32_t index = 0; index < size; index++) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            JAVA_CALL(LayerProcessor_getLayerManager(layerProcessorInterface), cleanup);
        }
        LayerManager_cleanup((&this->base));
}

