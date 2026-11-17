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

typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
struct BasicMotionGesturesHandler {
    BasicEventHandler base;
};

static BasicMotionGesturesHandler* BasicMotionGesturesHandler_SINGLETON;

BasicMotionGesturesHandler* BasicMotionGesturesHandler_new(void);
BasicMotionGesturesHandler* BasicMotionGesturesHandler_getInstance(void);

void BasicMotionGesturesHandler_init(BasicMotionGesturesHandler* this);
void BasicMotionGesturesHandler_process(BasicMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void BasicMotionGesturesHandler_staticInit(void) {
    BasicMotionGesturesHandler_SINGLETON = BasicMotionGesturesHandler_new();
}


BasicMotionGesturesHandler* BasicMotionGesturesHandler_getInstance(void) {
        return BasicMotionGesturesHandler_SINGLETON;
}


void BasicMotionGesturesHandler_init(BasicMotionGesturesHandler* this) {
    BasicEventHandler_init(&this->base);
}

BasicMotionGesturesHandler* BasicMotionGesturesHandler_new(void) {
    BasicMotionGesturesHandler* this = calloc(1, sizeof(BasicMotionGesturesHandler));
    BasicMotionGesturesHandler_init(this);
    return this;
}


// throws Exception
void BasicMotionGesturesHandler_process(BasicMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BaseMotionGestureEventListener* baseMotionGestureEventListener = ((BaseMotionGestureEventListener*) eventListenerInterface);
        BaseMotionGestureEventListener_onMotionGestureEvent(baseMotionGestureEventListener, ((MotionGestureEvent*) eventObject));
}

