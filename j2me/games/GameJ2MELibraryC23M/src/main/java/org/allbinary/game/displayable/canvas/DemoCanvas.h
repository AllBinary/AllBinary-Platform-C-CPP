#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVAS_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVAS_H
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
typedef struct DemoPaintableInterface DemoPaintableInterface;
typedef struct FormUtil FormUtil;
typedef struct NullGameCanvas NullGameCanvas;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct NoMenuInputProcessor NoMenuInputProcessor;
typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
typedef struct DemoGameStartupRunnable DemoGameStartupRunnable;
typedef struct NullWaitGameRunnable NullWaitGameRunnable;
typedef struct GameRunnable GameRunnable;
typedef struct GameInputMappingCanvas GameInputMappingCanvas;
typedef struct DemoLimitedCommandTextItemArrayFactory DemoLimitedCommandTextItemArrayFactory;
typedef struct CommandFormInputProcessor CommandFormInputProcessor;
typedef struct DemoCanvasProgressUtil DemoCanvasProgressUtil;
typedef struct DemoGameRunnable DemoGameRunnable;
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
typedef struct GameInfo GameInfo;
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
typedef struct HighScoresHelperBase HighScoresHelperBase;
typedef struct HighScoresPaintable HighScoresPaintable;
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct GameState GameState;
typedef struct GameStateFactory GameStateFactory;
typedef struct Rectangle Rectangle;
typedef struct ResizableListenerHandler ResizableListenerHandler;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
typedef struct DisplayChangeEventListener DisplayChangeEventListener;
typedef struct FullScreenPaintableFactory FullScreenPaintableFactory;
typedef struct CommandCurrentSelectionFormFactory CommandCurrentSelectionFormFactory;
typedef struct FormType FormType;
typedef struct FormTypeFactory FormTypeFactory;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct ScrollSelectionFormNoneFactory ScrollSelectionFormNoneFactory;
typedef struct CommandTextItemArrayFactory CommandTextItemArrayFactory;
typedef struct ABCustomItem ABCustomItem;
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
typedef struct StringUtil StringUtil;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct InApplicationPurchaseFactory InApplicationPurchaseFactory;
typedef struct LockableFeature LockableFeature;
typedef struct LockableFeatureFactory LockableFeatureFactory;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
typedef struct EarlySoundsFactory EarlySoundsFactory;
typedef struct PrimaryPlayerQueueFactory PrimaryPlayerQueueFactory;
typedef struct SecondaryPlayerQueueFactory SecondaryPlayerQueueFactory;
typedef struct CommonSeps CommonSeps;
typedef struct NullThread NullThread;
typedef struct ThreadFactoryUtil ThreadFactoryUtil;
typedef struct ThreadUtil ThreadUtil;
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
#if __has_include("org/allbinary/game/score/HighScoresHelperBase.h")
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
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
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#if __has_include("org/allbinary/thread/ThreadFactoryUtil.h")
#include "org/allbinary/thread/ThreadFactoryUtil.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Thread.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"
#if __has_include("org/allbinary/game/displayable/canvas/FormUtil.h")
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoGameStartupRunnable.h")
#include "org/allbinary/game/displayable/canvas/DemoGameStartupRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#endif

typedef struct DemoCanvas DemoCanvas;
struct DemoCanvas {
    RunnableCanvas base;
    GameCanvasRunnableInterface GameCanvasRunnableInterface_interface;
    MenuListener MenuListener_interface;
    DisplayChangeEventListener DisplayChangeEventListener_interface;
    DemoPaintableInterface DemoPaintableInterface_interface;
    BasicColorFactory* basicColorFactory;
    MyCommandsFactory* myCommandsFactory;
    GameAdStateFactory* gameAdStateFactory;
    GameInputStrings* gameInputStrings;
    GameStateFactory* gameStateFactory;
    ThreadFactoryUtil* threadFactoryUtil;
    FormUtil* formUtil;
    Paintable* fullscreenPaintable;
    StatePaintable* basicGameDemoPaintable;
    SpecialAnimation* specialAnimationInterface;
    Animation* paintedSpecialAnimationInterface;
    FullScreenUtil* fullScreenUtil;
    AllBinaryGameCanvas* gameCanvas;
    HighScoresHelperBase* highScoresHelper;
    HighScoresPaintable* realHighScoresPaintable;
    Paintable* highScoresPaintable;
    int32_t state;
    Thread* canvasThread;
    TimeDelayHelper* timeDelayHelper;
    BasicColor* basicColor;
    AbeClientInformationInterface* abeClientInformation;
    HighScoresFactoryInterface* highScoresFactoryInterface;
    BasicMenuInputProcessor* menuInputProcessor;
    ScrollSelectionForm* menuForm;
    BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface;
    bool initialized;
    DemoGameStartupRunnable* demoGameRunnable;
    Paintable* defaultPaintableInterface;
    PaintableInterface* paintableInterface;
    InitUpdatePaintable* overlayPaintable;
    PaintableInterface* progressPaintable;
    int32_t tempWait;
    InputToGameKeyMapping* inputToGameKeyMapping;
    GameRunnable* gameRunnable;
    bool isSingleKeyRepeatableProcessing;
    GameKey* NONE;
    GameKeyEventFactory* gameKeyEventFactory;
    int32_t lastKeyNotMapped;
    const char* SET_STATE;
    BaseGameStatistics* baseGameStatistics;
};

