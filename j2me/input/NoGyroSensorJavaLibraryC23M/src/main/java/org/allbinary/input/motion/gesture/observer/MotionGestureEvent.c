// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif


static const char* MotionGestureEvent_PREVIOUS = " Previous: ";
static const char* MotionGestureEvent_HASHCODE = " hashcode: ";










void MotionGestureEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionGestureEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureEvent", "AllBinaryEventObject");
    java_register_method("MotionGestureEvent", "getMotionGesture", (void*) MotionGestureEvent_getMotionGesture);
    java_register_method("MotionGestureEvent", "setMotionGesture", (void*) MotionGestureEvent_setMotionGesture);
    java_register_method("MotionGestureEvent", "getPreviousPoint", (void*) MotionGestureEvent_getPreviousPoint);
    java_register_method("MotionGestureEvent", "setPreviousPoint", (void*) MotionGestureEvent_setPreviousPoint);
    java_register_method("MotionGestureEvent", "getCurrentPoint", (void*) MotionGestureEvent_getCurrentPoint);
    java_register_method("MotionGestureEvent", "setCurrentPoint", (void*) MotionGestureEvent_setCurrentPoint);
    java_register_method("MotionGestureEvent", "toString", (void*) MotionGestureEvent_toString);
    java_register_method("MotionGestureEvent", "getId", (void*) MotionGestureEvent_getId);
}

static void MotionGestureEvent_initFields(MotionGestureEvent* this) {
    this->motionGesture = TouchMotionGestureFactory_getInstance()->NO_MOTION;
    
    this->previousPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->currentPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->commonLabels = CommonLabels_getInstance();
}


void MotionGestureEvent_init(MotionGestureEvent* this, void* source, int32_t id, MotionGestureInput* motionGesture) {
    MotionGestureEvent_register();
        AllBinaryEventObject_init(&this->base, source);
        MotionGestureEvent_initFields(this);
        this->id = id;
        MotionGestureEvent_setMotionGesture(this, motionGesture);
}

MotionGestureEvent* MotionGestureEvent_new(void* source, int32_t id, MotionGestureInput* motionGesture) {
    MotionGestureEvent* this = java_object_alloc(sizeof(MotionGestureEvent), "MotionGestureEvent");
    MotionGestureEvent_init(this, source, id, motionGesture);
    return this;
}


MotionGestureInput* MotionGestureEvent_getMotionGesture(MotionGestureEvent* this) {
        return this->motionGesture;
}


void MotionGestureEvent_setMotionGesture(MotionGestureEvent* this, MotionGestureInput* motionGesture) {
        this->motionGesture = motionGesture;
}


GPoint* MotionGestureEvent_getPreviousPoint(MotionGestureEvent* this) {
        return this->previousPoint;
}


void MotionGestureEvent_setPreviousPoint(MotionGestureEvent* this, GPoint* previousPoint) {
        this->previousPoint = previousPoint;
}


GPoint* MotionGestureEvent_getCurrentPoint(MotionGestureEvent* this) {
        return this->currentPoint;
}


void MotionGestureEvent_setCurrentPoint(MotionGestureEvent* this, GPoint* currentPoint) {
        this->currentPoint = currentPoint;
}


const char* MotionGestureEvent_toString(MotionGestureEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->motionGesture));
        StringMaker_append(stringBuffer, this->commonLabels->CURRENT);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->currentPoint));
        StringMaker_append(stringBuffer, MotionGestureEvent_PREVIOUS);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->previousPoint));
        StringMaker_append(stringBuffer, MotionGestureEvent_HASHCODE);
        StringMaker_appendint(stringBuffer, TsUtil_hashCode(TsUtil_getInstance(), this));
        return java_string_of(stringBuffer);
}


int32_t MotionGestureEvent_getId(MotionGestureEvent* this) {
        return this->id;
}

