#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H
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
typedef struct GameKey GameKey;
typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/Input.h"
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct TouchButtonInput TouchButtonInput;
struct TouchButtonInput {
    Input base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    LogUtil* logUtil;
    GameKeyEventFactory* gameKeyEventFactory;
    int32_t TOUCH_BUTTON_SOURCE_ID;
    GameKeyEvent* gameKeyEvent;
};


TouchButtonInput* TouchButtonInput_new(int32_t id, const char* name);

void TouchButtonInput_init(TouchButtonInput* this, int32_t id, const char* name);

void TouchButtonInput_update(TouchButtonInput* this, InputToGameKeyMapping* inputToGameKeyMapping);

int32_t TouchButtonInput_getSourceId(TouchButtonInput* this);

GameKeyEvent* TouchButtonInput_getGameKeyEvent(TouchButtonInput* this);
#define TouchButtonInput_new2 TouchButtonInput_new
#define TouchButtonInput_init2 TouchButtonInput_init
#ifndef TouchButtonInput_getId
#define TouchButtonInput_getId Input_getId
#endif
#ifndef TouchButtonInput_setId
#define TouchButtonInput_setId Input_setId
#endif
#ifndef TouchButtonInput_getName
#define TouchButtonInput_getName Input_getName
#endif
#ifndef TouchButtonInput_setName
#define TouchButtonInput_setName Input_setName
#endif
#ifndef TouchButtonInput_toString
#define TouchButtonInput_toString Input_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonInput_register(void);

#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONINPUT_H
