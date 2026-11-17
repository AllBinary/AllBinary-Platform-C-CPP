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
// #include "javax/microedition/lcdui/ChoiceGroup.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Item.h"
// #include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameStrings.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/Intermission.h"
#include "org/allbinary/game/IntermissionCompositeInterface.h"
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"
#include "org/allbinary/game/IntermissionInterface.h"
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/InGameFeatures.h"
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/init/GameInitializationUtil.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/InputProcessor.h"
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/ScreenCapture.h"
#include "org/allbinary/graphics/ScreenCaptureFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "org/allbinary/graphics/form/FormType.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/NullInitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/image/opengles/OpenGLImageSpecificFactory.h"
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#include "org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonsPaintableFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/PlayerQueue.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/SecondaryThreadPool.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInterface.h"

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

static constexpr int32_t AllBinaryGameCanvas_id = 0;
constexpr int32_t AllBinaryGameCanvas_TYPE = 2;

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
static void AllBinaryGameCanvas_init(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager, bool buffered);
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
static void AllBinaryGameCanvas_updateGameKeyEventProcessor(AllBinaryGameCanvas* this);
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
static void AllBinaryGameCanvas_setFormPaintable(AllBinaryGameCanvas* this, Paintable* formPaintable);
Paintable* AllBinaryGameCanvas_getFormPaintable(AllBinaryGameCanvas* this);
void AllBinaryGameCanvas_setGameSpecificPaintableP(AllBinaryGameCanvas* this, Paintable* gameSpecificPaintable);
Paintable* AllBinaryGameCanvas_getGameSpecificPaintableP(AllBinaryGameCanvas* this);
bool AllBinaryGameCanvas_isSingleThread(AllBinaryGameCanvas* this);
bool AllBinaryGameCanvas_isRunningInAnotherThread(AllBinaryGameCanvas* this);
int32_t AllBinaryGameCanvas_getType(AllBinaryGameCanvas* this);
const char* AllBinaryGameCanvas_getTitle(AllBinaryGameCanvas* this);
bool AllBinaryGameCanvas_isPaused(AllBinaryGameCanvas* this);

static void AllBinaryGameCanvas_initFields(AllBinaryGameCanvas* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->touchFeatureFactory = TouchFeatureFactory_getInstance();
    this->openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
    this->touchButtonFactory = TouchButtonFactory_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameStrings = GameStrings_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton_getInstance();
    this->gameRunnable = GameCanvasRunnable_new(this);
    this->gamePauseRunnable = GameCanvasPauseRunnable_new(this);
    this->formUtil = FormUtil_getInstance();
    this->myFormUtil = MyFormUtil_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->gameSpecificPaintable = NullPaintable_getInstance();
    this->sensorGameUpdateProcessor = SingleSensorGameUpdateProcessor_new();
    this->endGameInfo = EndGameInfo_new();
    this->startIntermissionInterface = Intermission_new();
    this->endLevelIntermissionInterface = Intermission_new();
    this->gameLayerManager = AllBinaryGameLayerManager_getNullInstance();
    this->gameState = this->gameStateFactory->NO_GAME_STATE;
    this->gameOver = false;
    this->initialized = false;
    this->gameStateTimeHelper = TimeDelayHelper_new(0);
    
    this->highScoreSubmitted = false;
    this->realHighScoresPaintable = HighScoresPaintable_new();
    this->highScoresPaintable = NullPaintable_getInstance();
    this->localPlayerGameInputList = BasicArrayListD_new();
    this->isCheating = false;
    this->hashtable = this->stdUtil->NULL_TABLE;
    this->isSingleKeyRepeatableProcessing = false;
    this->gameInitializationInterfaceFactoryInterface = BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;
    this->touchButtonsPaintable = NullPaintable_getInstance();
    this->touchPaintable = NullPaintable_getInstance();
    this->cheatProcessor = NoPlayerGameInput_getInstance();
    this->gameInputProcessor = Processor_getInstance();
    this->endGameProcessor = Processor_getInstance();
    this->realEndGameProcessor = Processor_getInstance();
    this->startIntermissionProcessor = Processor_getInstance();
    this->realStartIntermissionProcessor = Processor_getInstance();
    this->endGamePaintable = NullPaintable_getInstance();
    this->endGameStatePaintable = NullPaintable_getInstance();
    this->nonBotPaintable = NullPaintable_getInstance();
    this->intermissionPaintable = NullPaintable_getInstance();
    this->startIntermissionPaintable = NullInitUpdatePaintable_getInstance();
    this->mainStateProcessor = Processor_getInstance();
    this->processGameProcessor = Processor_getInstance();
    
    this->startLevel = 0;
    this->mainMenuInputProcessor = NoMenuInputProcessor_getInstance();
    this->popupMenuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuForm = ScrollSelectionForm_getNullScrollSelectionForm();
    this->formPaintable = NullPaintable_getInstance();
    this->openMenuPaintable = NullPaintable_getInstance();
    this->menuPaintable = NullPaintable_getInstance();
    this->currentTouchInputFactory = NoButtonsTouchInputFactory_getInstance();
    this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), this->basicColorFactory->BLACK, true);
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
    this->primaryPlayerQueue = PrimaryPlayerQueueFactory_getInstance();
    this->secondaryPlayerQueue = SecondaryPlayerQueueFactory_getInstance();
    this->BUILD_GAME = "buildGame";
    this->gameTypeFactory = GameTypeFactory_getInstance();
    this->screenCapture = ScreenCaptureFactory_getInstance();
    this->basicMotionGesturesHandler = BasicMotionGesturesHandler_getInstance();
    this->gameKeyEventHandler = GameKeyEventHandler_getInstance();
    this->gameBehavior = nullptr;
    this->menuBehavior = nullptr;
    this->progressPaintable = ProgressCanvasFactory_getLazyInstance();
    this->fontHeightP = 0;
    this->gameCanvasStartListener = NullDemoPaintable_NULL_DEMO_PAINTABLE;
    this->rawGameInputProcessor = GameCanvasInputProcessor_new(this);
    this->rawInputProcessor = FormInputProcessor_new(this);
    this->inputProcessor = AllBinaryGameCanvas_getRawGameInputProcessor(this);
    this->YIELD_SLEEP = 100LL;
}


void AllBinaryGameCanvas_init(AllBinaryGameCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
        RunnableCanvas_init(&this->base, commandListener, CanvasStrings_getInstance()->EMPTY_CHILD_NAME_LIST, true);
        AllBinaryGameCanvas_initFields(this);
        this->highScoresHelper = HighScoresFactoryInterface_createHighScoresHelper(highScoresFactoryInterface);
        this->gameInitializationInterfaceFactoryInterface = gameInitializationInterfaceFactoryInterface;
        AllBinaryGameCanvas_init(this, gameLayerManager, buffered);
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        if (JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getGameType) == this->gameTypeFactory->BOT || JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getGameType) == this->gameTypeFactory->NONE) {
            this->gameBehavior = DemoGameBehavior_getInstance();
            this->menuBehavior = BaseMenuBehavior_getInstance();
        } else {
            this->gameBehavior = BaseGameBehavior_getInstance();
            this->menuBehavior = AllBinaryGameCanvas_getInGameMenuBehavior(this);
        }
        AllBinaryGameCanvas_initPopupMenu(this);
        AllBinaryGameCanvas_initMenu(this);
        AllBinaryGameCanvas_initSpecialPaint(this);
        DisplayChangeEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}

AllBinaryGameCanvas* AllBinaryGameCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
    AllBinaryGameCanvas* this = calloc(1, sizeof(AllBinaryGameCanvas));
    AllBinaryGameCanvas_init(this, commandListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
    return this;
}


