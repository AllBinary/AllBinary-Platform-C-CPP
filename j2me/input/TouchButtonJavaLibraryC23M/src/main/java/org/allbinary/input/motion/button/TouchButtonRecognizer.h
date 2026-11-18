#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H
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
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct TouchButtonInput TouchButtonInput;
typedef struct CurrentlyPressedTouchButtonSingleton CurrentlyPressedTouchButtonSingleton;
typedef struct ReleaseHelper ReleaseHelper;
typedef struct TouchScreenFactory TouchScreenFactory;
typedef struct MultitouchReleaseHelper MultitouchReleaseHelper;
typedef struct TouchButtonFactory TouchButtonFactory;
typedef struct TouchButton TouchButton;
typedef struct DownGameKeyEventHandler DownGameKeyEventHandler;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct UpGameKeyEventHandler UpGameKeyEventHandler;
typedef struct GPoint GPoint;
typedef struct Rectangle Rectangle;
typedef struct LogUtil LogUtil;
typedef struct RectangleCollisionUtil RectangleCollisionUtil;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/math/RectangleCollisionUtil.h")
#include "org/allbinary/math/RectangleCollisionUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif
#if __has_include("org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h")
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#endif
#if __has_include("org/allbinary/input/motion/button/ReleaseHelper.h")
#include "org/allbinary/input/motion/button/ReleaseHelper.h"
#endif

typedef struct TouchButtonRecognizer TouchButtonRecognizer;
struct TouchButtonRecognizer {
    LogUtil* logUtil;
    RectangleCollisionUtil* rectangleCollisionUtil;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    DownGameKeyEventHandler* downGameKeyEventHandler;
    TouchButtonInput* lastPressedTouchButtonInput;
    CurrentlyPressedTouchButtonSingleton* currentlyPressedTouchButtonSingleton;
    ReleaseHelper* releaseHelper;
};


TouchButtonRecognizer* TouchButtonRecognizer_new(void);

void TouchButtonRecognizer_init(TouchButtonRecognizer* this);


bool TouchButtonRecognizer_releaseTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId);

bool TouchButtonRecognizer_pressTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId);
#define TouchButtonRecognizer_new0 TouchButtonRecognizer_new
#define TouchButtonRecognizer_init0 TouchButtonRecognizer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonRecognizer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonRecognizer_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H
