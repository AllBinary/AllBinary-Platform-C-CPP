#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
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
typedef struct CurrentlyPressedTouchButtonSingleton CurrentlyPressedTouchButtonSingleton;
typedef struct TouchButtonInput TouchButtonInput;
typedef struct GPoint GPoint;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
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


CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug_new(void);
void CurrentlyPressedTouchButtonSingletonDebug_init(CurrentlyPressedTouchButtonSingletonDebug* this);

CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingletonDebug_getInstance(void);



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
#ifndef CurrentlyPressedTouchButtonSingletonDebug_size
#define CurrentlyPressedTouchButtonSingletonDebug_size CurrentlyPressedTouchButtonSingleton_size
#endif
#ifndef CurrentlyPressedTouchButtonSingletonDebug_get
#define CurrentlyPressedTouchButtonSingletonDebug_get CurrentlyPressedTouchButtonSingleton_get
#endif
#ifndef CurrentlyPressedTouchButtonSingletonDebug_contains
#define CurrentlyPressedTouchButtonSingletonDebug_contains CurrentlyPressedTouchButtonSingleton_contains
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CurrentlyPressedTouchButtonSingletonDebug_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CurrentlyPressedTouchButtonSingletonDebug_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
