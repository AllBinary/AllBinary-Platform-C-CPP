#ifndef ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
#define ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
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
// package org.allbinary.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct MotionGestureConfiguration MotionGestureConfiguration;
typedef struct MotionGestureConfigurationFactory MotionGestureConfigurationFactory;
typedef struct DiagonalDownLeftTouchInputToGameKeyEventAction DiagonalDownLeftTouchInputToGameKeyEventAction;
typedef struct DiagonalDownRightTouchInputToGameKeyEventAction DiagonalDownRightTouchInputToGameKeyEventAction;
typedef struct DiagonalUpLeftTouchInputToGameKeyEventAction DiagonalUpLeftTouchInputToGameKeyEventAction;
typedef struct DiagonalUpRightTouchInputToGameKeyEventAction DiagonalUpRightTouchInputToGameKeyEventAction;
typedef struct DownTouchInputToGameKeyEventAction DownTouchInputToGameKeyEventAction;
typedef struct LeftTouchInputToGameKeyEventAction LeftTouchInputToGameKeyEventAction;
typedef struct ReleaseTouchInputToGameKeyEventAction ReleaseTouchInputToGameKeyEventAction;
typedef struct RightTouchInputToGameKeyEventAction RightTouchInputToGameKeyEventAction;
typedef struct UpTouchInputToGameKeyEventAction UpTouchInputToGameKeyEventAction;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct CompleteMotionGestureInputToGameMotionGestureInput CompleteMotionGestureInputToGameMotionGestureInput;
struct CompleteMotionGestureInputToGameMotionGestureInput {
    LogUtil* logUtil;
};


CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void);
void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this);

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void);

void CompleteMotionGestureInputToGameMotionGestureInput_initMethod(CompleteMotionGestureInputToGameMotionGestureInput* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompleteMotionGestureInputToGameMotionGestureInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompleteMotionGestureInputToGameMotionGestureInput_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
