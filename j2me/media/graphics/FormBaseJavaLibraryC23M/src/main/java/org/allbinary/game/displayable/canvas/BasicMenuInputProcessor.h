#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H
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
typedef struct Canvas Canvas;
typedef struct NullCanvas NullCanvas;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct MyCanvas MyCanvas;
typedef struct BaseMotionGestureEventListener BaseMotionGestureEventListener;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("javax/microedition/lcdui/Canvas.h")
#include "javax/microedition/lcdui/Canvas.h"
#endif
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
struct BasicMenuInputProcessor {
    PlayerGameInput base;
    BaseMotionGestureEventListener BaseMotionGestureEventListener_interface;
    BasicArrayList* motionGestureEventList;
    Canvas* canvas;
};


BasicMenuInputProcessor* BasicMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas);

void BasicMenuInputProcessor_init(BasicMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas);

void BasicMenuInputProcessor_onMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);

void BasicMenuInputProcessor_onScrolledMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);


MyCanvas* BasicMenuInputProcessor_getCanvas(BasicMenuInputProcessor* this);

int32_t BasicMenuInputProcessor_processInputList(BasicMenuInputProcessor* this);
#define BasicMenuInputProcessor_new3 BasicMenuInputProcessor_new
#define BasicMenuInputProcessor_init3 BasicMenuInputProcessor_init
#ifndef BasicMenuInputProcessor_onPressGameKeyEvent
#define BasicMenuInputProcessor_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef BasicMenuInputProcessor_onDownGameKeyEvent
#define BasicMenuInputProcessor_onDownGameKeyEvent PlayerGameInput_onDownGameKeyEvent
#endif
#ifndef BasicMenuInputProcessor_onDownKeyEvent
#define BasicMenuInputProcessor_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef BasicMenuInputProcessor_onDownKey
#define BasicMenuInputProcessor_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef BasicMenuInputProcessor_onUpGameKeyEvent
#define BasicMenuInputProcessor_onUpGameKeyEvent PlayerGameInput_onUpGameKeyEvent
#endif
#ifndef BasicMenuInputProcessor_onUpKeyEvent
#define BasicMenuInputProcessor_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef BasicMenuInputProcessor_onEvent
#define BasicMenuInputProcessor_onEvent PlayerGameInput_onEvent
#endif
#ifndef BasicMenuInputProcessor_getPlayerInputId
#define BasicMenuInputProcessor_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef BasicMenuInputProcessor_add
#define BasicMenuInputProcessor_add GameInput_add
#endif
#ifndef BasicMenuInputProcessor_addForRemoval
#define BasicMenuInputProcessor_addForRemoval GameInput_addForRemoval
#endif
#ifndef BasicMenuInputProcessor_isForRemoval
#define BasicMenuInputProcessor_isForRemoval GameInput_isForRemoval
#endif
#ifndef BasicMenuInputProcessor_clear
#define BasicMenuInputProcessor_clear GameInput_clear
#endif
#ifndef BasicMenuInputProcessor_removeNonAIInputGameKeyEvents
#define BasicMenuInputProcessor_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef BasicMenuInputProcessor_update
#define BasicMenuInputProcessor_update GameInput_update
#endif
#ifndef BasicMenuInputProcessor_getRemovalGameKeyEventList
#define BasicMenuInputProcessor_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef BasicMenuInputProcessor_getGameKeyEventList
#define BasicMenuInputProcessor_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicMenuInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicMenuInputProcessor_register(void);

#if __has_include("org/allbinary/graphics/displayable/MyCanvas.h")
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_H
