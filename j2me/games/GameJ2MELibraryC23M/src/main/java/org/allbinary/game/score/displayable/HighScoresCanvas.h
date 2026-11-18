#ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H
#define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H
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
typedef struct HighScoreRunnable HighScoreRunnable;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Graphics Graphics;
typedef struct GameInfo GameInfo;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GameCommandCanvas GameCommandCanvas;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct ColorFillBasePaintable ColorFillBasePaintable;
typedef struct ColorFillPaintableFactory ColorFillPaintableFactory;
typedef struct HighScoreCommandsFactory HighScoreCommandsFactory;
typedef struct HighScores HighScores;
typedef struct HighScoresCanvasInputProcessor HighScoresCanvasInputProcessor;
typedef struct HighScoresCanvasInputProcessorFactoryInterface HighScoresCanvasInputProcessorFactoryInterface;
typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
typedef struct HighScoresHelperBase HighScoresHelperBase;
typedef struct HighScoresPaintable HighScoresPaintable;
typedef struct HighScoresResultsListener HighScoresResultsListener;
typedef struct NoHighScoresFactory NoHighScoresFactory;
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct SimpleTextPaintable SimpleTextPaintable;
typedef struct StringMaker StringMaker;
typedef struct SecondaryThreadPool SecondaryThreadPool;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#if __has_include("org/allbinary/game/paint/ColorFillBasePaintable.h")
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoreCommandsFactory.h")
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresCanvasInputProcessor.h")
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresFactoryInterface.h")
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBase.h")
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/SimpleTextPaintable.h")
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#endif
// #include "org/allbinary/logic/communication/log/LogUtil.h"
// #include "org/allbinary/string/CommonStrings.h"

typedef struct HighScoresCanvas HighScoresCanvas;
struct HighScoresCanvas {
    GameCommandCanvas base;
    HighScoresResultsListener HighScoresResultsListener_interface;
    Paintable* paintable;
    HighScoreCommandsFactory* highScoreCommandsFactory;
    SimpleTextPaintable* waitPaintable;
    HighScoresPaintable* highScoresPaintable;
    HighScoresFactoryInterface* highScoresFactoryInterface;
    ColorFillBasePaintable* colorFillPaintable;
    HighScoresHelperBase* highScoresHelper;
    GameInfo* gameInfo;
    HighScoresCanvasInputProcessor* highScoresCanvasInputProcessor;
    Command* currentCommand;
    bool hasPainted;
};

extern const char* HighScoresCanvas_NAME;

HighScoresCanvas* HighScoresCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface);

void HighScoresCanvas_init(HighScoresCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface);

void HighScoresCanvas_initCommands(HighScoresCanvas* this, CommandListener* cmdListener);

void HighScoresCanvas_open(HighScoresCanvas* this);

void HighScoresCanvas_close(HighScoresCanvas* this);

void HighScoresCanvas_paint(HighScoresCanvas* this, Graphics* graphics);

void HighScoresCanvas_executeUpdate(HighScoresCanvas* this);


void HighScoresCanvas_setHighScoresArray(HighScoresCanvas* this, HighScores** highScoresArray);

void HighScoresCanvas_updateCommand(HighScoresCanvas* this, Command* command);

GameInfo* HighScoresCanvas_getGameInfo(HighScoresCanvas* this);

