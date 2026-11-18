// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingletonDebug.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug_instanceC;


static void CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append, TouchButtonInput* touchButtonInput);

static void CurrentlyPressedTouchButtonSingletonDebug_append(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append);












void CurrentlyPressedTouchButtonSingletonDebug_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CurrentlyPressedTouchButtonSingletonDebug_instanceC = CurrentlyPressedTouchButtonSingletonDebug_new();
}

void CurrentlyPressedTouchButtonSingletonDebug_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CurrentlyPressedTouchButtonSingletonDebug", "CurrentlyPressedTouchButtonSingleton");
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "appendTouchButtonInput", (void*) CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "append", (void*) CurrentlyPressedTouchButtonSingletonDebug_append);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "clearLog", (void*) CurrentlyPressedTouchButtonSingletonDebug_clearLog);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "releaseAndNotFired", (void*) CurrentlyPressedTouchButtonSingletonDebug_releaseAndNotFired);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "releaseAndFired", (void*) CurrentlyPressedTouchButtonSingletonDebug_releaseAndFired);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "releaseAndFired2", (void*) CurrentlyPressedTouchButtonSingletonDebug_releaseAndFired2);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "releaseAndFiredAssociated", (void*) CurrentlyPressedTouchButtonSingletonDebug_releaseAndFiredAssociated);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "pressedAndFired", (void*) CurrentlyPressedTouchButtonSingletonDebug_pressedAndFired);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "pressedAndNotFired", (void*) CurrentlyPressedTouchButtonSingletonDebug_pressedAndNotFired);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "removeAt", (void*) CurrentlyPressedTouchButtonSingletonDebug_removeAt);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "remove", (void*) CurrentlyPressedTouchButtonSingletonDebug_remove);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "add", (void*) CurrentlyPressedTouchButtonSingletonDebug_add);
    java_register_method("CurrentlyPressedTouchButtonSingletonDebug", "toString", (void*) CurrentlyPressedTouchButtonSingletonDebug_toString);
}

static void CurrentlyPressedTouchButtonSingletonDebug_initFields(CurrentlyPressedTouchButtonSingletonDebug* this) {
    this->string = StringUtil_getInstance()->EMPTY_STRING;
    this->listString = StringUtil_getInstance()->EMPTY_STRING;
    this->appendText = StringUtil_getInstance()->EMPTY_STRING;
    this->PRESSED_AND_FIRED = "pressed & fired";
    this->PRESSED_AND_NOT_FIRED = "pressed in button but not fired";
    this->ASSOCIATED_RELEASED_AND_FIRED = "assoc. rel & fired";
    this->RELEASED_AND_FIRED = "rel & fired 1";
    this->RELEASED_AND_FIRED_2 = "rel & fired 2";
    this->RELEASED_AND_NOT_FIRED = "rel & not fired";
}

void CurrentlyPressedTouchButtonSingletonDebug_init(CurrentlyPressedTouchButtonSingletonDebug* this) {
    CurrentlyPressedTouchButtonSingletonDebug_register();
    CurrentlyPressedTouchButtonSingleton_init(&this->base);
    CurrentlyPressedTouchButtonSingletonDebug_initFields(this);
}

CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug_new(void) {
    CurrentlyPressedTouchButtonSingletonDebug* this = java_object_alloc(sizeof(CurrentlyPressedTouchButtonSingletonDebug), "CurrentlyPressedTouchButtonSingletonDebug");
    CurrentlyPressedTouchButtonSingletonDebug_init(this);
    return this;
}


CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingletonDebug_getInstance(void) {
        return (CurrentlyPressedTouchButtonSingletonDebug_staticInit(), CurrentlyPressedTouchButtonSingletonDebug_instanceC);
}


static void CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append, TouchButtonInput* touchButtonInput) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_string_of(touchButtonInput));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, append);
        this->appendText = java_string_of(stringBuffer);
        this->string = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->listString), this->appendText));
}


static void CurrentlyPressedTouchButtonSingletonDebug_append(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append) {
        this->appendText = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->appendText), append));
        this->string = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->listString), this->appendText));
}


void CurrentlyPressedTouchButtonSingletonDebug_clearLog(CurrentlyPressedTouchButtonSingletonDebug* this, int32_t x, int32_t y) {
        this->appendText = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), GPoint_toStringStatic(x, y, 0)), CommonSeps_getInstance()->SPACE));
        this->string = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->listString), this->appendText));
}


void CurrentlyPressedTouchButtonSingletonDebug_releaseAndNotFired(CurrentlyPressedTouchButtonSingletonDebug* this) {
        CurrentlyPressedTouchButtonSingletonDebug_append(this, this->RELEASED_AND_NOT_FIRED);
}


void CurrentlyPressedTouchButtonSingletonDebug_releaseAndFired(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(this, this->RELEASED_AND_FIRED, touchButtonInput);
}


void CurrentlyPressedTouchButtonSingletonDebug_releaseAndFired2(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(this, this->RELEASED_AND_FIRED_2, touchButtonInput);
}


void CurrentlyPressedTouchButtonSingletonDebug_releaseAndFiredAssociated(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(this, this->ASSOCIATED_RELEASED_AND_FIRED, touchButtonInput);
}


void CurrentlyPressedTouchButtonSingletonDebug_pressedAndFired(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(this, this->PRESSED_AND_FIRED, touchButtonInput);
}


void CurrentlyPressedTouchButtonSingletonDebug_pressedAndNotFired(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(this, this->PRESSED_AND_NOT_FIRED, touchButtonInput);
}


TouchButtonInput* CurrentlyPressedTouchButtonSingletonDebug_removeAt(CurrentlyPressedTouchButtonSingletonDebug* this, int32_t index) {
        TouchButtonInput* touchButtonInput = CurrentlyPressedTouchButtonSingleton_removeAt((&this->base), index);
        this->listString = java_string_of(this->base.list);
        this->string = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->listString), this->appendText));
        return touchButtonInput;
}


bool CurrentlyPressedTouchButtonSingletonDebug_remove(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        bool isRemoved = CurrentlyPressedTouchButtonSingleton_remove((&this->base), touchButtonInput);
        this->listString = java_string_of(this->base.list);
        this->string = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->listString), this->appendText));
        return isRemoved;
}


void CurrentlyPressedTouchButtonSingletonDebug_add(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingleton_add((&this->base), touchButtonInput);
        this->listString = java_string_of(this->base.list);
        this->string = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->listString), this->appendText));
}


const char* CurrentlyPressedTouchButtonSingletonDebug_toString(CurrentlyPressedTouchButtonSingletonDebug* this) {
        return this->string;
}

