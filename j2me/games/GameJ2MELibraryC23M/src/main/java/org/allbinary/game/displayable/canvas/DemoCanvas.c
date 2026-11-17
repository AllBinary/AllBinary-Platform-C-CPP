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
#include "org/allbinary/game/GameInfo.h"
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
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/EarlySoundsFactory.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/thread/NullThread.h"
#include "org/allbinary/thread/ThreadFactoryUtil.h"
#include "org/allbinary/thread/ThreadUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"

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

static constexpr int32_t DemoCanvas_id = 0;
static const char* DemoCanvas_BOT_GAME_STATS = "Bot Game Statistics: ";
constexpr int32_t DemoCanvas_TYPE = 3;

DemoCanvas* DemoCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

void DemoCanvas_init(DemoCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);
void DemoCanvas_onEvent(DemoCanvas* this, AllBinaryEventObject* eventObject);
void DemoCanvas_onDisplayChangeEvent(DemoCanvas* this, DisplayChangeEvent* displayChangeEvent);
Any** DemoCanvas_getCustomCommands(DemoCanvas* this);
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
static void DemoCanvas_addGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated);
static void DemoCanvas_removeGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated);
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

static void DemoCanvas_initFields(DemoCanvas* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->myCommandsFactory = MyCommandsFactory_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->threadFactoryUtil = ThreadFactoryUtil_getInstance();
    this->formUtil = FormUtil_getInstance();
    this->fullscreenPaintable = FullScreenPaintableFactory_getInstance()->paintable;
    this->basicGameDemoPaintable = StatePaintableFactory_getInstance();
    this->specialAnimationInterface = SpecialAnimation_getInstance();
    this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
    this->fullScreenUtil = FullScreenUtil_getInstance();
    this->gameCanvas = NullGameCanvas_getInstance();
    this->highScoresHelper = HighScoresHelper_new();
    this->realHighScoresPaintable = HighScoresPaintable_new();
    this->highScoresPaintable = NullPaintable_getInstance();
    this->state = 0;
    this->canvasThread = NullThread_NULL_THREAD;
    this->timeDelayHelper = TimeDelayHelper_new(6000);
    this->basicColor = this->basicColorFactory->RED;
    
    
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuForm = ScrollSelectionForm_getNullScrollSelectionForm();
    
    this->initialized = false;
    
    this->defaultPaintableInterface = NullPaintable_getInstance();
    this->paintableInterface = NullPaintable_getInstance();
    
    this->progressPaintable = ProgressCanvasFactory_getLazyInstance();
    this->tempWait = NullWaitGameRunnable_getInstance()->WAIT;
    this->inputToGameKeyMapping = JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping);
    this->gameRunnable = NullWaitGameRunnable_getInstance();
    this->isSingleKeyRepeatableProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->lastKeyNotMapped = -1;
    this->SET_STATE = "setState";
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
}


void DemoCanvas_init(DemoCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
        RunnableCanvas_init(&this->base, commandListener, CurrentDisplayableFactory_getInstance()->DEFAULT_CHILD_NAME_LIST, true);
        DemoCanvas_initFields(this);
        this->abeClientInformation = abeClientInformation;
        DemoCanvas_setWait(this, NullWaitGameRunnable_getInstance()->WAIT);
        this->gameInitializationInterfaceFactoryInterface = gameInitializationInterfaceFactoryInterface;
        GameInitializationUtil_initDemo(GameInitializationUtil_getInstance(), abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
        ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), false);
        this->overlayPaintable = overlayPaintable;
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        DemoCanvas_setDefaultPaintableInterface(this, paintable);
        DemoCanvas_setPaintableInterface(this, DemoCanvas_getDefaultPaintableInterface(this));
        if (isContinue) {
            DemoCanvas_addCommand(this, GameCommandsFactory_getInstance()->CONTINUE_COMMAND);
        }
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            DemoCanvas_mediaInit(this);
        }
        this->demoGameRunnable = DemoGameStartupRunnable_new(this);
        DisplayChangeEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}

