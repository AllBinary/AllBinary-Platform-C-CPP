#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H
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
typedef struct GameCommandCanvas GameCommandCanvas;
typedef struct GameInputMappingInstructionsCanvas GameInputMappingInstructionsCanvas;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Graphics Graphics;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GameKey GameKey;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct InputMappingInterface InputMappingInterface;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct ColorFillBasePaintable ColorFillBasePaintable;
typedef struct ColorFillPaintableFactory ColorFillPaintableFactory;
typedef struct HelpPaintable HelpPaintable;
typedef struct InputMappingHelpPaintable InputMappingHelpPaintable;
typedef struct ProcessPaintable ProcessPaintable;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#if __has_include("org/allbinary/game/input/mapping/PersistentInputMapping.h")
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/paint/ColorFillBasePaintable.h")
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputMappingHelpPaintable.h")
#include "org/allbinary/game/paint/help/InputMappingHelpPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ProcessPaintable.h")
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#include "java/lang/Integer.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"

typedef struct GameInputMappingCanvas GameInputMappingCanvas;
struct GameInputMappingCanvas {
    GameCommandCanvas base;
    InputMappingInterface InputMappingInterface_interface;
    ProcessPaintable* paintable;
    InputMappingHelpPaintable* helpPaintable;
    ColorFillBasePaintable* colorFillPaintable;
    PersistentInputMapping* inputMapping;
    GameKey* NONE;
    AbeClientInformationInterface* abeClientInformation;
    GameKey* selectedGameKey;
    Input* selectedInput;
    InputFactory* inputFactory;
};

extern const char* GameInputMappingCanvas_NAME;
extern Command* GameInputMappingCanvas_DISPLAY;
extern Command* GameInputMappingCanvas_DEFAULT;

GameInputMappingCanvas* GameInputMappingCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable);

void GameInputMappingCanvas_init(GameInputMappingCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable);

void GameInputMappingCanvas_close(GameInputMappingCanvas* this);

void GameInputMappingCanvas_initCommands(GameInputMappingCanvas* this, CommandListener* cmdListener);

void GameInputMappingCanvas_keyPressed(GameInputMappingCanvas* this, int32_t keyCode);

void GameInputMappingCanvas_keyReleased(GameInputMappingCanvas* this, int32_t keyCode);

void GameInputMappingCanvas_keyRepeated(GameInputMappingCanvas* this, int32_t keyCode);

void GameInputMappingCanvas_keyPressedByDevice(GameInputMappingCanvas* this, int32_t keyCode, int32_t deviceId);


void GameInputMappingCanvas_processInputMapping(GameInputMappingCanvas* this, GameKey* gameKey, Input* input);





void GameInputMappingCanvas_setDefault(GameInputMappingCanvas* this);

void GameInputMappingCanvas_update(GameInputMappingCanvas* this);

