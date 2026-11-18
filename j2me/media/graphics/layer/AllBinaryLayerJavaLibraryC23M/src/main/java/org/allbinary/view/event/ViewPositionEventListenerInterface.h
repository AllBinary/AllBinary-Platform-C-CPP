#ifndef ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTLISTENERINTERFACE_H
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
// package org.allbinary.view.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ViewPositionEvent ViewPositionEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct ViewPositionEventListenerInterface ViewPositionEventListenerInterface;
struct ViewPositionEventListenerInterface {
    void (*onChangeEvent)(void* this, ViewPositionEvent* layerManagerEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ViewPositionEventListenerInterface_staticInit(void);

static inline void ViewPositionEventListenerInterface_onChangeEvent(void* this, ViewPositionEvent* layerManagerEvent) {
    ((__typeof__(((ViewPositionEventListenerInterface*) nullptr)->onChangeEvent)) java_method_of(this, "onChangeEvent"))(this, layerManagerEvent);
}
#define ViewPositionEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTLISTENERINTERFACE_H
