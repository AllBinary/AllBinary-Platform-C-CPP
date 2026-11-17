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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"

typedef struct CompleteMotionGestureInputEventListener CompleteMotionGestureInputEventListener;
struct CompleteMotionGestureInputEventListener {
    CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface_interface;
};


CompleteMotionGestureInputEventListener* CompleteMotionGestureInputEventListener_new(void);
void CompleteMotionGestureInputEventListener_onEvent(CompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject);
void CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

void CompleteMotionGestureInputEventListener_init(CompleteMotionGestureInputEventListener* this) {
}

CompleteMotionGestureInputEventListener* CompleteMotionGestureInputEventListener_new(void) {
    CompleteMotionGestureInputEventListener* this = calloc(1, sizeof(CompleteMotionGestureInputEventListener));
    CompleteMotionGestureInputEventListener_init(this);
    return this;
}


void CompleteMotionGestureInputEventListener_onEvent(CompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject) {
}


void CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
}