static constexpr int32_t DemoCanvas_TYPE = 3;

DemoCanvas* DemoCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

void DemoCanvas_init(DemoCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

void DemoCanvas_onEvent(DemoCanvas* this, AllBinaryEventObject* eventObject);

void DemoCanvas_onDisplayChangeEvent(DemoCanvas* this, DisplayChangeEvent* displayChangeEvent);

void** DemoCanvas_getCustomCommands(DemoCanvas* this);

void DemoCanvas_initCommands(DemoCanvas* this, CommandListener* cmdListener);

void DemoCanvas_initPostPaint(DemoCanvas* this);

void DemoCanvas_mediaInit(DemoCanvas* this);

void DemoCanvas_itemStateChanged(DemoCanvas* this, Item* item);

void DemoCanvas_initMenu(DemoCanvas* this);

void DemoCanvas_open(DemoCanvas* this);

void DemoCanvas_close(DemoCanvas* this);

int32_t DemoCanvas_getSourceId(DemoCanvas* this);

void DemoCanvas_keyPressed(DemoCanvas* this, int32_t keyCode);

void DemoCanvas_keyReleased(DemoCanvas* this, int32_t keyCode);

void DemoCanvas_keyRepeated(DemoCanvas* this, int32_t keyCode);

void DemoCanvas_keyPressedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId);

void DemoCanvas_keyReleasedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId);

void DemoCanvas_keyRepeatedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId);



void DemoCanvas_pause(DemoCanvas* this);

void DemoCanvas_unPause(DemoCanvas* this);

bool DemoCanvas_isPausable(DemoCanvas* this);

bool DemoCanvas_isGameOver(DemoCanvas* this);

void DemoCanvas_setLoadStateHashtable(DemoCanvas* this, ABHashtable* hashtable);

ABHashtable* DemoCanvas_getLoadStateHashtable(DemoCanvas* this);

ABHashtable* DemoCanvas_getCurrentStateHashtable(DemoCanvas* this);

void DemoCanvas_setHighScoreSubmitted(DemoCanvas* this, bool isNotUsed);

void DemoCanvas_paint(DemoCanvas* this, Graphics* graphics);

void DemoCanvas_paintThreed(DemoCanvas* this, Graphics* graphics);

void DemoCanvas_processGameOver(DemoCanvas* this);

void DemoCanvas_demoStateChange(DemoCanvas* this);

void DemoCanvas_updateDemoState(DemoCanvas* this);

int32_t DemoCanvas_getNextRandom(DemoCanvas* this);

AllBinaryGameLayerManager* DemoCanvas_createGameLayerManager(DemoCanvas* this, int32_t randomValue);

GameCanvasRunnableInterface* DemoCanvas_createRunnable(DemoCanvas* this, int32_t randomLevel);

void DemoCanvas_create(DemoCanvas* this);

void DemoCanvas_start(DemoCanvas* this);

void DemoCanvas_preDemoProcess(DemoCanvas* this);

void DemoCanvas_process(DemoCanvas* this);

void DemoCanvas_startDemoGame(DemoCanvas* this);

void DemoCanvas_stopGameDemo(DemoCanvas* this);

void DemoCanvas_showGamePaintable(DemoCanvas* this);

bool DemoCanvas_isReadyForStateChange(DemoCanvas* this);

void DemoCanvas_processGame(DemoCanvas* this);

void DemoCanvas_run(DemoCanvas* this);

void DemoCanvas_run3(DemoCanvas* this);

void DemoCanvas_setRunning(DemoCanvas* this, bool running);

void DemoCanvas_end(DemoCanvas* this);

void DemoCanvas_setGameState(DemoCanvas* this, GameState* gameState);

GameState* DemoCanvas_getGameState(DemoCanvas* this);

AllBinaryGameCanvas* DemoCanvas_getGameCanvasRunnableInterface(DemoCanvas* this);

bool DemoCanvas_isDemoLoading(DemoCanvas* this);

int32_t DemoCanvas_getState(DemoCanvas* this);

