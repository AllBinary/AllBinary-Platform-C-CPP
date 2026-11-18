#ifndef ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H
#define ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H
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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Processor Processor;
typedef struct RunnableCanvasRefreshHelper RunnableCanvasRefreshHelper;
typedef struct CommandListener CommandListener;
typedef struct TsUtil TsUtil;
typedef struct NullWaitGameRunnable NullWaitGameRunnable;
typedef struct MyCanvas MyCanvas;
typedef struct ABSystemWrapper ABSystemWrapper;
typedef struct NullUtil NullUtil;
typedef struct StdUtil StdUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
typedef struct NullThread NullThread;
typedef struct RunnableInterface RunnableInterface;
typedef struct ThreadObjectUtil ThreadObjectUtil;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#if __has_include("org/allbinary/logic/ABSystemWrapper.h")
#include "org/allbinary/logic/ABSystemWrapper.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#include "org/allbinary/thread/RunnableInterface.h"
#if __has_include("org/allbinary/thread/ThreadObjectUtil.h")
#include "org/allbinary/thread/ThreadObjectUtil.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Thread.h"
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif

typedef struct RunnableCanvas RunnableCanvas;
struct RunnableCanvas {
    MyCanvas base;
    RunnableInterface RunnableInterface_interface;
    NullUtil* nullUtil;
    StdUtil* stdUtil;
    ABSystemWrapper* systemWrapper;
    TsUtil* tsUtil;
    Thread* thread;
    Thread* currentThread;
    bool running;
    TimeDelayHelper* loopTimeHelper;
    Processor* runnableCanvasRefreshHelper;
    CommonLabels* commonLabels;
    ThreadObjectUtil* threadObjectUtil;
    const char* SET_RUNNING;
    const char* IS_RUNNING;
    const char* THREAD;
    const char* NOT_EQUAL;
    const char* PAUSE_SLEEP;
    const char* START_PAUSE;
    const char* END_PAUSE;
    const char* PROCESS_LOOP_SLEEP;
    int64_t pauseWait;
    bool notified;
};


RunnableCanvas* RunnableCanvas_new(CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam);

void RunnableCanvas_init(RunnableCanvas* this, CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam);

void RunnableCanvas_initCommands(RunnableCanvas* this, CommandListener* cmdListener);

bool RunnableCanvas_isMainCanvas(RunnableCanvas* this);

void RunnableCanvas_setThread(RunnableCanvas* this, Thread* thread);

void RunnableCanvas_setRunning(RunnableCanvas* this, bool running);

bool RunnableCanvas_isRunning(RunnableCanvas* this);

TimeDelayHelper* RunnableCanvas_getLoopTimeHelperP(RunnableCanvas* this);

void RunnableCanvas_setWait(RunnableCanvas* this, int32_t wait);

int32_t RunnableCanvas_getWait(RunnableCanvas* this);

void RunnableCanvas_setCurrentThread(RunnableCanvas* this);

void RunnableCanvas_setCurrentThreadFake(RunnableCanvas* this);

void RunnableCanvas_showNotify(RunnableCanvas* this);


void RunnableCanvas_waitOnNotify(RunnableCanvas* this, int64_t wait);

void RunnableCanvas_processSleep(RunnableCanvas* this);

bool RunnableCanvas_isPausable(RunnableCanvas* this);

void RunnableCanvas_processGameSleep(RunnableCanvas* this, int64_t sleep);

void RunnableCanvas_processLoopSleep(RunnableCanvas* this);

bool RunnableCanvas_isSingleThread(RunnableCanvas* this);

void RunnableCanvas_run(RunnableCanvas* this);

void RunnableCanvas_end2(RunnableCanvas* this);