DemoCanvas* DemoCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
    DemoCanvas* this = calloc(1, sizeof(DemoCanvas));
    DemoCanvas_init(this, abeClientInformation, commandListener, highScoresFactoryInterface, paintable, overlayPaintable, gameInitializationInterfaceFactoryInterface, isContinue);
    return this;
}


void DemoCanvas_onEvent(DemoCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void DemoCanvas_onDisplayChangeEvent(DemoCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonLabels->START_LABEL), append, JAVA_CALL(this->displayInfo, toString)), toString), this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT);
            ScrollSelectionForm* scrollSelectionForm = DemoCanvas_getMenuForm(this);
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


Any** DemoCanvas_getCustomCommands(DemoCanvas* this) {
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


void DemoCanvas_initCommands(DemoCanvas* this, CommandListener* cmdListener) {
        DemoCanvas_removeAllCommands(this);
        Any** commandArray = DemoCanvas_getCustomCommands(this);
        int32_t size = java_array_length(commandArray);
        for (int32_t index = 0; index < size; index++) {
            DemoCanvas_addCommand(this, ((Command*) commandArray[index]));
        }
        CustomGameMenuUtil_add(this);
        DemoCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void DemoCanvas_initPostPaint(DemoCanvas* this) {
}


// throws Exception
void DemoCanvas_mediaInit(DemoCanvas* this) {
        AllBinaryMediaManager_init(EarlySoundsFactory_getInstance());
}


void DemoCanvas_itemStateChanged(DemoCanvas* this, Item* item) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}


// throws Exception
void DemoCanvas_initMenu(DemoCanvas* this) {
        DemoCanvas_close(this);
        CommandTextItemArrayFactory* commandTextItemArrayFactory = DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(DemoLimitedCommandTextItemArrayFactory_getInstance());
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(commandTextItemArrayFactory, DemoCanvas_getCommandStack(this), this->basicColorFactory->BLACK, this->basicColorFactory->WHITE);
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonLabels->START_LABEL), append, JAVA_CALL(this->displayInfo, toString)), toString), this, "initMenu");
        ScrollSelectionForm* scrollSelectionForm = CommandCurrentSelectionFormFactory_getInstance(StringUtil_getInstance()->EMPTY_STRING, items, rectangle, formType, 15, true, this->basicColorFactory->BLACK, this->basicColorFactory->WHITE);
        DemoCanvas_setMenuForm(this, scrollSelectionForm);
        FormType* formType2 = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle2 = FormUtil_createFormRectangle(this->formUtil);
        ScrollSelectionForm_init(scrollSelectionForm, rectangle2, formType2);
        if (DemoCanvas_getMenuForm(this) != ScrollSelectionFormNoneFactory_getInstance()) {
            DemoCanvas_setMenuInputProcessor(this, CommandFormInputProcessor_new(BasicArrayListD_new(), -1, this, DemoCanvas_getMenuForm(this)));
        }
        DemoCanvas_open(this);
}


void DemoCanvas_open(DemoCanvas* this) {
        BasicMotionGesturesHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
}


void DemoCanvas_close(DemoCanvas* this) {
        BasicMotionGesturesHandler_removeListener(BasicMotionGesturesHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
}


int32_t DemoCanvas_getSourceId(DemoCanvas* this) {
        return DemoCanvas_id;
}


void DemoCanvas_keyPressed(DemoCanvas* this, int32_t keyCode) {
        DemoCanvas_keyPressedByDevice(this, keyCode, 0);
}


void DemoCanvas_keyReleased(DemoCanvas* this, int32_t keyCode) {
        DemoCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void DemoCanvas_keyRepeated(DemoCanvas* this, int32_t keyCode) {
        DemoCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void DemoCanvas_keyPressedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId) {
        DemoCanvas_addGameKeyEvent(this, keyCode, false);
}


void DemoCanvas_keyReleasedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId) {
        DemoCanvas_removeGameKeyEvent(this, keyCode, false);
}


void DemoCanvas_keyRepeatedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            DemoCanvas_addGameKeyEvent(this, keyCode, true);
        }
}


