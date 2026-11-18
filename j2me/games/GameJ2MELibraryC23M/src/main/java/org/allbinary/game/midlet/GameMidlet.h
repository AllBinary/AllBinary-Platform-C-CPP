#ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H
#define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameMidletStateFactory GameMidletStateFactory;
typedef struct GameMidletEventHandler GameMidletEventHandler;
typedef struct DemoGameMidletEvent DemoGameMidletEvent;
typedef struct DemoGameMidletStateFactory DemoGameMidletStateFactory;
typedef struct Canvas Canvas;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Displayable Displayable;
typedef struct NullCanvas NullCanvas;
typedef struct MIDletStateChangeException MIDletStateChangeException;
typedef struct J2MEUtil J2MEUtil;
typedef struct TsUtil TsUtil;
typedef struct GameAdStateFactory GameAdStateFactory;
typedef struct FullScreenUtil FullScreenUtil;
typedef struct GameStatisticsFactory GameStatisticsFactory;
typedef struct DebugFactory DebugFactory;
typedef struct DebugInterface DebugInterface;
typedef struct GameAdState GameAdState;
typedef struct GameInfo GameInfo;
typedef struct GameMode GameMode;
typedef struct GameStrings GameStrings;
typedef struct GameTypeFactory GameTypeFactory;
typedef struct PlayerTypesFactory PlayerTypesFactory;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GameOptionsForm GameOptionsForm;
typedef struct GameOptionsFormFactory GameOptionsFormFactory;
typedef struct InGameFeatures InGameFeatures;
typedef struct InGameOptionsForm InGameOptionsForm;
typedef struct InGameOptionsFormFactory InGameOptionsFormFactory;
typedef struct LoadGameForm LoadGameForm;
typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
typedef struct GameFeatureEventHandler GameFeatureEventHandler;
typedef struct Features Features;
typedef struct GameFeatureFormUtil GameFeatureFormUtil;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct GamePersistanceSingleton GamePersistanceSingleton;
typedef struct KeyValuePersistance KeyValuePersistance;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct BasicPaintablesCanvas BasicPaintablesCanvas;
typedef struct DemoCanvas DemoCanvas;
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
typedef struct GameEventHandlerUtil GameEventHandlerUtil;
typedef struct GameInputMappingCanvas GameInputMappingCanvas;
typedef struct GameInputMappingInstructionsCanvas GameInputMappingInstructionsCanvas;
typedef struct MenuListener MenuListener;
typedef struct NullGameCanvasRunnable NullGameCanvasRunnable;
typedef struct TextNotificationUtil TextNotificationUtil;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct GameNotificationEventHandler GameNotificationEventHandler;
typedef struct HelpPaintable HelpPaintable;
typedef struct HighScoreCommands HighScoreCommands;
typedef struct HighScoreCommandsFactory HighScoreCommandsFactory;
typedef struct HighScoreTextBox HighScoreTextBox;
typedef struct HighScoreUtil HighScoreUtil;
typedef struct HighScoresCanvas HighScoresCanvas;
typedef struct GameStateFactory GameStateFactory;
typedef struct ResizableListenerHandler ResizableListenerHandler;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ColorChangeEventHandler ColorChangeEventHandler;
typedef struct CanvasStrings CanvasStrings;
typedef struct MyCanvas MyCanvas;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct AboutCommandProcessor AboutCommandProcessor;
typedef struct AboutPaintableFactory AboutPaintableFactory;
typedef struct CommandForm CommandForm;
typedef struct WebCommandProcessor WebCommandProcessor;
typedef struct AllBinarySensorManager AllBinarySensorManager;
typedef struct VirtualKeyboardEventHandler VirtualKeyboardEventHandler;
typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct ClientInformationFactory ClientInformationFactory;
typedef struct InApplicationPurchaseFactory InApplicationPurchaseFactory;
typedef struct LockableFeature LockableFeature;
typedef struct LockableFeatureFactory LockableFeatureFactory;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
typedef struct MidletStrings MidletStrings;
typedef struct ProgressMidlet ProgressMidlet;
typedef struct NullThread NullThread;
typedef struct ThreadFactoryUtil ThreadFactoryUtil;
typedef struct ThreadUtil ThreadUtil;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct BasicArrayList BasicArrayList;
typedef struct EnumerationUtil EnumerationUtil;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#include "java/util/Enumeration.h"
#include "javax/microedition/lcdui/CommandListener.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/business/advertisement/GameAdStateFactory.h")
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#endif
#if __has_include("org/allbinary/canvas/FullScreenUtil.h")
#include "org/allbinary/canvas/FullScreenUtil.h"
#endif
#if __has_include("org/allbinary/debug/DebugInterface.h")
#include "org/allbinary/debug/DebugInterface.h"
#endif
#if __has_include("org/allbinary/game/GameStrings.h")
#include "org/allbinary/game/GameStrings.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
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
#if __has_include("org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h")
#include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/CommandForm.h")
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/WebCommandProcessor.h")
#include "org/allbinary/graphics/displayable/screen/WebCommandProcessor.h"
#endif
#if __has_include("org/allbinary/midlet/MidletStrings.h")
#include "org/allbinary/midlet/MidletStrings.h"
#endif
#include "org/allbinary/midlet/ProgressMidlet.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif
#include "java/lang/Thread.h"
#if __has_include("org/allbinary/game/midlet/GameMidletStateFactory.h")
#include "org/allbinary/game/midlet/GameMidletStateFactory.h"
#endif

