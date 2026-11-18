#ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H
#define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CompleteMotionGestureInputInterface CompleteMotionGestureInputInterface;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputInterface.h"

typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
struct CompleteMotionGestureInputEvent {
    AllBinaryEventObject base;
    CompleteMotionGestureInputInterface CompleteMotionGestureInputInterface_interface;
    LogUtil* logUtil;
    const char* name;
    MotionGestureInput* motionGestureInput;
};


CompleteMotionGestureInputEvent* CompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput);

void CompleteMotionGestureInputEvent_init(CompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput);

void CompleteMotionGestureInputEvent_setName(CompleteMotionGestureInputEvent* this, const char* name);

const char* CompleteMotionGestureInputEvent_getName(CompleteMotionGestureInputEvent* this);

void CompleteMotionGestureInputEvent_setMotionGestureInput(CompleteMotionGestureInputEvent* this, MotionGestureInput* motionGestureInput);

MotionGestureInput* CompleteMotionGestureInputEvent_getMotionGestureInput(CompleteMotionGestureInputEvent* this);
#define CompleteMotionGestureInputEvent_new2 CompleteMotionGestureInputEvent_new
#define CompleteMotionGestureInputEvent_init2 CompleteMotionGestureInputEvent_init
#ifndef CompleteMotionGestureInputEvent_getSource
#define CompleteMotionGestureInputEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef CompleteMotionGestureInputEvent_setSource
#define CompleteMotionGestureInputEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompleteMotionGestureInputEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompleteMotionGestureInputEvent_register(void);

#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H
