// Generated Code Do Not Modify
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif








void CompleteMotionGestureInputEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompleteMotionGestureInputEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompleteMotionGestureInputEvent", "AllBinaryEventObject");
    java_register_method("CompleteMotionGestureInputEvent", "setName", (void*) CompleteMotionGestureInputEvent_setName);
    java_register_method("CompleteMotionGestureInputEvent", "getName", (void*) CompleteMotionGestureInputEvent_getName);
    java_register_method("CompleteMotionGestureInputEvent", "setMotionGestureInput", (void*) CompleteMotionGestureInputEvent_setMotionGestureInput);
    java_register_method("CompleteMotionGestureInputEvent", "getMotionGestureInput", (void*) CompleteMotionGestureInputEvent_getMotionGestureInput);
}

static void CompleteMotionGestureInputEvent_initFields(CompleteMotionGestureInputEvent* this) {
    this->logUtil = LogUtil_getInstance();
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->motionGestureInput = TouchMotionGestureFactory_getInstance()->NO_MOTION;
}


void CompleteMotionGestureInputEvent_init(CompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput) {
    CompleteMotionGestureInputEvent_register();
        AllBinaryEventObject_init(&this->base, motionGestureInput);
        CompleteMotionGestureInputEvent_initFields(this);
        CompleteMotionGestureInputEvent_setName(this, name);
        JAVA_TRY {
            CompleteMotionGestureInputEvent_setMotionGestureInput(this, motionGestureInput);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "InputToGameKeyEventAction", e);
        } JAVA_END_TRY;
}

CompleteMotionGestureInputEvent* CompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput) {
    CompleteMotionGestureInputEvent* this = java_object_alloc(sizeof(CompleteMotionGestureInputEvent), "CompleteMotionGestureInputEvent");
    CompleteMotionGestureInputEvent_init(this, name, motionGestureInput);
    return this;
}


void CompleteMotionGestureInputEvent_setName(CompleteMotionGestureInputEvent* this, const char* name) {
        this->name = name;
}


const char* CompleteMotionGestureInputEvent_getName(CompleteMotionGestureInputEvent* this) {
        return this->name;
}


void CompleteMotionGestureInputEvent_setMotionGestureInput(CompleteMotionGestureInputEvent* this, MotionGestureInput* motionGestureInput) {
        this->motionGestureInput = motionGestureInput;
}


MotionGestureInput* CompleteMotionGestureInputEvent_getMotionGestureInput(CompleteMotionGestureInputEvent* this) {
        return this->motionGestureInput;
}

