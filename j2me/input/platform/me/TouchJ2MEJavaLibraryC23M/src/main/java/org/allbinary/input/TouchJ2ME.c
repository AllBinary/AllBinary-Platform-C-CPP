// Generated Code Do Not Modify
#include "org/allbinary/input/TouchJ2ME.h"
#include "org/allbinary/input/motion/AllMotionRecognizer.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/input/MotionGestureRecognizer.h")
#include "org/allbinary/input/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/input/motion/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/MotionGestureRecognizer.h")
#include "org/allbinary/logic/communication/log/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/string/MotionGestureRecognizer.h")
#include "org/allbinary/string/MotionGestureRecognizer.h"
#endif







void TouchJ2ME_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchJ2ME_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchJ2ME", nullptr);
    java_register_method("TouchJ2ME", "pointerDragged", (void*) TouchJ2ME_pointerDragged);
    java_register_method("TouchJ2ME", "pointerPressed", (void*) TouchJ2ME_pointerPressed);
    java_register_method("TouchJ2ME", "pointerReleased", (void*) TouchJ2ME_pointerReleased);
}

static void TouchJ2ME_initFields(TouchJ2ME* this) {
    this->logUtil = LogUtil_getInstance();
    this->DEVICE_ID = 0;
    this->motionRecognizer = AllMotionRecognizer_new();
}


void TouchJ2ME_init(TouchJ2ME* this) {
    TouchJ2ME_register();
    TouchJ2ME_initFields(this);
        BasicMotionGesturesHandler* motionGesturesHandler = MotionGestureRecognizer_getMotionGesturesHandler(AllMotionRecognizer_getMotionGestureRecognizer(this->motionRecognizer));
        BasicEventHandler_addListenerInterface(motionGesturesHandler, GameMotionGestureListener_new(MotionGestureReceiveInterfaceFactory_getInstance()));
}

TouchJ2ME* TouchJ2ME_new(void) {
    TouchJ2ME* this = java_object_alloc(sizeof(TouchJ2ME), "TouchJ2ME");
    TouchJ2ME_init(this);
    return this;
}


void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y) {
        JAVA_TRY {
            AllMotionRecognizer_processDraggedMotionEvent(this->motionRecognizer, x, y, this->DEVICE_ID, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "pointerDragged", e);
        } JAVA_END_TRY;
}


void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y) {
        JAVA_TRY {
            AllMotionRecognizer_processStartMotionEvent(this->motionRecognizer, x, y, this->DEVICE_ID, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "pointerPressed", e);
        } JAVA_END_TRY;
}


void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y) {
        JAVA_TRY {
            AllMotionRecognizer_processEndMotionEvent(this->motionRecognizer, x, y, this->DEVICE_ID, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "pointerReleased", e);
        } JAVA_END_TRY;
}

