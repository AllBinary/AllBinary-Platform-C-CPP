#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H
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
typedef struct TouchButtonInput TouchButtonInput;
typedef struct InputFactory InputFactory;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

typedef struct BasicTouchInputFactory BasicTouchInputFactory;
struct BasicTouchInputFactory {
    LogUtil* logUtil;
    TouchButtonInput* SPECIAL_BUTTON_SIX;
    TouchButtonInput* SPECIAL_BUTTON_FIVE;
    TouchButtonInput* SPECIAL_BUTTON_FOUR;
    TouchButtonInput* SPECIAL_BUTTON_THREE;
    TouchButtonInput* SPECIAL_BUTTON_TWO;
    TouchButtonInput* SPECIAL_BUTTON_ONE;
    TouchButtonInput* UP;
    TouchButtonInput* LEFT;
    TouchButtonInput* RIGHT;
    TouchButtonInput* DOWN;
    TouchButtonInput* NONE;
    bool initialized;
    BasicArrayList* list;
};


BasicTouchInputFactory* BasicTouchInputFactory_new(void);
void BasicTouchInputFactory_init(BasicTouchInputFactory* this);

BasicTouchInputFactory* BasicTouchInputFactory_getInstance(void);

void BasicTouchInputFactory_initMethod(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping);

void BasicTouchInputFactory_updateAll(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping);

void BasicTouchInputFactory_updateAllList(BasicTouchInputFactory* this, BasicArrayList* list, InputToGameKeyMapping* inputToGameKeyMapping);

BasicArrayList* BasicTouchInputFactory_getList(BasicTouchInputFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicTouchInputFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicTouchInputFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H