static void DemoCanvas_addGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                DownGameKeyEventHandler_fireEvent(DownGameKeyEventHandler_getInstance(), gameKeyEvent);
            } else {
                if (this->lastKeyNotMapped != keyCode) {
                    this->lastKeyNotMapped = keyCode;
                    JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->ADD_KEY_EVENT);
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


static void DemoCanvas_removeGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated) {
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
void DemoCanvas_pause(DemoCanvas* this) {
        DemoCanvas_close(this);
        DemoCanvas_setPaused(this, true);
        this->gameRunnable = NullWaitGameRunnable_getInstance();
        AllBinaryGameCanvas_pause(this->gameCanvas);
}


// synchronized
void DemoCanvas_unPause(DemoCanvas* this) {
        DemoCanvas_open(this);
        AllBinaryGameCanvas_unPause(this->gameCanvas);
        this->gameRunnable = this->gameCanvas->gameRunnable;
        DemoCanvas_setPaused(this, false);
}


bool DemoCanvas_isPausable(DemoCanvas* this) {
        if (CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory_getInstance()) == NullWaitGameRunnable_getInstance()) {
            return true;
        } else {
            return false;
        }
}


bool DemoCanvas_isGameOver(DemoCanvas* this) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->NOT_IMPLEMENTED), append, " since not a game"), toString), this, "isGameOver");
        return false;
}


