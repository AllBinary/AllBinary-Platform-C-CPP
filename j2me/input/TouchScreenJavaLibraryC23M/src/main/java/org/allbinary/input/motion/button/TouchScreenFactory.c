/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TouchScreenFactory TouchScreenFactory;
struct TouchScreenFactory {
    LogUtil* logUtil;
    bool touch;
    bool multiTouch;
    bool multiTouchDistinct;
    TouchScreenType* touchScreenType;
};

static TouchScreenFactory* TouchScreenFactory_SINGLETON;

TouchScreenFactory* TouchScreenFactory_new(void);

void TouchScreenFactory_init(TouchScreenFactory* this);
TouchScreenFactory* TouchScreenFactory_getInstance(void);
void TouchScreenFactory_setMultiTouch(TouchScreenFactory* this, bool multiTouch);
bool TouchScreenFactory_isMultiTouch(TouchScreenFactory* this);
void TouchScreenFactory_setTouch(TouchScreenFactory* this, bool touch);
bool TouchScreenFactory_isTouch(TouchScreenFactory* this);
void TouchScreenFactory_setMultiTouchDistinct(TouchScreenFactory* this, bool multiTouchDistinct);
bool TouchScreenFactory_isMultiTouchDistinct(TouchScreenFactory* this);
void TouchScreenFactory_setTouchScreenType(TouchScreenFactory* this, TouchScreenType* touchScreenType);
TouchScreenType* TouchScreenFactory_getTouchScreenType(TouchScreenFactory* this);
const char* TouchScreenFactory_toString(TouchScreenFactory* this);

// Static fields with runtime initializers: call this once at startup
void TouchScreenFactory_staticInit(void) {
    TouchScreenFactory_SINGLETON = TouchScreenFactory_new();
}

static void TouchScreenFactory_initFields(TouchScreenFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->touch = false;
    this->multiTouch = false;
    this->multiTouchDistinct = false;
    this->touchScreenType = TouchScreenTypesFactory_getInstance()->NOTOUCH;
}


void TouchScreenFactory_init(TouchScreenFactory* this) {
    TouchScreenFactory_initFields(this);
        JAVA_TRY {
            TouchScreenFactory_setTouch(this, true);
            TouchScreenFactory_setMultiTouch(this, false);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, TouchScreenFactory_SINGLETON, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
}

TouchScreenFactory* TouchScreenFactory_new(void) {
    TouchScreenFactory* this = calloc(1, sizeof(TouchScreenFactory));
    TouchScreenFactory_init(this);
    return this;
}


TouchScreenFactory* TouchScreenFactory_getInstance(void) {
        return TouchScreenFactory_SINGLETON;
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
        return StringMaker_toString(stringBuffer);
}

