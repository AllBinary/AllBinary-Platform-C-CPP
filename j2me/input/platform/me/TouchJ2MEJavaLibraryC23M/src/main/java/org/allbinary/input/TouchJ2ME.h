#ifndef ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
#define ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllMotionRecognizer AllMotionRecognizer;
typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
typedef struct GameMotionGestureListener GameMotionGestureListener;
typedef struct MotionGestureReceiveInterfaceFactory MotionGestureReceiveInterfaceFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/input/motion/AllMotionRecognizer.h")
#include "org/allbinary/input/motion/AllMotionRecognizer.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

//TouchJ2ME
typedef struct TouchJ2ME TouchJ2ME;
struct TouchJ2ME {
    LogUtil* logUtil;
    int32_t DEVICE_ID;
    AllMotionRecognizer* motionRecognizer;
};


TouchJ2ME* TouchJ2ME_new(void);

void TouchJ2ME_init(TouchJ2ME* this);

void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y);

void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y);

void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y);
#define TouchJ2ME_new0 TouchJ2ME_new
#define TouchJ2ME_init0 TouchJ2ME_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchJ2ME_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchJ2ME_register(void);


#endif // ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
