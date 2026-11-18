#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H
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
typedef struct MenuListener MenuListener;
typedef struct NoMenuInputProcessor NoMenuInputProcessor;
typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
typedef struct ImmediateCommandFormInputProcessor ImmediateCommandFormInputProcessor;
typedef struct CommandListener CommandListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct NullCommandListener NullCommandListener;
typedef struct Processor Processor;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct Features Features;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct RepaintBehavior RepaintBehavior;
typedef struct GameInputStrings GameInputStrings;
typedef struct GameKey GameKey;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct DownGameKeyEventHandler DownGameKeyEventHandler;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct GameKeyEventHandler GameKeyEventHandler;
typedef struct UpGameKeyEventHandler UpGameKeyEventHandler;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct BasicColor BasicColor;
typedef struct CanvasStrings CanvasStrings;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyCanvas MyCanvas;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
typedef struct DisplayChangeEventListener DisplayChangeEventListener;
typedef struct ScreenRepaintProcessorFactory ScreenRepaintProcessorFactory;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct CommandCurrentSelectionFormFactory CommandCurrentSelectionFormFactory;
typedef struct FormPaintable FormPaintable;
typedef struct FormTypeFactory FormTypeFactory;
typedef struct PaintableForm PaintableForm;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct ScrollSelectionFormNoneFactory ScrollSelectionFormNoneFactory;
typedef struct CommandTextItemArrayFactory CommandTextItemArrayFactory;
typedef struct ABCustomItem ABCustomItem;
typedef struct AllCommandsVisitor AllCommandsVisitor;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#if __has_include("org/allbinary/game/displayable/RepaintBehavior.h")
#include "org/allbinary/game/displayable/RepaintBehavior.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/graphics/form/PaintableForm.h")
#include "org/allbinary/graphics/form/PaintableForm.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif

typedef struct GameCommandCanvas GameCommandCanvas;
struct GameCommandCanvas {
    MyCanvas base;
    MenuListener MenuListener_interface;
    DisplayChangeEventListener DisplayChangeEventListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    Processor* repaintProcessor;
    GameInputStrings* gameInputStrings;
    BasicColor* foregroundBasicColor;
    BasicColor* backgroundBasicColor;
    InputToGameKeyMapping* inputToGameKeyMapping;
    GameKeyFactory* gameKeyFactory;
    GameKeyEventFactory* gameKeyEventFactory;
    DownGameKeyEventHandler* downGameKeyEventHandler;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    RepaintBehavior* repaintBehavior;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t foregroundColor;
    int32_t backgroundColor;
    BasicMenuInputProcessor* menuInputProcessor;
    Paintable* menuPaintable;
    PaintableForm* menuForm;
    bool isSingleKeyRepeatableProcessing;
    int32_t fontHeight;
};


GameCommandCanvas* GameCommandCanvas_new(CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void GameCommandCanvas_init(GameCommandCanvas* this, CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void GameCommandCanvas_updateMeasurement(GameCommandCanvas* this, Graphics* graphics);

void GameCommandCanvas_onEvent(GameCommandCanvas* this, AllBinaryEventObject* eventObject);

void GameCommandCanvas_onDisplayChangeEvent(GameCommandCanvas* this, DisplayChangeEvent* displayChangeEvent);

void GameCommandCanvas_initCommands(GameCommandCanvas* this, CommandListener* cmdListener);

void GameCommandCanvas_initMenu(GameCommandCanvas* this);

ScrollSelectionForm* GameCommandCanvas_createForm(GameCommandCanvas* this);

Rectangle* GameCommandCanvas_createRectangle(GameCommandCanvas* this, int32_t size);

void GameCommandCanvas_open(GameCommandCanvas* this);

void GameCommandCanvas_close(GameCommandCanvas* this);

void GameCommandCanvas_update(GameCommandCanvas* this);

int32_t GameCommandCanvas_getSourceId(GameCommandCanvas* this);

void GameCommandCanvas_keyPressed(GameCommandCanvas* this, int32_t keyCode);

void GameCommandCanvas_keyReleased(GameCommandCanvas* this, int32_t keyCode);

void GameCommandCanvas_keyRepeated(GameCommandCanvas* this, int32_t keyCode);

void GameCommandCanvas_keyPressedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId);

void GameCommandCanvas_keyReleasedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId);

void GameCommandCanvas_keyRepeatedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId);



void GameCommandCanvas_paint(GameCommandCanvas* this, Graphics* graphics);


