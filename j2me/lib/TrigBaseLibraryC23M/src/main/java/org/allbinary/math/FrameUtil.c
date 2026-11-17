// Generated Code Do Not Modify
#include "org/allbinary/math/FrameUtil.h"
#include "org/allbinary/math/AngleFactory.h"


static FrameUtil* FrameUtil_instance;






void FrameUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FrameUtil_instance = FrameUtil_new();
}

void FrameUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FrameUtil", nullptr);
    java_register_method("FrameUtil", "getFrameForAngle", (void*) FrameUtil_getFrameForAngle);
    java_register_method("FrameUtil", "getFrameAngle", (void*) FrameUtil_getFrameAngle);
    java_register_method("FrameUtil", "adjustAngleToFrameAngle", (void*) FrameUtil_adjustAngleToFrameAngle);
}


FrameUtil* FrameUtil_getInstance(void) {
        return (FrameUtil_staticInit(), FrameUtil_instance);
}


void FrameUtil_init(FrameUtil* this) {
    FrameUtil_register();
}

FrameUtil* FrameUtil_new(void) {
    FrameUtil* this = java_object_alloc(sizeof(FrameUtil), "FrameUtil");
    FrameUtil_init(this);
    return this;
}


int32_t FrameUtil_getFrameForAngle(FrameUtil* this, int16_t angle, int32_t angleIncrement) {
        return FrameUtil_adjustAngleToFrameAngle(this, ((int32_t) angle)) / angleIncrement;
}


int32_t FrameUtil_getFrameAngle(FrameUtil* this, int32_t frame, int32_t angleIncrement) {
        int32_t frameAngle = angleIncrement * frame - 90;
        return FrameUtil_adjustAngleToFrameAngle(this, frameAngle);
}


int32_t FrameUtil_adjustAngleToFrameAngle(FrameUtil* this, int32_t currentAngle) {
        AngleFactory* angleFactory = AngleFactory_getInstance();
        if (currentAngle > 359) {
            currentAngle = (currentAngle - ((int32_t) angleFactory->TOTAL_ANGLE));
            while (currentAngle > 359) {
                currentAngle = (currentAngle - ((int32_t) angleFactory->TOTAL_ANGLE));
            }
        }
        if (currentAngle < 0) {
            currentAngle = (currentAngle + ((int32_t) angleFactory->TOTAL_ANGLE));
            while (currentAngle < 0) {
                currentAngle = (currentAngle + ((int32_t) angleFactory->TOTAL_ANGLE));
            }
        }
        return currentAngle;
}