void AllBinaryGameCanvas_updateMeasurement(AllBinaryGameCanvas* this, Graphics* graphics) {
        JAVA_TRY {
            Font* font = Graphics_getFont(graphics);
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), append, this->canvasStrings->FD_WIDTH), appendint, ((int32_t) MyFontProcessor_defaultCharWidth(font))), append, this->canvasStrings->FD_HEIGHT), appendint, ((int32_t) Font_getHeight(font))), toString), this, this->canvasStrings->UPDATE_MEASUREMENT);
            this->fontHeightP = Font_getHeight(font);
            MyFormUtil_updateMeasurement(this->myFormUtil, graphics);
            Rectangle* popupMenuRectangle = MyFormUtil_getPopupMenuRectangle(this->myFormUtil);
            BasicPopupMenuPaintable* basicPopupMenuPaintable = (((BasicPopupMenuPaintable*) AllBinaryGameCanvas_getOpenMenuPaintable(this)));
            BasicPopupMenuPaintable_init(basicPopupMenuPaintable, popupMenuRectangle);
            if (AllBinaryGameCanvas_getPopupMenuInputProcessor(this) != NoMenuInputProcessor_getInstance()) {
                PopupMenuInputProcessor* popupMenuInputProcessor = (((PopupMenuInputProcessor*) AllBinaryGameCanvas_getPopupMenuInputProcessor(this)));
                BasicMenuInputProcessor_init(popupMenuInputProcessor, popupMenuRectangle);
            }
            this->myFontProcessor = MyFontProcessor_getInstance();
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
}


BaseMenuBehavior* AllBinaryGameCanvas_getInGameMenuBehavior(AllBinaryGameCanvas* this) {
        return InGameMenuBehavior_getInstance();
}


void AllBinaryGameCanvas_setCurrentThread(AllBinaryGameCanvas* this) {
        if (J2MEUtil_isHTML()) {
            RunnableCanvas_setCurrentThreadFake((&this->base));
        } else {
            RunnableCanvas_setCurrentThread((&this->base));
        }
}


void AllBinaryGameCanvas_onEvent(AllBinaryGameCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AllBinaryGameCanvas_onDisplayChangeEvent(AllBinaryGameCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), append, DisplayInfoSingleton_toString(DisplayInfoSingleton_getInstance())), toString), this, this->canvasStrings->UPDATE_MEASUREMENT);
            this->myFontProcessor = this->updateMyFontProcessor;
            BaseMenuBehavior_onDisplayChangeEvent(this->menuBehavior, this, displayChangeEvent);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_updateMenuFromEvent(AllBinaryGameCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        ScrollSelectionForm_init(this->menuForm, rectangle, formType);
        if (this->currentTouchInputFactory != NoButtonsTouchInputFactory_getInstance()) {
            TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BaseTouchInput_getList(this->currentTouchInputFactory));
        }
        this->myFontProcessor = this->updateMyFontProcessor;
}


// throws Exception
void AllBinaryGameCanvas_processSleep(AllBinaryGameCanvas* this) {
        RunnableCanvas_processSleep((&this->base));
        if (AllBinaryMediaManager_update()) {
            if (!PlayerQueue_process(this->primaryPlayerQueue)) {
                PlayerQueue_process(this->secondaryPlayerQueue);
            }
        }
        if (BasicMenuInputProcessor_processInputList(this->menuInputProcessor) != -1) {
            JAVA_CALL(this->runnableCanvasRefreshHelper, process);
        }
}


// throws Exception
void AllBinaryGameCanvas_initPopupMenu(AllBinaryGameCanvas* this) {
        if (this->popupMenuInputProcessor == NoMenuInputProcessor_getInstance()) {
            Features* features = Features_getInstance();
            Rectangle* popupMenuRectangle = MyFormUtil_getPopupMenuRectangle(this->myFormUtil);
            if (Features_isFeature(features, this->touchFeatureFactory->TOUCH_ENABLED)) {
                AllBinaryGameCanvas_setOpenMenuPaintable(this, BasicPopupMenuPaintable_new(popupMenuRectangle, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager)));
                AllBinaryGameCanvas_setPopupMenuInputProcessor(this, PopupMenuInputProcessor_new(BasicArrayListD_new(), -1, this, popupMenuRectangle));
            }
        } else {
        }
}


void AllBinaryGameCanvas_initMenu(AllBinaryGameCanvas* this) {
        JAVA_TRY {
            BaseMenuBehavior_initMenu(this->menuBehavior, this);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "initMenu", e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_initMenu2(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_closeMenu(this);
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        GameLimitedCommandTextItemArrayFactory* gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getInstance();
        CommandTextItemArrayFactory* commandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(gameLimitedCommandTextItemArrayFactory);
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(commandTextItemArrayFactory, AllBinaryGameCanvas_getCommandStack(this), AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        AllBinaryGameCanvas_setMenuForm(this, CommandCurrentSelectionFormFactory_getInstance(StringUtil_getInstance()->EMPTY_STRING, items, rectangle, formType, 25, false, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager)));
        ScrollSelectionForm* scrollSelectionForm = AllBinaryGameCanvas_getMenuForm(this);
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->touchFeatureFactory->TOUCH_ENABLED)) {
            this->mainMenuInputProcessor = PopupCommandFormInputProcessor_new(BasicArrayListD_new(), -1, this, scrollSelectionForm, ((PopupMenuInputProcessor*) AllBinaryGameCanvas_getPopupMenuInputProcessor(this)));
        } else {
        }
        AllBinaryGameCanvas_setMenuInputProcessor(this, AllBinaryGameCanvas_getPopupMenuInputProcessor(this));
        if (scrollSelectionForm != ScrollSelectionFormNoneFactory_getInstance()) {
            AllBinaryGameCanvas_setFormPaintable(this, FormPaintable_new(scrollSelectionForm));
        } else {
        }
        AllBinaryGameCanvas_closeMenu(this);
}