typedef struct GameMidlet GameMidlet;
struct GameMidlet {
    ProgressMidlet base;
    CommandListener CommandListener_interface;
    EnumerationUtil* enumerationUtil;
    BasicColorFactory* basicColorFactory;
    Features* features;
    MidletStrings* midletStrings;
    MyCommandsFactory* myCommandsFactory;
    GameStrings* gameStrings;
    GameAdStateFactory* gameAdStateFactory;
    GameStateFactory* gameStateFactory;
    TsUtil* tsUtil;
    const char* DISPLAYABLE;
    const char* COMMAND_NAME;
    const char* NO_COMMAND;
    const char* NO_DISPLAYABLE;
    const char* COMMAND_ACTION;
    const char* PAUSE_APP_BACKGROUND;
    const char* UN_PAUSE_APP_BACKGROUND;
    AboutCommandProcessor* aboutCommandProcessor;
    WebCommandProcessor* webCommandProcessor;
    GameMidletStateFactory* gameMidletStateFactory;
    TimeDelayHelper* gameStartTimeHelper;
    FullScreenUtil* fullScreenUtil;
    DebugInterface* debugInterface;
    GameCanvasRunnableInterface* allbinaryGameCanvasRunnableInterface;
    Thread* thread;
    CommandForm* loadGameForm;
    bool isFullScreen;
    bool resized;
    bool startedBefore;
};


GameMidlet* GameMidlet_new(ClientInformationFactory* clientInformationFactory);

void GameMidlet_init(GameMidlet* this, ClientInformationFactory* clientInformationFactory);

void GameMidlet_initMethod(GameMidlet* this);

void GameMidlet_setDemo(GameMidlet* this);

void GameMidlet_createGame(GameMidlet* this);

void GameMidlet_mediaShutdown(GameMidlet* this);

void GameMidlet_stopAll(GameMidlet* this);

void GameMidlet_pauseApp(GameMidlet* this);

void GameMidlet_pauseAppBackground(GameMidlet* this, bool background);

void GameMidlet_unPauseApp(GameMidlet* this);

void GameMidlet_unPauseAppBackground(GameMidlet* this, bool background);

void GameMidlet_destroyAppInRunnable(GameMidlet* this, bool unconditional, bool isProgress);

void GameMidlet_destroyApp(GameMidlet* this, bool unconditional);

void GameMidlet_startApp(GameMidlet* this);

void GameMidlet_commandAction(GameMidlet* this, Command* command, Displayable* displayable);


void GameMidlet_onEvent(GameMidlet* this, AllBinaryEventObject* eventObject);