// throws Exception
void DemoCanvas_setLoadStateHashtable(DemoCanvas* this, ABHashtable* hashtable) {
        JAVA_CALL(this->logUtil, putF, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
}


// throws Exception
ABHashtable* DemoCanvas_getLoadStateHashtable(DemoCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
        return this->stdUtil->NULL_TABLE;
}


// throws Exception
ABHashtable* DemoCanvas_getCurrentStateHashtable(DemoCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Trying to save the AI lol", this, "getCurrentStateHashtable");
        return this->stdUtil->NULL_TABLE;
}


void DemoCanvas_setHighScoreSubmitted(DemoCanvas* this, bool isNotUsed) {
}


void DemoCanvas_paint(DemoCanvas* this, Graphics* graphics) {
        PaintableInterface_paint(this->paintableInterface, graphics);
        Animation_paintXY(this->paintedSpecialAnimationInterface, graphics, 0, 0);
        Paintable_paint(this->highScoresPaintable, graphics);
        JAVA_CALL(DemoCanvas_getBasicGameDemoPaintable(this), paint, graphics);
        InitUpdatePaintable_paint(this->overlayPaintable, graphics);
        Paintable_paint(this->fullscreenPaintable, graphics);
        PaintableInterface_paint(this->progressPaintable, graphics);
}


void DemoCanvas_paintThreed(DemoCanvas* this, Graphics* graphics) {
        PaintableInterface_paintThreed(this->paintableInterface, graphics);
        Animation_paintThreedXYZ(this->paintedSpecialAnimationInterface, graphics, 0, 0, 0);
}


// synchronized
void DemoCanvas_processGameOver(DemoCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Not Implemented since not a game", this, "setGameOver");
}


void DemoCanvas_demoStateChange(DemoCanvas* this) {
        int32_t newState = this->state + 1;
        if (newState > 2) {
            newState = 0;
        } else if (newState == 2) {
            if (!HighScoresHelperBase_isAnyHighScores(this->highScoresHelper)) {
                newState = 0;
            } else {
                HighScores* highScores = HighScoresHelperBase_getNextHighScores(this->highScoresHelper);
                if (highScores == NullHighScoresSingletonFactory_getInstance()) {
                    newState = 0;
                } else {
                    JAVA_CALL(DemoCanvas_getRealHighScoresPaintable(this), setHighScores, highScores);
                }
            }
        }
        DemoCanvas_setState(this, newState);
        DemoCanvas_updateDemoState(this);
}


void DemoCanvas_updateDemoState(DemoCanvas* this) {
        PreLogUtil_put(JAVA_CALL(SmallIntegerSingletonFactory_createInstance(SmallIntegerSingletonFactory_getInstance(), this->state), toString), this, this->SET_STATE);
        JAVA_CALL(DemoCanvas_getBasicGameDemoPaintable(this), setState, this->state);
        if (this->state == 0) {
            this->highScoresPaintable = NullPaintable_getInstance();
            this->paintedSpecialAnimationInterface = DemoCanvas_getSpecialAnimationInterface(this);
            if (!DemoGameStartupRunnable_isRunning(this->demoGameRunnable) && AllBinaryGameCanvas_isInitialized(this->gameCanvas)) {
                JAVA_CALL(DemoCanvas_getSpecialAnimationInterface(this), reset);
            }
        } else if (this->state == 1) {
            this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
        } else if (this->state == 2) {
            this->highScoresPaintable = DemoCanvas_getRealHighScoresPaintable(this);
        }
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdState_processPageAdState(gameAdState);
}


// throws Exception
int32_t DemoCanvas_getNextRandom(DemoCanvas* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
AllBinaryGameLayerManager* DemoCanvas_createGameLayerManager(DemoCanvas* this, int32_t randomValue) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
GameCanvasRunnableInterface* DemoCanvas_createRunnable(DemoCanvas* this, int32_t randomLevel) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void DemoCanvas_create(DemoCanvas* this) {
        PreLogUtil_put(this->commonStrings->START, this, "create");
        this->highScoresPaintable = NullPaintable_getInstance();
        int32_t randomLevel = DemoCanvas_getNextRandom(this);
        this->gameCanvas = ((AllBinaryGameCanvas*) DemoCanvas_createRunnable(this, randomLevel));
        this->basicColor = JAVA_CALL(AllBinaryGameCanvas_getLayerManager(this->gameCanvas), getForegroundBasicColor);
        JAVA_CALL(DemoCanvas_getRealHighScoresPaintable(this), setBasicColorP, this->basicColor);
        AllBinaryGameCanvas_setGameCanvasStartListener(this->gameCanvas, this);
        GameInfo* gameInfo = JAVA_CALL(AllBinaryGameCanvas_getLayerManager(this->gameCanvas), getGameInfo);
        JAVA_CALL(DemoCanvas_getHighScoresFactoryInterface(this), fetchHighScores, gameInfo, this->highScoresHelper);
}


// throws Exception
void DemoCanvas_start(DemoCanvas* this) {
        AllBinaryGameCanvas* gameCanvas = this->gameCanvas;
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Game Thread in DemoCanvas: "), append, JAVA_CALL(this->stringUtil, toString, gameCanvas)), toString), this, this->commonStrings->START);
        this->canvasThread = ThreadFactoryUtil_getInstanceGameCanvasRunnable(this->threadFactoryUtil, gameCanvas);
        AllBinaryGameCanvas_setThread(this->gameCanvas, this->canvasThread);
        ThreadFactoryUtil_start(this->threadFactoryUtil, this->canvasThread);
        if (DemoCanvas_getWait(this) == NullWaitGameRunnable_getInstance()->WAIT) {
            DemoCanvas_setWait(this, DemoCanvas_getTempWait(this));
        }
}


void DemoCanvas_preDemoProcess(DemoCanvas* this) {
        if (!AllBinaryGameCanvas_isInitialized(this->gameCanvas) || AllBinaryGameCanvas_getTitle(this->gameCanvas) == NullGameCanvas_NO_GAME) {
            if (AllBinaryMediaManager_update()) {
                if (!PrimaryPlayerQueueFactory_process(PrimaryPlayerQueueFactory_getInstance())) {
                    SecondaryPlayerQueueFactory_process(SecondaryPlayerQueueFactory_getInstance());
                }
            }
        }
        InitUpdatePaintable_update(this->overlayPaintable);
}


// throws Exception
void DemoCanvas_process(DemoCanvas* this) {
        RunnableCanvas_process((&this->base));
        JAVA_CALL(DemoCanvas_getMenuInputProcessor(this), processInputList);
        DemoCanvas_preDemoProcess(this);
        if (this->state == 0) {
            IndexedAnimationBehavior* indexedAnimationBehavior = (((IndexedAnimationBehavior*) JAVA_CALL(DemoCanvas_getSpecialAnimationInterface(this), getAnimationBehavior)));
            if (indexedAnimationBehavior->loopIndex < 1) {
                TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
            }
            DemoGameMidlet* demoGameMidlet = ((DemoGameMidlet*) DemoCanvas_getCustomCommandListener(this));
            if (this->gameCanvas != NullGameCanvas_getInstance() && AllBinaryGameCanvas_isGameOver(this->gameCanvas)) {
                DemoCanvas_stopGameDemo(this);
                int32_t randomLevel = DemoCanvas_getNextRandom(this);
                GameInfo* gameInfo = JAVA_CALL(AllBinaryGameCanvas_getLayerManager(this->gameCanvas), getGameInfo);
                GameInfo_setCurrentLevel(gameInfo, randomLevel);
                AllBinaryGameCanvas_setGameOver(this->gameCanvas, false);
                DemoCanvas_start(this);
            } else if (this->gameCanvas == NullGameCanvas_getInstance() && DemoGameMidlet_isReady(demoGameMidlet)) {
                if (!DemoGameStartupRunnable_isRunning(this->demoGameRunnable)) {
                    DemoCanvas_startDemoGame(this);
                    DemoGameStartupRunnable_setRunning(this->demoGameRunnable, true);
                    Thread* thread = ThreadFactoryUtil_getInstanceForRunnable(this->threadFactoryUtil, this->demoGameRunnable);
                    DemoGameStartupRunnable_setThread(this->demoGameRunnable, thread);
                    ThreadFactoryUtil_start(this->threadFactoryUtil, thread);
                }
            }
        }
}


// throws Exception
void DemoCanvas_startDemoGame(DemoCanvas* this) {
        DemoCanvasProgressUtil_showProgress(this);
}


// throws Exception
void DemoCanvas_stopGameDemo(DemoCanvas* this) {
        if (this->gameCanvas != NullGameCanvas_getInstance()) {
            JAVA_CALL(this->logUtil, putF, "Set Running False", this, "stopGameDemo");
            AllBinaryGameCanvas_setRunning(this->gameCanvas, false);
        }
        ThreadUtil_join(ThreadUtil_getInstance(), this->canvasThread);
}


void DemoCanvas_showGamePaintable(DemoCanvas* this) {
        const char* METHOD_NAME = "showGamePaintable";
        PreLogUtil_put(this->commonStrings->START, this, METHOD_NAME);
        bool isDefault = J2MEUtil_isHTML();
        if (this->gameCanvas != NullGameCanvas_getInstance() && (AllBinaryGameCanvas_isRunning(this->gameCanvas) || isDefault || SWTUtil_isSWT) && !(AllBinaryGameCanvas_getType(this->gameCanvas) == NullGameCanvas_TYPE)) {
            this->gameRunnable = this->gameCanvas->gameRunnable;
            PreLogUtil_put("Showing Game", this, METHOD_NAME);
            DemoCanvas_setPaintableInterface(this, this->gameCanvas);
        } else {
            this->gameRunnable = NullWaitGameRunnable_getInstance();
            PreLogUtil_put("Not Showing Game", this, METHOD_NAME);
            DemoCanvas_setPaintableInterface(this, DemoCanvas_getDefaultPaintableInterface(this));
        }
}


bool DemoCanvas_isReadyForStateChange(DemoCanvas* this) {
        return !DemoGameStartupRunnable_isRunning(this->demoGameRunnable) && AllBinaryGameCanvas_isInitialized(this->gameCanvas);
}


// throws Exception
void DemoCanvas_processGame(DemoCanvas* this) {
        GameRunnable_run(this->gameRunnable);
        if (!SpecialAnimation_isComplete(this->specialAnimationInterface) && DemoCanvas_isReadyForStateChange(this)) {
            SpecialAnimation_nextFrame(this->specialAnimationInterface);
        }
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper) && DemoCanvas_isReadyForStateChange(this)) {
            DemoCanvas_demoStateChange(this);
        } else {
            DemoCanvas_process(this);
        }
}


