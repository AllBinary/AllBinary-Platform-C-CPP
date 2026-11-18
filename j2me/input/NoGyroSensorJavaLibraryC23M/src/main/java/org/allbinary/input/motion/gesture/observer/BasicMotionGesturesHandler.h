#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H
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
typedef struct BaseMotionGestureEventListener BaseMotionGestureEventListener;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
struct BasicMotionGesturesHandler {
    BasicEventHandler base;
};


BasicMotionGesturesHandler* BasicMotionGesturesHandler_new(void);

BasicMotionGesturesHandler* BasicMotionGesturesHandler_getInstance(void);

void BasicMotionGesturesHandler_init(BasicMotionGesturesHandler* this);

void BasicMotionGesturesHandler_process(BasicMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define BasicMotionGesturesHandler_new0 BasicMotionGesturesHandler_new
#define BasicMotionGesturesHandler_init0 BasicMotionGesturesHandler_init
#ifndef BasicMotionGesturesHandler_toString
#define BasicMotionGesturesHandler_toString BasicEventHandler_toString
#endif
#ifndef BasicMotionGesturesHandler_removeAllListeners
#define BasicMotionGesturesHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef BasicMotionGesturesHandler_addListenerSingleThreaded
#define BasicMotionGesturesHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef BasicMotionGesturesHandler_addListenerInterface
#define BasicMotionGesturesHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef BasicMotionGesturesHandler_removeListenerSingleThreaded
#define BasicMotionGesturesHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef BasicMotionGesturesHandler_removeListener
#define BasicMotionGesturesHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef BasicMotionGesturesHandler_fireEvent
#define BasicMotionGesturesHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef BasicMotionGesturesHandler_getEventListenerInterfaceListP
#define BasicMotionGesturesHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef BasicMotionGesturesHandler_addListeners
#define BasicMotionGesturesHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef BasicMotionGesturesHandler_removeListeners
#define BasicMotionGesturesHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicMotionGesturesHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicMotionGesturesHandler_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H
