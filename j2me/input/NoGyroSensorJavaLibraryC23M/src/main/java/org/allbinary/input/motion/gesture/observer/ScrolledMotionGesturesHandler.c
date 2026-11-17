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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct ScrolledMotionGesturesHandler ScrolledMotionGesturesHandler;
struct ScrolledMotionGesturesHandler {
    BasicEventHandler base;
};

static ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_SINGLETON;

ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_new(void);
ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_getInstance(void);

void ScrolledMotionGesturesHandler_init(ScrolledMotionGesturesHandler* this);
void ScrolledMotionGesturesHandler_process(ScrolledMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void ScrolledMotionGesturesHandler_staticInit(void) {
    ScrolledMotionGesturesHandler_SINGLETON = ScrolledMotionGesturesHandler_new();
}


ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_getInstance(void) {
        return ScrolledMotionGesturesHandler_SINGLETON;
}


void ScrolledMotionGesturesHandler_init(ScrolledMotionGesturesHandler* this) {
    BasicEventHandler_init(&this->base);
}

ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_new(void) {
    ScrolledMotionGesturesHandler* this = calloc(1, sizeof(ScrolledMotionGesturesHandler));
    ScrolledMotionGesturesHandler_init(this);
    return this;
}


// throws Exception
void ScrolledMotionGesturesHandler_process(ScrolledMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BaseMotionGestureEventListener* baseMotionGestureEventListener = ((BaseMotionGestureEventListener*) eventListenerInterface);
        BaseMotionGestureEventListener_onScrolledMotionGestureEvent(baseMotionGestureEventListener, ((MotionGestureEvent*) eventObject));
}

