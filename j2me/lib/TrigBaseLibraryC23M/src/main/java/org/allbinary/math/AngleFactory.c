// Generated Code Do Not Modify
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/NamedAngle.h"
#include "org/allbinary/math/FrameUtil.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif


static AngleFactory* AngleFactory_instance;







void AngleFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AngleFactory_instance = AngleFactory_new();
}

void AngleFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AngleFactory", nullptr);
    java_register_method("AngleFactory", "getAt", (void*) AngleFactory_getAt);
    java_register_method("AngleFactory", "getClosestDirection", (void*) AngleFactory_getClosestDirection);
    java_register_method("AngleFactory", "getGeneralDirection", (void*) AngleFactory_getGeneralDirection);
}

static void AngleFactory_initFields(AngleFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->TOTAL_ANGLE = 360;
    this->QUARTER_TOTAL_ANGLE = 90;
    this->angleArray = ((Angle**) java_array_new(sizeof(Angle*), ((int32_t) this->TOTAL_ANGLE)));
    this->NEGATIVE_ONE = ((int16_t) (-1));
    this->NOT_ANGLE = NamedAngle_new(this->NEGATIVE_ONE, CommonStrings_getInstance()->EMPTY);
    
    
    
    
    this->frameUtil = FrameUtil_getInstance();
}


AngleFactory* AngleFactory_getInstance(void) {
        return (AngleFactory_staticInit(), AngleFactory_instance);
}


void AngleFactory_init(AngleFactory* this) {
    AngleFactory_register();
    AngleFactory_initFields(this);
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        int16_t total = ((int16_t) java_array_length(this->angleArray));
        this->UP = NamedAngle_new(((int16_t) 0), commonPhoneStrings->UP);
        this->angleArray[0] = this->UP;
        for (int32_t index = 1; index < 90; index++) {
            this->angleArray[index] = Angle_new(((int16_t) index));
        }
        this->RIGHT = NamedAngle_new(((int16_t) 90), commonPhoneStrings->RIGHT);
        this->angleArray[90] = this->RIGHT;
        for (int32_t index = 91; index < 180; index++) {
            this->angleArray[index] = Angle_new(((int16_t) index));
        }
        this->DOWN = NamedAngle_new(((int16_t) 180), commonPhoneStrings->DOWN);
        this->angleArray[180] = this->DOWN;
        for (int32_t index = 181; index < 270; index++) {
            this->angleArray[index] = Angle_new(((int16_t) index));
        }
        this->LEFT = NamedAngle_new(((int16_t) 270), commonPhoneStrings->LEFT);
        this->angleArray[270] = this->LEFT;
        for (int32_t index = 271; index < ((int32_t) total); index++) {
            this->angleArray[index] = Angle_new(((int16_t) index));
        }
}

AngleFactory* AngleFactory_new(void) {
    AngleFactory* this = java_object_alloc(sizeof(AngleFactory), "AngleFactory");
    AngleFactory_init(this);
    return this;
}


Angle* AngleFactory_getAt(AngleFactory* this, int32_t index) {
        int32_t adjustedIndex = FrameUtil_adjustAngleToFrameAngle(this->frameUtil, index);
        return this->angleArray[adjustedIndex];
}


Angle* AngleFactory_getClosestDirection(AngleFactory* this, int32_t angle) {
        if ((angle >= 315 && angle < 360) || (angle >= 0 && angle < 45)) {
            return this->UP;
        } else if (angle >= 45 && angle < 135) {
            return this->RIGHT;
        } else if (angle >= 135 && angle < 225) {
            return this->DOWN;
        } else if (angle >= 225 && angle < 315) {
            return this->LEFT;
        }
        java_throw(java_exception_new("RuntimeException", ""));
}


Angle* AngleFactory_getGeneralDirection(AngleFactory* this) {
        return this->NOT_ANGLE;
}


void AngleFactory_main(const char** args) {
        StringMaker* stringMaker = StringMaker_new();
        AngleFactory* angleFactory = AngleFactory_getInstance();
        for (int32_t index = 0; index < 360; index++) {
            StringMaker_append(StringMaker_appendshort(StringMaker_append(StringMaker_appendint(stringMaker, index), CommonSeps_getInstance()->FORWARD_SLASH), Angle_getValue(AngleFactory_getClosestDirection(angleFactory, index))), CommonSeps_getInstance()->NEW_LINE);
        }
        LogUtil_putF(LogUtil_getInstance(), java_string_of(stringMaker), "main", "main");
}

