#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H
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
typedef struct TouchButtonsMappingPaintable TouchButtonsMappingPaintable;
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct CompleteMotionGestureInputEventHandler CompleteMotionGestureInputEventHandler;
typedef struct CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface;
typedef struct GameKey GameKey;
typedef struct InputMappingInterface InputMappingInterface;
typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
typedef struct BasicColor BasicColor;
typedef struct ProcessPaintable ProcessPaintable;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
typedef struct TimeDelayHelper TimeDelayHelper;
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#if __has_include("org/allbinary/game/input/mapping/InputMappingInterface.h")
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#endif
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h")
#include "org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h"
#endif

typedef struct TouchButtonsPaintableComposite TouchButtonsPaintableComposite;
struct TouchButtonsPaintableComposite {
    ProcessPaintable base;
    CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputMappingInterface* inputMappingInterface;
    TouchButtonsMappingPaintable* touchButtonsPaintable;
    TimeDelayHelper* timeHelper;
    bool released;
    const char* METHOD_NAME;
    const char* RELEASE;
    const char* FAST_REPEAT;
    const char* IGNORE;
};


TouchButtonsPaintableComposite* TouchButtonsPaintableComposite_new(InputMappingInterface* inputMappingInterface, BasicColor* basicColor);

void TouchButtonsPaintableComposite_init(TouchButtonsPaintableComposite* this, InputMappingInterface* inputMappingInterface, BasicColor* basicColor);

void TouchButtonsPaintableComposite_onEvent(TouchButtonsPaintableComposite* this, AllBinaryEventObject* eventObject);

void TouchButtonsPaintableComposite_onCompleteMotionGestureInputEvent(TouchButtonsPaintableComposite* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

void TouchButtonsPaintableComposite_process(TouchButtonsPaintableComposite* this);
#define TouchButtonsPaintableComposite_new2 TouchButtonsPaintableComposite_new
#define TouchButtonsPaintableComposite_init2 TouchButtonsPaintableComposite_init
#ifndef TouchButtonsPaintableComposite_setBasicColorP
#define TouchButtonsPaintableComposite_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef TouchButtonsPaintableComposite_paint
#define TouchButtonsPaintableComposite_paint Paintable_paint
#endif
#ifndef TouchButtonsPaintableComposite_paintThreed
#define TouchButtonsPaintableComposite_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonsPaintableComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonsPaintableComposite_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H