void DemoCanvas_run(DemoCanvas* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
        JAVA_TRY {
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            Features* features = Features_getInstance();
            OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread");
            DemoCanvas_setCurrentThread(this);
            DemoCanvas_setRunning(this, true);
            if (Features_isFeature(features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
                ProgressCanvas_end(progressCanvas);
            } else {
                ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread Running");
            }
            FullScreenUtil_initOnRun(this->fullScreenUtil, this, DemoCanvas_getCustomCommandListener(this));
            DemoCanvas_initMenu(this);
            DemoCanvas_initPostPaint(this);
            DemoCanvas_updateDemoState(this);
            if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
                while (this->gameCanvas == NullGameCanvas_getInstance() || !AllBinaryGameCanvas_isInitialized(this->gameCanvas)) {
                    JAVA_CALL(this->loopTimeHelper, setStartTimeTNT);
                    DemoCanvas_processGame(this);
                    DemoCanvas_processLoopSleep(this);
                }
                DemoGameRunnable* demoGameRunnable = DemoGameRunnable_new(this);
                CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, demoGameRunnable);
                CurrentDisplayableFactory_setMyCanvas(currentDisplayableFactory, this);
                OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
            }
            if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil_isHTML()) {
                DemoGameRunnable* demoGameRunnable = DemoGameRunnable_new(this);
                CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, demoGameRunnable);
                CurrentDisplayableFactory_setMyCanvas(currentDisplayableFactory, this);
            } else {
                while (DemoCanvas_isRunning(this)) {
                    DemoCanvas_run3(this);
                }
                DemoCanvas_end(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
        JAVA_CALL(this->logUtil, putF, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
}


// throws Exception
void DemoCanvas_run3(DemoCanvas* this) {
        JAVA_CALL(this->loopTimeHelper, setStartTimeTNT);
        DemoCanvas_processGame(this);
        DemoCanvas_processLoopSleep(this);
}


void DemoCanvas_setRunning(DemoCanvas* this, bool running) {
        RunnableCanvas_setRunning((&this->base), running);
        JAVA_TRY {
            Features* features = Features_getInstance();
            OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
            if (running) {
            } else {
                if ((Features_isDefault(features, openGLFeatureFactory->OPENGL) || J2MEUtil_isHTML()) || SWTUtil_isSWT) {
                    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                    CurrentDisplayableFactory_clearRunnable(currentDisplayableFactory);
                    DemoCanvas_end(this);
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->SET_RUNNING, e);
        } JAVA_END_TRY;
}


// throws Exception
void DemoCanvas_end(DemoCanvas* this) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Features* features = Features_getInstance();
        BaseGameStatistics_add(this->baseGameStatistics, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), DemoCanvas_BOT_GAME_STATS), append, BaseGameStatistics_toString(this->baseGameStatistics)), append, CommonSeps_getInstance()->NEW_LINE), toString));
        BaseGameStatistics_init(this->baseGameStatistics);
        if (Features_isFeature(features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
            ProgressCanvas_start(progressCanvas);
        }
        JAVA_CALL(this->logUtil, putF, "Demo End", this, this->commonStrings->RUN);
        DemoCanvas_close(this);
        DisplayChangeEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
        DemoCanvas_stopGameDemo(this);
}


