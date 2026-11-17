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
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"
#include "org/allbinary/canvas/CustomGameMenuUtil.h"
#include "org/allbinary/canvas/FullScreenUtil.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/init/GameInitializationUtil.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/score/HighScoreCommands.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresHelper.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/form/FormType.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/graphics/paint/StatePaintable.h"
#include "org/allbinary/graphics/paint/StatePaintableFactory.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/EarlySoundsFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"

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

static constexpr int32_t StartCanvas_id = 0;
static const char* StartCanvas_BOT_GAME_STATS = "Bot Game Statistics: ";

StartCanvas* StartCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

void StartCanvas_init(StartCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);
void StartCanvas_onEvent(StartCanvas* this, AllBinaryEventObject* eventObject);
void StartCanvas_onDisplayChangeEvent(StartCanvas* this, DisplayChangeEvent* displayChangeEvent);
Any** StartCanvas_getCustomCommands(StartCanvas* this);
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
static void StartCanvas_addGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated);
static void StartCanvas_removeGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated);
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

static void StartCanvas_initFields(StartCanvas* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->features = Features_getInstance();
    this->openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
    this->myCommandsFactory = MyCommandsFactory_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->formUtil = FormUtil_getInstance();
    this->basicGameDemoPaintable = StatePaintableFactory_getInstance();
    this->specialAnimationInterface = SpecialAnimation_getInstance();
    this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
    this->fullScreenUtil = FullScreenUtil_getInstance();
    this->highScoresHelper = HighScoresHelper_new();
    this->realHighScoresPaintable = HighScoresPaintable_new();
    this->highScoresPaintable = NullPaintable_getInstance();
    this->state = 0;
    this->timeDelayHelper = TimeDelayHelper_new(6000);
    
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuForm = ScrollSelectionForm_getNullScrollSelectionForm();
    
    this->initialized = false;
    this->defaultPaintableInterface = NullPaintable_getInstance();
    this->paintableInterface = NullPaintable_getInstance();
    
    this->tempWait = NullWaitGameRunnable_getInstance()->WAIT;
    this->inputToGameKeyMapping = JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping);
    this->gameRunnable = NullWaitGameRunnable_getInstance();
    this->progressPaintable = ProgressCanvasFactory_getLazyInstance();
    this->isSingleKeyRepeatableProcessing = Features_isFeature(this->features, InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->SET_STATE = "setState";
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
}


void StartCanvas_init(StartCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
        RunnableCanvas_init(&this->base, commandListener, CurrentDisplayableFactory_getInstance()->DEFAULT_CHILD_NAME_LIST, true);
        StartCanvas_initFields(this);
        StartCanvas_setWait(this, NullWaitGameRunnable_getInstance()->WAIT);
        this->gameInitializationInterfaceFactoryInterface = gameInitializationInterfaceFactoryInterface;
        GameInitializationUtil_initDemo(GameInitializationUtil_getInstance(), abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
        ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), false);
        this->overlayPaintable = overlayPaintable;
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        StartCanvas_setDefaultPaintableInterface(this, paintable);
        StartCanvas_setPaintableInterface(this, StartCanvas_getDefaultPaintableInterface(this));
        if (isContinue) {
            StartCanvas_addCommand(this, GameCommandsFactory_getInstance()->CONTINUE_COMMAND);
        }
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            StartCanvas_mediaInit(this);
        }
        DisplayChangeEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}

StartCanvas* StartCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
    StartCanvas* this = calloc(1, sizeof(StartCanvas));
    StartCanvas_init(this, abeClientInformation, commandListener, highScoresFactoryInterface, paintable, overlayPaintable, gameInitializationInterfaceFactoryInterface, isContinue);
    return this;
}


