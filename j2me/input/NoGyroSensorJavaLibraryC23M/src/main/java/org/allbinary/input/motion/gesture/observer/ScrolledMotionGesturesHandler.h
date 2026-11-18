#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_SCROLLEDMOTIONGESTURESHANDLER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_SCROLLEDMOTIONGESTURESHANDLER_H
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

typedef struct ScrolledMotionGesturesHandler ScrolledMotionGesturesHandler;
struct ScrolledMotionGesturesHandler {
    BasicEventHandler base;
};


ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_new(void);

ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_getInstance(void);

void ScrolledMotionGesturesHandler_init(ScrolledMotionGesturesHandler* this);

void ScrolledMotionGesturesHandler_process(ScrolledMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define ScrolledMotionGesturesHandler_new0 ScrolledMotionGesturesHandler_new
#define ScrolledMotionGesturesHandler_init0 ScrolledMotionGesturesHandler_init
#ifndef ScrolledMotionGesturesHandler_toString
#define ScrolledMotionGesturesHandler_toString BasicEventHandler_toString
#endif
#ifndef ScrolledMotionGesturesHandler_removeAllListeners
#define ScrolledMotionGesturesHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef ScrolledMotionGesturesHandler_addListenerSingleThreaded
#define ScrolledMotionGesturesHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef ScrolledMotionGesturesHandler_addListenerInterface
#define ScrolledMotionGesturesHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef ScrolledMotionGesturesHandler_removeListenerSingleThreaded
#define ScrolledMotionGesturesHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef ScrolledMotionGesturesHandler_removeListener
#define ScrolledMotionGesturesHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef ScrolledMotionGesturesHandler_fireEvent
#define ScrolledMotionGesturesHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef ScrolledMotionGesturesHandler_getEventListenerInterfaceListP
#define ScrolledMotionGesturesHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef ScrolledMotionGesturesHandler_addListeners
#define ScrolledMotionGesturesHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef ScrolledMotionGesturesHandler_removeListeners
#define ScrolledMotionGesturesHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrolledMotionGesturesHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrolledMotionGesturesHandler_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_SCROLLEDMOTIONGESTURESHANDLER_H
