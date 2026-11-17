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
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ReleaseTouchInputToGameKeyEventAction ReleaseTouchInputToGameKeyEventAction;
struct ReleaseTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
    GameKey* NONE;
};

static Any* ReleaseTouchInputToGameKeyEventAction_instance;

ReleaseTouchInputToGameKeyEventAction* ReleaseTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* ReleaseTouchInputToGameKeyEventAction_getInstance(void);

void ReleaseTouchInputToGameKeyEventAction_init(ReleaseTouchInputToGameKeyEventAction* this);
void ReleaseTouchInputToGameKeyEventAction_update(ReleaseTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void ReleaseTouchInputToGameKeyEventAction_staticInit(void) {
    ReleaseTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void ReleaseTouchInputToGameKeyEventAction_initFields(ReleaseTouchInputToGameKeyEventAction* this) {
    this->NONE = GameKeyFactory_getInstance()->NONE;
}


GameKeyCompleteMotionGestureInputEvent* ReleaseTouchInputToGameKeyEventAction_getInstance(void) {
        if (ReleaseTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            ReleaseTouchInputToGameKeyEventAction_instance = ReleaseTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) ReleaseTouchInputToGameKeyEventAction_instance);
}


void ReleaseTouchInputToGameKeyEventAction_init(ReleaseTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Release Action", TouchMotionGestureFactory_getInstance()->RELEASED, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
        ReleaseTouchInputToGameKeyEventAction_initFields(this);
        JAVA_TRY {
            ReleaseTouchInputToGameKeyEventAction_setGameKey(this, this->NONE);
            ReleaseTouchInputToGameKeyEventAction_setGameKeyEvent(this, GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->NONE));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            JAVA_CALL(this->logUtil, put, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

ReleaseTouchInputToGameKeyEventAction* ReleaseTouchInputToGameKeyEventAction_new(void) {
    ReleaseTouchInputToGameKeyEventAction* this = calloc(1, sizeof(ReleaseTouchInputToGameKeyEventAction));
    ReleaseTouchInputToGameKeyEventAction_init(this);
    return this;
}


void ReleaseTouchInputToGameKeyEventAction_update(ReleaseTouchInputToGameKeyEventAction* this) {
}