void DemoCanvas_setState(DemoCanvas* this, int32_t state);

bool DemoCanvas_isHighScoreSubmitted(DemoCanvas* this);

HighScoresPaintable* DemoCanvas_getRealHighScoresPaintable(DemoCanvas* this);

void DemoCanvas_setSpecialAnimationInterface(DemoCanvas* this, SpecialAnimation* specialAnimationInterface);

SpecialAnimation* DemoCanvas_getSpecialAnimationInterface(DemoCanvas* this);

void DemoCanvas_setPaintableInterface(DemoCanvas* this, PaintableInterface* paintableInterface);

PaintableInterface* DemoCanvas_getPaintableInterface(DemoCanvas* this);

void DemoCanvas_setDefaultPaintableInterface(DemoCanvas* this, Paintable* defaultPaintableInterface);

Paintable* DemoCanvas_getDefaultPaintableInterface(DemoCanvas* this);

HighScoresFactoryInterface* DemoCanvas_getHighScoresFactoryInterface(DemoCanvas* this);

void DemoCanvas_setMenuInputProcessor(DemoCanvas* this, BasicMenuInputProcessor* menuInputProcessor);

BasicMenuInputProcessor* DemoCanvas_getMenuInputProcessor(DemoCanvas* this);

ScrollSelectionForm* DemoCanvas_getMenuForm(DemoCanvas* this);

void DemoCanvas_setMenuForm(DemoCanvas* this, ScrollSelectionForm* menuForm);

bool DemoCanvas_isInitialized(DemoCanvas* this);

Paintable* DemoCanvas_getOverlayPaintable(DemoCanvas* this);

void DemoCanvas_setBasicGameDemoPaintable(DemoCanvas* this, StatePaintable* basicGameDemoPaintable);

StatePaintable* DemoCanvas_getBasicGameDemoPaintable(DemoCanvas* this);

void DemoCanvas_setTempWait(DemoCanvas* this, int32_t tempWait);

int32_t DemoCanvas_getTempWait(DemoCanvas* this);

bool DemoCanvas_isSingleThread(DemoCanvas* this);

bool DemoCanvas_isRunningInAnotherThread(DemoCanvas* this);

BasicBuildGameInitializerFactory* DemoCanvas_getGameInitializationInterfaceFactoryInterface(DemoCanvas* this);

int32_t DemoCanvas_getType(DemoCanvas* this);

const char* DemoCanvas_getTitle(DemoCanvas* this);

