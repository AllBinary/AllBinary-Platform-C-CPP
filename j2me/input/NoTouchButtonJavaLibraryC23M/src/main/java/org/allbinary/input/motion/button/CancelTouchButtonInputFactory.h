#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_H
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
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct InputFactory InputFactory;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

typedef struct CancelTouchButtonInputFactory CancelTouchButtonInputFactory;
struct CancelTouchButtonInputFactory {
    TouchButtonInput** cancelInputArray;
};


CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_new(void);

CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_getInstance(void);

void CancelTouchButtonInputFactory_init(CancelTouchButtonInputFactory* this);

TouchButtonInput* CancelTouchButtonInputFactory_getCancel(CancelTouchButtonInputFactory* this, TouchButtonInput* touchButtonInput);
#define CancelTouchButtonInputFactory_new0 CancelTouchButtonInputFactory_new
#define CancelTouchButtonInputFactory_init0 CancelTouchButtonInputFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CancelTouchButtonInputFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CancelTouchButtonInputFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_H
