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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h"

typedef struct ReleaseControlledMotionGestureListener ReleaseControlledMotionGestureListener;
struct ReleaseControlledMotionGestureListener {
    MotionGestureEventListener MotionGestureEventListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    MotionGestureInput* currentMotionGesture;
    bool isMouseGestureOccurring;
    BasicArrayList* motionGestureCollection;
    CompleteMotionGestureListenerInterface* signed_;
};


ReleaseControlledMotionGestureListener* ReleaseControlledMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_);

void ReleaseControlledMotionGestureListener_init(ReleaseControlledMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_);
void ReleaseControlledMotionGestureListener_onEvent(ReleaseControlledMotionGestureListener* this, AllBinaryEventObject* eventObject);
void ReleaseControlledMotionGestureListener_onUpMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onDownMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onDiagonalDownRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onDiagonalDownLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onDiagonalUpRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onDiagonalUpLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onPressedMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onScrolledMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* motionGestureEvent);
void ReleaseControlledMotionGestureListener_released(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
void ReleaseControlledMotionGestureListener_onMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

static void ReleaseControlledMotionGestureListener_initFields(ReleaseControlledMotionGestureListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->currentMotionGesture = TouchMotionGestureFactory_getInstance()->NO_MOTION;
    this->isMouseGestureOccurring = false;
    this->motionGestureCollection = BasicArrayListD_new();
    
}


void ReleaseControlledMotionGestureListener_init(ReleaseControlledMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_) {
    ReleaseControlledMotionGestureListener_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->signed_ = signed_;
}

ReleaseControlledMotionGestureListener* ReleaseControlledMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_) {
    ReleaseControlledMotionGestureListener* this = calloc(1, sizeof(ReleaseControlledMotionGestureListener));
    ReleaseControlledMotionGestureListener_init(this, signed_);
    return this;
}


void ReleaseControlledMotionGestureListener_onEvent(ReleaseControlledMotionGestureListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}


void ReleaseControlledMotionGestureListener_onUpMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onDownMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onDiagonalDownRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onDiagonalDownLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onDiagonalUpRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onDiagonalUpLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onPressedMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        this->isMouseGestureOccurring = true;
        this->currentMotionGesture = TouchMotionGestureFactory_getInstance()->NO_MOTION;
        ReleaseControlledMotionGestureListener_onMotionGestureEvent(this, ev);
}


void ReleaseControlledMotionGestureListener_onScrolledMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* motionGestureEvent) {
}


void ReleaseControlledMotionGestureListener_released(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        JAVA_TRY {
            if (this->isMouseGestureOccurring == false) {
                return;
            }
            this->isMouseGestureOccurring = false;
            CompleteMotionGestureListenerInterface_onMotionGestureCompleted(this->signed_, this->motionGestureCollection);
            BasicArrayList_clear(this->motionGestureCollection);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), append, StringUtil_toString(StringUtil_getInstance(), MotionGestureEvent_getMotionGesture(ev))), toString), this, "release", e);
        } JAVA_END_TRY;
}


void ReleaseControlledMotionGestureListener_onMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev) {
        if (this->isMouseGestureOccurring == false) {
            return;
        }
        MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(ev);
        if (motionGestureInput == TouchMotionGestureFactory_getInstance()->PRESSED) {
            ReleaseControlledMotionGestureListener_onPressedMotionGestureEvent(this, ev);
        } else if (motionGestureInput == TouchMotionGestureFactory_getInstance()->RELEASED) {
            ReleaseControlledMotionGestureListener_released(this, ev);
        } else {
            if (this->currentMotionGesture != motionGestureInput) {
                this->currentMotionGesture = motionGestureInput;
                BasicArrayList_add(this->motionGestureCollection, MotionGestureEvent_getMotionGesture(ev));
            }
        }
}

