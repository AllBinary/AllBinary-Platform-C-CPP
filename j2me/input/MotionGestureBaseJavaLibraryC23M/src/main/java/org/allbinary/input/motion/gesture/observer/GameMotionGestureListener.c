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

typedef struct GameMotionGestureListener GameMotionGestureListener;
struct GameMotionGestureListener {
    MotionGestureEventListener MotionGestureEventListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* motionGestureCollection;
    BasicArrayList* touchGestureCollection;
    CompleteMotionGestureListenerInterface* signed_;
};


GameMotionGestureListener* GameMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_);

void GameMotionGestureListener_init(GameMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_);
void GameMotionGestureListener_onEvent(GameMotionGestureListener* this, AllBinaryEventObject* eventObject);
void GameMotionGestureListener_onUpMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onDownMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onDiagonalDownRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onDiagonalDownLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onDiagonalUpRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onDiagonalUpLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onPressedMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_released(GameMotionGestureListener* this, MotionGestureEvent* ev);
void GameMotionGestureListener_onScrolledMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* motionGestureEvent);
void GameMotionGestureListener_onMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

static void GameMotionGestureListener_initFields(GameMotionGestureListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->motionGestureCollection = BasicArrayListD_new();
    this->touchGestureCollection = BasicArrayListD_new();
    
}


void GameMotionGestureListener_init(GameMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_) {
    GameMotionGestureListener_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->signed_ = signed_;
}

GameMotionGestureListener* GameMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_) {
    GameMotionGestureListener* this = calloc(1, sizeof(GameMotionGestureListener));
    GameMotionGestureListener_init(this, signed_);
    return this;
}


void GameMotionGestureListener_onEvent(GameMotionGestureListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}


void GameMotionGestureListener_onUpMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onDownMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onDiagonalDownRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onDiagonalDownLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onDiagonalUpRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onDiagonalUpLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        GameMotionGestureListener_onMotionGestureEvent(this, ev);
}


void GameMotionGestureListener_onPressedMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        BasicArrayList_add(this->touchGestureCollection, MotionGestureEvent_getMotionGesture(ev));
}


void GameMotionGestureListener_released(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        JAVA_TRY {
            BasicArrayList_add(this->touchGestureCollection, MotionGestureEvent_getMotionGesture(ev));
            CompleteMotionGestureListenerInterface_onMotionGestureCompleted(this->signed_, this->touchGestureCollection);
            BasicArrayList_clear(this->touchGestureCollection);
        } JAVA_CATCH(Exception, e) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->commonStrings->EXCEPTION_LABEL);
            StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), MotionGestureEvent_getMotionGesture(ev)));
            LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, "release", e);
        } JAVA_END_TRY;
}


void GameMotionGestureListener_onScrolledMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* motionGestureEvent) {
}


void GameMotionGestureListener_onMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev) {
        JAVA_TRY {
            MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(ev);
            if (motionGestureInput == TouchMotionGestureFactory_getInstance()->PRESSED) {
                GameMotionGestureListener_onPressedMotionGestureEvent(this, ev);
            } else if (motionGestureInput == TouchMotionGestureFactory_getInstance()->RELEASED) {
                GameMotionGestureListener_released(this, ev);
            } else {
                BasicArrayList_add(this->motionGestureCollection, motionGestureInput);
                CompleteMotionGestureListenerInterface_onMotionGestureCompleted(this->signed_, this->motionGestureCollection);
                BasicArrayList_clear(this->motionGestureCollection);
                BasicArrayList_clear(this->touchGestureCollection);
            }
        } JAVA_CATCH(Exception, e) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->commonStrings->EXCEPTION_LABEL);
            StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), MotionGestureEvent_getMotionGesture(ev)));
            LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, "onMotionGestureEvent", e);
        } JAVA_END_TRY;
}

