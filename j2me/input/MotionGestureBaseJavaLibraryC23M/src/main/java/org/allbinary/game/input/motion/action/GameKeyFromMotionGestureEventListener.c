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
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameKeyFromMotionGestureEventListener GameKeyFromMotionGestureEventListener;
struct GameKeyFromMotionGestureEventListener {
    CompleteMotionGestureInputEventListener base;
    LogUtil* logUtil;
    GameKeyEvent* previousGameKeyEvent;
};


GameKeyFromMotionGestureEventListener* GameKeyFromMotionGestureEventListener_new(void);
void GameKeyFromMotionGestureEventListener_onEvent(GameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject);
void GameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(GameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

static void GameKeyFromMotionGestureEventListener_initFields(GameKeyFromMotionGestureEventListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->previousGameKeyEvent = GameKeyEvent_NONE;
}

void GameKeyFromMotionGestureEventListener_init(GameKeyFromMotionGestureEventListener* this) {
    CompleteMotionGestureInputEventListener_init(&this->base);
    GameKeyFromMotionGestureEventListener_initFields(this);
}

GameKeyFromMotionGestureEventListener* GameKeyFromMotionGestureEventListener_new(void) {
    GameKeyFromMotionGestureEventListener* this = calloc(1, sizeof(GameKeyFromMotionGestureEventListener));
    GameKeyFromMotionGestureEventListener_init(this);
    return this;
}


void GameKeyFromMotionGestureEventListener_onEvent(GameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void GameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(GameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
        JAVA_TRY {
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) completeMotionGestureInputEvent);
            GameKeyEvent* gameKeyEvent = GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(gameKeyCompleteMotionGestureInputEvent);
            if (gameKeyEvent != this->previousGameKeyEvent) {
                if (this->previousGameKeyEvent != GameKeyEvent_NONE) {
                    UpGameKeyEventHandler_fireEvent(UpGameKeyEventHandler_getInstance(), this->previousGameKeyEvent);
                }
                this->previousGameKeyEvent = gameKeyEvent;
                if (gameKeyEvent != nullptr && gameKeyEvent != GameKeyEvent_NONE) {
                    DownGameKeyEventHandler_fireEvent(DownGameKeyEventHandler_getInstance(), gameKeyEvent);
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "onCompleteMotionGestureInputEvent", e);
        } JAVA_END_TRY;
}

