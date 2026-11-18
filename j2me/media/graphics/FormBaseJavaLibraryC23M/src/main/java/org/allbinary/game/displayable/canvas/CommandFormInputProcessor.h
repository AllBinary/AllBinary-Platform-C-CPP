#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H
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
typedef struct CommandRunnable CommandRunnable;
typedef struct Canvas Canvas;
typedef struct Command Command;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct Features Features;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct SWTUtil SWTUtil;
typedef struct GPoint GPoint;
typedef struct MyCanvas MyCanvas;
typedef struct CommandCurrentSelectionForm CommandCurrentSelectionForm;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct StringMaker StringMaker;
typedef struct PrimaryPlayerQueueFactory PrimaryPlayerQueueFactory;
typedef struct SelectSound SelectSound;
typedef struct PrimaryThreadPool PrimaryThreadPool;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

//In general allow scrolling of the menu and selection the center item
typedef struct CommandFormInputProcessor CommandFormInputProcessor;
struct CommandFormInputProcessor {
    BasicMenuInputProcessor base;
    int32_t MOTION_GESTURE_SOURCE_ID;
    int32_t CLICK_DELAY;
    TimeDelayHelper* clickTimeHelper;
    int32_t DOUBLE_CLICK_DELAY;
    TimeDelayHelper* doubleClickTimeHelper;
    bool isSingleKeyProcessing;
    ScrollSelectionForm* form;
    bool hasPressed;
    const char* PROCESS_COMMAND;
    const char* NAME_LABEL;
};


CommandFormInputProcessor* CommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form);

void CommandFormInputProcessor_init(CommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form);

int32_t CommandFormInputProcessor_processInput(CommandFormInputProcessor* this, int32_t key);


int32_t CommandFormInputProcessor_processInputList(CommandFormInputProcessor* this);

int32_t CommandFormInputProcessor_processMotionInputs(CommandFormInputProcessor* this);

void CommandFormInputProcessor_processMotionInput(CommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent);

const char* CommandFormInputProcessor_toString(CommandFormInputProcessor* this);
#define CommandFormInputProcessor_new4 CommandFormInputProcessor_new
#define CommandFormInputProcessor_init4 CommandFormInputProcessor_init
#ifndef CommandFormInputProcessor_onMotionGestureEvent
#define CommandFormInputProcessor_onMotionGestureEvent BasicMenuInputProcessor_onMotionGestureEvent
#endif
#ifndef CommandFormInputProcessor_onScrolledMotionGestureEvent
#define CommandFormInputProcessor_onScrolledMotionGestureEvent BasicMenuInputProcessor_onScrolledMotionGestureEvent
#endif
#ifndef CommandFormInputProcessor_setCanvas
#define CommandFormInputProcessor_setCanvas BasicMenuInputProcessor_setCanvas
#endif
#ifndef CommandFormInputProcessor_getCanvas
#define CommandFormInputProcessor_getCanvas BasicMenuInputProcessor_getCanvas
#endif
#ifndef CommandFormInputProcessor_onPressGameKeyEvent
#define CommandFormInputProcessor_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef CommandFormInputProcessor_onDownGameKeyEvent
#define CommandFormInputProcessor_onDownGameKeyEvent PlayerGameInput_onDownGameKeyEvent
#endif
#ifndef CommandFormInputProcessor_onDownKeyEvent
#define CommandFormInputProcessor_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef CommandFormInputProcessor_onDownKey
#define CommandFormInputProcessor_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef CommandFormInputProcessor_onUpGameKeyEvent
#define CommandFormInputProcessor_onUpGameKeyEvent PlayerGameInput_onUpGameKeyEvent
#endif
#ifndef CommandFormInputProcessor_onUpKeyEvent
#define CommandFormInputProcessor_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef CommandFormInputProcessor_onEvent
#define CommandFormInputProcessor_onEvent PlayerGameInput_onEvent
#endif
#ifndef CommandFormInputProcessor_getPlayerInputId
#define CommandFormInputProcessor_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef CommandFormInputProcessor_add
#define CommandFormInputProcessor_add GameInput_add
#endif
#ifndef CommandFormInputProcessor_addForRemoval
#define CommandFormInputProcessor_addForRemoval GameInput_addForRemoval
#endif
#ifndef CommandFormInputProcessor_isForRemoval
#define CommandFormInputProcessor_isForRemoval GameInput_isForRemoval
#endif
#ifndef CommandFormInputProcessor_clear
#define CommandFormInputProcessor_clear GameInput_clear
#endif
#ifndef CommandFormInputProcessor_removeNonAIInputGameKeyEvents
#define CommandFormInputProcessor_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef CommandFormInputProcessor_update
#define CommandFormInputProcessor_update GameInput_update
#endif
#ifndef CommandFormInputProcessor_getRemovalGameKeyEventList
#define CommandFormInputProcessor_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef CommandFormInputProcessor_getGameKeyEventList
#define CommandFormInputProcessor_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandFormInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandFormInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H
