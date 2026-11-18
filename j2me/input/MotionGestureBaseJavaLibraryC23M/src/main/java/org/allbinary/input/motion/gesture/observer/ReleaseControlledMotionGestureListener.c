// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/ReleaseControlledMotionGestureListener.h"
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
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif

















void ReleaseControlledMotionGestureListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ReleaseControlledMotionGestureListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ReleaseControlledMotionGestureListener", nullptr);
    java_register_method("ReleaseControlledMotionGestureListener", "onEvent", (void*) ReleaseControlledMotionGestureListener_onEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onUpMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onUpMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onDownMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onDownMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onLeftMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onLeftMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onRightMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onRightMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onDiagonalDownRightMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onDiagonalDownRightMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onDiagonalDownLeftMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onDiagonalDownLeftMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onDiagonalUpRightMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onDiagonalUpRightMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onDiagonalUpLeftMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onDiagonalUpLeftMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onPressedMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onPressedMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "onScrolledMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onScrolledMotionGestureEvent);
    java_register_method("ReleaseControlledMotionGestureListener", "released", (void*) ReleaseControlledMotionGestureListener_released);
    java_register_method("ReleaseControlledMotionGestureListener", "onMotionGestureEvent", (void*) ReleaseControlledMotionGestureListener_onMotionGestureEvent);
}

static void ReleaseControlledMotionGestureListener_initFields(ReleaseControlledMotionGestureListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->currentMotionGesture = TouchMotionGestureFactory_getInstance()->NO_MOTION;
    this->isMouseGestureOccurring = false;
    this->motionGestureCollection = BasicArrayListD_new();
    
}


void ReleaseControlledMotionGestureListener_init(ReleaseControlledMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_) {
    ReleaseControlledMotionGestureListener_register();
    ReleaseControlledMotionGestureListener_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->signed_ = signed_;
}

ReleaseControlledMotionGestureListener* ReleaseControlledMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_) {
    ReleaseControlledMotionGestureListener* this = java_object_alloc(sizeof(ReleaseControlledMotionGestureListener), "ReleaseControlledMotionGestureListener");
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
            LogUtil_put(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), StringUtil_toString(StringUtil_getInstance(), MotionGestureEvent_getMotionGesture(ev)))), this, "release", e);
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

