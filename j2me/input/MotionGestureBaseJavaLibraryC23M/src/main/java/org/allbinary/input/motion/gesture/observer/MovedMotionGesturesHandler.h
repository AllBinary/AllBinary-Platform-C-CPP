#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOVEDMOTIONGESTURESHANDLER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOVEDMOTIONGESTURESHANDLER_H
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

typedef struct MovedMotionGesturesHandler MovedMotionGesturesHandler;
struct MovedMotionGesturesHandler {
    BasicEventHandler base;
};


MovedMotionGesturesHandler* MovedMotionGesturesHandler_new(void);

MovedMotionGesturesHandler* MovedMotionGesturesHandler_getInstance(void);

void MovedMotionGesturesHandler_init(MovedMotionGesturesHandler* this);

void MovedMotionGesturesHandler_process(MovedMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define MovedMotionGesturesHandler_new0 MovedMotionGesturesHandler_new
#define MovedMotionGesturesHandler_init0 MovedMotionGesturesHandler_init
#ifndef MovedMotionGesturesHandler_toString
#define MovedMotionGesturesHandler_toString BasicEventHandler_toString
#endif
#ifndef MovedMotionGesturesHandler_removeAllListeners
#define MovedMotionGesturesHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef MovedMotionGesturesHandler_addListenerSingleThreaded
#define MovedMotionGesturesHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef MovedMotionGesturesHandler_addListenerInterface
#define MovedMotionGesturesHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef MovedMotionGesturesHandler_removeListenerSingleThreaded
#define MovedMotionGesturesHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef MovedMotionGesturesHandler_removeListener
#define MovedMotionGesturesHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef MovedMotionGesturesHandler_fireEvent
#define MovedMotionGesturesHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef MovedMotionGesturesHandler_getEventListenerInterfaceListP
#define MovedMotionGesturesHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef MovedMotionGesturesHandler_addListeners
#define MovedMotionGesturesHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef MovedMotionGesturesHandler_removeListeners
#define MovedMotionGesturesHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MovedMotionGesturesHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MovedMotionGesturesHandler_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOVEDMOTIONGESTURESHANDLER_H