void DemoCanvas_setGameState(DemoCanvas* this, GameState* gameState) {
}


GameState* DemoCanvas_getGameState(DemoCanvas* this) {
        return this->gameStateFactory->PLAYING_GAME_STATE;
}


AllBinaryGameCanvas* DemoCanvas_getGameCanvasRunnableInterface(DemoCanvas* this) {
        return this->gameCanvas;
}


bool DemoCanvas_isDemoLoading(DemoCanvas* this) {
        AllBinaryGameCanvas* gameCanvas = this->gameCanvas;
        if (gameCanvas == NullGameCanvas_getInstance()) {
            return true;
        } else if (AllBinaryGameCanvas_isInitialized(gameCanvas)) {
            return false;
        }
        return true;
}


int32_t DemoCanvas_getState(DemoCanvas* this) {
        return this->state;
}


void DemoCanvas_setState(DemoCanvas* this, int32_t state) {
        this->state = state;
}


bool DemoCanvas_isHighScoreSubmitted(DemoCanvas* this) {
        JAVA_CALL(this->logUtil, putF, "Wow the AI got a high score!", this, "isHighScoreSubmitted");
        return false;
}


HighScoresPaintable* DemoCanvas_getRealHighScoresPaintable(DemoCanvas* this) {
        return this->realHighScoresPaintable;
}