void AllBinaryGameCanvas_updateMenu(AllBinaryGameCanvas* this) {
        JAVA_TRY {
            BaseMenuBehavior_updateMenu(this->menuBehavior, this);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "initMenu", e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_updateMenu2(AllBinaryGameCanvas* this) {
        ScrollSelectionForm* scrollSelectionForm = AllBinaryGameCanvas_getMenuForm(this);
        ScrollSelectionForm_deleteAll(scrollSelectionForm);
        GameLimitedCommandTextItemArrayFactory* gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getInstance();
        CommandTextItemArrayFactory* commandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(gameLimitedCommandTextItemArrayFactory);
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(commandTextItemArrayFactory, AllBinaryGameCanvas_getCommandStack(this), AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        int32_t size = java_array_length(items);
        for (int32_t index = 0; index < size; index++) {
            ScrollSelectionForm_append(scrollSelectionForm, items[index]);
        }
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        ScrollSelectionForm_init(scrollSelectionForm, rectangle, formType);
}


// synchronized
void AllBinaryGameCanvas_pause(AllBinaryGameCanvas* this) {
        DemoGameBehavior_pause(this->gameBehavior, this);
        AllBinaryGameCanvas_closeMenu(this);
        RunnableCanvas_pause((&this->base));
        TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
        JAVA_CALL(this->tsUtil, gc);
}


// synchronized
void AllBinaryGameCanvas_unPause(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->gameStrings->UNPAUSE);
        AllBinaryGameCanvas_closeMenu(this);
        JAVA_CALL(this->tsUtil, gc);
        RunnableCanvas_unPause((&this->base));
        TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
        DemoGameBehavior_unPause(this->gameBehavior, this);
}


bool AllBinaryGameCanvas_isPausable(AllBinaryGameCanvas* this) {
        if (CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory_getInstance()) == NullWaitGameRunnable_getInstance()) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void AllBinaryGameCanvas_popupMenu(AllBinaryGameCanvas* this) {
        BaseMenuBehavior_popupMenu(this->menuBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_popupMenu2(AllBinaryGameCanvas* this) {
        PlayerQueue_add(this->primaryPlayerQueue, SelectSound_getInstance());
        AllBinaryGameCanvas_setMenuPaintable(this, AllBinaryGameCanvas_getFormPaintable(this));
        AllBinaryGameCanvas_setMenuInputProcessor(this, this->mainMenuInputProcessor);
        BasicMotionGesturesHandler_addListenerInterface(this->basicMotionGesturesHandler, this->mainMenuInputProcessor);
        GameKeyEventHandler_addListener(this->gameKeyEventHandler, this->mainMenuInputProcessor);
}


// throws Exception
void AllBinaryGameCanvas_toggleMenu(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->gameStrings->TOGGLE_MENU);
        if (AllBinaryGameCanvas_getMenuPaintable(this) == AllBinaryGameCanvas_getOpenMenuPaintable(this)) {
            AllBinaryGameCanvas_pause(this);
            AllBinaryGameCanvas_updateMenu(this);
            AllBinaryGameCanvas_popupMenu(this);
        } else if (AllBinaryGameCanvas_getMenuPaintable(this) == AllBinaryGameCanvas_getFormPaintable(this)) {
            PlayerQueue_add(this->primaryPlayerQueue, SelectSound_getInstance());
            AllBinaryGameCanvas_unPause(this);
        }
}


void AllBinaryGameCanvas_closeMenu(AllBinaryGameCanvas* this) {
        BaseMenuBehavior_closeMenu(this->menuBehavior, this);
}


void AllBinaryGameCanvas_closeMenu2(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setMenuPaintable(this, AllBinaryGameCanvas_getOpenMenuPaintable(this));
        BasicMotionGesturesHandler_removeListener(this->basicMotionGesturesHandler, this->mainMenuInputProcessor);
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, this->mainMenuInputProcessor);
        AllBinaryGameCanvas_setMenuInputProcessor(this, AllBinaryGameCanvas_getPopupMenuInputProcessor(this));
}


void AllBinaryGameCanvas_open(AllBinaryGameCanvas* this) {
        BasicMotionGesturesHandler_addListenerInterface(this->basicMotionGesturesHandler, this->menuInputProcessor);
        GameKeyEventHandler_addListener(this->gameKeyEventHandler, this->menuInputProcessor);
}


void AllBinaryGameCanvas_close(AllBinaryGameCanvas* this) {
        BasicMotionGesturesHandler_removeListener(this->basicMotionGesturesHandler, this->menuInputProcessor);
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, this->menuInputProcessor);
        PlayerQueue_clear(this->primaryPlayerQueue);
        PlayerQueue_clear(this->secondaryPlayerQueue);
}


// throws Exception
void AllBinaryGameCanvas_processorInit(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setMainStateProcessor(this, Processor_getInstance());
        AllBinaryGameCanvas_setProcessGameProcessorInit(this);
}


void AllBinaryGameCanvas_setProcessGameProcessorInit(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setProcessGameProcessor(this, GameProcessor_new(this));
}


void AllBinaryGameCanvas_initSpecialPaint(AllBinaryGameCanvas* this) {
        BaseMenuBehavior_initSpecialPaint(this->menuBehavior, this);
}


// throws Exception
static void AllBinaryGameCanvas_init(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager, bool buffered) {
        TimeDelayHelper_setStartTimeTNT(this->gameStateTimeHelper);
        AllBinaryGameCanvas_setHighScoreSubmitted(this, false);
        AllBinaryGameCanvas_setLayerManager(this, gameLayerManager);
        if (!buffered) {
            const char* BUFF_MESSAGE = "XXX Not Buffering Causes Concurrency Issues XXX";
            JAVA_CALL(this->logUtil, putF, BUFF_MESSAGE, this, this->commonStrings->CONSTRUCTOR);
        } else {
            java_throw(java_exception_new("Exception", "Buffering is disabled"));
        }
        AllBinaryGameCanvas_setGameInputProcessor(this, Processor_getInstance());
        Features* features = Features_getInstance();
        if (Features_isFeature(features, GameFeatureFactory_getInstance()->CHEATING)) {
            this->isCheating = true;
            this->cheatProcessor = CheatGameInputProcessor_new(this);
            GameKeyEventHandler_addListener(this->gameKeyEventHandler, this->cheatProcessor);
        } else {
            this->isCheating = false;
            this->cheatProcessor = NoPlayerGameInput_getInstance();
        }
        this->realEndGameProcessor = EndGameProcessor_new(this);
        AllBinaryGameCanvas_setEndGameProcessor(this, Processor_getInstance());
        this->realStartIntermissionProcessor = StartIntermissionProcessor_new(this);
        this->startIntermissionProcessor = Processor_getInstance();
        AllBinaryGameCanvas_setEndGameStatePaintable(this, EndGamePaintable_new(this));
        AllBinaryGameCanvas_setEndGamePaintable(this, NullPaintable_getInstance());
        AllBinaryGameCanvas_setIntermissionPaintable(this, NullPaintable_getInstance());
        JAVA_CALL(AllBinaryGameCanvas_getStartIntermissionInterface(this), setListener, this);
}


void AllBinaryGameCanvas_notifyIntermission(AllBinaryGameCanvas* this, bool enable) {
        if (enable) {
            this->startIntermissionProcessor = this->realStartIntermissionProcessor;
        } else {
            this->startIntermissionProcessor = Processor_getInstance();
        }
        if (enable) {
            AllBinaryGameCanvas_setIntermissionPaintable(this, AllBinaryGameCanvas_getStartIntermissionPaintable(this));
        } else {
            AllBinaryGameCanvas_setIntermissionPaintable(this, NullPaintable_getInstance());
        }
}


// throws Exception
void AllBinaryGameCanvas_mediaInit(AllBinaryGameCanvas* this) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}


// throws Exception
// synchronized
void AllBinaryGameCanvas_initConfigurable(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_addNormalPortion(progressCanvas, 50, "Setting Configurables");
        GameInitializationUtil_initGame(GameInitializationUtil_getInstance(), abeClientInformation, this, this->gameInitializationInterfaceFactoryInterface);
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        ChangedGameFeatureListener* changedGameFeatureListener = ChangedGameFeatureListener_getInstance();
        if (ChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, gameFeatureFactory->SOUND)) {
            Features* features = Features_getInstance();
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Sound Changing To: "), appendboolean, Features_isFeature(features, gameFeatureFactory->SOUND)), toString), this, "initConfigurable");
            AllBinaryGameCanvas_mediaInit(this);
            ChangedGameFeatureListener_remove(changedGameFeatureListener, gameFeatureFactory->SOUND);
        }
        SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
        if (ChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, sensorFeatureFactory->ORIENTATION_SENSORS) || ChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, sensorFeatureFactory->NO_ORIENTATION) || ChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS)) {
            ChangedGameFeatureListener_remove(changedGameFeatureListener, sensorFeatureFactory->NO_ORIENTATION);
            ChangedGameFeatureListener_remove(changedGameFeatureListener, sensorFeatureFactory->ORIENTATION_SENSORS);
            ChangedGameFeatureListener_remove(changedGameFeatureListener, sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS);
        }
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        AllBinaryGameCanvas_loadResourceLoadingLevel(this, resourceLoadingLevelFactory->LOAD_GAME);
}


// throws Exception
void AllBinaryGameCanvas_initApp(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation) {
        AllBinaryGameCanvas_initConfigurable(this, abeClientInformation);
        AllBinaryGameCanvas_processorInit(this);
        SensorGameUpdateProcessor_process(this->sensorGameUpdateProcessor, this->gameLayerManager);
        SensorGameUpdateProcessor_sendNotifications(this->sensorGameUpdateProcessor, this->gameLayerManager);
        AllBinaryGameCanvas_initTouch(this);
}