void GameInputMappingCanvas_paint(GameInputMappingCanvas* this, Graphics* graphics);
#define GameInputMappingCanvas_new4 GameInputMappingCanvas_new
#define GameInputMappingCanvas_init4 GameInputMappingCanvas_init
#ifndef GameInputMappingCanvas_updateMeasurement
#define GameInputMappingCanvas_updateMeasurement GameCommandCanvas_updateMeasurement
#endif
#ifndef GameInputMappingCanvas_onEvent
#define GameInputMappingCanvas_onEvent GameCommandCanvas_onEvent
#endif
#ifndef GameInputMappingCanvas_onDisplayChangeEvent
#define GameInputMappingCanvas_onDisplayChangeEvent GameCommandCanvas_onDisplayChangeEvent
#endif
#ifndef GameInputMappingCanvas_initMenu
#define GameInputMappingCanvas_initMenu GameCommandCanvas_initMenu
#endif
#ifndef GameInputMappingCanvas_createForm
#define GameInputMappingCanvas_createForm GameCommandCanvas_createForm
#endif
#ifndef GameInputMappingCanvas_createRectangle
#define GameInputMappingCanvas_createRectangle GameCommandCanvas_createRectangle
#endif
#ifndef GameInputMappingCanvas_open
#define GameInputMappingCanvas_open GameCommandCanvas_open
#endif
#ifndef GameInputMappingCanvas_getSourceId
#define GameInputMappingCanvas_getSourceId GameCommandCanvas_getSourceId
#endif
#ifndef GameInputMappingCanvas_keyReleasedByDevice
#define GameInputMappingCanvas_keyReleasedByDevice GameCommandCanvas_keyReleasedByDevice
#endif
#ifndef GameInputMappingCanvas_keyRepeatedByDevice
#define GameInputMappingCanvas_keyRepeatedByDevice GameCommandCanvas_keyRepeatedByDevice
#endif
#ifndef GameInputMappingCanvas_addGameKeyEvent
#define GameInputMappingCanvas_addGameKeyEvent GameCommandCanvas_addGameKeyEvent
#endif
#ifndef GameInputMappingCanvas_removeGameKeyEvent
#define GameInputMappingCanvas_removeGameKeyEvent GameCommandCanvas_removeGameKeyEvent
#endif
#ifndef GameInputMappingCanvas_setMenuInputProcessor
#define GameInputMappingCanvas_setMenuInputProcessor GameCommandCanvas_setMenuInputProcessor
#endif
#ifndef GameInputMappingCanvas_getMenuInputProcessor
#define GameInputMappingCanvas_getMenuInputProcessor GameCommandCanvas_getMenuInputProcessor
#endif
#ifndef GameInputMappingCanvas_getWidth
#define GameInputMappingCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef GameInputMappingCanvas_getHeight
#define GameInputMappingCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef GameInputMappingCanvas_setFullScreenMode
#define GameInputMappingCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef GameInputMappingCanvas_sizeChanged
#define GameInputMappingCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef GameInputMappingCanvas_getCommandStack
#define GameInputMappingCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef GameInputMappingCanvas_isCommand
#define GameInputMappingCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef GameInputMappingCanvas_addCommand
#define GameInputMappingCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef GameInputMappingCanvas_removeCommand
#define GameInputMappingCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef GameInputMappingCanvas_removeAllCommands
#define GameInputMappingCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef GameInputMappingCanvas_setCommandListener
#define GameInputMappingCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef GameInputMappingCanvas_getCustomCommandListener
#define GameInputMappingCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef GameInputMappingCanvas_isPaused
#define GameInputMappingCanvas_isPaused MyCanvas_isPaused
#endif
#ifndef GameInputMappingCanvas_removePauseCommand
#define GameInputMappingCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef GameInputMappingCanvas_pause
#define GameInputMappingCanvas_pause MyCanvas_pause
#endif
#ifndef GameInputMappingCanvas_unPause
#define GameInputMappingCanvas_unPause MyCanvas_unPause
#endif
#ifndef GameInputMappingCanvas_process
#define GameInputMappingCanvas_process MyCanvas_process
#endif
#ifndef GameInputMappingCanvas_draw
#define GameInputMappingCanvas_draw MyCanvas_draw
#endif
#ifndef GameInputMappingCanvas_hasChild
#define GameInputMappingCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef GameInputMappingCanvas_destroy
#define GameInputMappingCanvas_destroy MyCanvas_destroy
#endif
#ifndef GameInputMappingCanvas_setPaused
#define GameInputMappingCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef GameInputMappingCanvas_keyRepeatedByDevice
#define GameInputMappingCanvas_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef GameInputMappingCanvas_keyReleasedByDevice
#define GameInputMappingCanvas_keyReleasedByDevice MyCanvas_keyReleasedByDevice
#endif
#ifndef GameInputMappingCanvas_pointerDragged
#define GameInputMappingCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef GameInputMappingCanvas_pointerPressed
#define GameInputMappingCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef GameInputMappingCanvas_pointerReleased
#define GameInputMappingCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef GameInputMappingCanvas_nextSong
#define GameInputMappingCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef GameInputMappingCanvas_getGameAction
#define GameInputMappingCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef GameInputMappingCanvas_getKeyCode
#define GameInputMappingCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef GameInputMappingCanvas_getKeyName
#define GameInputMappingCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef GameInputMappingCanvas_hasPointerEvents
#define GameInputMappingCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef GameInputMappingCanvas_hasPointerMotionEvents
#define GameInputMappingCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef GameInputMappingCanvas_hasRepeatEvents
#define GameInputMappingCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef GameInputMappingCanvas_hideNotify
#define GameInputMappingCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef GameInputMappingCanvas_isDoubleBuffered
#define GameInputMappingCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef GameInputMappingCanvas_pointerPressed
#define GameInputMappingCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef GameInputMappingCanvas_pointerReleased
#define GameInputMappingCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef GameInputMappingCanvas_pointerDragged
#define GameInputMappingCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef GameInputMappingCanvas_repaint
#define GameInputMappingCanvas_repaint Canvas_repaint
#endif
#ifndef GameInputMappingCanvas_repaintXYWH
#define GameInputMappingCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef GameInputMappingCanvas_serviceRepaints
#define GameInputMappingCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef GameInputMappingCanvas_setFullScreenMode
#define GameInputMappingCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef GameInputMappingCanvas_sizeChanged
#define GameInputMappingCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef GameInputMappingCanvas_showNotify
#define GameInputMappingCanvas_showNotify Canvas_showNotify
#endif
#ifndef GameInputMappingCanvas_setUI
#define GameInputMappingCanvas_setUI Displayable_setUI
#endif
#ifndef GameInputMappingCanvas_getUI
#define GameInputMappingCanvas_getUI Displayable_getUI
#endif
#ifndef GameInputMappingCanvas_addCommand
#define GameInputMappingCanvas_addCommand Displayable_addCommand
#endif
#ifndef GameInputMappingCanvas_removeCommand
#define GameInputMappingCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef GameInputMappingCanvas_getWidth
#define GameInputMappingCanvas_getWidth Displayable_getWidth
#endif
#ifndef GameInputMappingCanvas_getHeight
#define GameInputMappingCanvas_getHeight Displayable_getHeight
#endif
#ifndef GameInputMappingCanvas_isShown
#define GameInputMappingCanvas_isShown Displayable_isShown
#endif
#ifndef GameInputMappingCanvas_getTicker
#define GameInputMappingCanvas_getTicker Displayable_getTicker
#endif
#ifndef GameInputMappingCanvas_setTicker
#define GameInputMappingCanvas_setTicker Displayable_setTicker
#endif
#ifndef GameInputMappingCanvas_getTitle
#define GameInputMappingCanvas_getTitle Displayable_getTitle
#endif
#ifndef GameInputMappingCanvas_setTitle
#define GameInputMappingCanvas_setTitle Displayable_setTitle
#endif
#ifndef GameInputMappingCanvas_setCommandListener
#define GameInputMappingCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef GameInputMappingCanvas_getCommandListener
#define GameInputMappingCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef GameInputMappingCanvas_getCommands
#define GameInputMappingCanvas_getCommands Displayable_getCommands
#endif
#ifndef GameInputMappingCanvas_setFullScreenMode
#define GameInputMappingCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef GameInputMappingCanvas_isFullScreenMode
#define GameInputMappingCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef GameInputMappingCanvas_hideNotify
#define GameInputMappingCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef GameInputMappingCanvas_hideNotifyForDisplay
#define GameInputMappingCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef GameInputMappingCanvas_pointerPressed
#define GameInputMappingCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef GameInputMappingCanvas_pointerReleased
#define GameInputMappingCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef GameInputMappingCanvas_pointerDragged
#define GameInputMappingCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef GameInputMappingCanvas_repaint
#define GameInputMappingCanvas_repaint Displayable_repaint
#endif
#ifndef GameInputMappingCanvas_repaintXYWH
#define GameInputMappingCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef GameInputMappingCanvas_sizeChanged
#define GameInputMappingCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef GameInputMappingCanvas_sizeChangedForDisplay
#define GameInputMappingCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef GameInputMappingCanvas_showNotify
#define GameInputMappingCanvas_showNotify Displayable_showNotify
#endif
#ifndef GameInputMappingCanvas_showNotifyForDisplay
#define GameInputMappingCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputMappingCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputMappingCanvas_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H
