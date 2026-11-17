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

typedef struct RightTouchInputToGameKeyEventAction RightTouchInputToGameKeyEventAction;
struct RightTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* RightTouchInputToGameKeyEventAction_instance;

RightTouchInputToGameKeyEventAction* RightTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* RightTouchInputToGameKeyEventAction_getInstance(void);

void RightTouchInputToGameKeyEventAction_init(RightTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void RightTouchInputToGameKeyEventAction_staticInit(void) {
    RightTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* RightTouchInputToGameKeyEventAction_getInstance(void) {
        if (RightTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            RightTouchInputToGameKeyEventAction_instance = RightTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) RightTouchInputToGameKeyEventAction_instance);
}


void RightTouchInputToGameKeyEventAction_init(RightTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Right Action", TouchMotionGestureFactory_getInstance()->RIGHT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

RightTouchInputToGameKeyEventAction* RightTouchInputToGameKeyEventAction_new(void) {
    RightTouchInputToGameKeyEventAction* this = calloc(1, sizeof(RightTouchInputToGameKeyEventAction));
    RightTouchInputToGameKeyEventAction_init(this);
    return this;
}

