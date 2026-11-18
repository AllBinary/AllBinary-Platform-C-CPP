// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenType.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static TouchScreenFactory* TouchScreenFactory_SINGLETON;












void TouchScreenFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchScreenFactory_SINGLETON = TouchScreenFactory_new();
}

void TouchScreenFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchScreenFactory", nullptr);
    java_register_method("TouchScreenFactory", "setMultiTouch", (void*) TouchScreenFactory_setMultiTouch);
    java_register_method("TouchScreenFactory", "isMultiTouch", (void*) TouchScreenFactory_isMultiTouch);
    java_register_method("TouchScreenFactory", "setTouch", (void*) TouchScreenFactory_setTouch);
    java_register_method("TouchScreenFactory", "isTouch", (void*) TouchScreenFactory_isTouch);
    java_register_method("TouchScreenFactory", "setMultiTouchDistinct", (void*) TouchScreenFactory_setMultiTouchDistinct);
    java_register_method("TouchScreenFactory", "isMultiTouchDistinct", (void*) TouchScreenFactory_isMultiTouchDistinct);
    java_register_method("TouchScreenFactory", "setTouchScreenType", (void*) TouchScreenFactory_setTouchScreenType);
    java_register_method("TouchScreenFactory", "getTouchScreenType", (void*) TouchScreenFactory_getTouchScreenType);
    java_register_method("TouchScreenFactory", "toString", (void*) TouchScreenFactory_toString);
}

static void TouchScreenFactory_initFields(TouchScreenFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->touch = false;
    this->multiTouch = false;
    this->multiTouchDistinct = false;
    this->touchScreenType = TouchScreenTypesFactory_getInstance()->NOTOUCH;
}


void TouchScreenFactory_init(TouchScreenFactory* this) {
    TouchScreenFactory_register();
    TouchScreenFactory_initFields(this);
        JAVA_TRY {
            TouchScreenFactory_setTouch(this, true);
            TouchScreenFactory_setMultiTouch(this, false);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, (TouchScreenFactory_staticInit(), TouchScreenFactory_SINGLETON), commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
}

TouchScreenFactory* TouchScreenFactory_new(void) {
    TouchScreenFactory* this = java_object_alloc(sizeof(TouchScreenFactory), "TouchScreenFactory");
    TouchScreenFactory_init(this);
    return this;
}


TouchScreenFactory* TouchScreenFactory_getInstance(void) {
        return (TouchScreenFactory_staticInit(), TouchScreenFactory_SINGLETON);
}


void TouchScreenFactory_setMultiTouch(TouchScreenFactory* this, bool multiTouch) {
        this->multiTouch = multiTouch;
}


bool TouchScreenFactory_isMultiTouch(TouchScreenFactory* this) {
        return this->multiTouch;
}


void TouchScreenFactory_setTouch(TouchScreenFactory* this, bool touch) {
        this->touch = touch;
}


bool TouchScreenFactory_isTouch(TouchScreenFactory* this) {
        return this->touch;
}


void TouchScreenFactory_setMultiTouchDistinct(TouchScreenFactory* this, bool multiTouchDistinct) {
        this->multiTouchDistinct = multiTouchDistinct;
}


bool TouchScreenFactory_isMultiTouchDistinct(TouchScreenFactory* this) {
        return this->multiTouchDistinct;
}


void TouchScreenFactory_setTouchScreenType(TouchScreenFactory* this, TouchScreenType* touchScreenType) {
        this->touchScreenType = touchScreenType;
}


TouchScreenType* TouchScreenFactory_getTouchScreenType(TouchScreenFactory* this) {
        return this->touchScreenType;
}


const char* TouchScreenFactory_toString(TouchScreenFactory* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "TouchScreen: ");
        StringMaker_appendboolean(stringBuffer, TouchScreenFactory_isTouch(this));
        StringMaker_append(stringBuffer, " MultiTouch: ");
        StringMaker_appendboolean(stringBuffer, TouchScreenFactory_isMultiTouch(this));
        StringMaker_append(stringBuffer, " Distinct MultiTouch: ");
        StringMaker_appendboolean(stringBuffer, TouchScreenFactory_isMultiTouchDistinct(this));
        StringMaker_append(stringBuffer, " TouchScreenType: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), TouchScreenFactory_getTouchScreenType(this)));
        return java_string_of(stringBuffer);
}

