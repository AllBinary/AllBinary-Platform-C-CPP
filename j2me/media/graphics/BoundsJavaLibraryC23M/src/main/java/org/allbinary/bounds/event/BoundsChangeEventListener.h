#ifndef ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTLISTENER_H
#define ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTLISTENER_H
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
// package org.allbinary.bounds.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BoundsChangeEvent BoundsChangeEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct BoundsChangeEventListener BoundsChangeEventListener;
struct BoundsChangeEventListener {
    void (*onBoundsChangeEvent)(void* this, BoundsChangeEvent* boundsChangeEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BoundsChangeEventListener_staticInit(void);

static inline void BoundsChangeEventListener_onBoundsChangeEvent(void* this, BoundsChangeEvent* boundsChangeEvent) {
    ((__typeof__(((BoundsChangeEventListener*) nullptr)->onBoundsChangeEvent)) java_method_of(this, "onBoundsChangeEvent"))(this, boundsChangeEvent);
}
#define BoundsChangeEventListener_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENTLISTENER_H
