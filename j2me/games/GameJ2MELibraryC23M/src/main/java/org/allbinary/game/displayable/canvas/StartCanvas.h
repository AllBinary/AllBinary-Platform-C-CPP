#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H
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
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
typedef struct MenuListener MenuListener;
typedef struct FormUtil FormUtil;
typedef struct NoMenuInputProcessor NoMenuInputProcessor;
typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
typedef struct NullWaitGameRunnable NullWaitGameRunnable;
typedef struct GameRunnable GameRunnable;
typedef struct GameInputMappingCanvas GameInputMappingCanvas;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Graphics Graphics;
typedef struct Item Item;
typedef struct J2MEUtil J2MEUtil;
typedef struct Animation Animation;
typedef struct IndexedAnimationBehavior IndexedAnimationBehavior;
typedef struct SpecialAnimation SpecialAnimation;
typedef struct GameAdStateFactory GameAdStateFactory;
typedef struct BaseGameStatistics BaseGameStatistics;
typedef struct CustomGameMenuUtil CustomGameMenuUtil;
typedef struct FullScreenUtil FullScreenUtil;
typedef struct GameStatisticsFactory GameStatisticsFactory;
typedef struct RunnableCanvas RunnableCanvas;
typedef struct GameAdState GameAdState;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
typedef struct Features Features;
typedef struct GameFeatureFactory GameFeatureFactory;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct BasicBuildGameInitializerFactory BasicBuildGameInitializerFactory;
typedef struct GameInitializationUtil GameInitializationUtil;
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
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct SWTUtil SWTUtil;
typedef struct DemoGameMidlet DemoGameMidlet;
typedef struct HighScoreCommands HighScoreCommands;
typedef struct HighScores HighScores;
typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
typedef struct HighScoresHelper HighScoresHelper;
typedef struct HighScoresPaintable HighScoresPaintable;
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct GameState GameState;
typedef struct GameStateFactory GameStateFactory;
typedef struct Rectangle Rectangle;
typedef struct ResizableListenerHandler ResizableListenerHandler;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
typedef struct DisplayChangeEventListener DisplayChangeEventListener;
typedef struct FormType FormType;
typedef struct FormTypeFactory FormTypeFactory;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct CurrentDisplayableFactory CurrentDisplayableFactory;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
typedef struct OpenGLThreadUtil OpenGLThreadUtil;
typedef struct InitUpdatePaintable InitUpdatePaintable;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct StatePaintable StatePaintable;
typedef struct StatePaintableFactory StatePaintableFactory;
typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct InApplicationPurchaseFactory InApplicationPurchaseFactory;
typedef struct LockableFeature LockableFeature;
typedef struct LockableFeatureFactory LockableFeatureFactory;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
typedef struct EarlySoundsFactory EarlySoundsFactory;
typedef struct CommonSeps CommonSeps;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/special/SpecialAnimation.h")
#include "org/allbinary/animation/special/SpecialAnimation.h"
#endif
#if __has_include("org/allbinary/business/advertisement/GameAdStateFactory.h")
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#endif
#if __has_include("org/allbinary/canvas/BaseGameStatistics.h")
#include "org/allbinary/canvas/BaseGameStatistics.h"
#endif
#if __has_include("org/allbinary/canvas/FullScreenUtil.h")
#include "org/allbinary/canvas/FullScreenUtil.h"
#endif
#include "org/allbinary/canvas/RunnableCanvas.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/init/BasicBuildGameInitializerFactory.h")
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresFactoryInterface.h")
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelper.h")
#include "org/allbinary/game/score/HighScoresHelper.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InitUpdatePaintable.h")
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PaintableInterface.h")
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/paint/StatePaintable.h")
#include "org/allbinary/graphics/paint/StatePaintable.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#if __has_include("org/allbinary/game/displayable/canvas/FormUtil.h")
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#endif