// throws Exception
void AllBinaryGameCanvas_initTouch(AllBinaryGameCanvas* this) {
        GameInitializedEvent* gameInitializedEvent = GameInitializationUtil_getInstance()->EVENT;
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        GameInitializedEvent_setResourceLoadingLevel(gameInitializedEvent, resourceLoadingLevelFactory->LOAD_TOUCH);
        GameInitializedEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), gameInitializedEvent);
        TouchButtonFactory_defaultList(this->touchButtonFactory);
        AllBinaryGameCanvas_updateTouch(this);
        AllBinaryGameCanvas_postInitTouch(this);
}


// throws Exception
void AllBinaryGameCanvas_updateCurrentTouchInputFactory(AllBinaryGameCanvas* this, BaseTouchInput* nextTouchInput) {
        if (nextTouchInput != this->currentTouchInputFactory) {
            this->currentTouchInputFactory = nextTouchInput;
            PreLogUtil_put(BaseTouchInput_toString(this->currentTouchInputFactory), this, this->gameInputStrings->UDPATE_CURRENT_TOUCH_INPUT_FACTORY);
            TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BaseTouchInput_getList(this->currentTouchInputFactory));
        }
}


// throws Exception
void AllBinaryGameCanvas_updateTouch(AllBinaryGameCanvas* this) {
        DemoGameBehavior_updateTouch(this->gameBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_updateTouch2(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS)) {
            if (JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getCurrentLevel) - AllBinaryGameCanvas_getStartLevel(this) == 1) {
                AllBinaryGameCanvas_setTouchPaintableP(this, NullPaintable_getInstance());
            }
        }
}


// throws Exception
void AllBinaryGameCanvas_postInitTouch(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setTouchButtonsPaintable(this, TouchButtonsPaintableFactory_getInstance(AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager)));
        AllBinaryGameCanvas_updateScreenButtonPaintable(this);
}


void AllBinaryGameCanvas_initCommands(AllBinaryGameCanvas* this, CommandListener* cmdListener) {
        AllBinaryGameCanvas_removeAllCommands(this);
        AllBinaryGameCanvas_addCommands(this);
        AllBinaryGameCanvas_setCommandListener(this, cmdListener);
}


void AllBinaryGameCanvas_addCommands(AllBinaryGameCanvas* this) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        MyCommandsFactory* myCommandsFactory = MyCommandsFactory_getInstance();
        if (DebugFactory_getInstance() != NoDebug_getInstance()) {
            AllBinaryGameCanvas_addCommand(this, gameCommandsFactory->START_TRACE);
        }
        AllBinaryGameCanvas_addCommand(this, gameCommandsFactory->RESTART_COMMAND);
        AllBinaryGameCanvas_addCommand(this, myCommandsFactory->PAUSE_COMMAND);
        AllBinaryGameCanvas_addCommand(this, gameCommandsFactory->QUIT_COMMAND);
        bool isOverScan = JAVA_CALL(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()), isOverScan);
        if (J2MEUtil_isHTML()) {
        } else if (SWTUtil_isSWT) {
        } else if (!isOverScan) {
            if (TouchScreenFactory_isTouch(TouchScreenFactory_getInstance()) && InGameFeatures_isAny(InGameFeatures_new())) {
                AllBinaryGameCanvas_addCommand(this, InGameOptionsForm_DISPLAY);
            }
            AllBinaryGameCanvas_addCommand(this, gameCommandsFactory->SAVE);
            AllBinaryGameCanvas_addCommand(this, gameCommandsFactory->DISPLAY_LOAD_FORM);
        }
}


void AllBinaryGameCanvas_itemStateChanged(AllBinaryGameCanvas* this, Item* item) {
        JAVA_TRY {
            const char* itemLabel = Item_getLabel(item);
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonLabels->ITEM_LABEL), append, itemLabel), toString), this, "itemStateChanged");
            if (java_instanceof(item, "ChoiceGroup")) {
                GameFeatureUtil* gameFeatureUtil = GameFeatureUtil_getInstance();
                if (GameFeatureUtil_isExclusive(gameFeatureUtil, itemLabel)) {
                    GameFeatureUtil_updateExclusiveForChoiceGroup(gameFeatureUtil, ((ChoiceGroup*) item));
                } else {
                    GameFeatureUtil_updateMultiple(gameFeatureUtil, ((ChoiceGroup*) item));
                }
            }
            SensorGameUpdateProcessor_process(this->sensorGameUpdateProcessor, this->gameLayerManager);
            AllBinaryGameCanvas_updateTouch(this);
            AllBinaryGameCanvas_updateScreenButtonPaintable(this);
            SensorGameUpdateProcessor_sendNotifications(this->sensorGameUpdateProcessor, this->gameLayerManager);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "itemStateChanged", e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_updateScreenButtonPaintable(AllBinaryGameCanvas* this) {
        DemoGameBehavior_updateScreenButtonPaintable(this->gameBehavior, this);
}


void AllBinaryGameCanvas_updateScreenButtonPaintable2(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS)) {
            AllBinaryGameCanvas_setTouchPaintableP(this, AllBinaryGameCanvas_getTouchButtonsPaintable(this));
            AllBinaryGameCanvas_setStartLevel(this, JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getCurrentLevel));
        } else if (Features_isFeature(features, this->touchFeatureFactory->SHOW_SCREEN_BUTTONS)) {
            AllBinaryGameCanvas_setTouchPaintableP(this, AllBinaryGameCanvas_getTouchButtonsPaintable(this));
        } else if (Features_isFeature(features, this->touchFeatureFactory->HIDE_SCREEN_BUTTONS)) {
            AllBinaryGameCanvas_setTouchPaintableP(this, NullPaintable_getInstance());
        } else {
            AllBinaryGameCanvas_setTouchPaintableP(this, NullPaintable_getInstance());
        }
}


AllBinaryGameLayerManager* AllBinaryGameCanvas_getLayerManager(AllBinaryGameCanvas* this) {
        return this->gameLayerManager;
}


void AllBinaryGameCanvas_setLayerManager(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* layerManager) {
        this->gameLayerManager = layerManager;
}


// synchronized
bool AllBinaryGameCanvas_isGameOver(AllBinaryGameCanvas* this) {
        return this->gameOver;
}


// synchronized
void AllBinaryGameCanvas_setGameOver(AllBinaryGameCanvas* this, bool gameOver) {
        this->gameOver = gameOver;
}


// throws Exception
void AllBinaryGameCanvas_processGameOver(AllBinaryGameCanvas* this) {
        PreLogUtil_put(this->commonStrings->START, this, this->gameStrings->SET_GAME_OVER);
        AllBinaryGameCanvas_setGameOver(this, true);
        AllBinaryGameCanvas_removePauseCommand(this);
        AllBinaryGameCanvas_setGameState(this, this->gameStateFactory->SHOW_END_RESULT_GAME_STATE);
        AllBinaryGameCanvas_setEndGamePaintable(this, AllBinaryGameCanvas_getEndGameStatePaintable(this));
}


bool AllBinaryGameCanvas_isHighScoreSubmitted(AllBinaryGameCanvas* this) {
        return this->highScoreSubmitted;
}


// throws Exception
void AllBinaryGameCanvas_setHighScoreSubmitted(AllBinaryGameCanvas* this, bool highScoreSubmitted) {
        this->highScoreSubmitted = highScoreSubmitted;
        if (highScoreSubmitted) {
            HighScoresHelperBaseInterface_setSelectedHighScores(this->highScoresHelper, NullHighScoresSingletonFactory_getInstance());
        }
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "isHighScoreSubmitted: "), appendboolean, highScoreSubmitted), toString), this, "setHighScoreSubmitted");
}


