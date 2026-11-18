#ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H
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
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface;
struct CompleteMotionGestureInputEventListenerInterface {
    void (*onCompleteMotionGestureInputEvent)(void* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompleteMotionGestureInputEventListenerInterface_staticInit(void);

static inline void CompleteMotionGestureInputEventListenerInterface_onCompleteMotionGestureInputEvent(void* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
    ((__typeof__(((CompleteMotionGestureInputEventListenerInterface*) nullptr)->onCompleteMotionGestureInputEvent)) java_method_of(this, "onCompleteMotionGestureInputEvent"))(this, completeMotionGestureInputEvent);
}
#define CompleteMotionGestureInputEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H
