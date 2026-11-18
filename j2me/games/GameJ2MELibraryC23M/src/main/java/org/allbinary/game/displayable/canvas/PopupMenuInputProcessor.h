#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINPUTPROCESSOR_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct Canvas Canvas;
typedef struct GameInputStrings GameInputStrings;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GPoint GPoint;
typedef struct Rectangle Rectangle;
typedef struct MyCanvas MyCanvas;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct RectangleCollisionUtil RectangleCollisionUtil;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
// #include "org/allbinary/logic/communication/log/PreLogUtil.h"
// #include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/math/RectangleCollisionUtil.h")
#include "org/allbinary/math/RectangleCollisionUtil.h"
#endif
// #include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

typedef struct PopupMenuInputProcessor PopupMenuInputProcessor;
struct PopupMenuInputProcessor {
    BasicMenuInputProcessor base;
    RectangleCollisionUtil* rectangleCollisionUtil;
    int32_t CLICK_DELAY;
    TimeDelayHelper* clickTimeHelper;
    Rectangle* rectangle;
};


PopupMenuInputProcessor* PopupMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle);

void PopupMenuInputProcessor_init(PopupMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle);

void PopupMenuInputProcessor_initMethod(PopupMenuInputProcessor* this, Rectangle* rectangle);

int32_t PopupMenuInputProcessor_processInput(PopupMenuInputProcessor* this, int32_t key);

int32_t PopupMenuInputProcessor_processInputList(PopupMenuInputProcessor* this);

int32_t PopupMenuInputProcessor_processMotionInputs(PopupMenuInputProcessor* this);

void PopupMenuInputProcessor_processMotionInput(PopupMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);
#define PopupMenuInputProcessor_new4 PopupMenuInputProcessor_new
#define PopupMenuInputProcessor_init4 PopupMenuInputProcessor_init
#ifndef PopupMenuInputProcessor_onMotionGestureEvent
#define PopupMenuInputProcessor_onMotionGestureEvent BasicMenuInputProcessor_onMotionGestureEvent
#endif
#ifndef PopupMenuInputProcessor_onScrolledMotionGestureEvent
#define PopupMenuInputProcessor_onScrolledMotionGestureEvent BasicMenuInputProcessor_onScrolledMotionGestureEvent
#endif
#ifndef PopupMenuInputProcessor_setCanvas
#define PopupMenuInputProcessor_setCanvas BasicMenuInputProcessor_setCanvas
#endif
#ifndef PopupMenuInputProcessor_getCanvas
#define PopupMenuInputProcessor_getCanvas BasicMenuInputProcessor_getCanvas
#endif
#ifndef PopupMenuInputProcessor_onPressGameKeyEvent
#define PopupMenuInputProcessor_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef PopupMenuInputProcessor_onDownGameKeyEvent
#define PopupMenuInputProcessor_onDownGameKeyEvent PlayerGameInput_onDownGameKeyEvent
#endif
#ifndef PopupMenuInputProcessor_onDownKeyEvent
#define PopupMenuInputProcessor_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef PopupMenuInputProcessor_onDownKey
#define PopupMenuInputProcessor_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef PopupMenuInputProcessor_onUpGameKeyEvent
#define PopupMenuInputProcessor_onUpGameKeyEvent PlayerGameInput_onUpGameKeyEvent
#endif
#ifndef PopupMenuInputProcessor_onUpKeyEvent
#define PopupMenuInputProcessor_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef PopupMenuInputProcessor_onEvent
#define PopupMenuInputProcessor_onEvent PlayerGameInput_onEvent
#endif
#ifndef PopupMenuInputProcessor_getPlayerInputId
#define PopupMenuInputProcessor_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef PopupMenuInputProcessor_add
#define PopupMenuInputProcessor_add GameInput_add
#endif
#ifndef PopupMenuInputProcessor_addForRemoval
#define PopupMenuInputProcessor_addForRemoval GameInput_addForRemoval
#endif
#ifndef PopupMenuInputProcessor_isForRemoval
#define PopupMenuInputProcessor_isForRemoval GameInput_isForRemoval
#endif
#ifndef PopupMenuInputProcessor_clear
#define PopupMenuInputProcessor_clear GameInput_clear
#endif
#ifndef PopupMenuInputProcessor_removeNonAIInputGameKeyEvents
#define PopupMenuInputProcessor_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef PopupMenuInputProcessor_update
#define PopupMenuInputProcessor_update GameInput_update
#endif
#ifndef PopupMenuInputProcessor_getRemovalGameKeyEventList
#define PopupMenuInputProcessor_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef PopupMenuInputProcessor_getGameKeyEventList
#define PopupMenuInputProcessor_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PopupMenuInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PopupMenuInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINPUTPROCESSOR_H