void DemoCanvas_setSpecialAnimationInterface(DemoCanvas* this, SpecialAnimation* specialAnimationInterface) {
        SpecialAnimation_setFrame(specialAnimationInterface, 0);
        this->specialAnimationInterface = specialAnimationInterface;
}


SpecialAnimation* DemoCanvas_getSpecialAnimationInterface(DemoCanvas* this) {
        return this->specialAnimationInterface;
}


void DemoCanvas_setPaintableInterface(DemoCanvas* this, PaintableInterface* paintableInterface) {
        this->paintableInterface = paintableInterface;
}


PaintableInterface* DemoCanvas_getPaintableInterface(DemoCanvas* this) {
        return this->paintableInterface;
}


void DemoCanvas_setDefaultPaintableInterface(DemoCanvas* this, Paintable* defaultPaintableInterface) {
        this->defaultPaintableInterface = defaultPaintableInterface;
}


Paintable* DemoCanvas_getDefaultPaintableInterface(DemoCanvas* this) {
        return this->defaultPaintableInterface;
}


HighScoresFactoryInterface* DemoCanvas_getHighScoresFactoryInterface(DemoCanvas* this) {
        return this->highScoresFactoryInterface;
}


void DemoCanvas_setMenuInputProcessor(DemoCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* DemoCanvas_getMenuInputProcessor(DemoCanvas* this) {
        return this->menuInputProcessor;
}


ScrollSelectionForm* DemoCanvas_getMenuForm(DemoCanvas* this) {
        return this->menuForm;
}


void DemoCanvas_setMenuForm(DemoCanvas* this, ScrollSelectionForm* menuForm) {
        this->menuForm = menuForm;
}


bool DemoCanvas_isInitialized(DemoCanvas* this) {
        return this->initialized;
}


Paintable* DemoCanvas_getOverlayPaintable(DemoCanvas* this) {
        return this->overlayPaintable;
}


void DemoCanvas_setBasicGameDemoPaintable(DemoCanvas* this, StatePaintable* basicGameDemoPaintable) {
        this->basicGameDemoPaintable = basicGameDemoPaintable;
}


StatePaintable* DemoCanvas_getBasicGameDemoPaintable(DemoCanvas* this) {
        return this->basicGameDemoPaintable;
}


void DemoCanvas_setTempWait(DemoCanvas* this, int32_t tempWait) {
        this->tempWait = tempWait;
}


int32_t DemoCanvas_getTempWait(DemoCanvas* this) {
        return this->tempWait;
}


bool DemoCanvas_isSingleThread(DemoCanvas* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) || SWTUtil_isSWT;
}


bool DemoCanvas_isRunningInAnotherThread(DemoCanvas* this) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
            return true;
        } else {
            return DemoCanvas_isRunning(this);
        }
}


BasicBuildGameInitializerFactory* DemoCanvas_getGameInitializationInterfaceFactoryInterface(DemoCanvas* this) {
        return this->gameInitializationInterfaceFactoryInterface;
}


int32_t DemoCanvas_getType(DemoCanvas* this) {
        return DemoCanvas_TYPE;
}


const char* DemoCanvas_getTitle(DemoCanvas* this) {
        return RunnableCanvas_getTitle((&this->base));
}


bool DemoCanvas_isPaused(DemoCanvas* this) {
        return RunnableCanvas_isPaused((&this->base));
}

