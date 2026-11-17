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

typedef struct MovedMotionGesturesHandler MovedMotionGesturesHandler;
struct MovedMotionGesturesHandler {
    BasicEventHandler base;
};

static MovedMotionGesturesHandler* MovedMotionGesturesHandler_SINGLETON;

MovedMotionGesturesHandler* MovedMotionGesturesHandler_new(void);
MovedMotionGesturesHandler* MovedMotionGesturesHandler_getInstance(void);

void MovedMotionGesturesHandler_init(MovedMotionGesturesHandler* this);
void MovedMotionGesturesHandler_process(MovedMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void MovedMotionGesturesHandler_staticInit(void) {
    MovedMotionGesturesHandler_SINGLETON = MovedMotionGesturesHandler_new();
}


MovedMotionGesturesHandler* MovedMotionGesturesHandler_getInstance(void) {
        return MovedMotionGesturesHandler_SINGLETON;
}


void MovedMotionGesturesHandler_init(MovedMotionGesturesHandler* this) {
    BasicEventHandler_init(&this->base);
}

MovedMotionGesturesHandler* MovedMotionGesturesHandler_new(void) {
    MovedMotionGesturesHandler* this = calloc(1, sizeof(MovedMotionGesturesHandler));
    MovedMotionGesturesHandler_init(this);
    return this;
}


// throws Exception
void MovedMotionGesturesHandler_process(MovedMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BaseMotionGestureEventListener* baseMotionGestureEventListener = ((BaseMotionGestureEventListener*) eventListenerInterface);
        BaseMotionGestureEventListener_onMotionGestureEvent(baseMotionGestureEventListener, ((MotionGestureEvent*) eventObject));
}

