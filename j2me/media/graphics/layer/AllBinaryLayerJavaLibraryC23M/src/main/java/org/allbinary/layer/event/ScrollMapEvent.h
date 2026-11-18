#ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H
#define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H
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
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct ScrollMapEvent ScrollMapEvent;
struct ScrollMapEvent {
    AllBinaryEventObject base;
    int32_t dx;
    int32_t dy;
};


ScrollMapEvent* ScrollMapEvent_new(void* anyType);

void ScrollMapEvent_init(ScrollMapEvent* this, void* anyType);

void ScrollMapEvent_setDx(ScrollMapEvent* this, int32_t dx);

int32_t ScrollMapEvent_getDx(ScrollMapEvent* this);

void ScrollMapEvent_setDy(ScrollMapEvent* this, int32_t dy);

int32_t ScrollMapEvent_getDy(ScrollMapEvent* this);

void ScrollMapEvent_setDxDy(ScrollMapEvent* this, int32_t dx, int32_t dy);
#define ScrollMapEvent_new1 ScrollMapEvent_new
#define ScrollMapEvent_init1 ScrollMapEvent_init
#ifndef ScrollMapEvent_getSource
#define ScrollMapEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef ScrollMapEvent_setSource
#define ScrollMapEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollMapEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollMapEvent_register(void);


#endif // ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H