GameState* AllBinaryGameCanvas_getGameState(AllBinaryGameCanvas* this) {
        return this->gameState;
}


// throws Exception
void AllBinaryGameCanvas_setGameState(AllBinaryGameCanvas* this, GameState* gameState) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameStrings->GAME_STATE), append, JAVA_CALL(this->stringUtil, toString, gameState)), toString), this, this->gameStrings->SET_GAME_STATE);
        this->gameState = gameState;
        TimeDelayHelper_setStartTimeTNT(this->gameStateTimeHelper);
        AllBinaryGameCanvas_updateEndGameProcessor(this);
        AllBinaryGameCanvas_updateGameKeyEventProcessor(this);
        DemoGameBehavior_setGameState(this->gameBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_updateGameState(AllBinaryGameCanvas* this) {
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdState_processAdState(gameAdState, this->gameState, JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getGameType));
        if (this->gameState != this->gameStateFactory->PLAYING_GAME_STATE) {
            GameAdState_processPageAdState(gameAdState);
        }
}


static void AllBinaryGameCanvas_updateGameKeyEventProcessor(AllBinaryGameCanvas* this) {
        if (AllBinaryGameCanvas_getGameState(this) != this->gameStateFactory->PLAYING_GAME_STATE || this->isCheating) {
        } else {
        }
}


void AllBinaryGameCanvas_removeAllGameKeyInputListenersOnBuild(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_removeAllGameKeyInputListeners(this);
}


void AllBinaryGameCanvas_removeAllGameKeyInputListeners(AllBinaryGameCanvas* this) {
        DemoGameBehavior_removeAllGameKeyInputListeners(this->gameBehavior, this);
}


void AllBinaryGameCanvas_removeAllGameKeyInputListeners2(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Remove PlayerInput Listeners", this, "removeAllGameKeyInputListeners");
        for (int32_t index = BasicArrayList_size(this->localPlayerGameInputList) - 1; index >= 0; index--) {
            PlayerGameInput* playerGameInput = ((PlayerGameInput*) BasicArrayList_get(this->localPlayerGameInputList, index));
            AllBinaryGameCanvas_removeKeyInputListener(this, playerGameInput);
            PlayerGameInput_removeNonAIInputGameKeyEvents(playerGameInput);
        }
}


void AllBinaryGameCanvas_removeKeyInputListener(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput) {
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, playerGameInput);
}


// throws Exception
void AllBinaryGameCanvas_updateEndGameProcessor(AllBinaryGameCanvas* this) {
        DemoGameBehavior_updateEndGameProcessor(this->gameBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_updateEndGameProcessor2(AllBinaryGameCanvas* this) {
        if (AllBinaryGameCanvas_getGameState(this) == this->gameStateFactory->SHOW_END_RESULT_GAME_STATE || AllBinaryGameCanvas_getGameState(this) == this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE) {
            AllBinaryGameCanvas_setEndGameProcessor(this, this->realEndGameProcessor);
        } else {
            AllBinaryGameCanvas_setEndGameProcessor(this, Processor_getInstance());
        }
}


// throws Exception
void AllBinaryGameCanvas_buildGameInit(AllBinaryGameCanvas* this, bool isPortion) {
}


// throws Exception
void AllBinaryGameCanvas_cleanupGame(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CLEANUP);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_addNormalPortion(progressCanvas, 10, "Cleaning Up");
        PlayerQueue_clear(this->primaryPlayerQueue);
        PlayerQueue_clear(this->secondaryPlayerQueue);
        GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory_getInstance());
}


// throws Exception
void AllBinaryGameCanvas_loadResourceLoadingLevel(AllBinaryGameCanvas* this, ResourceLoadingLevel* resourceLoadingLevel) {
        GameInitializedEvent* gameInitializedEvent = GameInitializationUtil_getInstance()->EVENT;
        GameInitializedEvent_setResourceLoadingLevel(gameInitializedEvent, resourceLoadingLevel);
        GameInitializedEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), gameInitializedEvent);
}


// throws Exception
void AllBinaryGameCanvas_loadResources(AllBinaryGameCanvas* this, int32_t level) {
        GameInitializedEvent* gameInitializedEvent = GameInitializationUtil_getInstance()->EVENT;
        GameInitializedEvent_setLevel(gameInitializedEvent, level);
        GameInitializedEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), gameInitializedEvent);
}


// throws Exception
void AllBinaryGameCanvas_updateColor(AllBinaryGameCanvas* this) {
}


// throws Exception
void AllBinaryGameCanvas_buildGame(AllBinaryGameCanvas* this, int32_t portion) {
        ScreenCapture_endRecording(this->screenCapture);
        ScreenCapture_startRecording(this->screenCapture);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Features* features = Features_getInstance();
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Generic Build");
        AllBinaryGameCanvas_removeAllGameKeyInputListenersOnBuild(this);
        AllBinaryGameCanvas_updateTouch(this);
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "High Scores");
        HighScoresFactoryInterface_fetchHighScores(this->highScoresFactoryInterface, AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), this->highScoresHelper);
        AllBinaryGameCanvas_setHighScoresPaintable(this, NullPaintable_getInstance());
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Finishing.");
        JAVA_CALL(AllBinaryGameCanvas_getEndGameInfoP(this), update, JAVA_CALL(AllBinaryGameCanvas_getLayerManager(this), getGameInfo), this);
        this->isSingleKeyRepeatableProcessing = Features_isFeature(features, InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
        AllBinaryGameCanvas_setGameOver(this, false);
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Finishing..");
        AllBinaryGameCanvas_updateColor(this);
        JAVA_CALL(AllBinaryGameCanvas_getStartIntermissionPaintable(this), update);
        if (!AllBinaryGameCanvas_isRunningInAnotherThread(this)) {
            return;
        }
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Finishing...");
        if (AllBinaryGameCanvas_isMainCanvas(this) || !AllBinaryGameCanvas_isInitialized(this)) {
            if (Features_isFeature(features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
                if (AllBinaryGameCanvas_getCustomCommandListener(this) != nullptr) {
                    ProgressCanvas_end(progressCanvas);
                }
            } else {
                ProgressCanvas_end(progressCanvas);
            }
            AllBinaryGameCanvas_setInitialized(this, true);
        }
        if (AllBinaryGameCanvas_getCustomCommandListener(this) == NullCommandListener_NULL_COMMAND_LISTENER) {
            JAVA_CALL(this->logUtil, putF, "Show Game Paintable in DemoCanvas Thread", this, this->BUILD_GAME);
            DemoPaintableInterface_showGamePaintable(this->gameCanvasStartListener);
        } else {
            JAVA_CALL(this->logUtil, putF, "No GameCanvasStartListener", this, this->BUILD_GAME);
        }
        ColorFillBasePaintable_setBasicColorP(this->colorFillPaintable, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager));
        DemoGameBehavior_buildGame(this->gameBehavior, this);
}


void AllBinaryGameCanvas_buildGame2(AllBinaryGameCanvas* this) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->ENABLE_PLAYER_GAME_INPUTS), appendint, BasicArrayList_size(this->localPlayerGameInputList)), toString), this, this->BUILD_GAME);
        PlayerGameInput* playerGameInput = nullptr;
        for (int32_t index = BasicArrayList_size(this->localPlayerGameInputList) - 1; index >= 0; index--) {
            playerGameInput = ((PlayerGameInput*) BasicArrayList_get(this->localPlayerGameInputList, index));
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->ENABLE_PLAYER_GAME_INPUT), append, PlayerGameInput_toString(playerGameInput)), toString), this, this->BUILD_GAME);
            PlayerGameInput_removeNonAIInputGameKeyEvents(playerGameInput);
            AllBinaryGameCanvas_addKeyInputListener(this, playerGameInput);
        }
}