void StartCanvas_onEvent(StartCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void StartCanvas_onDisplayChangeEvent(StartCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            ScrollSelectionForm* scrollSelectionForm = StartCanvas_getMenuForm(this);
            if (scrollSelectionForm != nullptr) {
                FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
                Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
                ScrollSelectionForm_init(scrollSelectionForm, rectangle, formType);
            }
            InitUpdatePaintable_init(this->overlayPaintable);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
}


Any** StartCanvas_getCustomCommands(StartCanvas* this) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (J2MEUtil_isHTML()) {
            Any** commandArray = ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ gameCommandsFactory->START_COMMAND, HighScoreCommands_getInstance()->DISPLAY, GameInputMappingCanvas_DISPLAY, gameCommandsFactory->DISPLAY_ABOUT }) / sizeof(Any*), (Any*[]){ gameCommandsFactory->START_COMMAND, HighScoreCommands_getInstance()->DISPLAY, GameInputMappingCanvas_DISPLAY, gameCommandsFactory->DISPLAY_ABOUT }));
            return commandArray;
        } else {
            BasicArrayList* commandList = BasicArrayListD_new();
            BasicArrayList_add(commandList, gameCommandsFactory->START_COMMAND);
            InApplicationPurchaseFactory* inApplicationPurchaseFactory = InApplicationPurchaseFactory_getInstance();
            if (InApplicationPurchaseFactory_isEnabled(inApplicationPurchaseFactory)) {
                BasicArrayList* list = LockableFeatureFactory_getList(LockableFeatureFactory_getInstance());
                if (BasicArrayList_size(list) > 0 && !InApplicationPurchaseFactory_isPurchased(inApplicationPurchaseFactory, ((LockableFeature*) BasicArrayList_get(list, 0)))) {
                    BasicArrayList_add(commandList, gameCommandsFactory->BUY_COMMAND);
                }
            }
            BasicArrayList_add(commandList, HighScoreCommands_getInstance()->DISPLAY);
            JAVA_TRY {
                bool isOverScan = JAVA_CALL(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()), isOverScan);
                if (SWTUtil_isSWT) {
                    BasicArrayList_add(commandList, GameInputMappingCanvas_DISPLAY);
                } else if (!isOverScan) {
                    BasicArrayList_add(commandList, gameCommandsFactory->DISPLAY_OPTIONS);
                    BasicArrayList_add(commandList, gameCommandsFactory->DISPLAY_LOAD_FORM);
                    BasicArrayList_add(commandList, GameInputMappingCanvas_DISPLAY);
                }
            } JAVA_CATCH(Exception, e) {
            } JAVA_END_TRY;
            BasicArrayList_add(commandList, gameCommandsFactory->DISPLAY_ABOUT);
            Any** commandArray = BasicArrayList_toArray(commandList);
            return commandArray;
        }
}


void StartCanvas_initCommands(StartCanvas* this, CommandListener* cmdListener) {
        StartCanvas_removeAllCommands(this);
        Any** commandArray = StartCanvas_getCustomCommands(this);
        int32_t size = java_array_length(commandArray);
        for (int32_t index = 0; index < size; index++) {
            StartCanvas_addCommand(this, ((Command*) commandArray[index]));
        }
        CustomGameMenuUtil_add(this);
        StartCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void StartCanvas_initPostPaint(StartCanvas* this) {
}


// throws Exception
void StartCanvas_mediaInit(StartCanvas* this) {
        AllBinaryMediaManager_init(EarlySoundsFactory_getInstance());
}


void StartCanvas_itemStateChanged(StartCanvas* this, Item* item) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}


// throws Exception
void StartCanvas_initMenu(StartCanvas* this) {
        StartCanvas_close(this);
        StartCanvas_open(this);
}


void StartCanvas_open(StartCanvas* this) {
        BasicMotionGesturesHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
}


void StartCanvas_close(StartCanvas* this) {
        BasicMotionGesturesHandler_removeListener(BasicMotionGesturesHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
}


int32_t StartCanvas_getSourceId(StartCanvas* this) {
        return StartCanvas_id;
}


void StartCanvas_keyPressed(StartCanvas* this, int32_t keyCode) {
        StartCanvas_keyPressedByDevice(this, keyCode, 0);
}


void StartCanvas_keyReleased(StartCanvas* this, int32_t keyCode) {
        StartCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void StartCanvas_keyRepeated(StartCanvas* this, int32_t keyCode) {
        StartCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void StartCanvas_keyPressedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId) {
        StartCanvas_addGameKeyEvent(this, keyCode, false);
}


void StartCanvas_keyReleasedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId) {
        StartCanvas_removeGameKeyEvent(this, keyCode, false);
}


void StartCanvas_keyRepeatedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            StartCanvas_addGameKeyEvent(this, keyCode, true);
        }
}


