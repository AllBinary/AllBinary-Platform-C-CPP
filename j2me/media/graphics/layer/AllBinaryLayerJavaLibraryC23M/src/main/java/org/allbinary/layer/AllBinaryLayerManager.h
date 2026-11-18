#ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H
#define ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H
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
typedef struct LayerManager LayerManager;
typedef struct LayerProcessor LayerProcessor;
typedef struct LayerManagerNoDebug LayerManagerNoDebug;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LayerManagerEvent LayerManagerEvent;
typedef struct LayerManagerEventHandler LayerManagerEventHandler;
#if __has_include("org/allbinary/layer/event/LayerManagerEvent.h")
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#endif
#if __has_include("org/allbinary/layer/event/LayerManagerEventHandler.h")
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#endif
#include "org/allbinary/layer/LayerManager.h"
#if __has_include("org/allbinary/layer/LayerProcessor.h")
#include "org/allbinary/layer/LayerProcessor.h"
#endif

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


void AllBinaryLayerManager_remove(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface);

void AllBinaryLayerManager_process(AllBinaryLayerManager* this);

void AllBinaryLayerManager_cleanup(AllBinaryLayerManager* this);
#define AllBinaryLayerManager_new0 AllBinaryLayerManager_new
#define AllBinaryLayerManager_init0 AllBinaryLayerManager_init
#ifndef AllBinaryLayerManager_contains
#define AllBinaryLayerManager_contains LayerManager_contains
#endif
#ifndef AllBinaryLayerManager_update
#define AllBinaryLayerManager_update LayerManager_update
#endif
#ifndef AllBinaryLayerManager_insert
#define AllBinaryLayerManager_insert LayerManager_insert
#endif
#ifndef AllBinaryLayerManager_getLayerAt
#define AllBinaryLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef AllBinaryLayerManager_getSize
#define AllBinaryLayerManager_getSize LayerManager_getSize
#endif
#ifndef AllBinaryLayerManager_paint
#define AllBinaryLayerManager_paint LayerManager_paint
#endif
#ifndef AllBinaryLayerManager_insert
#define AllBinaryLayerManager_insert LayerManager_insert
#endif
#ifndef AllBinaryLayerManager_setViewWindow
#define AllBinaryLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryLayerManager_register(void);


#endif // ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H
