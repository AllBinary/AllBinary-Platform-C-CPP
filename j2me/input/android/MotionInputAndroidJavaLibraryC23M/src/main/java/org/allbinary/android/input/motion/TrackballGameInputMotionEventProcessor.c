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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/view/MotionEvent.h"
#include "org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/input/motion/trackball/action/DownTrackballInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/trackball/action/LeftTrackballInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/trackball/action/RightTrackballInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/trackball/action/UpTrackballInputToGameKeyEventAction.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/android/input/motion/MotionEventProcessor.h"

typedef struct TrackballGameInputMotionEventProcessor TrackballGameInputMotionEventProcessor;
struct TrackballGameInputMotionEventProcessor {
    MotionEventProcessor base;
    LogUtil* logUtil;
    SingleKeyPressGameKeyFromMotionGestureEventListener* listener;
    CommonStrings* commonStrings;
};

static TrackballGameInputMotionEventProcessor* TrackballGameInputMotionEventProcessor_PROCESSOR;

TrackballGameInputMotionEventProcessor* TrackballGameInputMotionEventProcessor_new(void);
TrackballGameInputMotionEventProcessor* TrackballGameInputMotionEventProcessor_getInstance(void);

void TrackballGameInputMotionEventProcessor_init(TrackballGameInputMotionEventProcessor* this);
void TrackballGameInputMotionEventProcessor_process(TrackballGameInputMotionEventProcessor* this, MotionEvent* motionEvent);

// Static fields with runtime initializers: call this once at startup
void TrackballGameInputMotionEventProcessor_staticInit(void) {
    TrackballGameInputMotionEventProcessor_PROCESSOR = TrackballGameInputMotionEventProcessor_new();
}

static void TrackballGameInputMotionEventProcessor_initFields(TrackballGameInputMotionEventProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->listener = SingleKeyPressGameKeyFromMotionGestureEventListener_new();
    this->commonStrings = CommonStrings_getInstance();
}


TrackballGameInputMotionEventProcessor* TrackballGameInputMotionEventProcessor_getInstance(void) {
        return TrackballGameInputMotionEventProcessor_PROCESSOR;
}


void TrackballGameInputMotionEventProcessor_init(TrackballGameInputMotionEventProcessor* this) {
    MotionEventProcessor_init(&this->base);
    TrackballGameInputMotionEventProcessor_initFields(this);
}

TrackballGameInputMotionEventProcessor* TrackballGameInputMotionEventProcessor_new(void) {
    TrackballGameInputMotionEventProcessor* this = calloc(1, sizeof(TrackballGameInputMotionEventProcessor));
    TrackballGameInputMotionEventProcessor_init(this);
    return this;
}


void TrackballGameInputMotionEventProcessor_process(TrackballGameInputMotionEventProcessor* this, MotionEvent* motionEvent) {
        JAVA_TRY {
            float x = MotionEvent_getX(motionEvent);
            float y = MotionEvent_getY(motionEvent);
            if (x < 0.0f) {
                SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(this->listener, LeftTrackballInputToGameKeyEventAction_getInstance());
            } else if (x > 0.0f) {
                SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(this->listener, RightTrackballInputToGameKeyEventAction_getInstance());
            }
            if (y < 0.0f) {
                SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(this->listener, UpTrackballInputToGameKeyEventAction_getInstance());
            } else if (y > 0.0f) {
                SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(this->listener, DownTrackballInputToGameKeyEventAction_getInstance());
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