static void StartCanvas_addGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                DownGameKeyEventHandler_fireEvent(DownGameKeyEventHandler_getInstance(), gameKeyEvent);
            } else {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->ADD_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


static void StartCanvas_removeGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                UpGameKeyEventHandler_fireEvent(UpGameKeyEventHandler_getInstance(), gameKeyEvent);
            } else {
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->REMOVE_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, "Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, e);
        } JAVA_END_TRY;
}


// synchronized
void StartCanvas_pause(StartCanvas* this) {
        StartCanvas_close(this);
        StartCanvas_setPaused(this, true);
}


// synchronized
void StartCanvas_unPause(StartCanvas* this) {
        StartCanvas_open(this);
        StartCanvas_setPaused(this, false);
}


bool StartCanvas_isPausable(StartCanvas* this) {
        if (CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory_getInstance()) == NullWaitGameRunnable_getInstance()) {
            return true;
        } else {
            return false;
        }
}


bool StartCanvas_isGameOver(StartCanvas* this) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->NOT_IMPLEMENTED), append, " since not a game"), toString), this, "isGameOver");
        return false;
}


// throws Exception
void StartCanvas_setLoadStateHashtable(StartCanvas* this, ABHashtable* hashtable) {
        JAVA_CALL(this->logUtil, putF, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
}


// throws Exception
ABHashtable* StartCanvas_getLoadStateHashtable(StartCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
        return this->stdUtil->NULL_TABLE;
}


// throws Exception
ABHashtable* StartCanvas_getCurrentStateHashtable(StartCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Trying to save the AI lol", this, "getCurrentStateHashtable");
        return this->stdUtil->NULL_TABLE;
}


void StartCanvas_setHighScoreSubmitted(StartCanvas* this, bool isNotUsed) {
}


void StartCanvas_paint(StartCanvas* this, Graphics* graphics) {
        PaintableInterface_paint(this->paintableInterface, graphics);
        Animation_paintXY(this->paintedSpecialAnimationInterface, graphics, 0, 0);
        Paintable_paint(this->highScoresPaintable, graphics);
        JAVA_CALL(StartCanvas_getBasicGameDemoPaintable(this), paint, graphics);
        InitUpdatePaintable_paint(this->overlayPaintable, graphics);
        PaintableInterface_paint(this->progressPaintable, graphics);
}


void StartCanvas_paintThreed(StartCanvas* this, Graphics* graphics) {
        PaintableInterface_paintThreed(this->paintableInterface, graphics);
        Animation_paintThreedXYZ(this->paintedSpecialAnimationInterface, graphics, 0, 0, 0);
}


// synchronized
void StartCanvas_processGameOver(StartCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Not Implemented since not a game", this, "setGameOver");
}


void StartCanvas_demoStateChange(StartCanvas* this) {
        int32_t newState = this->state + 1;
        if (newState > 2) {
            newState = 0;
        } else if (newState == 2) {
            if (!HighScoresHelper_isAnyHighScores(this->highScoresHelper)) {
                newState = 0;
            } else {
                HighScores* highScores = HighScoresHelper_getNextHighScores(this->highScoresHelper);
                if (highScores == NullHighScoresSingletonFactory_getInstance()) {
                    newState = 0;
                } else {
                    JAVA_CALL(StartCanvas_getRealHighScoresPaintable(this), setHighScores, highScores);
                }
            }
        }
        StartCanvas_setState(this, newState);
        StartCanvas_updateDemoState(this);
}


void StartCanvas_updateDemoState(StartCanvas* this) {
        PreLogUtil_put(JAVA_CALL(SmallIntegerSingletonFactory_createInstance(SmallIntegerSingletonFactory_getInstance(), this->state), toString), this, this->SET_STATE);
        JAVA_CALL(StartCanvas_getBasicGameDemoPaintable(this), setState, this->state);
        if (this->state == 0) {
            this->highScoresPaintable = NullPaintable_getInstance();
            this->paintedSpecialAnimationInterface = StartCanvas_getSpecialAnimationInterface(this);
            JAVA_CALL(StartCanvas_getSpecialAnimationInterface(this), reset);
        } else if (this->state == 1) {
            this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
        } else if (this->state == 2) {
            this->highScoresPaintable = StartCanvas_getRealHighScoresPaintable(this);
        }
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdState_processPageAdState(gameAdState);
}


// throws Exception
int32_t StartCanvas_getNextRandom(StartCanvas* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
AllBinaryGameLayerManager* StartCanvas_createGameLayerManager(StartCanvas* this, int32_t randomValue) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
GameCanvasRunnableInterface* StartCanvas_createRunnable(StartCanvas* this, int32_t randomLevel) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void StartCanvas_createCanvas(StartCanvas* this) {
        this->highScoresPaintable = NullPaintable_getInstance();
        int32_t randomLevel = StartCanvas_getNextRandom(this);
}


// throws Exception
void StartCanvas_start(StartCanvas* this) {
}


void StartCanvas_preDemoProcess(StartCanvas* this) {
        InitUpdatePaintable_update(this->overlayPaintable);
}


// throws Exception
void StartCanvas_process(StartCanvas* this) {
        JAVA_CALL(StartCanvas_getMenuInputProcessor(this), processInputList);
        StartCanvas_preDemoProcess(this);
        if (this->state == 0) {
            IndexedAnimationBehavior* indexedAnimationBehavior = ((IndexedAnimationBehavior*) JAVA_CALL(StartCanvas_getSpecialAnimationInterface(this), getAnimationBehavior));
            if (indexedAnimationBehavior->loopIndex < 1) {
                TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
            }
            DemoGameMidlet* demoGameMidlet = ((DemoGameMidlet*) StartCanvas_getCustomCommandListener(this));
        }
}


// throws Exception
void StartCanvas_startDemoGame(StartCanvas* this) {
}


// throws Exception
void StartCanvas_processGame(StartCanvas* this) {
        GameRunnable_run(this->gameRunnable);
        SpecialAnimation_nextFrame(this->specialAnimationInterface);
        StartCanvas_process(this);
}


void StartCanvas_run(StartCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
        JAVA_TRY {
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread");
            StartCanvas_setCurrentThread(this);
            StartCanvas_setRunning(this, true);
            if (Features_isFeature(this->features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
                ProgressCanvas_end(progressCanvas);
            } else {
                ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread Running");
            }
            FullScreenUtil_initOnRun(this->fullScreenUtil, this, StartCanvas_getCustomCommandListener(this));
            StartCanvas_initMenu(this);
            StartCanvas_initPostPaint(this);
            StartCanvas_updateDemoState(this);
            if (Features_isDefault(this->features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
                OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
            }
            if (Features_isDefault(this->features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil_isHTML()) {
            } else {
                while (StartCanvas_isRunning(this)) {
                    JAVA_CALL(this->loopTimeHelper, setStartTimeTNT);
                    StartCanvas_processGame(this);
                    StartCanvas_processLoopSleep(this);
                }
                StartCanvas_end(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
        JAVA_CALL(this->logUtil, putF, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
}


void StartCanvas_setRunning(StartCanvas* this, bool running) {
        RunnableCanvas_setRunning((&this->base), running);
        JAVA_TRY {
            if ((Features_isDefault(this->features, this->openGLFeatureFactory->OPENGL) || J2MEUtil_isHTML()) && !running) {
                CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                CurrentDisplayableFactory_clearRunnable(currentDisplayableFactory);
                StartCanvas_end(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->SET_RUNNING, e);
        } JAVA_END_TRY;
}


// throws Exception
void StartCanvas_end(StartCanvas* this) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        BaseGameStatistics_add(this->baseGameStatistics, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), StartCanvas_BOT_GAME_STATS), append, BaseGameStatistics_toString(this->baseGameStatistics)), append, CommonSeps_getInstance()->NEW_LINE), toString));
        BaseGameStatistics_init(this->baseGameStatistics);
        if (Features_isFeature(this->features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
            ProgressCanvas_start(progressCanvas);
        }
        JAVA_CALL(this->logUtil, putF, "Demo End", this, this->commonStrings->RUN);
        StartCanvas_close(this);
        DisplayChangeEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
}


void StartCanvas_setGameState(StartCanvas* this, GameState* gameState) {
}


GameState* StartCanvas_getGameState(StartCanvas* this) {
        return this->gameStateFactory->PLAYING_GAME_STATE;
}


int32_t StartCanvas_getState(StartCanvas* this) {
        return this->state;
}


void StartCanvas_setState(StartCanvas* this, int32_t state) {
        this->state = state;
}


bool StartCanvas_isHighScoreSubmitted(StartCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Wow the AI got a high score!", this, "isHighScoreSubmitted");
        return false;
}


HighScoresPaintable* StartCanvas_getRealHighScoresPaintable(StartCanvas* this) {
        return this->realHighScoresPaintable;
}


void StartCanvas_setSpecialAnimationInterface(StartCanvas* this, SpecialAnimation* specialAnimationInterface) {
        SpecialAnimation_setFrame(specialAnimationInterface, 0);
        this->specialAnimationInterface = specialAnimationInterface;
}


SpecialAnimation* StartCanvas_getSpecialAnimationInterface(StartCanvas* this) {
        return this->specialAnimationInterface;
}


void StartCanvas_setPaintableInterface(StartCanvas* this, PaintableInterface* paintableInterface) {
        this->paintableInterface = paintableInterface;
}


PaintableInterface* StartCanvas_getPaintableInterface(StartCanvas* this) {
        return this->paintableInterface;
}


void StartCanvas_setDefaultPaintableInterface(StartCanvas* this, Paintable* defaultPaintableInterface) {
        this->defaultPaintableInterface = defaultPaintableInterface;
}


Paintable* StartCanvas_getDefaultPaintableInterface(StartCanvas* this) {
        return this->defaultPaintableInterface;
}


HighScoresFactoryInterface* StartCanvas_getHighScoresFactoryInterface(StartCanvas* this) {
        return this->highScoresFactoryInterface;
}


void StartCanvas_setMenuInputProcessor(StartCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* StartCanvas_getMenuInputProcessor(StartCanvas* this) {
        return this->menuInputProcessor;
}


ScrollSelectionForm* StartCanvas_getMenuForm(StartCanvas* this) {
        return this->menuForm;
}


void StartCanvas_setMenuForm(StartCanvas* this, ScrollSelectionForm* menuForm) {
        this->menuForm = menuForm;
}


bool StartCanvas_isInitialized(StartCanvas* this) {
        return this->initialized;
}


Paintable* StartCanvas_getOverlayPaintable(StartCanvas* this) {
        return this->overlayPaintable;
}


void StartCanvas_setBasicGameDemoPaintable(StartCanvas* this, StatePaintable* basicGameDemoPaintable) {
        this->basicGameDemoPaintable = basicGameDemoPaintable;
}


StatePaintable* StartCanvas_getBasicGameDemoPaintable(StartCanvas* this) {
        return this->basicGameDemoPaintable;
}


void StartCanvas_setTempWait(StartCanvas* this, int32_t tempWait) {
        this->tempWait = tempWait;
}


int32_t StartCanvas_getTempWait(StartCanvas* this) {
        return this->tempWait;
}


bool StartCanvas_isSingleThread(StartCanvas* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) || SWTUtil_isSWT;
}


bool StartCanvas_isRunningInAnotherThread(StartCanvas* this) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
            return true;
        } else {
            return StartCanvas_isRunning(this);
        }
}


BasicBuildGameInitializerFactory* StartCanvas_getGameInitializationInterfaceFactoryInterface(StartCanvas* this) {
        return this->gameInitializationInterfaceFactoryInterface;
}


const char* StartCanvas_getTitle(StartCanvas* this) {
        return RunnableCanvas_getTitle((&this->base));
}


bool StartCanvas_isPaused(StartCanvas* this) {
        return RunnableCanvas_isPaused((&this->base));
}


int32_t StartCanvas_getType(StartCanvas* this) {
        return RunnableCanvas_getType((&this->base));
}

