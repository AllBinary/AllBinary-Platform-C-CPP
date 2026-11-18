#ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H
#define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H
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
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LayerManager LayerManager;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
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
#define LayerManagerEvent_new2 LayerManagerEvent_new
#define LayerManagerEvent_init2 LayerManagerEvent_init
#ifndef LayerManagerEvent_getSource
#define LayerManagerEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef LayerManagerEvent_setSource
#define LayerManagerEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManagerEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManagerEvent_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H
