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
// package org.allbinary.input.motion.touch.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct LeftTouchInputToGameKeyEventAction LeftTouchInputToGameKeyEventAction;
struct LeftTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* LeftTouchInputToGameKeyEventAction_instance;

LeftTouchInputToGameKeyEventAction* LeftTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* LeftTouchInputToGameKeyEventAction_getInstance(void);

void LeftTouchInputToGameKeyEventAction_init(LeftTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void LeftTouchInputToGameKeyEventAction_staticInit(void) {
    LeftTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* LeftTouchInputToGameKeyEventAction_getInstance(void) {
        if (LeftTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            LeftTouchInputToGameKeyEventAction_instance = LeftTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) LeftTouchInputToGameKeyEventAction_instance);
}


void LeftTouchInputToGameKeyEventAction_init(LeftTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Left Action", TouchMotionGestureFactory_getInstance()->LEFT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

LeftTouchInputToGameKeyEventAction* LeftTouchInputToGameKeyEventAction_new(void) {
    LeftTouchInputToGameKeyEventAction* this = calloc(1, sizeof(LeftTouchInputToGameKeyEventAction));
    LeftTouchInputToGameKeyEventAction_init(this);
    return this;
}

