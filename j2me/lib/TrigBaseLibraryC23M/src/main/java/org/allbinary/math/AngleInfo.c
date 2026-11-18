// Generated Code Do Not Modify
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/math/AngleIncrementInfoFactory.h"
#include "org/allbinary/math/FrameUtil.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static const char* AngleInfo_ANGLE = "Angle: ";








void AngleInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AngleInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AngleInfo", nullptr);
    java_register_method("AngleInfo", "adjustAngle", (void*) AngleInfo_adjustAngle);
    java_register_method("AngleInfo", "getAngle", (void*) AngleInfo_getAngle);
    java_register_method("AngleInfo", "setAngle", (void*) AngleInfo_setAngle);
    java_register_method("AngleInfo", "getAngleIncrementInfo", (void*) AngleInfo_getAngleIncrementInfo);
    java_register_method("AngleInfo", "toString", (void*) AngleInfo_toString);
}

static void AngleInfo_initFields(AngleInfo* this) {
    
    this->angle = 0;
    this->frameUtil = FrameUtil_getInstance();
}


AngleInfo* AngleInfo_getInstance(int16_t angleIncrement) {
        return AngleInfo_new(AngleIncrementInfoFactory_getAt(AngleIncrementInfoFactory_getInstance(), angleIncrement));
}


void AngleInfo_init(AngleInfo* this, AngleIncrementInfo* angleIncrementInfo) {
    AngleInfo_register();
    AngleInfo_initFields(this);
        this->angleIncrementInfo = angleIncrementInfo;
}

AngleInfo* AngleInfo_new(AngleIncrementInfo* angleIncrementInfo) {
    AngleInfo* this = java_object_alloc(sizeof(AngleInfo), "AngleInfo");
    AngleInfo_init(this, angleIncrementInfo);
    return this;
}


void AngleInfo_adjustAngle(AngleInfo* this, int32_t frame) {
        int32_t newAngle = ((int32_t) AngleIncrementInfo_getAngleIncrement(this->angleIncrementInfo)) * frame - 90;
        AngleInfo_setAngle(this, ((int16_t) FrameUtil_adjustAngleToFrameAngle(this->frameUtil, newAngle)));
}


int16_t AngleInfo_getAngle(AngleInfo* this) {
        return this->angle;
}


void AngleInfo_setAngle(AngleInfo* this, int16_t angle) {
        this->angle = angle;
}


AngleIncrementInfo* AngleInfo_getAngleIncrementInfo(AngleInfo* this) {
        return this->angleIncrementInfo;
}


const char* AngleInfo_toString(AngleInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, AngleInfo_ANGLE);
        StringMaker_appendshort(stringBuffer, this->angle);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), AngleInfo_getAngleIncrementInfo(this)));
        return java_string_of(stringBuffer);
}