void AllBinaryGameCanvas_addKeyInputListener(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput) {
        GameKeyEventHandler_addListenerForPlayer(GameKeyEventHandler_getInstance(), playerGameInput, PlayerGameInput_getPlayerInputId(playerGameInput));
}


void AllBinaryGameCanvas_setGameCanvasStartListener(AllBinaryGameCanvas* this, DemoPaintableInterface* gameCanvasStartListener) {
        this->gameCanvasStartListener = gameCanvasStartListener;
}


// throws Exception
void AllBinaryGameCanvas_loadState(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->LOAD);
        ABHashtable* hashtable = AllBinaryGameCanvas_getLoadStateHashtable(this);
        if (hashtable != nullptr && ABHashtable_size(hashtable) > 0) {
            const char* levelAsString = ((const char*) ABHashtable_get(hashtable, ((Any*) GameInfo_LEVEL_NAME)));
            int32_t level = JAVA_CALL(java_string_of(levelAsString), intValue);
            GameInfo* gameInfo = AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager);
            GameInfo_setCurrentLevel(gameInfo, level);
        }
}


// throws Exception
ABHashtable* AllBinaryGameCanvas_getLoadStateHashtable(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonLabels->START_LABEL), append, JAVA_CALL(this->stringUtil, toString, this->hashtable)), toString), this, "getLoadStateHashtable");
        return this->hashtable;
}


void AllBinaryGameCanvas_setLoadStateHashtable(AllBinaryGameCanvas* this, ABHashtable* hashtable) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonLabels->START_LABEL), append, JAVA_CALL(this->stringUtil, toString, hashtable)), toString), this, "setLoadStateHashtable");
        this->hashtable = hashtable;
}


ABHashtable* AllBinaryGameCanvas_getCurrentStateHashtable(AllBinaryGameCanvas* this) {
        ABHashtable* hashtable = JAVA_CALL(this->stdUtil, createHashtable);
        int32_t level = JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getCurrentLevel);
        ABHashtable_put(hashtable, JAVA_CALL(GameInfo_LEVEL_NAME, toString), java_string_of(level));
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "End: "), append, JAVA_CALL(this->stringUtil, toString, hashtable)), toString), this, "getCurrentStateHashtable");
        return hashtable;
}


void AllBinaryGameCanvas_paintGameOver(AllBinaryGameCanvas* this, Graphics* graphics) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}


void AllBinaryGameCanvas_draw(AllBinaryGameCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        Paintable_paint(this->gameSpecificPaintable, graphics);
}


void AllBinaryGameCanvas_clear(AllBinaryGameCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
}


void AllBinaryGameCanvas_paint(AllBinaryGameCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BaseGameStatistics_nextRefresh(this->baseGameStatistics);
        AllBinaryGameCanvas_draw(this, graphics);
        Paintable_paint(this->menuPaintable, graphics);
        PaintableInterface_paint(this->progressPaintable, graphics);
}


void AllBinaryGameCanvas_paintThreed(AllBinaryGameCanvas* this, Graphics* graphics) {
}


// throws Exception
void AllBinaryGameCanvas_processEndLevelIntermissionGameState(AllBinaryGameCanvas* this) {
}


void AllBinaryGameCanvas_nonBotPaint(AllBinaryGameCanvas* this, Graphics* graphics) {
        Paintable_paint(this->endGamePaintable, graphics);
        Paintable_paint(this->intermissionPaintable, graphics);
        AllBinaryGameCanvas_paintIntermission(this, graphics);
        Paintable_paint(this->touchPaintable, graphics);
}


void AllBinaryGameCanvas_paintIntermission(AllBinaryGameCanvas* this, Graphics* graphics) {
}


void AllBinaryGameCanvas_keyPressed(AllBinaryGameCanvas* this, int32_t keyCode) {
        AllBinaryGameCanvas_keyPressedByDevice(this, keyCode, 0);
}


void AllBinaryGameCanvas_keyReleased(AllBinaryGameCanvas* this, int32_t keyCode) {
        AllBinaryGameCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void AllBinaryGameCanvas_keyRepeated(AllBinaryGameCanvas* this, int32_t keyCode) {
        AllBinaryGameCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void AllBinaryGameCanvas_keyPressedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId) {
        InputProcessor_keyPressedByDevice(this->inputProcessor, keyCode, deviceId);
}


void AllBinaryGameCanvas_keyRepeatedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            InputProcessor_keyPressedByDevice(this->inputProcessor, keyCode, deviceId);
        }
}


void AllBinaryGameCanvas_keyReleasedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId) {
        InputProcessor_keyReleasedByDevice(this->inputProcessor, this, keyCode, deviceId);
}


// throws Exception
void AllBinaryGameCanvas_handleRawKey(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated) {
}


int32_t AllBinaryGameCanvas_endProgress(AllBinaryGameCanvas* this, bool isProgress) {
        int32_t portion = 30;
        if (isProgress && AllBinaryGameCanvas_isMainCanvas(this)) {
            MyCommandsFactory* myCommandsFactory = MyCommandsFactory_getInstance();
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_start(progressCanvas);
            JAVA_CALL(AllBinaryGameCanvas_getCustomCommandListener(this), commandAction, myCommandsFactory->SET_DISPLAYABLE, progressCanvas);
            portion = 4;
        }
        return portion;
}


// throws Exception
void AllBinaryGameCanvas_processPlayingGame(AllBinaryGameCanvas* this) {
        PlayerGameInput_update(this->cheatProcessor);
        JAVA_CALL(SensorGameUpdateProcessor_getInputSensor(this->sensorGameUpdateProcessor), update);
        Processor_process(this->gameInputProcessor);
        AllBinaryGameLayerManager_process(this->gameLayerManager);
        Processor_process(this->startIntermissionProcessor);
}


// throws Exception
void AllBinaryGameCanvas_threadInit(AllBinaryGameCanvas* this) {
}


// throws Exception
void AllBinaryGameCanvas_processGame(AllBinaryGameCanvas* this) {
        RunnableCanvas_process((&this->base));
        if (AllBinaryMediaManager_update()) {
            if (!PlayerQueue_process(this->primaryPlayerQueue)) {
                PlayerQueue_process(this->secondaryPlayerQueue);
            }
        }
        Processor_process(this->mainStateProcessor);
        BasicMenuInputProcessor_processInputList(this->menuInputProcessor);
        Processor_process(this->endGameProcessor);
        BaseGameStatistics_nextFrame(this->baseGameStatistics);
}


void AllBinaryGameCanvas_notifyDonePainting(AllBinaryGameCanvas* this) {
        java_monitor_enter(this);
        {
            JAVA_CALL(this->threadObjectUtil, notifyObject, this);
        }
        java_monitor_exit(this);
}


// throws Exception
void AllBinaryGameCanvas_shouldWait(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (AndroidUtil_isAndroid()) {
        } else if (Features_isFeature(features, this->openGLFeatureFactory->OPENGL_2D)) {
        } else {
            if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL)) {
                OpenGLImageSpecificFactory* openGLImageSpecificFactory = OpenGLImageSpecificFactory_getInstance();
                while (openGLImageSpecificFactory->updating) {
                    java_sleep(this->YIELD_SLEEP);
                }
            }
        }
}