MyCanvas* GameMidlet_getInputMappingInstructionsCanvas(GameMidlet* this);

MyCanvas* GameMidlet_getInputMappingCanvas(GameMidlet* this);

MyCanvas* GameMidlet_getAboutCanvas(GameMidlet* this);

HelpPaintable* GameMidlet_getHelpPaintable(GameMidlet* this);

HighScoresCanvas* GameMidlet_createHighScoresCanvas(GameMidlet* this);

void GameMidlet_startGameCanvasRunnableInterface(GameMidlet* this);

void GameMidlet_stopGameCanvasRunnableInterface(GameMidlet* this);

GameCanvasRunnableInterface* GameMidlet_getGameCanvasRunnableInterface(GameMidlet* this);

void GameMidlet_setGameCanvasRunnableInterface(GameMidlet* this, GameCanvasRunnableInterface* gameCanvasRunnableInterface);

AllBinaryGameLayerManager* GameMidlet_createGameLayerManager(GameMidlet* this);

CommandForm* GameMidlet_getGameOptionsForm(GameMidlet* this);

void GameMidlet_save(GameMidlet* this);

ABHashtable* GameMidlet_getCurrentStateHashtable(GameMidlet* this);

void GameMidlet_setLoadGameForm(GameMidlet* this, LoadGameForm* loadGameForm);

CommandForm* GameMidlet_getLoadGameForm(GameMidlet* this);

void GameMidlet_setResized(GameMidlet* this, bool resized);

bool GameMidlet_isResized(GameMidlet* this);

bool GameMidlet_isDemoLoading(GameMidlet* this);
#define GameMidlet_new1 GameMidlet_new
#define GameMidlet_init1 GameMidlet_init
#ifndef GameMidlet_preInit
#define GameMidlet_preInit ProgressMidlet_preInit
#endif
#ifndef GameMidlet_exitProgress
#define GameMidlet_exitProgress ProgressMidlet_exitProgress
#endif
#ifndef GameMidlet_getNullInstance
#define GameMidlet_getNullInstance AllBinaryMidlet_getNullInstance
#endif
#ifndef GameMidlet_setDisplay
#define GameMidlet_setDisplay AllBinaryMidlet_setDisplay
#endif
#ifndef GameMidlet_getDisplay
#define GameMidlet_getDisplay AllBinaryMidlet_getDisplay
#endif
#ifndef GameMidlet_getCurrentDisplayable
#define GameMidlet_getCurrentDisplayable AllBinaryMidlet_getCurrentDisplayable
#endif
#ifndef GameMidlet_setDestroyed
#define GameMidlet_setDestroyed AllBinaryMidlet_setDestroyed
#endif
#ifndef GameMidlet_isDestroyed
#define GameMidlet_isDestroyed AllBinaryMidlet_isDestroyed
#endif
#ifndef GameMidlet_setStartStateHashtable
#define GameMidlet_setStartStateHashtable AllBinaryMidlet_setStartStateHashtable
#endif
#ifndef GameMidlet_getStartStateHashtable
#define GameMidlet_getStartStateHashtable AllBinaryMidlet_getStartStateHashtable
#endif
#ifndef GameMidlet_checkPermission
#define GameMidlet_checkPermission MIDlet_checkPermission
#endif
#ifndef GameMidlet_getAppProperty
#define GameMidlet_getAppProperty MIDlet_getAppProperty
#endif
#ifndef GameMidlet_notifyDestroyed
#define GameMidlet_notifyDestroyed MIDlet_notifyDestroyed
#endif
#ifndef GameMidlet_notifyPaused
#define GameMidlet_notifyPaused MIDlet_notifyPaused
#endif
#ifndef GameMidlet_platformRequest
#define GameMidlet_platformRequest MIDlet_platformRequest
#endif
#ifndef GameMidlet_resumeRequest
#define GameMidlet_resumeRequest MIDlet_resumeRequest
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameMidlet_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameMidlet_register(void);

#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/paint/help/HelpPaintable.h")
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/MyCanvas.h")
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/CommandForm.h")
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H
