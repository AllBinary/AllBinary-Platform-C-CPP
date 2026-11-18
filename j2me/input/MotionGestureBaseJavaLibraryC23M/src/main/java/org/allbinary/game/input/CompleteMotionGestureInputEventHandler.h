#ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTHANDLER_H
#define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTHANDLER_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CompleteMotionGestureInputEventListener CompleteMotionGestureInputEventListener;
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct CompleteMotionGestureInputEventHandler CompleteMotionGestureInputEventHandler;
struct CompleteMotionGestureInputEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};


CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_new(void);

CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_getInstance(void);

void CompleteMotionGestureInputEventHandler_init(CompleteMotionGestureInputEventHandler* this);

void CompleteMotionGestureInputEventHandler_addListener(CompleteMotionGestureInputEventHandler* this, CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener);

void CompleteMotionGestureInputEventHandler_removeAllListeners(CompleteMotionGestureInputEventHandler* this);

void CompleteMotionGestureInputEventHandler_removeListener(CompleteMotionGestureInputEventHandler* this, EventListenerInterface* eventListenerInterface);

void CompleteMotionGestureInputEventHandler_fireEvent(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject);

void CompleteMotionGestureInputEventHandler_process(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define CompleteMotionGestureInputEventHandler_new0 CompleteMotionGestureInputEventHandler_new
#define CompleteMotionGestureInputEventHandler_init0 CompleteMotionGestureInputEventHandler_init
#ifndef CompleteMotionGestureInputEventHandler_toString
#define CompleteMotionGestureInputEventHandler_toString BasicEventHandler_toString
#endif
#ifndef CompleteMotionGestureInputEventHandler_addListenerSingleThreaded
#define CompleteMotionGestureInputEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef CompleteMotionGestureInputEventHandler_addListenerInterface
#define CompleteMotionGestureInputEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef CompleteMotionGestureInputEventHandler_removeListenerSingleThreaded
#define CompleteMotionGestureInputEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef CompleteMotionGestureInputEventHandler_getEventListenerInterfaceListP
#define CompleteMotionGestureInputEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef CompleteMotionGestureInputEventHandler_addListeners
#define CompleteMotionGestureInputEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef CompleteMotionGestureInputEventHandler_removeListeners
#define CompleteMotionGestureInputEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompleteMotionGestureInputEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompleteMotionGestureInputEventHandler_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTHANDLER_H