BasicMenuInputProcessor* GameCommandCanvas_getMenuInputProcessor(GameCommandCanvas* this);
#define GameCommandCanvas_new4 GameCommandCanvas_new
#define GameCommandCanvas_init4 GameCommandCanvas_init
#ifndef GameCommandCanvas_getWidth
#define GameCommandCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef GameCommandCanvas_getHeight
#define GameCommandCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef GameCommandCanvas_setFullScreenMode
#define GameCommandCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef GameCommandCanvas_sizeChanged
#define GameCommandCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef GameCommandCanvas_getCommandStack
#define GameCommandCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef GameCommandCanvas_isCommand
#define GameCommandCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef GameCommandCanvas_addCommand
#define GameCommandCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef GameCommandCanvas_removeCommand
#define GameCommandCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef GameCommandCanvas_removeAllCommands
#define GameCommandCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef GameCommandCanvas_setCommandListener
#define GameCommandCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef GameCommandCanvas_getCustomCommandListener
#define GameCommandCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef GameCommandCanvas_isPaused
#define GameCommandCanvas_isPaused MyCanvas_isPaused
#endif
#ifndef GameCommandCanvas_removePauseCommand
#define GameCommandCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef GameCommandCanvas_pause
#define GameCommandCanvas_pause MyCanvas_pause
#endif
#ifndef GameCommandCanvas_unPause
#define GameCommandCanvas_unPause MyCanvas_unPause
#endif
#ifndef GameCommandCanvas_process
#define GameCommandCanvas_process MyCanvas_process
#endif
#ifndef GameCommandCanvas_draw
#define GameCommandCanvas_draw MyCanvas_draw
#endif
#ifndef GameCommandCanvas_hasChild
#define GameCommandCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef GameCommandCanvas_destroy
#define GameCommandCanvas_destroy MyCanvas_destroy
#endif
#ifndef GameCommandCanvas_setPaused
#define GameCommandCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef GameCommandCanvas_pointerDragged
#define GameCommandCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef GameCommandCanvas_pointerPressed
#define GameCommandCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef GameCommandCanvas_pointerReleased
#define GameCommandCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef GameCommandCanvas_nextSong
#define GameCommandCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef GameCommandCanvas_getGameAction
#define GameCommandCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef GameCommandCanvas_getKeyCode
#define GameCommandCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef GameCommandCanvas_getKeyName
#define GameCommandCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef GameCommandCanvas_hasPointerEvents
#define GameCommandCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef GameCommandCanvas_hasPointerMotionEvents
#define GameCommandCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef GameCommandCanvas_hasRepeatEvents
#define GameCommandCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef GameCommandCanvas_hideNotify
#define GameCommandCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef GameCommandCanvas_isDoubleBuffered
#define GameCommandCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef GameCommandCanvas_pointerPressed
#define GameCommandCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef GameCommandCanvas_pointerReleased
#define GameCommandCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef GameCommandCanvas_pointerDragged
#define GameCommandCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef GameCommandCanvas_repaint
#define GameCommandCanvas_repaint Canvas_repaint
#endif
#ifndef GameCommandCanvas_repaintXYWH
#define GameCommandCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef GameCommandCanvas_serviceRepaints
#define GameCommandCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef GameCommandCanvas_setFullScreenMode
#define GameCommandCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef GameCommandCanvas_sizeChanged
#define GameCommandCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef GameCommandCanvas_showNotify
#define GameCommandCanvas_showNotify Canvas_showNotify
#endif
#ifndef GameCommandCanvas_setUI
#define GameCommandCanvas_setUI Displayable_setUI
#endif
#ifndef GameCommandCanvas_getUI
#define GameCommandCanvas_getUI Displayable_getUI
#endif
#ifndef GameCommandCanvas_addCommand
#define GameCommandCanvas_addCommand Displayable_addCommand
#endif
#ifndef GameCommandCanvas_removeCommand
#define GameCommandCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef GameCommandCanvas_getWidth
#define GameCommandCanvas_getWidth Displayable_getWidth
#endif
#ifndef GameCommandCanvas_getHeight
#define GameCommandCanvas_getHeight Displayable_getHeight
#endif
#ifndef GameCommandCanvas_isShown
#define GameCommandCanvas_isShown Displayable_isShown
#endif
#ifndef GameCommandCanvas_getTicker
#define GameCommandCanvas_getTicker Displayable_getTicker
#endif
#ifndef GameCommandCanvas_setTicker
#define GameCommandCanvas_setTicker Displayable_setTicker
#endif
#ifndef GameCommandCanvas_getTitle
#define GameCommandCanvas_getTitle Displayable_getTitle
#endif
#ifndef GameCommandCanvas_setTitle
#define GameCommandCanvas_setTitle Displayable_setTitle
#endif
#ifndef GameCommandCanvas_setCommandListener
#define GameCommandCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef GameCommandCanvas_getCommandListener
#define GameCommandCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef GameCommandCanvas_getCommands
#define GameCommandCanvas_getCommands Displayable_getCommands
#endif
#ifndef GameCommandCanvas_setFullScreenMode
#define GameCommandCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef GameCommandCanvas_isFullScreenMode
#define GameCommandCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef GameCommandCanvas_hideNotify
#define GameCommandCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef GameCommandCanvas_hideNotifyForDisplay
#define GameCommandCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef GameCommandCanvas_pointerPressed
#define GameCommandCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef GameCommandCanvas_pointerReleased
#define GameCommandCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef GameCommandCanvas_pointerDragged
#define GameCommandCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef GameCommandCanvas_repaint
#define GameCommandCanvas_repaint Displayable_repaint
#endif
#ifndef GameCommandCanvas_repaintXYWH
#define GameCommandCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef GameCommandCanvas_sizeChanged
#define GameCommandCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef GameCommandCanvas_sizeChangedForDisplay
#define GameCommandCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef GameCommandCanvas_showNotify
#define GameCommandCanvas_showNotify Displayable_showNotify
#endif
#ifndef GameCommandCanvas_showNotifyForDisplay
#define GameCommandCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCommandCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameCommandCanvas_register(void);

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H
