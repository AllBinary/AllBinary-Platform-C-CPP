#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
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
typedef struct TouchScreenTypesFactory TouchScreenTypesFactory;
typedef struct TouchScreenType TouchScreenType;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchScreenType.h")
#include "org/allbinary/input/motion/button/TouchScreenType.h"
#endif

typedef struct TouchScreenFactory TouchScreenFactory;
struct TouchScreenFactory {
    LogUtil* logUtil;
    bool touch;
    bool multiTouch;
    bool multiTouchDistinct;
    TouchScreenType* touchScreenType;
};


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
#define TouchScreenFactory_new0 TouchScreenFactory_new
#define TouchScreenFactory_init0 TouchScreenFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchScreenFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchScreenFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
