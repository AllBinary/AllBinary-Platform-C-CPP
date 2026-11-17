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

typedef struct DiagonalUpLeftTouchInputToGameKeyEventAction DiagonalUpLeftTouchInputToGameKeyEventAction;
struct DiagonalUpLeftTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* DiagonalUpLeftTouchInputToGameKeyEventAction_instance;

DiagonalUpLeftTouchInputToGameKeyEventAction* DiagonalUpLeftTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* DiagonalUpLeftTouchInputToGameKeyEventAction_getInstance(void);

void DiagonalUpLeftTouchInputToGameKeyEventAction_init(DiagonalUpLeftTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void DiagonalUpLeftTouchInputToGameKeyEventAction_staticInit(void) {
    DiagonalUpLeftTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* DiagonalUpLeftTouchInputToGameKeyEventAction_getInstance(void) {
        if (DiagonalUpLeftTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalUpLeftTouchInputToGameKeyEventAction_instance = DiagonalUpLeftTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) DiagonalUpLeftTouchInputToGameKeyEventAction_instance);
}


void DiagonalUpLeftTouchInputToGameKeyEventAction_init(DiagonalUpLeftTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Up Left Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_UP_LEFT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

DiagonalUpLeftTouchInputToGameKeyEventAction* DiagonalUpLeftTouchInputToGameKeyEventAction_new(void) {
    DiagonalUpLeftTouchInputToGameKeyEventAction* this = calloc(1, sizeof(DiagonalUpLeftTouchInputToGameKeyEventAction));
    DiagonalUpLeftTouchInputToGameKeyEventAction_init(this);
    return this;
}

