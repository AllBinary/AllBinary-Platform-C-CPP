#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H
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
typedef struct AllBinaryGameCanvasInterface AllBinaryGameCanvasInterface;
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
typedef struct MenuListener MenuListener;
typedef struct PopupMenuInterface PopupMenuInterface;
typedef struct GameCanvasRunnable GameCanvasRunnable;
typedef struct GameCanvasPauseRunnable GameCanvasPauseRunnable;
typedef struct FormUtil FormUtil;
typedef struct MyFormUtil MyFormUtil;
typedef struct EndGameInfo EndGameInfo;
typedef struct NoMenuInputProcessor NoMenuInputProcessor;
typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
typedef struct DemoGameBehavior DemoGameBehavior;
typedef struct BaseMenuBehavior BaseMenuBehavior;
typedef struct BaseGameBehavior BaseGameBehavior;
typedef struct BasicPopupMenuPaintable BasicPopupMenuPaintable;
typedef struct PopupMenuInputProcessor PopupMenuInputProcessor;
typedef struct InGameMenuBehavior InGameMenuBehavior;
typedef struct GameLimitedCommandTextItemArrayFactory GameLimitedCommandTextItemArrayFactory;
typedef struct PopupCommandFormInputProcessor PopupCommandFormInputProcessor;
typedef struct NullWaitGameRunnable NullWaitGameRunnable;
typedef struct GameProcessor GameProcessor;
typedef struct CheatGameInputProcessor CheatGameInputProcessor;
typedef struct EndGameProcessor EndGameProcessor;
typedef struct StartIntermissionProcessor StartIntermissionProcessor;
typedef struct EndGamePaintable EndGamePaintable;
typedef struct NullDemoPaintable NullDemoPaintable;
typedef struct DemoPaintableInterface DemoPaintableInterface;
typedef struct GameCanvasInputProcessor GameCanvasInputProcessor;
typedef struct FormInputProcessor FormInputProcessor;
typedef struct SaveHighScoreRunnable SaveHighScoreRunnable;
typedef struct ChoiceGroup ChoiceGroup;
typedef struct CommandListener CommandListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Item Item;
typedef struct NullCommandListener NullCommandListener;
typedef struct AndroidUtil AndroidUtil;
typedef struct J2MEUtil J2MEUtil;
typedef struct GameAdStateFactory GameAdStateFactory;
typedef struct BaseGameStatistics BaseGameStatistics;
typedef struct GameStatisticsFactory GameStatisticsFactory;
typedef struct Processor Processor;
typedef struct RunnableCanvas RunnableCanvas;
typedef struct DebugFactory DebugFactory;
typedef struct NoDebug NoDebug;
typedef struct GameAdState GameAdState;
typedef struct GameInfo GameInfo;
typedef struct GameStrings GameStrings;
typedef struct GameTypeFactory GameTypeFactory;
typedef struct Intermission Intermission;
typedef struct IntermissionCompositeInterface IntermissionCompositeInterface;
typedef struct IntermissionEnableListenerInterface IntermissionEnableListenerInterface;
typedef struct IntermissionInterface IntermissionInterface;
typedef struct PlayerTypesFactory PlayerTypesFactory;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct InGameFeatures InGameFeatures;
typedef struct InGameOptionsForm InGameOptionsForm;
typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
typedef struct GameInitializedEvent GameInitializedEvent;
typedef struct GameInitializedEventHandler GameInitializedEventHandler;
typedef struct Features Features;
typedef struct GameFeatureFactory GameFeatureFactory;
typedef struct GameFeatureUtil GameFeatureUtil;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct SensorFeatureFactory SensorFeatureFactory;
typedef struct TouchFeatureFactory TouchFeatureFactory;
typedef struct GameLevelDisplayChangeEventListenersFactory GameLevelDisplayChangeEventListenersFactory;
typedef struct BasicBuildGameInitializerFactory BasicBuildGameInitializerFactory;
typedef struct GameInitializationUtil GameInitializationUtil;
typedef struct GameInputStrings GameInputStrings;
typedef struct InputProcessor InputProcessor;
typedef struct NoPlayerGameInput NoPlayerGameInput;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct GameKeyEventHandler GameKeyEventHandler;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct SWTUtil SWTUtil;
typedef struct ColorFillBasePaintable ColorFillBasePaintable;
typedef struct ColorFillPaintableFactory ColorFillPaintableFactory;
typedef struct ResourceLoadingLevel ResourceLoadingLevel;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct HighScore HighScore;
typedef struct HighScoresHelperBaseInterface HighScoresHelperBaseInterface;
typedef struct HighScoresFactoryInterface HighScoresFactoryInterface;
typedef struct HighScoresPaintable HighScoresPaintable;
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct HighScoreTextBox HighScoreTextBox;
typedef struct GameState GameState;
typedef struct GameStateFactory GameStateFactory;
typedef struct GraphicsStrings GraphicsStrings;
typedef struct Rectangle Rectangle;
typedef struct ScreenCapture ScreenCapture;
typedef struct ScreenCaptureFactory ScreenCaptureFactory;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct CanvasStrings CanvasStrings;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct GameTickDisplayInfoSingleton GameTickDisplayInfoSingleton;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
typedef struct DisplayChangeEventListener DisplayChangeEventListener;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct CommandCurrentSelectionFormFactory CommandCurrentSelectionFormFactory;
typedef struct FormPaintable FormPaintable;
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
typedef struct NullInitUpdatePaintable NullInitUpdatePaintable;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct OpenGLImageSpecificFactory OpenGLImageSpecificFactory;
typedef struct SensorGameUpdateProcessor SensorGameUpdateProcessor;
typedef struct SingleSensorGameUpdateProcessor SingleSensorGameUpdateProcessor;
typedef struct BaseTouchInput BaseTouchInput;
typedef struct NoButtonsTouchInputFactory NoButtonsTouchInputFactory;
typedef struct TouchButtonFactory TouchButtonFactory;
typedef struct TouchButtonsPaintableFactory TouchButtonsPaintableFactory;
typedef struct TouchScreenFactory TouchScreenFactory;
typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
typedef struct PlayerQueue PlayerQueue;
typedef struct PrimaryPlayerQueueFactory PrimaryPlayerQueueFactory;
typedef struct SecondaryPlayerQueueFactory SecondaryPlayerQueueFactory;
typedef struct SelectSound SelectSound;
typedef struct CommonSeps CommonSeps;
typedef struct SecondaryThreadPool SecondaryThreadPool;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/business/advertisement/GameAdStateFactory.h")
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#endif
#if __has_include("org/allbinary/canvas/BaseGameStatistics.h")
#include "org/allbinary/canvas/BaseGameStatistics.h"
#endif
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#include "org/allbinary/canvas/RunnableCanvas.h"
#if __has_include("org/allbinary/game/GameStrings.h")
#include "org/allbinary/game/GameStrings.h"
#endif
#if __has_include("org/allbinary/game/GameTypeFactory.h")
#include "org/allbinary/game/GameTypeFactory.h"
#endif
#include "org/allbinary/game/IntermissionCompositeInterface.h"
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"
#if __has_include("org/allbinary/game/IntermissionInterface.h")
#include "org/allbinary/game/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/TouchFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/init/BasicBuildGameInitializerFactory.h")
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif
#if __has_include("org/allbinary/game/input/InputProcessor.h")
#include "org/allbinary/game/input/InputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/paint/ColorFillBasePaintable.h")
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBaseInterface.h")
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
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
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/graphics/ScreenCapture.h")
#include "org/allbinary/graphics/ScreenCapture.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#endif
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
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
#if __has_include("org/allbinary/input/gyro/SensorGameUpdateProcessor.h")
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BaseTouchInput.h")
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonFactory.h")
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
// #include "org/allbinary/logic/ABSystemWrapper.h"
// #include "org/allbinary/logic/communication/log/LogUtil.h"
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
// #include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"
#include "java/lang/Thread.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInterface.h"
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/FormUtil.h")
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/MyFormUtil.h")
#include "org/allbinary/game/displayable/canvas/MyFormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/EndGameInfo.h")
#include "org/allbinary/game/displayable/canvas/EndGameInfo.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoGameBehavior.h")
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BaseMenuBehavior.h")
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoPaintableInterface.h")
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"
#endif

typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
struct AllBinaryGameCanvas {
    RunnableCanvas base;
    AllBinaryGameCanvasInterface AllBinaryGameCanvasInterface_interface;
    GameCanvasRunnableInterface GameCanvasRunnableInterface_interface;
    MenuListener MenuListener_interface;
    IntermissionCompositeInterface IntermissionCompositeInterface_interface;
    IntermissionEnableListenerInterface IntermissionEnableListenerInterface_interface;
    PopupMenuInterface PopupMenuInterface_interface;
    DisplayChangeEventListener DisplayChangeEventListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    BasicColorFactory* basicColorFactory;
    BasicColorSetUtil* basicSetColorUtil;
    TouchFeatureFactory* touchFeatureFactory;
    OpenGLFeatureFactory* openGLFeatureFactory;
    TouchButtonFactory* touchButtonFactory;
    GameAdStateFactory* gameAdStateFactory;
    GameStrings* gameStrings;
    GameInputStrings* gameInputStrings;
    GameStateFactory* gameStateFactory;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton;
    GameCanvasRunnable* gameRunnable;
    GameCanvasPauseRunnable* gamePauseRunnable;
    FormUtil* formUtil;
    MyFormUtil* myFormUtil;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    Paintable* gameSpecificPaintable;
    SensorGameUpdateProcessor* sensorGameUpdateProcessor;
    EndGameInfo* endGameInfo;
    IntermissionInterface* startIntermissionInterface;
    IntermissionInterface* endLevelIntermissionInterface;
    AllBinaryGameLayerManager* gameLayerManager;
    GameState* gameState;
    bool gameOver;
    bool initialized;
    TimeDelayHelper* gameStateTimeHelper;
    HighScoresHelperBaseInterface* highScoresHelper;
    bool highScoreSubmitted;
    HighScoresPaintable* realHighScoresPaintable;
    Paintable* highScoresPaintable;
    BasicArrayList* localPlayerGameInputList;
    bool isCheating;
    ABHashtable* hashtable;
    bool isSingleKeyRepeatableProcessing;
    BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface;
    Paintable* touchButtonsPaintable;
    Paintable* touchPaintable;
    PlayerGameInput* cheatProcessor;
    Processor* gameInputProcessor;
    Processor* endGameProcessor;
    Processor* realEndGameProcessor;
    Processor* startIntermissionProcessor;
    Processor* realStartIntermissionProcessor;
    Paintable* endGamePaintable;
    Paintable* endGameStatePaintable;
    Paintable* nonBotPaintable;
    Paintable* intermissionPaintable;
    InitUpdatePaintable* startIntermissionPaintable;
    Processor* mainStateProcessor;
    Processor* processGameProcessor;
    HighScoresFactoryInterface* highScoresFactoryInterface;
    int32_t startLevel;
    BasicMenuInputProcessor* mainMenuInputProcessor;
    BasicMenuInputProcessor* popupMenuInputProcessor;
    BasicMenuInputProcessor* menuInputProcessor;
    ScrollSelectionForm* menuForm;
    Paintable* formPaintable;
    Paintable* openMenuPaintable;
    Paintable* menuPaintable;
    BaseTouchInput* currentTouchInputFactory;
    ColorFillBasePaintable* colorFillPaintable;
    BaseGameStatistics* baseGameStatistics;
    PlayerQueue* primaryPlayerQueue;
    PlayerQueue* secondaryPlayerQueue;
    const char* BUILD_GAME;
    GameTypeFactory* gameTypeFactory;
    ScreenCapture* screenCapture;
    BasicMotionGesturesHandler* basicMotionGesturesHandler;
    GameKeyEventHandler* gameKeyEventHandler;
    DemoGameBehavior* gameBehavior;
    BaseMenuBehavior* menuBehavior;
    PaintableInterface* progressPaintable;
    int32_t fontHeightP;
    DemoPaintableInterface* gameCanvasStartListener;
    InputProcessor* rawGameInputProcessor;
    InputProcessor* rawInputProcessor;
    InputProcessor* inputProcessor;
    int64_t YIELD_SLEEP;
};