typedef struct StartCanvas StartCanvas;
struct StartCanvas {
    RunnableCanvas base;
    GameCanvasRunnableInterface GameCanvasRunnableInterface_interface;
    MenuListener MenuListener_interface;
    DisplayChangeEventListener DisplayChangeEventListener_interface;
    BasicColorFactory* basicColorFactory;
    Features* features;
    OpenGLFeatureFactory* openGLFeatureFactory;
    MyCommandsFactory* myCommandsFactory;
    GameAdStateFactory* gameAdStateFactory;
    GameStateFactory* gameStateFactory;
    GameInputStrings* gameInputStrings;
    FormUtil* formUtil;
    StatePaintable* basicGameDemoPaintable;
    SpecialAnimation* specialAnimationInterface;
    Animation* paintedSpecialAnimationInterface;
    FullScreenUtil* fullScreenUtil;
    HighScoresHelper* highScoresHelper;
    HighScoresPaintable* realHighScoresPaintable;
    Paintable* highScoresPaintable;
    int32_t state;
    TimeDelayHelper* timeDelayHelper;
    HighScoresFactoryInterface* highScoresFactoryInterface;
    BasicMenuInputProcessor* menuInputProcessor;
    ScrollSelectionForm* menuForm;
    BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface;
    bool initialized;
    Paintable* defaultPaintableInterface;
    PaintableInterface* paintableInterface;
    InitUpdatePaintable* overlayPaintable;
    int32_t tempWait;
    InputToGameKeyMapping* inputToGameKeyMapping;
    GameRunnable* gameRunnable;
    PaintableInterface* progressPaintable;
    bool isSingleKeyRepeatableProcessing;
    GameKey* NONE;
    GameKeyEventFactory* gameKeyEventFactory;
    const char* SET_STATE;
    BaseGameStatistics* baseGameStatistics;
};


StartCanvas* StartCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

void StartCanvas_init(StartCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

void StartCanvas_onEvent(StartCanvas* this, AllBinaryEventObject* eventObject);

void StartCanvas_onDisplayChangeEvent(StartCanvas* this, DisplayChangeEvent* displayChangeEvent);

void** StartCanvas_getCustomCommands(StartCanvas* this);

void StartCanvas_initCommands(StartCanvas* this, CommandListener* cmdListener);

void StartCanvas_initPostPaint(StartCanvas* this);

void StartCanvas_mediaInit(StartCanvas* this);

void StartCanvas_itemStateChanged(StartCanvas* this, Item* item);

void StartCanvas_initMenu(StartCanvas* this);

void StartCanvas_open(StartCanvas* this);

void StartCanvas_close(StartCanvas* this);

int32_t StartCanvas_getSourceId(StartCanvas* this);

void StartCanvas_keyPressed(StartCanvas* this, int32_t keyCode);

void StartCanvas_keyReleased(StartCanvas* this, int32_t keyCode);

void StartCanvas_keyRepeated(StartCanvas* this, int32_t keyCode);

void StartCanvas_keyPressedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId);

void StartCanvas_keyReleasedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId);

void StartCanvas_keyRepeatedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId);



void StartCanvas_pause(StartCanvas* this);

void StartCanvas_unPause(StartCanvas* this);

bool StartCanvas_isPausable(StartCanvas* this);

bool StartCanvas_isGameOver(StartCanvas* this);

void StartCanvas_setLoadStateHashtable(StartCanvas* this, ABHashtable* hashtable);

ABHashtable* StartCanvas_getLoadStateHashtable(StartCanvas* this);

ABHashtable* StartCanvas_getCurrentStateHashtable(StartCanvas* this);

void StartCanvas_setHighScoreSubmitted(StartCanvas* this, bool isNotUsed);

void StartCanvas_paint(StartCanvas* this, Graphics* graphics);

void StartCanvas_paintThreed(StartCanvas* this, Graphics* graphics);

void StartCanvas_processGameOver(StartCanvas* this);

void StartCanvas_demoStateChange(StartCanvas* this);

void StartCanvas_updateDemoState(StartCanvas* this);

int32_t StartCanvas_getNextRandom(StartCanvas* this);

AllBinaryGameLayerManager* StartCanvas_createGameLayerManager(StartCanvas* this, int32_t randomValue);

GameCanvasRunnableInterface* StartCanvas_createRunnable(StartCanvas* this, int32_t randomLevel);

void StartCanvas_createCanvas(StartCanvas* this);

void StartCanvas_start(StartCanvas* this);

void StartCanvas_preDemoProcess(StartCanvas* this);

void StartCanvas_process(StartCanvas* this);

void StartCanvas_startDemoGame(StartCanvas* this);

void StartCanvas_processGame(StartCanvas* this);

void StartCanvas_run(StartCanvas* this);

void StartCanvas_setRunning(StartCanvas* this, bool running);

void StartCanvas_end(StartCanvas* this);

void StartCanvas_setGameState(StartCanvas* this, GameState* gameState);

GameState* StartCanvas_getGameState(StartCanvas* this);

int32_t StartCanvas_getState(StartCanvas* this);

void StartCanvas_setState(StartCanvas* this, int32_t state);

bool StartCanvas_isHighScoreSubmitted(StartCanvas* this);

HighScoresPaintable* StartCanvas_getRealHighScoresPaintable(StartCanvas* this);

