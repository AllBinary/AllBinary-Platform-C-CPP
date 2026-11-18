#ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H
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
typedef struct ScrollMapEvent ScrollMapEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct ScrollMapEventListenerInterface ScrollMapEventListenerInterface;
struct ScrollMapEventListenerInterface {
    void (*onMoveEvent)(void* this, ScrollMapEvent* layerManagerEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollMapEventListenerInterface_staticInit(void);

static inline void ScrollMapEventListenerInterface_onMoveEvent(void* this, ScrollMapEvent* layerManagerEvent) {
    ((__typeof__(((ScrollMapEventListenerInterface*) nullptr)->onMoveEvent)) java_method_of(this, "onMoveEvent"))(this, layerManagerEvent);
}
#define ScrollMapEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H