void AllBinaryGameCanvas_run(AllBinaryGameCanvas* this) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Game Thread");
            AllBinaryGameCanvas_setCurrentThread(this);
            AllBinaryGameCanvas_setRunning(this, true);
            if (AllBinaryGameCanvas_getCustomCommandListener(this) == NullCommandListener_NULL_COMMAND_LISTENER) {
                java_sleep(this->YIELD_SLEEP);
            }
            AllBinaryGameCanvas_shouldWait(this);
            AllBinaryGameCanvas_threadInit(this);
            if (AllBinaryGameCanvas_getCustomCommandListener(this) == NullCommandListener_NULL_COMMAND_LISTENER) {
                java_sleep(this->YIELD_SLEEP);
            }
            AllBinaryGameCanvas_open(this);
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
            GameAdState_init(gameAdState);
            GameAdState_setGameIsReady(gameAdState, true);
            DemoGameBehavior_run(this->gameBehavior, this);
            JAVA_CALL(this->logUtil, putF, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_run2(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil_isHTML()) {
            if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD, getName), this, this->commonStrings->RUN);
            }
            if (J2MEUtil_isHTML()) {
                JAVA_CALL(this->logUtil, putF, GraphicsStrings_getInstance()->HTML, this, this->commonStrings->RUN);
            }
            CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
            CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, this->gameRunnable);
            CurrentDisplayableFactory_setDisplayable(currentDisplayableFactory, this);
            OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
        } else if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS)) {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(this->openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS, getName), this, this->commonStrings->RUN);
            OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
            while (AllBinaryGameCanvas_isRunning(this)) {
                AllBinaryGameCanvas_run3(this);
            }
            AllBinaryGameCanvas_end(this);
        } else {
            JAVA_CALL(this->logUtil, putF, "this thread", this, this->commonStrings->RUN);
            while (AllBinaryGameCanvas_isRunning(this)) {
                AllBinaryGameCanvas_run3(this);
            }
            AllBinaryGameCanvas_end(this);
        }
}


// throws Exception
void AllBinaryGameCanvas_run3(AllBinaryGameCanvas* this) {
        JAVA_CALL(this->loopTimeHelper, setStartTime, GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
        GameTickDisplayInfoSingleton_update(this->gameTickDisplayInfoSingleton);
        AllBinaryGameCanvas_processGame(this);
        AllBinaryGameCanvas_processLoopSleep(this);
}


void AllBinaryGameCanvas_setRunning(AllBinaryGameCanvas* this, bool running) {
        RunnableCanvas_setRunning((&this->base), running);
        JAVA_TRY {
            Features* features = Features_getInstance();
            if (running) {
            } else {
                if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL) || SWTUtil_isSWT) {
                    if (JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), getGameType) != this->gameTypeFactory->BOT) {
                        CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                        CurrentDisplayableFactory_clearRunnable(currentDisplayableFactory);
                    }
                    AllBinaryGameCanvas_end(this);
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->SET_RUNNING, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_end(AllBinaryGameCanvas* this) {
        ScreenCapture_endRecording(this->screenCapture);
        BaseGameStatistics_add(this->baseGameStatistics, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), BaseGameStatistics_toString(this->baseGameStatistics)), append, CommonSeps_getInstance()->NEW_LINE), toString));
        BaseGameStatistics_init(this->baseGameStatistics);
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, this->cheatProcessor);
        AllBinaryGameCanvas_close(this);
        AllBinaryGameCanvas_removeAllGameKeyInputListeners(this);
        AllBinaryGameCanvas_endGameThread(this);
}


// throws Exception
void AllBinaryGameCanvas_endGameThread(AllBinaryGameCanvas* this) {
        DisplayChangeEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
        GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory_getInstance());
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdState_notPlayingAdState(gameAdState);
}


HighScore* AllBinaryGameCanvas_createHighScore(AllBinaryGameCanvas* this, int64_t score) {
        GameInfo* gameInfo = AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager);
        return HighScore_new(0, "NONE", GameInfo_new(GameInfo_getGameType(gameInfo), GameInfo_getGameMode(gameInfo), PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 0, 0), score);
}


// throws Exception
void AllBinaryGameCanvas_setHighScore(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation, const char* name, int64_t score, bool autoSubmit, bool isLast) {
        DemoGameBehavior_setHighScore(this->gameBehavior, abeClientInformation, this, name, score, autoSubmit, isLast);
}


// throws Exception
void AllBinaryGameCanvas_setHighScore2(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation, const char* name, int64_t score, bool autoSubmit, bool isLast) {
        HighScore* highScore = AllBinaryGameCanvas_createHighScore(this, score);
        HighScoreTextBox* textBox = HighScoreTextBox_new(this->highScoresFactoryInterface, this->highScoresHelper, abeClientInformation, AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), AllBinaryGameCanvas_getCustomCommandListener(this), name, highScore, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        if (isLast) {
            JAVA_CALL(AllBinaryGameCanvas_getCustomCommandListener(this), commandAction, GameCommandsFactory_getInstance()->SET_MENU_DISPLAYABLE, textBox);
        }
        if (autoSubmit) {
            SecondaryThreadPool_runTask(SecondaryThreadPool_getInstance(), SaveHighScoreRunnable_new(isLast, textBox));
        }
}


TimeDelayHelper* AllBinaryGameCanvas_getGameStateTimeHelper(AllBinaryGameCanvas* this) {
        return this->gameStateTimeHelper;
}


void AllBinaryGameCanvas_setInitialized(AllBinaryGameCanvas* this, bool initialized) {
        this->initialized = initialized;
}


bool AllBinaryGameCanvas_isInitialized(AllBinaryGameCanvas* this) {
        return this->initialized;
}


int32_t AllBinaryGameCanvas_getSourceId(AllBinaryGameCanvas* this) {
        return AllBinaryGameCanvas_id;
}


void AllBinaryGameCanvas_setProgressPaintable(AllBinaryGameCanvas* this, PaintableInterface* paintable) {
        this->progressPaintable = paintable;
}


IntermissionInterface* AllBinaryGameCanvas_getStartIntermissionInterface(AllBinaryGameCanvas* this) {
        return this->startIntermissionInterface;
}


IntermissionInterface* AllBinaryGameCanvas_getEndLevelIntermissionInterface(AllBinaryGameCanvas* this) {
        return this->endLevelIntermissionInterface;
}


void AllBinaryGameCanvas_setTouchPaintableP(AllBinaryGameCanvas* this, Paintable* paintable) {
        this->touchPaintable = paintable;
}


Paintable* AllBinaryGameCanvas_getTouchPaintableP(AllBinaryGameCanvas* this) {
        return this->touchPaintable;
}


void AllBinaryGameCanvas_setEndGamePaintable(AllBinaryGameCanvas* this, Paintable* endGamePaintable) {
        this->endGamePaintable = endGamePaintable;
}


Paintable* AllBinaryGameCanvas_getEndGamePaintable(AllBinaryGameCanvas* this) {
        return this->endGamePaintable;
}


void AllBinaryGameCanvas_setIntermissionPaintable(AllBinaryGameCanvas* this, Paintable* intermissionPaintable) {
        this->intermissionPaintable = intermissionPaintable;
}


Paintable* AllBinaryGameCanvas_getIntermissionPaintable(AllBinaryGameCanvas* this) {
        return this->intermissionPaintable;
}


EndGameInfo* AllBinaryGameCanvas_getEndGameInfoP(AllBinaryGameCanvas* this) {
        return this->endGameInfo;
}


void AllBinaryGameCanvas_setHighScoresPaintable(AllBinaryGameCanvas* this, Paintable* highScoresPaintable) {
        this->highScoresPaintable = highScoresPaintable;
}


Paintable* AllBinaryGameCanvas_getHighScoresPaintable(AllBinaryGameCanvas* this) {
        return this->highScoresPaintable;
}


HighScoresPaintable* AllBinaryGameCanvas_getRealHighScoresPaintable(AllBinaryGameCanvas* this) {
        return this->realHighScoresPaintable;
}