void StartCanvas_setSpecialAnimationInterface(StartCanvas* this, SpecialAnimation* specialAnimationInterface);

SpecialAnimation* StartCanvas_getSpecialAnimationInterface(StartCanvas* this);

void StartCanvas_setPaintableInterface(StartCanvas* this, PaintableInterface* paintableInterface);

PaintableInterface* StartCanvas_getPaintableInterface(StartCanvas* this);

void StartCanvas_setDefaultPaintableInterface(StartCanvas* this, Paintable* defaultPaintableInterface);

Paintable* StartCanvas_getDefaultPaintableInterface(StartCanvas* this);

HighScoresFactoryInterface* StartCanvas_getHighScoresFactoryInterface(StartCanvas* this);

void StartCanvas_setMenuInputProcessor(StartCanvas* this, BasicMenuInputProcessor* menuInputProcessor);

BasicMenuInputProcessor* StartCanvas_getMenuInputProcessor(StartCanvas* this);

ScrollSelectionForm* StartCanvas_getMenuForm(StartCanvas* this);

void StartCanvas_setMenuForm(StartCanvas* this, ScrollSelectionForm* menuForm);

bool StartCanvas_isInitialized(StartCanvas* this);

Paintable* StartCanvas_getOverlayPaintable(StartCanvas* this);

void StartCanvas_setBasicGameDemoPaintable(StartCanvas* this, StatePaintable* basicGameDemoPaintable);

StatePaintable* StartCanvas_getBasicGameDemoPaintable(StartCanvas* this);

void StartCanvas_setTempWait(StartCanvas* this, int32_t tempWait);

int32_t StartCanvas_getTempWait(StartCanvas* this);

bool StartCanvas_isSingleThread(StartCanvas* this);

bool StartCanvas_isRunningInAnotherThread(StartCanvas* this);

BasicBuildGameInitializerFactory* StartCanvas_getGameInitializationInterfaceFactoryInterface(StartCanvas* this);

const char* StartCanvas_getTitle(StartCanvas* this);

bool StartCanvas_isPaused(StartCanvas* this);

