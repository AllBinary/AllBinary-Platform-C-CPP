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
// package org.allbinary.game.input.motion.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListener.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct SingleKeyPressGameKeyFromMotionGestureEventListener SingleKeyPressGameKeyFromMotionGestureEventListener;
struct SingleKeyPressGameKeyFromMotionGestureEventListener {
    CompleteMotionGestureInputEventListener base;
    LogUtil* logUtil;
};


SingleKeyPressGameKeyFromMotionGestureEventListener* SingleKeyPressGameKeyFromMotionGestureEventListener_new(void);
void SingleKeyPressGameKeyFromMotionGestureEventListener_onEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject);
void SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

static void SingleKeyPressGameKeyFromMotionGestureEventListener_initFields(SingleKeyPressGameKeyFromMotionGestureEventListener* this) {
    this->logUtil = LogUtil_getInstance();
}

void SingleKeyPressGameKeyFromMotionGestureEventListener_init(SingleKeyPressGameKeyFromMotionGestureEventListener* this) {
    CompleteMotionGestureInputEventListener_init(&this->base);
    SingleKeyPressGameKeyFromMotionGestureEventListener_initFields(this);
}

SingleKeyPressGameKeyFromMotionGestureEventListener* SingleKeyPressGameKeyFromMotionGestureEventListener_new(void) {
    SingleKeyPressGameKeyFromMotionGestureEventListener* this = calloc(1, sizeof(SingleKeyPressGameKeyFromMotionGestureEventListener));
    SingleKeyPressGameKeyFromMotionGestureEventListener_init(this);
    return this;
}


void SingleKeyPressGameKeyFromMotionGestureEventListener_onEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
        JAVA_TRY {
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) completeMotionGestureInputEvent);
            GameKeyEvent* gameKeyEvent = GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(gameKeyCompleteMotionGestureInputEvent);
            PressGameKeyEventHandler_fireEvent(PressGameKeyEventHandler_getInstance(), gameKeyEvent);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "onCompleteMotionGestureInputEvent", e);
        } JAVA_END_TRY;
}

