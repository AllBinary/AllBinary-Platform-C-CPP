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

typedef struct DiagonalUpRightTouchInputToGameKeyEventAction DiagonalUpRightTouchInputToGameKeyEventAction;
struct DiagonalUpRightTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* DiagonalUpRightTouchInputToGameKeyEventAction_instance;

DiagonalUpRightTouchInputToGameKeyEventAction* DiagonalUpRightTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* DiagonalUpRightTouchInputToGameKeyEventAction_getInstance(void);

void DiagonalUpRightTouchInputToGameKeyEventAction_init(DiagonalUpRightTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void DiagonalUpRightTouchInputToGameKeyEventAction_staticInit(void) {
    DiagonalUpRightTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* DiagonalUpRightTouchInputToGameKeyEventAction_getInstance(void) {
        if (DiagonalUpRightTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalUpRightTouchInputToGameKeyEventAction_instance = DiagonalUpRightTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) DiagonalUpRightTouchInputToGameKeyEventAction_instance);
}


void DiagonalUpRightTouchInputToGameKeyEventAction_init(DiagonalUpRightTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Up Right Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_UP_RIGHT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

DiagonalUpRightTouchInputToGameKeyEventAction* DiagonalUpRightTouchInputToGameKeyEventAction_new(void) {
    DiagonalUpRightTouchInputToGameKeyEventAction* this = calloc(1, sizeof(DiagonalUpRightTouchInputToGameKeyEventAction));
    DiagonalUpRightTouchInputToGameKeyEventAction_init(this);
    return this;
}