bool DemoCanvas_isPaused(DemoCanvas* this);
#define DemoCanvas_new7 DemoCanvas_new
#define DemoCanvas_init7 DemoCanvas_init
#ifndef DemoCanvas_isMainCanvas
#define DemoCanvas_isMainCanvas RunnableCanvas_isMainCanvas
#endif
#ifndef DemoCanvas_setThread
#define DemoCanvas_setThread RunnableCanvas_setThread
#endif
#ifndef DemoCanvas_isRunning
#define DemoCanvas_isRunning RunnableCanvas_isRunning
#endif
#ifndef DemoCanvas_getLoopTimeHelperP
#define DemoCanvas_getLoopTimeHelperP RunnableCanvas_getLoopTimeHelperP
#endif
#ifndef DemoCanvas_setWait
#define DemoCanvas_setWait RunnableCanvas_setWait
#endif
#ifndef DemoCanvas_getWait
#define DemoCanvas_getWait RunnableCanvas_getWait
#endif
#ifndef DemoCanvas_setCurrentThread
#define DemoCanvas_setCurrentThread RunnableCanvas_setCurrentThread
#endif
#ifndef DemoCanvas_setCurrentThreadFake
#define DemoCanvas_setCurrentThreadFake RunnableCanvas_setCurrentThreadFake
#endif
#ifndef DemoCanvas_showNotify
#define DemoCanvas_showNotify RunnableCanvas_showNotify
#endif
#ifndef DemoCanvas_stopWaiting
#define DemoCanvas_stopWaiting RunnableCanvas_stopWaiting
#endif
#ifndef DemoCanvas_waitOnNotify
#define DemoCanvas_waitOnNotify RunnableCanvas_waitOnNotify
#endif
#ifndef DemoCanvas_processSleep
#define DemoCanvas_processSleep RunnableCanvas_processSleep
#endif
#ifndef DemoCanvas_processGameSleep
#define DemoCanvas_processGameSleep RunnableCanvas_processGameSleep
#endif
#ifndef DemoCanvas_processLoopSleep
#define DemoCanvas_processLoopSleep RunnableCanvas_processLoopSleep
#endif
#ifndef DemoCanvas_end2
#define DemoCanvas_end2 RunnableCanvas_end2
#endif
#ifndef DemoCanvas_getWidth
#define DemoCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef DemoCanvas_getHeight
#define DemoCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef DemoCanvas_setFullScreenMode
#define DemoCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef DemoCanvas_sizeChanged
#define DemoCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef DemoCanvas_getCommandStack
#define DemoCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef DemoCanvas_isCommand
#define DemoCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef DemoCanvas_addCommand
#define DemoCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef DemoCanvas_removeCommand
#define DemoCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef DemoCanvas_removeAllCommands
#define DemoCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef DemoCanvas_setCommandListener
#define DemoCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef DemoCanvas_getCustomCommandListener
#define DemoCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef DemoCanvas_removePauseCommand
#define DemoCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef DemoCanvas_draw
#define DemoCanvas_draw MyCanvas_draw
#endif
#ifndef DemoCanvas_hasChild
#define DemoCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef DemoCanvas_destroy
#define DemoCanvas_destroy MyCanvas_destroy
#endif
#ifndef DemoCanvas_setPaused
#define DemoCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef DemoCanvas_pointerDragged
#define DemoCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef DemoCanvas_pointerPressed
#define DemoCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef DemoCanvas_pointerReleased
#define DemoCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef DemoCanvas_nextSong
#define DemoCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef DemoCanvas_getGameAction
#define DemoCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef DemoCanvas_getKeyCode
#define DemoCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef DemoCanvas_getKeyName
#define DemoCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef DemoCanvas_hasPointerEvents
#define DemoCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef DemoCanvas_hasPointerMotionEvents
#define DemoCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef DemoCanvas_hasRepeatEvents
#define DemoCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef DemoCanvas_hideNotify
#define DemoCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef DemoCanvas_isDoubleBuffered
#define DemoCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef DemoCanvas_pointerPressed
#define DemoCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef DemoCanvas_pointerReleased
#define DemoCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef DemoCanvas_pointerDragged
#define DemoCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef DemoCanvas_repaint
#define DemoCanvas_repaint Canvas_repaint
#endif
#ifndef DemoCanvas_repaintXYWH
#define DemoCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef DemoCanvas_serviceRepaints
#define DemoCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef DemoCanvas_setFullScreenMode
#define DemoCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef DemoCanvas_sizeChanged
#define DemoCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef DemoCanvas_showNotify
#define DemoCanvas_showNotify Canvas_showNotify
#endif
#ifndef DemoCanvas_setUI
#define DemoCanvas_setUI Displayable_setUI
#endif
#ifndef DemoCanvas_getUI
#define DemoCanvas_getUI Displayable_getUI
#endif
#ifndef DemoCanvas_addCommand
#define DemoCanvas_addCommand Displayable_addCommand
#endif
#ifndef DemoCanvas_removeCommand
#define DemoCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef DemoCanvas_getWidth
#define DemoCanvas_getWidth Displayable_getWidth
#endif
#ifndef DemoCanvas_getHeight
#define DemoCanvas_getHeight Displayable_getHeight
#endif
#ifndef DemoCanvas_isShown
#define DemoCanvas_isShown Displayable_isShown
#endif
#ifndef DemoCanvas_getTicker
#define DemoCanvas_getTicker Displayable_getTicker
#endif
#ifndef DemoCanvas_setTicker
#define DemoCanvas_setTicker Displayable_setTicker
#endif
#ifndef DemoCanvas_setTitle
#define DemoCanvas_setTitle Displayable_setTitle
#endif
#ifndef DemoCanvas_setCommandListener
#define DemoCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef DemoCanvas_getCommandListener
#define DemoCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef DemoCanvas_getCommands
#define DemoCanvas_getCommands Displayable_getCommands
#endif
#ifndef DemoCanvas_setFullScreenMode
#define DemoCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef DemoCanvas_isFullScreenMode
#define DemoCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef DemoCanvas_hideNotify
#define DemoCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef DemoCanvas_hideNotifyForDisplay
#define DemoCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef DemoCanvas_pointerPressed
#define DemoCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef DemoCanvas_pointerReleased
#define DemoCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef DemoCanvas_pointerDragged
#define DemoCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef DemoCanvas_repaint
#define DemoCanvas_repaint Displayable_repaint
#endif
#ifndef DemoCanvas_repaintXYWH
#define DemoCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef DemoCanvas_sizeChanged
#define DemoCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef DemoCanvas_sizeChangedForDisplay
#define DemoCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef DemoCanvas_showNotify
#define DemoCanvas_showNotify Displayable_showNotify
#endif
#ifndef DemoCanvas_showNotifyForDisplay
#define DemoCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoCanvas_register(void);

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

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVAS_H
