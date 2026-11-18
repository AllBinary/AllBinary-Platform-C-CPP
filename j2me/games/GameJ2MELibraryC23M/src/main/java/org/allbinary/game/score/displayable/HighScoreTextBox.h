#ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H
#define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H
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
// package org.allbinary.game.score.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HighScoreUtil HighScoreUtil;
typedef struct CommandListener CommandListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct TextField TextField;
typedef struct PostGameCommandFactory PostGameCommandFactory;
typedef struct GameInfo GameInfo;
typedef struct HighScore HighScore;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct CustomTextBox CustomTextBox;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct SimpleTextPaintable SimpleTextPaintable;
typedef struct VirtualKeyboardEventHandler VirtualKeyboardEventHandler;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct InApplicationPurchaseFactory InApplicationPurchaseFactory;
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#if __has_include("org/allbinary/input/event/VirtualKeyboardEventHandler.h")
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/HighScoreUtil.h")
#include "org/allbinary/game/score/displayable/HighScoreUtil.h"
#endif

typedef struct HighScoreTextBox HighScoreTextBox;
struct HighScoreTextBox {
    CustomTextBox base;
    VirtualKeyboardEventHandler* virtualKeyboardEventHandler;
    HighScoreUtil* highScoreUtil;
    Paintable* pleaseWait;
    Paintable* paintable;
    bool submitted;
};