void AllBinaryGameCanvas_clearPlayerGameInputList(AllBinaryGameCanvas* this) {
        PlayerGameInput* playerGameInput = nullptr;
        for (int32_t index = BasicArrayList_size(this->localPlayerGameInputList) - 1; index >= 0; index--) {
            playerGameInput = ((PlayerGameInput*) BasicArrayList_get(this->localPlayerGameInputList, index));
            GameKeyEventHandler_removeListener(this->gameKeyEventHandler, playerGameInput);
        }
        BasicArrayList_clear(this->localPlayerGameInputList);
}


void AllBinaryGameCanvas_addPlayerGameInput(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput) {
        BasicArrayList_add(this->localPlayerGameInputList, playerGameInput);
}


void AllBinaryGameCanvas_setMenuInputProcessor(AllBinaryGameCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* AllBinaryGameCanvas_getMenuInputProcessor(AllBinaryGameCanvas* this) {
        return this->menuInputProcessor;
}


ScrollSelectionForm* AllBinaryGameCanvas_getMenuForm(AllBinaryGameCanvas* this) {
        return this->menuForm;
}


void AllBinaryGameCanvas_setMenuForm(AllBinaryGameCanvas* this, ScrollSelectionForm* menuForm) {
        this->menuForm = menuForm;
}


int32_t AllBinaryGameCanvas_getStartLevel(AllBinaryGameCanvas* this) {
        return this->startLevel;
}


void AllBinaryGameCanvas_setStartLevel(AllBinaryGameCanvas* this, int32_t startLevel) {
        this->startLevel = startLevel;
}


void AllBinaryGameCanvas_setTouchButtonsPaintable(AllBinaryGameCanvas* this, Paintable* touchButtonsPaintable) {
        this->touchButtonsPaintable = touchButtonsPaintable;
}


Paintable* AllBinaryGameCanvas_getTouchButtonsPaintable(AllBinaryGameCanvas* this) {
        return this->touchButtonsPaintable;
}


void AllBinaryGameCanvas_setGameInputProcessor(AllBinaryGameCanvas* this, Processor* gameInputProcessor) {
        this->gameInputProcessor = gameInputProcessor;
}


Processor* AllBinaryGameCanvas_getGameInputProcessor(AllBinaryGameCanvas* this) {
        return this->gameInputProcessor;
}


void AllBinaryGameCanvas_setEndGameProcessor(AllBinaryGameCanvas* this, Processor* endGameProcessor) {
        this->endGameProcessor = endGameProcessor;
}


Processor* AllBinaryGameCanvas_getEndGameProcessor(AllBinaryGameCanvas* this) {
        return this->endGameProcessor;
}


void AllBinaryGameCanvas_setEndGameStatePaintable(AllBinaryGameCanvas* this, Paintable* endGameStatePaintable) {
        this->endGameStatePaintable = endGameStatePaintable;
}


Paintable* AllBinaryGameCanvas_getEndGameStatePaintable(AllBinaryGameCanvas* this) {
        return this->endGameStatePaintable;
}


void AllBinaryGameCanvas_setNonBotPaintableP(AllBinaryGameCanvas* this, Paintable* nonBotPaintable) {
        this->nonBotPaintable = nonBotPaintable;
}


Paintable* AllBinaryGameCanvas_getNonBotPaintableP(AllBinaryGameCanvas* this) {
        return this->nonBotPaintable;
}


void AllBinaryGameCanvas_setStartIntermissionPaintable(AllBinaryGameCanvas* this, InitUpdatePaintable* startIntermissionPaintable) {
        this->startIntermissionPaintable = startIntermissionPaintable;
}


InitUpdatePaintable* AllBinaryGameCanvas_getStartIntermissionPaintable(AllBinaryGameCanvas* this) {
        return this->startIntermissionPaintable;
}


void AllBinaryGameCanvas_setMainStateProcessor(AllBinaryGameCanvas* this, Processor* mainStateProcessor) {
        this->mainStateProcessor = mainStateProcessor;
}


Processor* AllBinaryGameCanvas_getMainStateProcessor(AllBinaryGameCanvas* this) {
        return this->mainStateProcessor;
}


void AllBinaryGameCanvas_setProcessGameProcessor(AllBinaryGameCanvas* this, Processor* processGameProcessor) {
        this->processGameProcessor = processGameProcessor;
}


Processor* AllBinaryGameCanvas_getProcessGameProcessor(AllBinaryGameCanvas* this) {
        return this->processGameProcessor;
}


void AllBinaryGameCanvas_setOpenMenuPaintable(AllBinaryGameCanvas* this, Paintable* openMenuPaintable) {
        this->openMenuPaintable = openMenuPaintable;
}


Paintable* AllBinaryGameCanvas_getOpenMenuPaintable(AllBinaryGameCanvas* this) {
        return this->openMenuPaintable;
}


void AllBinaryGameCanvas_setPopupMenuInputProcessor(AllBinaryGameCanvas* this, BasicMenuInputProcessor* popupMenuInputProcessor) {
        this->popupMenuInputProcessor = popupMenuInputProcessor;
}


BasicMenuInputProcessor* AllBinaryGameCanvas_getPopupMenuInputProcessor(AllBinaryGameCanvas* this) {
        return this->popupMenuInputProcessor;
}


SensorGameUpdateProcessor* AllBinaryGameCanvas_getSensorGameUpdateProcessor(AllBinaryGameCanvas* this) {
        return this->sensorGameUpdateProcessor;
}


InputProcessor* AllBinaryGameCanvas_getRawGameInputProcessor(AllBinaryGameCanvas* this) {
        return this->rawGameInputProcessor;
}


InputProcessor* AllBinaryGameCanvas_getRawInputProcessor(AllBinaryGameCanvas* this) {
        return this->rawInputProcessor;
}


void AllBinaryGameCanvas_setInputProcessor(AllBinaryGameCanvas* this, InputProcessor* inputProcessor) {
        this->inputProcessor = inputProcessor;
}


InputProcessor* AllBinaryGameCanvas_getInputProcessor(AllBinaryGameCanvas* this) {
        return this->inputProcessor;
}


void AllBinaryGameCanvas_setMenuPaintable(AllBinaryGameCanvas* this, Paintable* menuPaintable) {
        this->menuPaintable = menuPaintable;
}


Paintable* AllBinaryGameCanvas_getMenuPaintable(AllBinaryGameCanvas* this) {
        return this->menuPaintable;
}


static void AllBinaryGameCanvas_setFormPaintable(AllBinaryGameCanvas* this, Paintable* formPaintable) {
        this->formPaintable = formPaintable;
}


Paintable* AllBinaryGameCanvas_getFormPaintable(AllBinaryGameCanvas* this) {
        return this->formPaintable;
}


void AllBinaryGameCanvas_setGameSpecificPaintableP(AllBinaryGameCanvas* this, Paintable* gameSpecificPaintable) {
        this->gameSpecificPaintable = gameSpecificPaintable;
}


Paintable* AllBinaryGameCanvas_getGameSpecificPaintableP(AllBinaryGameCanvas* this) {
        return this->gameSpecificPaintable;
}


bool AllBinaryGameCanvas_isSingleThread(AllBinaryGameCanvas* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) || SWTUtil_isSWT;
}


bool AllBinaryGameCanvas_isRunningInAnotherThread(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
            return true;
        } else {
            return AllBinaryGameCanvas_isRunning(this);
        }
}


int32_t AllBinaryGameCanvas_getType(AllBinaryGameCanvas* this) {
        return AllBinaryGameCanvas_TYPE;
}


const char* AllBinaryGameCanvas_getTitle(AllBinaryGameCanvas* this) {
        return RunnableCanvas_getTitle((&this->base));
}


bool AllBinaryGameCanvas_isPaused(AllBinaryGameCanvas* this) {
        return RunnableCanvas_isPaused((&this->base));
}

