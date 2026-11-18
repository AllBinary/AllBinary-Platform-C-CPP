#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayableInterface DisplayableInterface;
typedef struct CanvasStrings CanvasStrings;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct Canvas Canvas;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Graphics Graphics;
typedef struct NullCommandListener NullCommandListener;
typedef struct MyCommandInterface MyCommandInterface;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct TouchJ2ME TouchJ2ME;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct Sound Sound;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct StdUtil StdUtil;
typedef struct ABStack ABStack;
#include "javax/microedition/lcdui/Canvas.h"
#if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#include "org/allbinary/graphics/displayable/command/MyCommandInterface.h"
#if __has_include("org/allbinary/input/TouchJ2ME.h")
#include "org/allbinary/input/TouchJ2ME.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/ABStack.h")
#include "org/allbinary/util/ABStack.h"
#endif
#include "org/allbinary/graphics/displayable/DisplayableInterface.h"
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif

typedef struct MyCanvas MyCanvas;
struct MyCanvas {
    Canvas base;
    DisplayableInterface DisplayableInterface_interface;
    MyCommandInterface MyCommandInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    StringUtil* stringUtil;
    DisplayInfoSingleton* displayInfo;
    const char* name;
    BasicArrayList* childNameList;
    ABStack* commandStack;
    CommandListener* commandListener;
    bool paused;
    TouchJ2ME* touchME;
};


MyCanvas* MyCanvas_new(const char* name, BasicArrayList* childNameList);

void MyCanvas_init(MyCanvas* this, const char* name, BasicArrayList* childNameList);

int32_t MyCanvas_getWidth(MyCanvas* this);

int32_t MyCanvas_getHeight(MyCanvas* this);

void MyCanvas_setFullScreenMode(MyCanvas* this, bool mode);

void MyCanvas_sizeChanged(MyCanvas* this, int32_t w, int32_t h);

ABStack* MyCanvas_getCommandStack(MyCanvas* this);

bool MyCanvas_isCommand(MyCanvas* this, Command* command);

void MyCanvas_addCommand(MyCanvas* this, Command* command);

void MyCanvas_removeCommand(MyCanvas* this, Command* command);

void MyCanvas_removeAllCommands(MyCanvas* this);

void MyCanvas_setCommandListener(MyCanvas* this, CommandListener* l);

CommandListener* MyCanvas_getCustomCommandListener(MyCanvas* this);

bool MyCanvas_isPaused(MyCanvas* this);

void MyCanvas_removePauseCommand(MyCanvas* this);

void MyCanvas_pause(MyCanvas* this);

void MyCanvas_unPause(MyCanvas* this);

void MyCanvas_process(MyCanvas* this);

void MyCanvas_paint(MyCanvas* this, Graphics* graphics);

void MyCanvas_draw(MyCanvas* this, Graphics* graphics);

bool MyCanvas_hasChild(MyCanvas* this, MyCanvas* displayable);

void MyCanvas_destroy(MyCanvas* this);

void MyCanvas_setPaused(MyCanvas* this, bool isPaused);

void MyCanvas_keyPressedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId);

void MyCanvas_keyRepeatedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId);

void MyCanvas_keyReleasedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId);

void MyCanvas_pointerDragged(MyCanvas* this, int32_t x, int32_t y);

void MyCanvas_pointerPressed(MyCanvas* this, int32_t x, int32_t y);

void MyCanvas_pointerReleased(MyCanvas* this, int32_t x, int32_t y);

void MyCanvas_nextSong(MyCanvas* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);
#define MyCanvas_new2 MyCanvas_new
#define MyCanvas_init2 MyCanvas_init
#ifndef MyCanvas_getGameAction
#define MyCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef MyCanvas_getKeyCode
#define MyCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef MyCanvas_getKeyName
#define MyCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef MyCanvas_hasPointerEvents
#define MyCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef MyCanvas_hasPointerMotionEvents
#define MyCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef MyCanvas_hasRepeatEvents
#define MyCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef MyCanvas_hideNotify
#define MyCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef MyCanvas_isDoubleBuffered
#define MyCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef MyCanvas_keyPressed
#define MyCanvas_keyPressed Canvas_keyPressed
#endif
#ifndef MyCanvas_keyRepeated
#define MyCanvas_keyRepeated Canvas_keyRepeated
#endif
#ifndef MyCanvas_keyReleased
#define MyCanvas_keyReleased Canvas_keyReleased
#endif
#ifndef MyCanvas_repaint
#define MyCanvas_repaint Canvas_repaint
#endif
#ifndef MyCanvas_repaintXYWH
#define MyCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef MyCanvas_serviceRepaints
#define MyCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef MyCanvas_showNotify
#define MyCanvas_showNotify Canvas_showNotify
#endif
#ifndef MyCanvas_setUI
#define MyCanvas_setUI Displayable_setUI
#endif
#ifndef MyCanvas_getUI
#define MyCanvas_getUI Displayable_getUI
#endif
#ifndef MyCanvas_isShown
#define MyCanvas_isShown Displayable_isShown
#endif
#ifndef MyCanvas_getTicker
#define MyCanvas_getTicker Displayable_getTicker
#endif
#ifndef MyCanvas_setTicker
#define MyCanvas_setTicker Displayable_setTicker
#endif
#ifndef MyCanvas_getTitle
#define MyCanvas_getTitle Displayable_getTitle
#endif
#ifndef MyCanvas_setTitle
#define MyCanvas_setTitle Displayable_setTitle
#endif
#ifndef MyCanvas_getCommandListener
#define MyCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef MyCanvas_getCommands
#define MyCanvas_getCommands Displayable_getCommands
#endif
#ifndef MyCanvas_isFullScreenMode
#define MyCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef MyCanvas_hideNotify
#define MyCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef MyCanvas_hideNotifyForDisplay
#define MyCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef MyCanvas_keyPressed
#define MyCanvas_keyPressed Displayable_keyPressed
#endif
#ifndef MyCanvas_keyRepeated
#define MyCanvas_keyRepeated Displayable_keyRepeated
#endif
#ifndef MyCanvas_keyReleased
#define MyCanvas_keyReleased Displayable_keyReleased
#endif
#ifndef MyCanvas_repaint
#define MyCanvas_repaint Displayable_repaint
#endif
#ifndef MyCanvas_repaintXYWH
#define MyCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef MyCanvas_sizeChangedForDisplay
#define MyCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef MyCanvas_showNotify
#define MyCanvas_showNotify Displayable_showNotify
#endif
#ifndef MyCanvas_showNotifyForDisplay
#define MyCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MyCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MyCanvas_register(void);

#if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#if __has_include("org/allbinary/util/ABStack.h")
#include "org/allbinary/util/ABStack.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H
