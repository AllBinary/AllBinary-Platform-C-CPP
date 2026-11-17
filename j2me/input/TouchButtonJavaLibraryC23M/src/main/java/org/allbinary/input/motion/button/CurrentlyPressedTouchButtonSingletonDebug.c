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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"

typedef struct CurrentlyPressedTouchButtonSingletonDebug CurrentlyPressedTouchButtonSingletonDebug;
struct CurrentlyPressedTouchButtonSingletonDebug {
    CurrentlyPressedTouchButtonSingleton base;
    const char* string;
    const char* listString;
    const char* appendText;
    const char* PRESSED_AND_FIRED;
    const char* PRESSED_AND_NOT_FIRED;
    const char* ASSOCIATED_RELEASED_AND_FIRED;
    const char* RELEASED_AND_FIRED;
    const char* RELEASED_AND_FIRED_2;
    const char* RELEASED_AND_NOT_FIRED;
};

static CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug_instanceC;

CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug_new(void);
CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingletonDebug_getInstance(void);
static void CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append, TouchButtonInput* touchButtonInput);
static void CurrentlyPressedTouchButtonSingletonDebug_append(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append);
void CurrentlyPressedTouchButtonSingletonDebug_clearLog(CurrentlyPressedTouchButtonSingletonDebug* this, int32_t x, int32_t y);
void CurrentlyPressedTouchButtonSingletonDebug_releaseAndNotFired(CurrentlyPressedTouchButtonSingletonDebug* this);
void CurrentlyPressedTouchButtonSingletonDebug_releaseAndFired(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
void CurrentlyPressedTouchButtonSingletonDebug_releaseAndFired2(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
void CurrentlyPressedTouchButtonSingletonDebug_releaseAndFiredAssociated(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
void CurrentlyPressedTouchButtonSingletonDebug_pressedAndFired(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
void CurrentlyPressedTouchButtonSingletonDebug_pressedAndNotFired(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
TouchButtonInput* CurrentlyPressedTouchButtonSingletonDebug_removeAt(CurrentlyPressedTouchButtonSingletonDebug* this, int32_t index);
bool CurrentlyPressedTouchButtonSingletonDebug_remove(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
void CurrentlyPressedTouchButtonSingletonDebug_add(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput);
const char* CurrentlyPressedTouchButtonSingletonDebug_toString(CurrentlyPressedTouchButtonSingletonDebug* this);

// Static fields with runtime initializers: call this once at startup
void CurrentlyPressedTouchButtonSingletonDebug_staticInit(void) {
    CurrentlyPressedTouchButtonSingletonDebug_instanceC = CurrentlyPressedTouchButtonSingletonDebug_new();
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
    CurrentlyPressedTouchButtonSingleton_init(&this->base);
    CurrentlyPressedTouchButtonSingletonDebug_initFields(this);
}

CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug_new(void) {
    CurrentlyPressedTouchButtonSingletonDebug* this = calloc(1, sizeof(CurrentlyPressedTouchButtonSingletonDebug));
    CurrentlyPressedTouchButtonSingletonDebug_init(this);
    return this;
}


CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingletonDebug_getInstance(void) {
        return CurrentlyPressedTouchButtonSingletonDebug_instanceC;
}


static void CurrentlyPressedTouchButtonSingletonDebug_appendTouchButtonInput(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append, TouchButtonInput* touchButtonInput) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, TouchButtonInput_toString(touchButtonInput));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, append);
        this->appendText = StringMaker_toString(stringBuffer);
        this->string = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->listString), append, this->appendText), toString);
}


static void CurrentlyPressedTouchButtonSingletonDebug_append(CurrentlyPressedTouchButtonSingletonDebug* this, const char* append) {
        this->appendText = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->appendText), append, append), toString);
        this->string = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->listString), append, this->appendText), toString);
}


void CurrentlyPressedTouchButtonSingletonDebug_clearLog(CurrentlyPressedTouchButtonSingletonDebug* this, int32_t x, int32_t y) {
        this->appendText = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), GPoint_toStringStatic(x, y, 0)), append, CommonSeps_getInstance()->SPACE), toString);
        this->string = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->listString), append, this->appendText), toString);
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
        this->listString = JAVA_CALL(this->list, toString);
        this->string = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->listString), append, this->appendText), toString);
        return touchButtonInput;
}


bool CurrentlyPressedTouchButtonSingletonDebug_remove(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        bool isRemoved = CurrentlyPressedTouchButtonSingleton_remove((&this->base), touchButtonInput);
        this->listString = JAVA_CALL(this->list, toString);
        this->string = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->listString), append, this->appendText), toString);
        return isRemoved;
}


void CurrentlyPressedTouchButtonSingletonDebug_add(CurrentlyPressedTouchButtonSingletonDebug* this, TouchButtonInput* touchButtonInput) {
        CurrentlyPressedTouchButtonSingleton_add((&this->base), touchButtonInput);
        this->listString = JAVA_CALL(this->list, toString);
        this->string = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->listString), append, this->appendText), toString);
}


const char* CurrentlyPressedTouchButtonSingletonDebug_toString(CurrentlyPressedTouchButtonSingletonDebug* this) {
        return this->string;
}

