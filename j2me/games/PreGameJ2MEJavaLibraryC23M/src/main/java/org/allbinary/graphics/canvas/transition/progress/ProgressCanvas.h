#ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H
#define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H
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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ProgressPaintable ProgressPaintable;
typedef struct ProgressEndListener ProgressEndListener;
typedef struct CommandListener CommandListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct NullCanvas NullCanvas;
typedef struct NullCommandListener NullCommandListener;
typedef struct Processor Processor;
typedef struct RunnableCanvas RunnableCanvas;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct BasicColor BasicColor;
typedef struct CanvasStrings CanvasStrings;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct ABCustomGaugeItem ABCustomGaugeItem;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct PreLogUtil PreLogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryMidlet AllBinaryMidlet;
typedef struct PathFindingThreadPool PathFindingThreadPool;
typedef struct ThreadPool ThreadPool;
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#include "org/allbinary/canvas/RunnableCanvas.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/graphics/form/item/ABCustomGaugeItem.h")
#include "org/allbinary/graphics/form/item/ABCustomGaugeItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#if __has_include("org/allbinary/midlet/AllBinaryMidlet.h")
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h"
#endif

typedef struct ProgressCanvas ProgressCanvas;
struct ProgressCanvas {
    RunnableCanvas base;
    PaintableInterface PaintableInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    bool hasPainted;
    BasicColor* backgroundBasicColor;
    Paintable* GAUGE_PAINTABLE;
    float maxValue;
    ABCustomGaugeItem* gauge;
    const char* TEXT;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    AllBinaryMidlet* allbinaryMidlet;
    float value;
    const char* text;
    bool background;
    PaintableInterface* paintable;
    bool inProgress;
    Processor* IN_GAME_PROCESSOR;
    Processor* inGameProcessor;
    ProgressEndListener* progressEndListener;
    const char* backgroundLabel;
    const char* START_BACKGROUND;
    const char* ADD_PORTION;
    const char* ADD_EARLY_PORTION;
};


ProgressCanvas* ProgressCanvas_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ProgressCanvas_init(ProgressCanvas* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ProgressCanvas_updateMeasurement(ProgressCanvas* this, Graphics* graphics);

void ProgressCanvas_initMethod(ProgressCanvas* this, AllBinaryMidlet* gameMidlet);

void ProgressCanvas_update(ProgressCanvas* this, Graphics* graphics);

void ProgressCanvas_initCommands(ProgressCanvas* this, CommandListener* cmdListener);

float ProgressCanvas_getMaxValue(ProgressCanvas* this);

void ProgressCanvas_start(ProgressCanvas* this);

void ProgressCanvas_startBackground(ProgressCanvas* this, bool background);

void ProgressCanvas_endActual(ProgressCanvas* this);

void ProgressCanvas_inGame(ProgressCanvas* this);

void ProgressCanvas_end(ProgressCanvas* this);

void ProgressCanvas_endFromInitialLazyLoadingComplete(ProgressCanvas* this);

bool ProgressCanvas_isInGame(ProgressCanvas* this);

void ProgressCanvas_endIfPaintedSinceStart(ProgressCanvas* this);

void ProgressCanvas_addEarlyPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index);

void ProgressCanvas_addPortion(ProgressCanvas* this, int32_t value, const char* text, int32_t index);

void ProgressCanvas_addNormalPortion(ProgressCanvas* this, int32_t value, const char* text);

void ProgressCanvas_setValue(ProgressCanvas* this, int32_t value);

void ProgressCanvas_paint(ProgressCanvas* this, Graphics* graphics);

void ProgressCanvas_paint2(ProgressCanvas* this, Graphics* graphics);

void ProgressCanvas_paintThreed(ProgressCanvas* this, Graphics* graphics);

float ProgressCanvas_getValue(ProgressCanvas* this);

void ProgressCanvas_setText(ProgressCanvas* this, const char* text);

const char* ProgressCanvas_getText(ProgressCanvas* this);

void ProgressCanvas_setBackground(ProgressCanvas* this, bool background);

