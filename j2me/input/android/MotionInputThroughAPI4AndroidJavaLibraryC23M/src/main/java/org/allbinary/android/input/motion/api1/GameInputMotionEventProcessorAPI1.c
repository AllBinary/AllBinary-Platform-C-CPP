/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2009 AllBinary
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
// package org.allbinary.android.input.motion.api1

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/view/MotionEvent.h"
#include "org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h"
#include "org/allbinary/input/motion/AllMotionRecognizer.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct GameInputMotionEventProcessorAPI1 GameInputMotionEventProcessorAPI1;
struct GameInputMotionEventProcessorAPI1 {
    BaseGameInputMotionEventProcessor base;
    LogUtil* logUtil;
    MotionRecognizer* motionRecognizer;
};

static Any* GameInputMotionEventProcessorAPI1_instance;

GameInputMotionEventProcessorAPI1* GameInputMotionEventProcessorAPI1_new(void);
GameInputMotionEventProcessorAPI1* GameInputMotionEventProcessorAPI1_getInstance(void);

void GameInputMotionEventProcessorAPI1_init(GameInputMotionEventProcessorAPI1* this);
void GameInputMotionEventProcessorAPI1_process(GameInputMotionEventProcessorAPI1* this, MotionEvent* motionEvent);

// Static fields with runtime initializers: call this once at startup
void GameInputMotionEventProcessorAPI1_staticInit(void) {
    GameInputMotionEventProcessorAPI1_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameInputMotionEventProcessorAPI1_initFields(GameInputMotionEventProcessorAPI1* this) {
    this->logUtil = LogUtil_getInstance();
    this->motionRecognizer = AllMotionRecognizer_new();
}


GameInputMotionEventProcessorAPI1* GameInputMotionEventProcessorAPI1_getInstance(void) {
        if (GameInputMotionEventProcessorAPI1_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameInputMotionEventProcessorAPI1_instance = GameInputMotionEventProcessorAPI1_new();
        }
        return ((GameInputMotionEventProcessorAPI1*) GameInputMotionEventProcessorAPI1_instance);
}


void GameInputMotionEventProcessorAPI1_init(GameInputMotionEventProcessorAPI1* this) {
    BaseGameInputMotionEventProcessor_init(&this->base);
    GameInputMotionEventProcessorAPI1_initFields(this);
}

GameInputMotionEventProcessorAPI1* GameInputMotionEventProcessorAPI1_new(void) {
    GameInputMotionEventProcessorAPI1* this = calloc(1, sizeof(GameInputMotionEventProcessorAPI1));
    GameInputMotionEventProcessorAPI1_init(this);
    return this;
}


void GameInputMotionEventProcessorAPI1_process(GameInputMotionEventProcessorAPI1* this, MotionEvent* motionEvent) {
        JAVA_TRY {
            int32_t x = ((int32_t) MotionEvent_getX(motionEvent));
            int32_t y = ((int32_t) MotionEvent_getY(motionEvent));
            int32_t action = MotionEvent_getAction(motionEvent);
            if (action == MotionEvent_ACTION_DOWN) {
                MotionRecognizer_processStartMotionEvent(this->motionRecognizer, x, y, MotionEvent_getDeviceId(motionEvent), 0);
            } else if (action == MotionEvent_ACTION_UP || action == MotionEvent_ACTION_CANCEL) {
                MotionRecognizer_processEndMotionEvent(this->motionRecognizer, x, y, MotionEvent_getDeviceId(motionEvent), 0);
            } else if (action == MotionEvent_ACTION_MOVE) {
                MotionRecognizer_processDraggedMotionEvent(this->motionRecognizer, x, y, MotionEvent_getDeviceId(motionEvent), 0);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