int32_t StartCanvas_getType(StartCanvas* this);
#define StartCanvas_new7 StartCanvas_new
#define StartCanvas_init7 StartCanvas_init
#ifndef StartCanvas_isMainCanvas
#define StartCanvas_isMainCanvas RunnableCanvas_isMainCanvas
#endif
#ifndef StartCanvas_setThread
#define StartCanvas_setThread RunnableCanvas_setThread
#endif
#ifndef StartCanvas_isRunning
#define StartCanvas_isRunning RunnableCanvas_isRunning
#endif
#ifndef StartCanvas_getLoopTimeHelperP
#define StartCanvas_getLoopTimeHelperP RunnableCanvas_getLoopTimeHelperP
#endif
#ifndef StartCanvas_setWait
#define StartCanvas_setWait RunnableCanvas_setWait
#endif
#ifndef StartCanvas_getWait
#define StartCanvas_getWait RunnableCanvas_getWait
#endif
#ifndef StartCanvas_setCurrentThread
#define StartCanvas_setCurrentThread RunnableCanvas_setCurrentThread
#endif
#ifndef StartCanvas_setCurrentThreadFake
#define StartCanvas_setCurrentThreadFake RunnableCanvas_setCurrentThreadFake
#endif
#ifndef StartCanvas_showNotify
#define StartCanvas_showNotify RunnableCanvas_showNotify
#endif
#ifndef StartCanvas_stopWaiting
#define StartCanvas_stopWaiting RunnableCanvas_stopWaiting
#endif
#ifndef StartCanvas_waitOnNotify
#define StartCanvas_waitOnNotify RunnableCanvas_waitOnNotify
#endif
#ifndef StartCanvas_processSleep
#define StartCanvas_processSleep RunnableCanvas_processSleep
#endif
#ifndef StartCanvas_processGameSleep
#define StartCanvas_processGameSleep RunnableCanvas_processGameSleep
#endif
#ifndef StartCanvas_processLoopSleep
#define StartCanvas_processLoopSleep RunnableCanvas_processLoopSleep
#endif
#ifndef StartCanvas_end2
#define StartCanvas_end2 RunnableCanvas_end2
#endif
#ifndef StartCanvas_getWidth
#define StartCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef StartCanvas_getHeight
#define StartCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef StartCanvas_setFullScreenMode
#define StartCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef StartCanvas_sizeChanged
#define StartCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef StartCanvas_getCommandStack
#define StartCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef StartCanvas_isCommand
#define StartCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef StartCanvas_addCommand
#define StartCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef StartCanvas_removeCommand
#define StartCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef StartCanvas_removeAllCommands
#define StartCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef StartCanvas_setCommandListener
#define StartCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef StartCanvas_getCustomCommandListener
#define StartCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef StartCanvas_removePauseCommand
#define StartCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef StartCanvas_draw
#define StartCanvas_draw MyCanvas_draw
#endif
#ifndef StartCanvas_hasChild
#define StartCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef StartCanvas_destroy
#define StartCanvas_destroy MyCanvas_destroy
#endif
#ifndef StartCanvas_setPaused
#define StartCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef StartCanvas_pointerDragged
#define StartCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef StartCanvas_pointerPressed
#define StartCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef StartCanvas_pointerReleased
#define StartCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef StartCanvas_nextSong
#define StartCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef StartCanvas_getGameAction
#define StartCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef StartCanvas_getKeyCode
#define StartCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef StartCanvas_getKeyName
#define StartCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef StartCanvas_hasPointerEvents
#define StartCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef StartCanvas_hasPointerMotionEvents
#define StartCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef StartCanvas_hasRepeatEvents
#define StartCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef StartCanvas_hideNotify
#define StartCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef StartCanvas_isDoubleBuffered
#define StartCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef StartCanvas_pointerPressed
#define StartCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef StartCanvas_pointerReleased
#define StartCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef StartCanvas_pointerDragged
#define StartCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef StartCanvas_repaint
#define StartCanvas_repaint Canvas_repaint
#endif
#ifndef StartCanvas_repaintXYWH
#define StartCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef StartCanvas_serviceRepaints
#define StartCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef StartCanvas_setFullScreenMode
#define StartCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef StartCanvas_sizeChanged
#define StartCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef StartCanvas_showNotify
#define StartCanvas_showNotify Canvas_showNotify
#endif
#ifndef StartCanvas_setUI
#define StartCanvas_setUI Displayable_setUI
#endif
#ifndef StartCanvas_getUI
#define StartCanvas_getUI Displayable_getUI
#endif
#ifndef StartCanvas_addCommand
#define StartCanvas_addCommand Displayable_addCommand
#endif
#ifndef StartCanvas_removeCommand
#define StartCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef StartCanvas_getWidth
#define StartCanvas_getWidth Displayable_getWidth
#endif
#ifndef StartCanvas_getHeight
#define StartCanvas_getHeight Displayable_getHeight
#endif
#ifndef StartCanvas_isShown
#define StartCanvas_isShown Displayable_isShown
#endif
#ifndef StartCanvas_getTicker
#define StartCanvas_getTicker Displayable_getTicker
#endif
#ifndef StartCanvas_setTicker
#define StartCanvas_setTicker Displayable_setTicker
#endif
#ifndef StartCanvas_setTitle
#define StartCanvas_setTitle Displayable_setTitle
#endif
#ifndef StartCanvas_setCommandListener
#define StartCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef StartCanvas_getCommandListener
#define StartCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef StartCanvas_getCommands
#define StartCanvas_getCommands Displayable_getCommands
#endif
#ifndef StartCanvas_setFullScreenMode
#define StartCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef StartCanvas_isFullScreenMode
#define StartCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef StartCanvas_hideNotify
#define StartCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef StartCanvas_hideNotifyForDisplay
#define StartCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef StartCanvas_pointerPressed
#define StartCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef StartCanvas_pointerReleased
#define StartCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef StartCanvas_pointerDragged
#define StartCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef StartCanvas_repaint
#define StartCanvas_repaint Displayable_repaint
#endif
#ifndef StartCanvas_repaintXYWH
#define StartCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef StartCanvas_sizeChanged
#define StartCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef StartCanvas_sizeChangedForDisplay
#define StartCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef StartCanvas_showNotify
#define StartCanvas_showNotify Displayable_showNotify
#endif
#ifndef StartCanvas_showNotifyForDisplay
#define StartCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StartCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StartCanvas_register(void);

#if __has_include("org/allbinary/animation/special/SpecialAnimation.h")
#include "org/allbinary/animation/special/SpecialAnimation.h"
#endif
#if __has_include("org/allbinary/game/init/BasicBuildGameInitializerFactory.h")
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresFactoryInterface.h")
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/state/GameState.h")
#include "org/allbinary/game/state/GameState.h"
#endif
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PaintableInterface.h")
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/paint/StatePaintable.h")
#include "org/allbinary/graphics/paint/StatePaintable.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H
