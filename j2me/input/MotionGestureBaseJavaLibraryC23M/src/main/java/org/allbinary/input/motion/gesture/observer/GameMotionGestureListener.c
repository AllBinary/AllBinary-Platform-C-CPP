// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h"
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
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif

















void GameMotionGestureListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameMotionGestureListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameMotionGestureListener", nullptr);
    java_register_method("GameMotionGestureListener", "onEvent", (void*) GameMotionGestureListener_onEvent);
    java_register_method("GameMotionGestureListener", "onUpMotionGestureEvent", (void*) GameMotionGestureListener_onUpMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onDownMotionGestureEvent", (void*) GameMotionGestureListener_onDownMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onLeftMotionGestureEvent", (void*) GameMotionGestureListener_onLeftMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onRightMotionGestureEvent", (void*) GameMotionGestureListener_onRightMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onDiagonalDownRightMotionGestureEvent", (void*) GameMotionGestureListener_onDiagonalDownRightMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onDiagonalDownLeftMotionGestureEvent", (void*) GameMotionGestureListener_onDiagonalDownLeftMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onDiagonalUpRightMotionGestureEvent", (void*) GameMotionGestureListener_onDiagonalUpRightMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onDiagonalUpLeftMotionGestureEvent", (void*) GameMotionGestureListener_onDiagonalUpLeftMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onPressedMotionGestureEvent", (void*) GameMotionGestureListener_onPressedMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "released", (void*) GameMotionGestureListener_released);
    java_register_method("GameMotionGestureListener", "onScrolledMotionGestureEvent", (void*) GameMotionGestureListener_onScrolledMotionGestureEvent);
    java_register_method("GameMotionGestureListener", "onMotionGestureEvent", (void*) GameMotionGestureListener_onMotionGestureEvent);
}

static void GameMotionGestureListener_initFields(GameMotionGestureListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->motionGestureCollection = BasicArrayListD_new();
    this->touchGestureCollection = BasicArrayListD_new();
    
}


void GameMotionGestureListener_init(GameMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_) {
    GameMotionGestureListener_register();
    GameMotionGestureListener_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->signed_ = signed_;
}

GameMotionGestureListener* GameMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_) {
    GameMotionGestureListener* this = java_object_alloc(sizeof(GameMotionGestureListener), "GameMotionGestureListener");
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
            LogUtil_put(this->logUtil, java_string_of(stringBuffer), this, "release", e);
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
            LogUtil_put(this->logUtil, java_string_of(stringBuffer), this, "onMotionGestureEvent", e);
        } JAVA_END_TRY;
}