int32_t RunnableCanvas_getType(RunnableCanvas* this);
#define RunnableCanvas_new3 RunnableCanvas_new
#define RunnableCanvas_init3 RunnableCanvas_init
#ifndef RunnableCanvas_getWidth
#define RunnableCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef RunnableCanvas_getHeight
#define RunnableCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef RunnableCanvas_setFullScreenMode
#define RunnableCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef RunnableCanvas_sizeChanged
#define RunnableCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef RunnableCanvas_getCommandStack
#define RunnableCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef RunnableCanvas_isCommand
#define RunnableCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef RunnableCanvas_addCommand
#define RunnableCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef RunnableCanvas_removeCommand
#define RunnableCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef RunnableCanvas_removeAllCommands
#define RunnableCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef RunnableCanvas_setCommandListener
#define RunnableCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef RunnableCanvas_getCustomCommandListener
#define RunnableCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef RunnableCanvas_isPaused
#define RunnableCanvas_isPaused MyCanvas_isPaused
#endif
#ifndef RunnableCanvas_removePauseCommand
#define RunnableCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef RunnableCanvas_pause
#define RunnableCanvas_pause MyCanvas_pause
#endif
#ifndef RunnableCanvas_unPause
#define RunnableCanvas_unPause MyCanvas_unPause
#endif
#ifndef RunnableCanvas_process
#define RunnableCanvas_process MyCanvas_process
#endif
#ifndef RunnableCanvas_paint
#define RunnableCanvas_paint MyCanvas_paint
#endif
#ifndef RunnableCanvas_draw
#define RunnableCanvas_draw MyCanvas_draw
#endif
#ifndef RunnableCanvas_hasChild
#define RunnableCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef RunnableCanvas_destroy
#define RunnableCanvas_destroy MyCanvas_destroy
#endif
#ifndef RunnableCanvas_setPaused
#define RunnableCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef RunnableCanvas_keyPressedByDevice
#define RunnableCanvas_keyPressedByDevice MyCanvas_keyPressedByDevice
#endif
#ifndef RunnableCanvas_keyRepeatedByDevice
#define RunnableCanvas_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef RunnableCanvas_keyReleasedByDevice
#define RunnableCanvas_keyReleasedByDevice MyCanvas_keyReleasedByDevice
#endif
#ifndef RunnableCanvas_pointerDragged
#define RunnableCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef RunnableCanvas_pointerPressed
#define RunnableCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef RunnableCanvas_pointerReleased
#define RunnableCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef RunnableCanvas_nextSong
#define RunnableCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef RunnableCanvas_getGameAction
#define RunnableCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef RunnableCanvas_getKeyCode
#define RunnableCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef RunnableCanvas_getKeyName
#define RunnableCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef RunnableCanvas_hasPointerEvents
#define RunnableCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef RunnableCanvas_hasPointerMotionEvents
#define RunnableCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef RunnableCanvas_hasRepeatEvents
#define RunnableCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef RunnableCanvas_hideNotify
#define RunnableCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef RunnableCanvas_isDoubleBuffered
#define RunnableCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef RunnableCanvas_keyPressed
#define RunnableCanvas_keyPressed Canvas_keyPressed
#endif
#ifndef RunnableCanvas_keyRepeated
#define RunnableCanvas_keyRepeated Canvas_keyRepeated
#endif
#ifndef RunnableCanvas_keyReleased
#define RunnableCanvas_keyReleased Canvas_keyReleased
#endif
#ifndef RunnableCanvas_paint
#define RunnableCanvas_paint Canvas_paint
#endif
#ifndef RunnableCanvas_pointerPressed
#define RunnableCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef RunnableCanvas_pointerReleased
#define RunnableCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef RunnableCanvas_pointerDragged
#define RunnableCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef RunnableCanvas_repaint
#define RunnableCanvas_repaint Canvas_repaint
#endif
#ifndef RunnableCanvas_repaintXYWH
#define RunnableCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef RunnableCanvas_serviceRepaints
#define RunnableCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef RunnableCanvas_setFullScreenMode
#define RunnableCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef RunnableCanvas_sizeChanged
#define RunnableCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef RunnableCanvas_setUI
#define RunnableCanvas_setUI Displayable_setUI
#endif
#ifndef RunnableCanvas_getUI
#define RunnableCanvas_getUI Displayable_getUI
#endif
#ifndef RunnableCanvas_addCommand
#define RunnableCanvas_addCommand Displayable_addCommand
#endif
#ifndef RunnableCanvas_removeCommand
#define RunnableCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef RunnableCanvas_getWidth
#define RunnableCanvas_getWidth Displayable_getWidth
#endif
#ifndef RunnableCanvas_getHeight
#define RunnableCanvas_getHeight Displayable_getHeight
#endif
#ifndef RunnableCanvas_isShown
#define RunnableCanvas_isShown Displayable_isShown
#endif
#ifndef RunnableCanvas_getTicker
#define RunnableCanvas_getTicker Displayable_getTicker
#endif
#ifndef RunnableCanvas_setTicker
#define RunnableCanvas_setTicker Displayable_setTicker
#endif
#ifndef RunnableCanvas_getTitle
#define RunnableCanvas_getTitle Displayable_getTitle
#endif
#ifndef RunnableCanvas_setTitle
#define RunnableCanvas_setTitle Displayable_setTitle
#endif
#ifndef RunnableCanvas_setCommandListener
#define RunnableCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef RunnableCanvas_getCommandListener
#define RunnableCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef RunnableCanvas_getCommands
#define RunnableCanvas_getCommands Displayable_getCommands
#endif
#ifndef RunnableCanvas_setFullScreenMode
#define RunnableCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef RunnableCanvas_isFullScreenMode
#define RunnableCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef RunnableCanvas_hideNotify
#define RunnableCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef RunnableCanvas_hideNotifyForDisplay
#define RunnableCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef RunnableCanvas_keyPressed
#define RunnableCanvas_keyPressed Displayable_keyPressed
#endif
#ifndef RunnableCanvas_keyRepeated
#define RunnableCanvas_keyRepeated Displayable_keyRepeated
#endif
#ifndef RunnableCanvas_keyReleased
#define RunnableCanvas_keyReleased Displayable_keyReleased
#endif
#ifndef RunnableCanvas_pointerPressed
#define RunnableCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef RunnableCanvas_pointerReleased
#define RunnableCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef RunnableCanvas_pointerDragged
#define RunnableCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef RunnableCanvas_paint
#define RunnableCanvas_paint Displayable_paint
#endif
#ifndef RunnableCanvas_repaint
#define RunnableCanvas_repaint Displayable_repaint
#endif
#ifndef RunnableCanvas_repaintXYWH
#define RunnableCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef RunnableCanvas_sizeChanged
#define RunnableCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef RunnableCanvas_sizeChangedForDisplay
#define RunnableCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef RunnableCanvas_showNotifyForDisplay
#define RunnableCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RunnableCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RunnableCanvas_register(void);

#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

#endif // ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H