HighScoreTextBox* HighScoreTextBox_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void HighScoreTextBox_init(HighScoreTextBox* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void HighScoreTextBox_initCommands(HighScoreTextBox* this, CommandListener* cmdListener);

void HighScoreTextBox_open(HighScoreTextBox* this);

void HighScoreTextBox_close(HighScoreTextBox* this);

void HighScoreTextBox_update(HighScoreTextBox* this);

void HighScoreTextBox_paint(HighScoreTextBox* this, Graphics* graphics);

void HighScoreTextBox_saveHighScore(HighScoreTextBox* this);

void HighScoreTextBox_submit(HighScoreTextBox* this);
#define HighScoreTextBox_new9 HighScoreTextBox_new
#define HighScoreTextBox_init9 HighScoreTextBox_init
#ifndef HighScoreTextBox_onEventRaw
#define HighScoreTextBox_onEventRaw CustomTextBox_onEventRaw
#endif
#ifndef HighScoreTextBox_keyPressed
#define HighScoreTextBox_keyPressed CustomTextBox_keyPressed
#endif
#ifndef HighScoreTextBox_keyReleased
#define HighScoreTextBox_keyReleased CustomTextBox_keyReleased
#endif
#ifndef HighScoreTextBox_keyRepeated
#define HighScoreTextBox_keyRepeated CustomTextBox_keyRepeated
#endif
#ifndef HighScoreTextBox_keyPressedByDevice
#define HighScoreTextBox_keyPressedByDevice CustomTextBox_keyPressedByDevice
#endif
#ifndef HighScoreTextBox_keyReleasedByDevice
#define HighScoreTextBox_keyReleasedByDevice CustomTextBox_keyReleasedByDevice
#endif
#ifndef HighScoreTextBox_paintXY
#define HighScoreTextBox_paintXY CustomTextBox_paintXY
#endif
#ifndef HighScoreTextBox_getTextFieldItem
#define HighScoreTextBox_getTextFieldItem CustomTextBox_getTextFieldItem
#endif
#ifndef HighScoreTextBox_updateMeasurement
#define HighScoreTextBox_updateMeasurement GameCommandCanvas_updateMeasurement
#endif
#ifndef HighScoreTextBox_onEvent
#define HighScoreTextBox_onEvent GameCommandCanvas_onEvent
#endif
#ifndef HighScoreTextBox_onDisplayChangeEvent
#define HighScoreTextBox_onDisplayChangeEvent GameCommandCanvas_onDisplayChangeEvent
#endif
#ifndef HighScoreTextBox_initMenu
#define HighScoreTextBox_initMenu GameCommandCanvas_initMenu
#endif
#ifndef HighScoreTextBox_createForm
#define HighScoreTextBox_createForm GameCommandCanvas_createForm
#endif
#ifndef HighScoreTextBox_createRectangle
#define HighScoreTextBox_createRectangle GameCommandCanvas_createRectangle
#endif
#ifndef HighScoreTextBox_getSourceId
#define HighScoreTextBox_getSourceId GameCommandCanvas_getSourceId
#endif
#ifndef HighScoreTextBox_keyPressed
#define HighScoreTextBox_keyPressed GameCommandCanvas_keyPressed
#endif
#ifndef HighScoreTextBox_keyReleased
#define HighScoreTextBox_keyReleased GameCommandCanvas_keyReleased
#endif
#ifndef HighScoreTextBox_keyRepeated
#define HighScoreTextBox_keyRepeated GameCommandCanvas_keyRepeated
#endif
#ifndef HighScoreTextBox_keyPressedByDevice
#define HighScoreTextBox_keyPressedByDevice GameCommandCanvas_keyPressedByDevice
#endif
#ifndef HighScoreTextBox_keyReleasedByDevice
#define HighScoreTextBox_keyReleasedByDevice GameCommandCanvas_keyReleasedByDevice
#endif
#ifndef HighScoreTextBox_keyRepeatedByDevice
#define HighScoreTextBox_keyRepeatedByDevice GameCommandCanvas_keyRepeatedByDevice
#endif
#ifndef HighScoreTextBox_addGameKeyEvent
#define HighScoreTextBox_addGameKeyEvent GameCommandCanvas_addGameKeyEvent
#endif
#ifndef HighScoreTextBox_removeGameKeyEvent
#define HighScoreTextBox_removeGameKeyEvent GameCommandCanvas_removeGameKeyEvent
#endif
#ifndef HighScoreTextBox_setMenuInputProcessor
#define HighScoreTextBox_setMenuInputProcessor GameCommandCanvas_setMenuInputProcessor
#endif
#ifndef HighScoreTextBox_getMenuInputProcessor
#define HighScoreTextBox_getMenuInputProcessor GameCommandCanvas_getMenuInputProcessor
#endif
#ifndef HighScoreTextBox_getWidth
#define HighScoreTextBox_getWidth MyCanvas_getWidth
#endif
#ifndef HighScoreTextBox_getHeight
#define HighScoreTextBox_getHeight MyCanvas_getHeight
#endif
#ifndef HighScoreTextBox_setFullScreenMode
#define HighScoreTextBox_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef HighScoreTextBox_sizeChanged
#define HighScoreTextBox_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef HighScoreTextBox_getCommandStack
#define HighScoreTextBox_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef HighScoreTextBox_isCommand
#define HighScoreTextBox_isCommand MyCanvas_isCommand
#endif
#ifndef HighScoreTextBox_addCommand
#define HighScoreTextBox_addCommand MyCanvas_addCommand
#endif
#ifndef HighScoreTextBox_removeCommand
#define HighScoreTextBox_removeCommand MyCanvas_removeCommand
#endif
#ifndef HighScoreTextBox_removeAllCommands
#define HighScoreTextBox_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef HighScoreTextBox_setCommandListener
#define HighScoreTextBox_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef HighScoreTextBox_getCustomCommandListener
#define HighScoreTextBox_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef HighScoreTextBox_isPaused
#define HighScoreTextBox_isPaused MyCanvas_isPaused
#endif
#ifndef HighScoreTextBox_removePauseCommand
#define HighScoreTextBox_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef HighScoreTextBox_pause
#define HighScoreTextBox_pause MyCanvas_pause
#endif
#ifndef HighScoreTextBox_unPause
#define HighScoreTextBox_unPause MyCanvas_unPause
#endif
#ifndef HighScoreTextBox_process
#define HighScoreTextBox_process MyCanvas_process
#endif
#ifndef HighScoreTextBox_draw
#define HighScoreTextBox_draw MyCanvas_draw
#endif
#ifndef HighScoreTextBox_hasChild
#define HighScoreTextBox_hasChild MyCanvas_hasChild
#endif
#ifndef HighScoreTextBox_destroy
#define HighScoreTextBox_destroy MyCanvas_destroy
#endif
#ifndef HighScoreTextBox_setPaused
#define HighScoreTextBox_setPaused MyCanvas_setPaused
#endif
#ifndef HighScoreTextBox_keyPressedByDevice
#define HighScoreTextBox_keyPressedByDevice MyCanvas_keyPressedByDevice
#endif
#ifndef HighScoreTextBox_keyRepeatedByDevice
#define HighScoreTextBox_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef HighScoreTextBox_keyReleasedByDevice
#define HighScoreTextBox_keyReleasedByDevice MyCanvas_keyReleasedByDevice
#endif
#ifndef HighScoreTextBox_pointerDragged
#define HighScoreTextBox_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef HighScoreTextBox_pointerPressed
#define HighScoreTextBox_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef HighScoreTextBox_pointerReleased
#define HighScoreTextBox_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef HighScoreTextBox_nextSong
#define HighScoreTextBox_nextSong MyCanvas_nextSong
#endif
#ifndef HighScoreTextBox_getGameAction
#define HighScoreTextBox_getGameAction Canvas_getGameAction
#endif
#ifndef HighScoreTextBox_getKeyCode
#define HighScoreTextBox_getKeyCode Canvas_getKeyCode
#endif
#ifndef HighScoreTextBox_getKeyName
#define HighScoreTextBox_getKeyName Canvas_getKeyName
#endif
#ifndef HighScoreTextBox_hasPointerEvents
#define HighScoreTextBox_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef HighScoreTextBox_hasPointerMotionEvents
#define HighScoreTextBox_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef HighScoreTextBox_hasRepeatEvents
#define HighScoreTextBox_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef HighScoreTextBox_hideNotify
#define HighScoreTextBox_hideNotify Canvas_hideNotify
#endif
#ifndef HighScoreTextBox_isDoubleBuffered
#define HighScoreTextBox_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef HighScoreTextBox_keyPressed
#define HighScoreTextBox_keyPressed Canvas_keyPressed
#endif
#ifndef HighScoreTextBox_keyRepeated
#define HighScoreTextBox_keyRepeated Canvas_keyRepeated
#endif
#ifndef HighScoreTextBox_keyReleased
#define HighScoreTextBox_keyReleased Canvas_keyReleased
#endif
#ifndef HighScoreTextBox_pointerPressed
#define HighScoreTextBox_pointerPressed Canvas_pointerPressed
#endif
#ifndef HighScoreTextBox_pointerReleased
#define HighScoreTextBox_pointerReleased Canvas_pointerReleased
#endif
#ifndef HighScoreTextBox_pointerDragged
#define HighScoreTextBox_pointerDragged Canvas_pointerDragged
#endif
#ifndef HighScoreTextBox_repaint
#define HighScoreTextBox_repaint Canvas_repaint
#endif
#ifndef HighScoreTextBox_repaintXYWH
#define HighScoreTextBox_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef HighScoreTextBox_serviceRepaints
#define HighScoreTextBox_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef HighScoreTextBox_setFullScreenMode
#define HighScoreTextBox_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef HighScoreTextBox_sizeChanged
#define HighScoreTextBox_sizeChanged Canvas_sizeChanged
#endif
#ifndef HighScoreTextBox_showNotify
#define HighScoreTextBox_showNotify Canvas_showNotify
#endif
#ifndef HighScoreTextBox_setUI
#define HighScoreTextBox_setUI Displayable_setUI
#endif
#ifndef HighScoreTextBox_getUI
#define HighScoreTextBox_getUI Displayable_getUI
#endif
#ifndef HighScoreTextBox_addCommand
#define HighScoreTextBox_addCommand Displayable_addCommand
#endif
#ifndef HighScoreTextBox_removeCommand
#define HighScoreTextBox_removeCommand Displayable_removeCommand
#endif
#ifndef HighScoreTextBox_getWidth
#define HighScoreTextBox_getWidth Displayable_getWidth
#endif
#ifndef HighScoreTextBox_getHeight
#define HighScoreTextBox_getHeight Displayable_getHeight
#endif
#ifndef HighScoreTextBox_isShown
#define HighScoreTextBox_isShown Displayable_isShown
#endif
#ifndef HighScoreTextBox_getTicker
#define HighScoreTextBox_getTicker Displayable_getTicker
#endif
#ifndef HighScoreTextBox_setTicker
#define HighScoreTextBox_setTicker Displayable_setTicker
#endif
#ifndef HighScoreTextBox_getTitle
#define HighScoreTextBox_getTitle Displayable_getTitle
#endif
#ifndef HighScoreTextBox_setTitle
#define HighScoreTextBox_setTitle Displayable_setTitle
#endif
#ifndef HighScoreTextBox_setCommandListener
#define HighScoreTextBox_setCommandListener Displayable_setCommandListener
#endif
#ifndef HighScoreTextBox_getCommandListener
#define HighScoreTextBox_getCommandListener Displayable_getCommandListener
#endif
#ifndef HighScoreTextBox_getCommands
#define HighScoreTextBox_getCommands Displayable_getCommands
#endif
#ifndef HighScoreTextBox_setFullScreenMode
#define HighScoreTextBox_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef HighScoreTextBox_isFullScreenMode
#define HighScoreTextBox_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef HighScoreTextBox_hideNotify
#define HighScoreTextBox_hideNotify Displayable_hideNotify
#endif
#ifndef HighScoreTextBox_hideNotifyForDisplay
#define HighScoreTextBox_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef HighScoreTextBox_keyPressed
#define HighScoreTextBox_keyPressed Displayable_keyPressed
#endif
#ifndef HighScoreTextBox_keyRepeated
#define HighScoreTextBox_keyRepeated Displayable_keyRepeated
#endif
#ifndef HighScoreTextBox_keyReleased
#define HighScoreTextBox_keyReleased Displayable_keyReleased
#endif
#ifndef HighScoreTextBox_pointerPressed
#define HighScoreTextBox_pointerPressed Displayable_pointerPressed
#endif
#ifndef HighScoreTextBox_pointerReleased
#define HighScoreTextBox_pointerReleased Displayable_pointerReleased
#endif
#ifndef HighScoreTextBox_pointerDragged
#define HighScoreTextBox_pointerDragged Displayable_pointerDragged
#endif
#ifndef HighScoreTextBox_repaint
#define HighScoreTextBox_repaint Displayable_repaint
#endif
#ifndef HighScoreTextBox_repaintXYWH
#define HighScoreTextBox_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef HighScoreTextBox_sizeChanged
#define HighScoreTextBox_sizeChanged Displayable_sizeChanged
#endif
#ifndef HighScoreTextBox_sizeChangedForDisplay
#define HighScoreTextBox_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef HighScoreTextBox_showNotify
#define HighScoreTextBox_showNotify Displayable_showNotify
#endif
#ifndef HighScoreTextBox_showNotifyForDisplay
#define HighScoreTextBox_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreTextBox_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreTextBox_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H
