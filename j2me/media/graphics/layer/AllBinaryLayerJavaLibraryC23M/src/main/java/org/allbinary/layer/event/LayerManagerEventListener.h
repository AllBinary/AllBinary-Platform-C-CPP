#ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H
#define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H
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
typedef struct LayerManagerEventListenerInterface LayerManagerEventListenerInterface;
typedef struct LayerManagerEvent LayerManagerEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"

typedef struct LayerManagerEventListener LayerManagerEventListener;
struct LayerManagerEventListener {
    LayerManagerEventListenerInterface LayerManagerEventListenerInterface_interface;
};


LayerManagerEventListener* LayerManagerEventListener_new(void);
void LayerManagerEventListener_init(LayerManagerEventListener* this);

void LayerManagerEventListener_onEvent(LayerManagerEventListener* this, AllBinaryEventObject* eventObject);

void LayerManagerEventListener_onCreateLayerManagerEvent(LayerManagerEventListener* this, LayerManagerEvent* layerManagerEvent);

void LayerManagerEventListener_onDeleteLayerManagerEvent(LayerManagerEventListener* this, LayerManagerEvent* layerManagerEvent);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerManagerEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerManagerEventListener_register(void);


#endif // ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H
