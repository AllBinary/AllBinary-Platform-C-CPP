// Generated Code Do Not Modify
#include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/FrameUtil.h"


static const char* AngleIncrementInfo_INCREMENT = "Inc: ";






void AngleIncrementInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AngleIncrementInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AngleIncrementInfo", nullptr);
    java_register_method("AngleIncrementInfo", "getFrameAngle", (void*) AngleIncrementInfo_getFrameAngle);
    java_register_method("AngleIncrementInfo", "getAngleIncrement", (void*) AngleIncrementInfo_getAngleIncrement);
    java_register_method("AngleIncrementInfo", "toString", (void*) AngleIncrementInfo_toString);
    java_register_method("AngleIncrementInfo", "getClosestGeneralDirection", (void*) AngleIncrementInfo_getClosestGeneralDirection);
}

static void AngleIncrementInfo_initFields(AngleIncrementInfo* this) {
    
    
    
    
    
    this->frameUtil = FrameUtil_getInstance();
}


void AngleIncrementInfo_init(AngleIncrementInfo* this, int16_t angleIncrement) {
    AngleIncrementInfo_register();
    AngleIncrementInfo_initFields(this);
        this->angleIncrement = angleIncrement;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        this->DOWN_FRAME = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Angle_getValue(angleFactory->DOWN) / this->angleIncrement);
        this->UP_FRAME = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, ((int32_t) Angle_getValue(angleFactory->UP)));
        this->LEFT_FRAME = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Angle_getValue(angleFactory->LEFT) / this->angleIncrement);
        this->RIGHT_FRAME = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Angle_getValue(angleFactory->RIGHT) / this->angleIncrement);
}

AngleIncrementInfo* AngleIncrementInfo_new(int16_t angleIncrement) {
    AngleIncrementInfo* this = java_object_alloc(sizeof(AngleIncrementInfo), "AngleIncrementInfo");
    AngleIncrementInfo_init(this, angleIncrement);
    return this;
}


int32_t AngleIncrementInfo_getFrameAngle(AngleIncrementInfo* this, int32_t frame) {
        return FrameUtil_getFrameAngle(this->frameUtil, frame, ((int32_t) this->angleIncrement));
}


int16_t AngleIncrementInfo_getAngleIncrement(AngleIncrementInfo* this) {
        return this->angleIncrement;
}


const char* AngleIncrementInfo_toString(AngleIncrementInfo* this) {
        return java_string_of(StringMaker_appendshort(StringMaker_append(StringMaker_new(), AngleIncrementInfo_INCREMENT), this->angleIncrement));
}


int32_t AngleIncrementInfo_getClosestGeneralDirection(AngleIncrementInfo* this, int16_t angle) {
        int32_t closestDirection = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 360);
        if (Integer_intValue(this->UP_FRAME) - angle < Integer_intValue(closestDirection) - angle) {
            closestDirection = this->UP_FRAME;
        }
        if (Integer_intValue(this->DOWN_FRAME) - angle < Integer_intValue(closestDirection) - angle) {
            closestDirection = this->DOWN_FRAME;
        }
        if (Integer_intValue(this->LEFT_FRAME) - angle < Integer_intValue(closestDirection) - angle) {
            closestDirection = this->LEFT_FRAME;
        }
        if (Integer_intValue(this->RIGHT_FRAME) - angle < Integer_intValue(closestDirection) - angle) {
            closestDirection = this->RIGHT_FRAME;
        }
        return Integer_intValue(closestDirection);
}