bool ProgressCanvas_isBackground(ProgressCanvas* this);
#define ProgressCanvas_new3 ProgressCanvas_new
#define ProgressCanvas_init3 ProgressCanvas_init
#ifndef ProgressCanvas_isMainCanvas
#define ProgressCanvas_isMainCanvas RunnableCanvas_isMainCanvas
#endif
#ifndef ProgressCanvas_setThread
#define ProgressCanvas_setThread RunnableCanvas_setThread
#endif
#ifndef ProgressCanvas_setRunning
#define ProgressCanvas_setRunning RunnableCanvas_setRunning
#endif
#ifndef ProgressCanvas_isRunning
#define ProgressCanvas_isRunning RunnableCanvas_isRunning
#endif
#ifndef ProgressCanvas_getLoopTimeHelperP
#define ProgressCanvas_getLoopTimeHelperP RunnableCanvas_getLoopTimeHelperP
#endif
#ifndef ProgressCanvas_setWait
#define ProgressCanvas_setWait RunnableCanvas_setWait
#endif
#ifndef ProgressCanvas_getWait
#define ProgressCanvas_getWait RunnableCanvas_getWait
#endif
#ifndef ProgressCanvas_setCurrentThread
#define ProgressCanvas_setCurrentThread RunnableCanvas_setCurrentThread
#endif
#ifndef ProgressCanvas_setCurrentThreadFake
#define ProgressCanvas_setCurrentThreadFake RunnableCanvas_setCurrentThreadFake
#endif
#ifndef ProgressCanvas_showNotify
#define ProgressCanvas_showNotify RunnableCanvas_showNotify
#endif
#ifndef ProgressCanvas_stopWaiting
#define ProgressCanvas_stopWaiting RunnableCanvas_stopWaiting
#endif
#ifndef ProgressCanvas_waitOnNotify
#define ProgressCanvas_waitOnNotify RunnableCanvas_waitOnNotify
#endif
#ifndef ProgressCanvas_processSleep
#define ProgressCanvas_processSleep RunnableCanvas_processSleep
#endif
#ifndef ProgressCanvas_isPausable
#define ProgressCanvas_isPausable RunnableCanvas_isPausable
#endif
#ifndef ProgressCanvas_processGameSleep
#define ProgressCanvas_processGameSleep RunnableCanvas_processGameSleep
#endif
#ifndef ProgressCanvas_processLoopSleep
#define ProgressCanvas_processLoopSleep RunnableCanvas_processLoopSleep
#endif
#ifndef ProgressCanvas_isSingleThread
#define ProgressCanvas_isSingleThread RunnableCanvas_isSingleThread
#endif
#ifndef ProgressCanvas_run
#define ProgressCanvas_run RunnableCanvas_run
#endif
#ifndef ProgressCanvas_end2
#define ProgressCanvas_end2 RunnableCanvas_end2
#endif
#ifndef ProgressCanvas_getType
#define ProgressCanvas_getType RunnableCanvas_getType
#endif
#ifndef ProgressCanvas_getWidth
#define ProgressCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef ProgressCanvas_getHeight
#define ProgressCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef ProgressCanvas_setFullScreenMode
#define ProgressCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef ProgressCanvas_sizeChanged
#define ProgressCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef ProgressCanvas_getCommandStack
#define ProgressCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef ProgressCanvas_isCommand
#define ProgressCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef ProgressCanvas_addCommand
#define ProgressCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef ProgressCanvas_removeCommand
#define ProgressCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef ProgressCanvas_removeAllCommands
#define ProgressCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef ProgressCanvas_setCommandListener
#define ProgressCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef ProgressCanvas_getCustomCommandListener
#define ProgressCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef ProgressCanvas_isPaused
#define ProgressCanvas_isPaused MyCanvas_isPaused
#endif
#ifndef ProgressCanvas_removePauseCommand
#define ProgressCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef ProgressCanvas_pause
#define ProgressCanvas_pause MyCanvas_pause
#endif
#ifndef ProgressCanvas_unPause
#define ProgressCanvas_unPause MyCanvas_unPause
#endif
#ifndef ProgressCanvas_process
#define ProgressCanvas_process MyCanvas_process
#endif
#ifndef ProgressCanvas_draw
#define ProgressCanvas_draw MyCanvas_draw
#endif
#ifndef ProgressCanvas_hasChild
#define ProgressCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef ProgressCanvas_destroy
#define ProgressCanvas_destroy MyCanvas_destroy
#endif
#ifndef ProgressCanvas_setPaused
#define ProgressCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef ProgressCanvas_keyPressedByDevice
#define ProgressCanvas_keyPressedByDevice MyCanvas_keyPressedByDevice
#endif
#ifndef ProgressCanvas_keyRepeatedByDevice
#define ProgressCanvas_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef ProgressCanvas_keyReleasedByDevice
#define ProgressCanvas_keyReleasedByDevice MyCanvas_keyReleasedByDevice
#endif
#ifndef ProgressCanvas_pointerDragged
#define ProgressCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef ProgressCanvas_pointerPressed
#define ProgressCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef ProgressCanvas_pointerReleased
#define ProgressCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef ProgressCanvas_nextSong
#define ProgressCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef ProgressCanvas_getGameAction
#define ProgressCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef ProgressCanvas_getKeyCode
#define ProgressCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef ProgressCanvas_getKeyName
#define ProgressCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef ProgressCanvas_hasPointerEvents
#define ProgressCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef ProgressCanvas_hasPointerMotionEvents
#define ProgressCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef ProgressCanvas_hasRepeatEvents
#define ProgressCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef ProgressCanvas_hideNotify
#define ProgressCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef ProgressCanvas_isDoubleBuffered
#define ProgressCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef ProgressCanvas_keyPressed
#define ProgressCanvas_keyPressed Canvas_keyPressed
#endif
#ifndef ProgressCanvas_keyRepeated
#define ProgressCanvas_keyRepeated Canvas_keyRepeated
#endif
#ifndef ProgressCanvas_keyReleased
#define ProgressCanvas_keyReleased Canvas_keyReleased
#endif
#ifndef ProgressCanvas_pointerPressed
#define ProgressCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef ProgressCanvas_pointerReleased
#define ProgressCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef ProgressCanvas_pointerDragged
#define ProgressCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef ProgressCanvas_repaint
#define ProgressCanvas_repaint Canvas_repaint
#endif
#ifndef ProgressCanvas_repaintXYWH
#define ProgressCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef ProgressCanvas_serviceRepaints
#define ProgressCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef ProgressCanvas_setFullScreenMode
#define ProgressCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef ProgressCanvas_sizeChanged
#define ProgressCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef ProgressCanvas_showNotify
#define ProgressCanvas_showNotify Canvas_showNotify
#endif
#ifndef ProgressCanvas_setUI
#define ProgressCanvas_setUI Displayable_setUI
#endif
#ifndef ProgressCanvas_getUI
#define ProgressCanvas_getUI Displayable_getUI
#endif
#ifndef ProgressCanvas_addCommand
#define ProgressCanvas_addCommand Displayable_addCommand
#endif
#ifndef ProgressCanvas_removeCommand
#define ProgressCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef ProgressCanvas_getWidth
#define ProgressCanvas_getWidth Displayable_getWidth
#endif
#ifndef ProgressCanvas_getHeight
#define ProgressCanvas_getHeight Displayable_getHeight
#endif
#ifndef ProgressCanvas_isShown
#define ProgressCanvas_isShown Displayable_isShown
#endif
#ifndef ProgressCanvas_getTicker
#define ProgressCanvas_getTicker Displayable_getTicker
#endif
#ifndef ProgressCanvas_setTicker
#define ProgressCanvas_setTicker Displayable_setTicker
#endif
#ifndef ProgressCanvas_getTitle
#define ProgressCanvas_getTitle Displayable_getTitle
#endif
#ifndef ProgressCanvas_setTitle
#define ProgressCanvas_setTitle Displayable_setTitle
#endif
#ifndef ProgressCanvas_setCommandListener
#define ProgressCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef ProgressCanvas_getCommandListener
#define ProgressCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef ProgressCanvas_getCommands
#define ProgressCanvas_getCommands Displayable_getCommands
#endif
#ifndef ProgressCanvas_setFullScreenMode
#define ProgressCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef ProgressCanvas_isFullScreenMode
#define ProgressCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef ProgressCanvas_hideNotify
#define ProgressCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef ProgressCanvas_hideNotifyForDisplay
#define ProgressCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef ProgressCanvas_keyPressed
#define ProgressCanvas_keyPressed Displayable_keyPressed
#endif
#ifndef ProgressCanvas_keyRepeated
#define ProgressCanvas_keyRepeated Displayable_keyRepeated
#endif
#ifndef ProgressCanvas_keyReleased
#define ProgressCanvas_keyReleased Displayable_keyReleased
#endif
#ifndef ProgressCanvas_pointerPressed
#define ProgressCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef ProgressCanvas_pointerReleased
#define ProgressCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef ProgressCanvas_pointerDragged
#define ProgressCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef ProgressCanvas_repaint
#define ProgressCanvas_repaint Displayable_repaint
#endif
#ifndef ProgressCanvas_repaintXYWH
#define ProgressCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef ProgressCanvas_sizeChanged
#define ProgressCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef ProgressCanvas_sizeChangedForDisplay
#define ProgressCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef ProgressCanvas_showNotify
#define ProgressCanvas_showNotify Displayable_showNotify
#endif
#ifndef ProgressCanvas_showNotifyForDisplay
#define ProgressCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ProgressCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ProgressCanvas_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H
