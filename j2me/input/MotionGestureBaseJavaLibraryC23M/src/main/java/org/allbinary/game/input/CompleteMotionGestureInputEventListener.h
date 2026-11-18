#ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
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
typedef struct CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface;
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"

typedef struct CompleteMotionGestureInputEventListener CompleteMotionGestureInputEventListener;
struct CompleteMotionGestureInputEventListener {
    CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface_interface;
};


CompleteMotionGestureInputEventListener* CompleteMotionGestureInputEventListener_new(void);
void CompleteMotionGestureInputEventListener_init(CompleteMotionGestureInputEventListener* this);

void CompleteMotionGestureInputEventListener_onEvent(CompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject);

void CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompleteMotionGestureInputEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompleteMotionGestureInputEventListener_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