#define HighScoresCanvas_new6 HighScoresCanvas_new
#define HighScoresCanvas_init6 HighScoresCanvas_init
#ifndef HighScoresCanvas_updateMeasurement
#define HighScoresCanvas_updateMeasurement GameCommandCanvas_updateMeasurement
#endif
#ifndef HighScoresCanvas_onEvent
#define HighScoresCanvas_onEvent GameCommandCanvas_onEvent
#endif
#ifndef HighScoresCanvas_onDisplayChangeEvent
#define HighScoresCanvas_onDisplayChangeEvent GameCommandCanvas_onDisplayChangeEvent
#endif
#ifndef HighScoresCanvas_initMenu
#define HighScoresCanvas_initMenu GameCommandCanvas_initMenu
#endif
#ifndef HighScoresCanvas_createForm
#define HighScoresCanvas_createForm GameCommandCanvas_createForm
#endif
#ifndef HighScoresCanvas_createRectangle
#define HighScoresCanvas_createRectangle GameCommandCanvas_createRectangle
#endif
#ifndef HighScoresCanvas_update
#define HighScoresCanvas_update GameCommandCanvas_update
#endif
#ifndef HighScoresCanvas_getSourceId
#define HighScoresCanvas_getSourceId GameCommandCanvas_getSourceId
#endif
#ifndef HighScoresCanvas_keyPressed
#define HighScoresCanvas_keyPressed GameCommandCanvas_keyPressed
#endif
#ifndef HighScoresCanvas_keyReleased
#define HighScoresCanvas_keyReleased GameCommandCanvas_keyReleased
#endif
#ifndef HighScoresCanvas_keyRepeated
#define HighScoresCanvas_keyRepeated GameCommandCanvas_keyRepeated
#endif
#ifndef HighScoresCanvas_keyPressedByDevice
#define HighScoresCanvas_keyPressedByDevice GameCommandCanvas_keyPressedByDevice
#endif
#ifndef HighScoresCanvas_keyReleasedByDevice
#define HighScoresCanvas_keyReleasedByDevice GameCommandCanvas_keyReleasedByDevice
#endif
#ifndef HighScoresCanvas_keyRepeatedByDevice
#define HighScoresCanvas_keyRepeatedByDevice GameCommandCanvas_keyRepeatedByDevice
#endif
#ifndef HighScoresCanvas_addGameKeyEvent
#define HighScoresCanvas_addGameKeyEvent GameCommandCanvas_addGameKeyEvent
#endif
#ifndef HighScoresCanvas_removeGameKeyEvent
#define HighScoresCanvas_removeGameKeyEvent GameCommandCanvas_removeGameKeyEvent
#endif
#ifndef HighScoresCanvas_setMenuInputProcessor
#define HighScoresCanvas_setMenuInputProcessor GameCommandCanvas_setMenuInputProcessor
#endif
#ifndef HighScoresCanvas_getMenuInputProcessor
#define HighScoresCanvas_getMenuInputProcessor GameCommandCanvas_getMenuInputProcessor
#endif
#ifndef HighScoresCanvas_getWidth
#define HighScoresCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef HighScoresCanvas_getHeight
#define HighScoresCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef HighScoresCanvas_setFullScreenMode
#define HighScoresCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef HighScoresCanvas_sizeChanged
#define HighScoresCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef HighScoresCanvas_getCommandStack
#define HighScoresCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef HighScoresCanvas_isCommand
#define HighScoresCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef HighScoresCanvas_addCommand
#define HighScoresCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef HighScoresCanvas_removeCommand
#define HighScoresCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef HighScoresCanvas_removeAllCommands
#define HighScoresCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef HighScoresCanvas_setCommandListener
#define HighScoresCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef HighScoresCanvas_getCustomCommandListener
#define HighScoresCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef HighScoresCanvas_isPaused
#define HighScoresCanvas_isPaused MyCanvas_isPaused
#endif
#ifndef HighScoresCanvas_removePauseCommand
#define HighScoresCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef HighScoresCanvas_pause
#define HighScoresCanvas_pause MyCanvas_pause
#endif
#ifndef HighScoresCanvas_unPause
#define HighScoresCanvas_unPause MyCanvas_unPause
#endif
#ifndef HighScoresCanvas_process
#define HighScoresCanvas_process MyCanvas_process
#endif
#ifndef HighScoresCanvas_draw
#define HighScoresCanvas_draw MyCanvas_draw
#endif
#ifndef HighScoresCanvas_hasChild
#define HighScoresCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef HighScoresCanvas_destroy
#define HighScoresCanvas_destroy MyCanvas_destroy
#endif
#ifndef HighScoresCanvas_setPaused
#define HighScoresCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef HighScoresCanvas_keyPressedByDevice
#define HighScoresCanvas_keyPressedByDevice MyCanvas_keyPressedByDevice
#endif
#ifndef HighScoresCanvas_keyRepeatedByDevice
#define HighScoresCanvas_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef HighScoresCanvas_keyReleasedByDevice
#define HighScoresCanvas_keyReleasedByDevice MyCanvas_keyReleasedByDevice
#endif
#ifndef HighScoresCanvas_pointerDragged
#define HighScoresCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef HighScoresCanvas_pointerPressed
#define HighScoresCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef HighScoresCanvas_pointerReleased
#define HighScoresCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef HighScoresCanvas_nextSong
#define HighScoresCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef HighScoresCanvas_getGameAction
#define HighScoresCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef HighScoresCanvas_getKeyCode
#define HighScoresCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef HighScoresCanvas_getKeyName
#define HighScoresCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef HighScoresCanvas_hasPointerEvents
#define HighScoresCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef HighScoresCanvas_hasPointerMotionEvents
#define HighScoresCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef HighScoresCanvas_hasRepeatEvents
#define HighScoresCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef HighScoresCanvas_hideNotify
#define HighScoresCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef HighScoresCanvas_isDoubleBuffered
#define HighScoresCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef HighScoresCanvas_keyPressed
#define HighScoresCanvas_keyPressed Canvas_keyPressed
#endif
#ifndef HighScoresCanvas_keyRepeated
#define HighScoresCanvas_keyRepeated Canvas_keyRepeated
#endif
#ifndef HighScoresCanvas_keyReleased
#define HighScoresCanvas_keyReleased Canvas_keyReleased
#endif
#ifndef HighScoresCanvas_pointerPressed
#define HighScoresCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef HighScoresCanvas_pointerReleased
#define HighScoresCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef HighScoresCanvas_pointerDragged
#define HighScoresCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef HighScoresCanvas_repaint
#define HighScoresCanvas_repaint Canvas_repaint
#endif
#ifndef HighScoresCanvas_repaintXYWH
#define HighScoresCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef HighScoresCanvas_serviceRepaints
#define HighScoresCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef HighScoresCanvas_setFullScreenMode
#define HighScoresCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef HighScoresCanvas_sizeChanged
#define HighScoresCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef HighScoresCanvas_showNotify
#define HighScoresCanvas_showNotify Canvas_showNotify
#endif
#ifndef HighScoresCanvas_setUI
#define HighScoresCanvas_setUI Displayable_setUI
#endif
#ifndef HighScoresCanvas_getUI
#define HighScoresCanvas_getUI Displayable_getUI
#endif
#ifndef HighScoresCanvas_addCommand
#define HighScoresCanvas_addCommand Displayable_addCommand
#endif
#ifndef HighScoresCanvas_removeCommand
#define HighScoresCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef HighScoresCanvas_getWidth
#define HighScoresCanvas_getWidth Displayable_getWidth
#endif
#ifndef HighScoresCanvas_getHeight
#define HighScoresCanvas_getHeight Displayable_getHeight
#endif
#ifndef HighScoresCanvas_isShown
#define HighScoresCanvas_isShown Displayable_isShown
#endif
#ifndef HighScoresCanvas_getTicker
#define HighScoresCanvas_getTicker Displayable_getTicker
#endif
#ifndef HighScoresCanvas_setTicker
#define HighScoresCanvas_setTicker Displayable_setTicker
#endif
#ifndef HighScoresCanvas_getTitle
#define HighScoresCanvas_getTitle Displayable_getTitle
#endif
#ifndef HighScoresCanvas_setTitle
#define HighScoresCanvas_setTitle Displayable_setTitle
#endif
#ifndef HighScoresCanvas_setCommandListener
#define HighScoresCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef HighScoresCanvas_getCommandListener
#define HighScoresCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef HighScoresCanvas_getCommands
#define HighScoresCanvas_getCommands Displayable_getCommands
#endif
#ifndef HighScoresCanvas_setFullScreenMode
#define HighScoresCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef HighScoresCanvas_isFullScreenMode
#define HighScoresCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef HighScoresCanvas_hideNotify
#define HighScoresCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef HighScoresCanvas_hideNotifyForDisplay
#define HighScoresCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef HighScoresCanvas_keyPressed
#define HighScoresCanvas_keyPressed Displayable_keyPressed
#endif
#ifndef HighScoresCanvas_keyRepeated
#define HighScoresCanvas_keyRepeated Displayable_keyRepeated
#endif
#ifndef HighScoresCanvas_keyReleased
#define HighScoresCanvas_keyReleased Displayable_keyReleased
#endif
#ifndef HighScoresCanvas_pointerPressed
#define HighScoresCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef HighScoresCanvas_pointerReleased
#define HighScoresCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef HighScoresCanvas_pointerDragged
#define HighScoresCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef HighScoresCanvas_repaint
#define HighScoresCanvas_repaint Displayable_repaint
#endif
#ifndef HighScoresCanvas_repaintXYWH
#define HighScoresCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef HighScoresCanvas_sizeChanged
#define HighScoresCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef HighScoresCanvas_sizeChangedForDisplay
#define HighScoresCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef HighScoresCanvas_showNotify
#define HighScoresCanvas_showNotify Displayable_showNotify
#endif
#ifndef HighScoresCanvas_showNotifyForDisplay
#define HighScoresCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresCanvas_register(void);

#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H