static constexpr int32_t AllBinaryGameCanvas_TYPE = 2;

AllBinaryGameCanvas* AllBinaryGameCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered);

void AllBinaryGameCanvas_init(AllBinaryGameCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered);

void AllBinaryGameCanvas_updateMeasurement(AllBinaryGameCanvas* this, Graphics* graphics);

BaseMenuBehavior* AllBinaryGameCanvas_getInGameMenuBehavior(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setCurrentThread(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_onEvent(AllBinaryGameCanvas* this, AllBinaryEventObject* eventObject);

void AllBinaryGameCanvas_onDisplayChangeEvent(AllBinaryGameCanvas* this, DisplayChangeEvent* displayChangeEvent);

void AllBinaryGameCanvas_updateMenuFromEvent(AllBinaryGameCanvas* this, DisplayChangeEvent* displayChangeEvent);

void AllBinaryGameCanvas_processSleep(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_initPopupMenu(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_initMenu(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_initMenu2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_updateMenu(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_updateMenu2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_pause(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_unPause(AllBinaryGameCanvas* this);

bool AllBinaryGameCanvas_isPausable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_popupMenu(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_popupMenu2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_toggleMenu(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_closeMenu(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_closeMenu2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_open(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_close(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_processorInit(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setProcessGameProcessorInit(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_initSpecialPaint(AllBinaryGameCanvas* this);


void AllBinaryGameCanvas_notifyIntermission(AllBinaryGameCanvas* this, bool enable);

void AllBinaryGameCanvas_mediaInit(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_initConfigurable(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation);

void AllBinaryGameCanvas_initApp(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation);

void AllBinaryGameCanvas_initTouch(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_updateCurrentTouchInputFactory(AllBinaryGameCanvas* this, BaseTouchInput* nextTouchInput);

void AllBinaryGameCanvas_updateTouch(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_updateTouch2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_postInitTouch(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_initCommands(AllBinaryGameCanvas* this, CommandListener* cmdListener);

void AllBinaryGameCanvas_addCommands(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_itemStateChanged(AllBinaryGameCanvas* this, Item* item);

void AllBinaryGameCanvas_updateScreenButtonPaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_updateScreenButtonPaintable2(AllBinaryGameCanvas* this);

AllBinaryGameLayerManager* AllBinaryGameCanvas_getLayerManager(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setLayerManager(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* layerManager);

bool AllBinaryGameCanvas_isGameOver(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setGameOver(AllBinaryGameCanvas* this, bool gameOver);

void AllBinaryGameCanvas_processGameOver(AllBinaryGameCanvas* this);

bool AllBinaryGameCanvas_isHighScoreSubmitted(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setHighScoreSubmitted(AllBinaryGameCanvas* this, bool highScoreSubmitted);

GameState* AllBinaryGameCanvas_getGameState(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setGameState(AllBinaryGameCanvas* this, GameState* gameState);

void AllBinaryGameCanvas_updateGameState(AllBinaryGameCanvas* this);


void AllBinaryGameCanvas_removeAllGameKeyInputListenersOnBuild(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_removeAllGameKeyInputListeners(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_removeAllGameKeyInputListeners2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_removeKeyInputListener(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput);

void AllBinaryGameCanvas_updateEndGameProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_updateEndGameProcessor2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_buildGameInit(AllBinaryGameCanvas* this, bool isPortion);

void AllBinaryGameCanvas_cleanupGame(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_loadResourceLoadingLevel(AllBinaryGameCanvas* this, ResourceLoadingLevel* resourceLoadingLevel);

void AllBinaryGameCanvas_loadResources(AllBinaryGameCanvas* this, int32_t level);

void AllBinaryGameCanvas_updateColor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_buildGame(AllBinaryGameCanvas* this, int32_t portion);

void AllBinaryGameCanvas_buildGame2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_addKeyInputListener(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput);

void AllBinaryGameCanvas_setGameCanvasStartListener(AllBinaryGameCanvas* this, DemoPaintableInterface* gameCanvasStartListener);

void AllBinaryGameCanvas_loadState(AllBinaryGameCanvas* this);

ABHashtable* AllBinaryGameCanvas_getLoadStateHashtable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setLoadStateHashtable(AllBinaryGameCanvas* this, ABHashtable* hashtable);

ABHashtable* AllBinaryGameCanvas_getCurrentStateHashtable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_paintGameOver(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_draw(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_clear(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_paint(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_paintThreed(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_processEndLevelIntermissionGameState(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_nonBotPaint(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_paintIntermission(AllBinaryGameCanvas* this, Graphics* graphics);

void AllBinaryGameCanvas_keyPressed(AllBinaryGameCanvas* this, int32_t keyCode);

void AllBinaryGameCanvas_keyReleased(AllBinaryGameCanvas* this, int32_t keyCode);

void AllBinaryGameCanvas_keyRepeated(AllBinaryGameCanvas* this, int32_t keyCode);

void AllBinaryGameCanvas_keyPressedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId);

void AllBinaryGameCanvas_keyRepeatedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId);

void AllBinaryGameCanvas_keyReleasedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId);

void AllBinaryGameCanvas_handleRawKey(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated);

int32_t AllBinaryGameCanvas_endProgress(AllBinaryGameCanvas* this, bool isProgress);

void AllBinaryGameCanvas_processPlayingGame(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_threadInit(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_processGame(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_notifyDonePainting(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_shouldWait(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_run(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_run2(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_run3(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setRunning(AllBinaryGameCanvas* this, bool running);

void AllBinaryGameCanvas_end(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_endGameThread(AllBinaryGameCanvas* this);

HighScore* AllBinaryGameCanvas_createHighScore(AllBinaryGameCanvas* this, int64_t score);

void AllBinaryGameCanvas_setHighScore(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation, const char* name, int64_t score, bool autoSubmit, bool isLast);

void AllBinaryGameCanvas_setHighScore2(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation, const char* name, int64_t score, bool autoSubmit, bool isLast);

TimeDelayHelper* AllBinaryGameCanvas_getGameStateTimeHelper(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setInitialized(AllBinaryGameCanvas* this, bool initialized);

bool AllBinaryGameCanvas_isInitialized(AllBinaryGameCanvas* this);

int32_t AllBinaryGameCanvas_getSourceId(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setProgressPaintable(AllBinaryGameCanvas* this, PaintableInterface* paintable);

IntermissionInterface* AllBinaryGameCanvas_getStartIntermissionInterface(AllBinaryGameCanvas* this);

IntermissionInterface* AllBinaryGameCanvas_getEndLevelIntermissionInterface(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setTouchPaintableP(AllBinaryGameCanvas* this, Paintable* paintable);

Paintable* AllBinaryGameCanvas_getTouchPaintableP(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setEndGamePaintable(AllBinaryGameCanvas* this, Paintable* endGamePaintable);

Paintable* AllBinaryGameCanvas_getEndGamePaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setIntermissionPaintable(AllBinaryGameCanvas* this, Paintable* intermissionPaintable);

Paintable* AllBinaryGameCanvas_getIntermissionPaintable(AllBinaryGameCanvas* this);

EndGameInfo* AllBinaryGameCanvas_getEndGameInfoP(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setHighScoresPaintable(AllBinaryGameCanvas* this, Paintable* highScoresPaintable);

Paintable* AllBinaryGameCanvas_getHighScoresPaintable(AllBinaryGameCanvas* this);

HighScoresPaintable* AllBinaryGameCanvas_getRealHighScoresPaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_clearPlayerGameInputList(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_addPlayerGameInput(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput);

void AllBinaryGameCanvas_setMenuInputProcessor(AllBinaryGameCanvas* this, BasicMenuInputProcessor* menuInputProcessor);

BasicMenuInputProcessor* AllBinaryGameCanvas_getMenuInputProcessor(AllBinaryGameCanvas* this);

ScrollSelectionForm* AllBinaryGameCanvas_getMenuForm(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setMenuForm(AllBinaryGameCanvas* this, ScrollSelectionForm* menuForm);

int32_t AllBinaryGameCanvas_getStartLevel(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setStartLevel(AllBinaryGameCanvas* this, int32_t startLevel);

void AllBinaryGameCanvas_setTouchButtonsPaintable(AllBinaryGameCanvas* this, Paintable* touchButtonsPaintable);

Paintable* AllBinaryGameCanvas_getTouchButtonsPaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setGameInputProcessor(AllBinaryGameCanvas* this, Processor* gameInputProcessor);

Processor* AllBinaryGameCanvas_getGameInputProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setEndGameProcessor(AllBinaryGameCanvas* this, Processor* endGameProcessor);

Processor* AllBinaryGameCanvas_getEndGameProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setEndGameStatePaintable(AllBinaryGameCanvas* this, Paintable* endGameStatePaintable);

Paintable* AllBinaryGameCanvas_getEndGameStatePaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setNonBotPaintableP(AllBinaryGameCanvas* this, Paintable* nonBotPaintable);

Paintable* AllBinaryGameCanvas_getNonBotPaintableP(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setStartIntermissionPaintable(AllBinaryGameCanvas* this, InitUpdatePaintable* startIntermissionPaintable);

InitUpdatePaintable* AllBinaryGameCanvas_getStartIntermissionPaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setMainStateProcessor(AllBinaryGameCanvas* this, Processor* mainStateProcessor);

Processor* AllBinaryGameCanvas_getMainStateProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setProcessGameProcessor(AllBinaryGameCanvas* this, Processor* processGameProcessor);

Processor* AllBinaryGameCanvas_getProcessGameProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setOpenMenuPaintable(AllBinaryGameCanvas* this, Paintable* openMenuPaintable);

Paintable* AllBinaryGameCanvas_getOpenMenuPaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setPopupMenuInputProcessor(AllBinaryGameCanvas* this, BasicMenuInputProcessor* popupMenuInputProcessor);

BasicMenuInputProcessor* AllBinaryGameCanvas_getPopupMenuInputProcessor(AllBinaryGameCanvas* this);

SensorGameUpdateProcessor* AllBinaryGameCanvas_getSensorGameUpdateProcessor(AllBinaryGameCanvas* this);

InputProcessor* AllBinaryGameCanvas_getRawGameInputProcessor(AllBinaryGameCanvas* this);

InputProcessor* AllBinaryGameCanvas_getRawInputProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setInputProcessor(AllBinaryGameCanvas* this, InputProcessor* inputProcessor);

InputProcessor* AllBinaryGameCanvas_getInputProcessor(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setMenuPaintable(AllBinaryGameCanvas* this, Paintable* menuPaintable);

Paintable* AllBinaryGameCanvas_getMenuPaintable(AllBinaryGameCanvas* this);


Paintable* AllBinaryGameCanvas_getFormPaintable(AllBinaryGameCanvas* this);

void AllBinaryGameCanvas_setGameSpecificPaintableP(AllBinaryGameCanvas* this, Paintable* gameSpecificPaintable);

Paintable* AllBinaryGameCanvas_getGameSpecificPaintableP(AllBinaryGameCanvas* this);

bool AllBinaryGameCanvas_isSingleThread(AllBinaryGameCanvas* this);

bool AllBinaryGameCanvas_isRunningInAnotherThread(AllBinaryGameCanvas* this);

int32_t AllBinaryGameCanvas_getType(AllBinaryGameCanvas* this);

const char* AllBinaryGameCanvas_getTitle(AllBinaryGameCanvas* this);

bool AllBinaryGameCanvas_isPaused(AllBinaryGameCanvas* this);
#define AllBinaryGameCanvas_new5 AllBinaryGameCanvas_new
#define AllBinaryGameCanvas_init5 AllBinaryGameCanvas_init
#ifndef AllBinaryGameCanvas_isMainCanvas
#define AllBinaryGameCanvas_isMainCanvas RunnableCanvas_isMainCanvas
#endif
#ifndef AllBinaryGameCanvas_setThread
#define AllBinaryGameCanvas_setThread RunnableCanvas_setThread
#endif
#ifndef AllBinaryGameCanvas_isRunning
#define AllBinaryGameCanvas_isRunning RunnableCanvas_isRunning
#endif
#ifndef AllBinaryGameCanvas_getLoopTimeHelperP
#define AllBinaryGameCanvas_getLoopTimeHelperP RunnableCanvas_getLoopTimeHelperP
#endif
#ifndef AllBinaryGameCanvas_setWait
#define AllBinaryGameCanvas_setWait RunnableCanvas_setWait
#endif
#ifndef AllBinaryGameCanvas_getWait
#define AllBinaryGameCanvas_getWait RunnableCanvas_getWait
#endif
#ifndef AllBinaryGameCanvas_setCurrentThreadFake
#define AllBinaryGameCanvas_setCurrentThreadFake RunnableCanvas_setCurrentThreadFake
#endif
#ifndef AllBinaryGameCanvas_showNotify
#define AllBinaryGameCanvas_showNotify RunnableCanvas_showNotify
#endif
#ifndef AllBinaryGameCanvas_stopWaiting
#define AllBinaryGameCanvas_stopWaiting RunnableCanvas_stopWaiting
#endif
#ifndef AllBinaryGameCanvas_waitOnNotify
#define AllBinaryGameCanvas_waitOnNotify RunnableCanvas_waitOnNotify
#endif
#ifndef AllBinaryGameCanvas_processGameSleep
#define AllBinaryGameCanvas_processGameSleep RunnableCanvas_processGameSleep
#endif
#ifndef AllBinaryGameCanvas_processLoopSleep
#define AllBinaryGameCanvas_processLoopSleep RunnableCanvas_processLoopSleep
#endif
#ifndef AllBinaryGameCanvas_end2
#define AllBinaryGameCanvas_end2 RunnableCanvas_end2
#endif
#ifndef AllBinaryGameCanvas_getWidth
#define AllBinaryGameCanvas_getWidth MyCanvas_getWidth
#endif
#ifndef AllBinaryGameCanvas_getHeight
#define AllBinaryGameCanvas_getHeight MyCanvas_getHeight
#endif
#ifndef AllBinaryGameCanvas_setFullScreenMode
#define AllBinaryGameCanvas_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef AllBinaryGameCanvas_sizeChanged
#define AllBinaryGameCanvas_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef AllBinaryGameCanvas_getCommandStack
#define AllBinaryGameCanvas_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef AllBinaryGameCanvas_isCommand
#define AllBinaryGameCanvas_isCommand MyCanvas_isCommand
#endif
#ifndef AllBinaryGameCanvas_addCommand
#define AllBinaryGameCanvas_addCommand MyCanvas_addCommand
#endif
#ifndef AllBinaryGameCanvas_removeCommand
#define AllBinaryGameCanvas_removeCommand MyCanvas_removeCommand
#endif
#ifndef AllBinaryGameCanvas_removeAllCommands
#define AllBinaryGameCanvas_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef AllBinaryGameCanvas_setCommandListener
#define AllBinaryGameCanvas_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef AllBinaryGameCanvas_getCustomCommandListener
#define AllBinaryGameCanvas_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef AllBinaryGameCanvas_removePauseCommand
#define AllBinaryGameCanvas_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef AllBinaryGameCanvas_process
#define AllBinaryGameCanvas_process MyCanvas_process
#endif
#ifndef AllBinaryGameCanvas_hasChild
#define AllBinaryGameCanvas_hasChild MyCanvas_hasChild
#endif
#ifndef AllBinaryGameCanvas_destroy
#define AllBinaryGameCanvas_destroy MyCanvas_destroy
#endif
#ifndef AllBinaryGameCanvas_setPaused
#define AllBinaryGameCanvas_setPaused MyCanvas_setPaused
#endif
#ifndef AllBinaryGameCanvas_pointerDragged
#define AllBinaryGameCanvas_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef AllBinaryGameCanvas_pointerPressed
#define AllBinaryGameCanvas_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef AllBinaryGameCanvas_pointerReleased
#define AllBinaryGameCanvas_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef AllBinaryGameCanvas_nextSong
#define AllBinaryGameCanvas_nextSong MyCanvas_nextSong
#endif
#ifndef AllBinaryGameCanvas_getGameAction
#define AllBinaryGameCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef AllBinaryGameCanvas_getKeyCode
#define AllBinaryGameCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef AllBinaryGameCanvas_getKeyName
#define AllBinaryGameCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef AllBinaryGameCanvas_hasPointerEvents
#define AllBinaryGameCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef AllBinaryGameCanvas_hasPointerMotionEvents
#define AllBinaryGameCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef AllBinaryGameCanvas_hasRepeatEvents
#define AllBinaryGameCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef AllBinaryGameCanvas_hideNotify
#define AllBinaryGameCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef AllBinaryGameCanvas_isDoubleBuffered
#define AllBinaryGameCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef AllBinaryGameCanvas_pointerPressed
#define AllBinaryGameCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef AllBinaryGameCanvas_pointerReleased
#define AllBinaryGameCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef AllBinaryGameCanvas_pointerDragged
#define AllBinaryGameCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef AllBinaryGameCanvas_repaint
#define AllBinaryGameCanvas_repaint Canvas_repaint
#endif
#ifndef AllBinaryGameCanvas_repaintXYWH
#define AllBinaryGameCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef AllBinaryGameCanvas_serviceRepaints
#define AllBinaryGameCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef AllBinaryGameCanvas_setFullScreenMode
#define AllBinaryGameCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef AllBinaryGameCanvas_sizeChanged
#define AllBinaryGameCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef AllBinaryGameCanvas_showNotify
#define AllBinaryGameCanvas_showNotify Canvas_showNotify
#endif
#ifndef AllBinaryGameCanvas_setUI
#define AllBinaryGameCanvas_setUI Displayable_setUI
#endif
#ifndef AllBinaryGameCanvas_getUI
#define AllBinaryGameCanvas_getUI Displayable_getUI
#endif
#ifndef AllBinaryGameCanvas_addCommand
#define AllBinaryGameCanvas_addCommand Displayable_addCommand
#endif
#ifndef AllBinaryGameCanvas_removeCommand
#define AllBinaryGameCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef AllBinaryGameCanvas_getWidth
#define AllBinaryGameCanvas_getWidth Displayable_getWidth
#endif
#ifndef AllBinaryGameCanvas_getHeight
#define AllBinaryGameCanvas_getHeight Displayable_getHeight
#endif
#ifndef AllBinaryGameCanvas_isShown
#define AllBinaryGameCanvas_isShown Displayable_isShown
#endif
#ifndef AllBinaryGameCanvas_getTicker
#define AllBinaryGameCanvas_getTicker Displayable_getTicker
#endif
#ifndef AllBinaryGameCanvas_setTicker
#define AllBinaryGameCanvas_setTicker Displayable_setTicker
#endif
#ifndef AllBinaryGameCanvas_setTitle
#define AllBinaryGameCanvas_setTitle Displayable_setTitle
#endif
#ifndef AllBinaryGameCanvas_setCommandListener
#define AllBinaryGameCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef AllBinaryGameCanvas_getCommandListener
#define AllBinaryGameCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef AllBinaryGameCanvas_getCommands
#define AllBinaryGameCanvas_getCommands Displayable_getCommands
#endif
#ifndef AllBinaryGameCanvas_setFullScreenMode
#define AllBinaryGameCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef AllBinaryGameCanvas_isFullScreenMode
#define AllBinaryGameCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef AllBinaryGameCanvas_hideNotify
#define AllBinaryGameCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef AllBinaryGameCanvas_hideNotifyForDisplay
#define AllBinaryGameCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef AllBinaryGameCanvas_pointerPressed
#define AllBinaryGameCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef AllBinaryGameCanvas_pointerReleased
#define AllBinaryGameCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef AllBinaryGameCanvas_pointerDragged
#define AllBinaryGameCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef AllBinaryGameCanvas_repaint
#define AllBinaryGameCanvas_repaint Displayable_repaint
#endif
#ifndef AllBinaryGameCanvas_repaintXYWH
#define AllBinaryGameCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef AllBinaryGameCanvas_sizeChanged
#define AllBinaryGameCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef AllBinaryGameCanvas_sizeChangedForDisplay
#define AllBinaryGameCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef AllBinaryGameCanvas_showNotify
#define AllBinaryGameCanvas_showNotify Displayable_showNotify
#endif
#ifndef AllBinaryGameCanvas_showNotifyForDisplay
#define AllBinaryGameCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryGameCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryGameCanvas_register(void);

#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#if __has_include("org/allbinary/game/IntermissionInterface.h")
#include "org/allbinary/game/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/game/input/InputProcessor.h")
#include "org/allbinary/game/input/InputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/score/HighScore.h")
#include "org/allbinary/game/score/HighScore.h"
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
#if __has_include("org/allbinary/graphics/paint/InitUpdatePaintable.h")
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#if __has_include("org/allbinary/input/gyro/SensorGameUpdateProcessor.h")
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H
