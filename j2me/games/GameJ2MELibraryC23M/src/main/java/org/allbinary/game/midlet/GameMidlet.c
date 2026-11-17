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
// #include "java/util/Enumeration.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Displayable.h"
// #include "javax/microedition/lcdui/NullCanvas.h"
// #include "javax/microedition/midlet/MIDletStateChangeException.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/FullScreenUtil.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/DebugInterface.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/game/GameStrings.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/game/configuration/GameOptionsFormFactory.h"
#include "org/allbinary/game/configuration/InGameFeatures.h"
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#include "org/allbinary/game/configuration/InGameOptionsFormFactory.h"
#include "org/allbinary/game/configuration/LoadGameForm.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h"
#include "org/allbinary/game/input/TextNotificationUtil.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#include "org/allbinary/game/score/HighScoreCommands.h"
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "org/allbinary/game/score/displayable/HighScoreUtil.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"
#include "org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/graphics/displayable/screen/WebCommandProcessor.h"
#include "org/allbinary/input/AllBinarySensorManager.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/midlet/MidletStrings.h"
#include "org/allbinary/midlet/ProgressMidlet.h"
#include "org/allbinary/thread/NullThread.h"
#include "org/allbinary/thread/ThreadFactoryUtil.h"
#include "org/allbinary/thread/ThreadUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

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
void GameMidlet_init(GameMidlet* this);
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
static void GameMidlet_updateFullScreen(GameMidlet* this);
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

static void GameMidlet_initFields(GameMidlet* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->features = Features_getInstance();
    this->midletStrings = MidletStrings_getInstance();
    this->myCommandsFactory = MyCommandsFactory_getInstance();
    this->gameStrings = GameStrings_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->DISPLAYABLE = " Displayable: ";
    this->COMMAND_NAME = "command Name/Label: ";
    this->NO_COMMAND = "No Command";
    this->NO_DISPLAYABLE = "No Displayable";
    this->COMMAND_ACTION = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "GameMidlet::"), append, this->midletStrings->COMMAND_ACTION), toString);
    this->PAUSE_APP_BACKGROUND = "pauseAppBackground";
    this->UN_PAUSE_APP_BACKGROUND = "unPauseAppBackground";
    this->aboutCommandProcessor = AboutCommandProcessor_getInstance();
    this->webCommandProcessor = WebCommandProcessor_getInstance();
    this->gameMidletStateFactory = GameMidletStateFactory_getInstance();
    this->gameStartTimeHelper = TimeDelayHelper_new(240);
    this->fullScreenUtil = FullScreenUtil_getInstance();
    
    this->allbinaryGameCanvasRunnableInterface = NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE;
    this->thread = NullThread_NULL_THREAD;
    
    this->isFullScreen = false;
    this->resized = false;
    this->startedBefore = false;
}


void GameMidlet_init(GameMidlet* this, ClientInformationFactory* clientInformationFactory) {
        ProgressMidlet_init(&this->base, clientInformationFactory);
        GameMidlet_initFields(this);
        SmallIntegerSingletonFactory_initWithRange(SmallIntegerSingletonFactory_getInstance(), 0x291, 6);
        this->loadGameForm = CommandForm_getNullCommandForm();
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_init(progressCanvas, this);
        GameFeatureEventHandler_addListenerInterface(GameFeatureEventHandler_getInstance(), ChangedGameFeatureListener_getInstance());
        GamePersistanceSingleton_clear(GamePersistanceSingleton_getInstance());
        this->debugInterface = DebugFactory_getInstance();
        GameMidlet_init(this);
}

GameMidlet* GameMidlet_new(ClientInformationFactory* clientInformationFactory) {
    GameMidlet* this = calloc(1, sizeof(GameMidlet));
    GameMidlet_init(this, clientInformationFactory);
    return this;
}


void GameMidlet_init(GameMidlet* this) {
}


// throws Exception
void GameMidlet_setDemo(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void GameMidlet_createGame(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void GameMidlet_mediaShutdown(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void GameMidlet_stopAll(GameMidlet* this) {
}


void GameMidlet_pauseApp(GameMidlet* this) {
        GameMidlet_pauseAppBackground(this, true);
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        JAVA_CALL(GameAdState_getAdvertisements(gameAdState), stopAll);
}


void GameMidlet_pauseAppBackground(GameMidlet* this, bool background) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->PAUSE_APP_BACKGROUND);
        if (this->allbinaryGameCanvasRunnableInterface != NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE) {
            GameCanvasRunnableInterface_pause(this->allbinaryGameCanvasRunnableInterface);
        } else {
            JAVA_CALL(this->logUtil, putF, "<<<<<< Null", this, this->PAUSE_APP_BACKGROUND);
        }
        AllBinarySensorManager_shutdown(AllBinarySensorManager_getInstance());
}


void GameMidlet_unPauseApp(GameMidlet* this) {
        GameMidlet_unPauseAppBackground(this, true);
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        JAVA_CALL(GameAdState_getAdvertisements(gameAdState), startAll);
}


void GameMidlet_unPauseAppBackground(GameMidlet* this, bool background) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->UN_PAUSE_APP_BACKGROUND);
        AllBinarySensorManager_init(AllBinarySensorManager_getInstance());
        GameCanvasRunnableInterface* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
        if (gameCanvasRunnableInterface != NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE) {
            GameCanvasRunnableInterface_unPause(gameCanvasRunnableInterface);
        } else {
            JAVA_CALL(this->logUtil, putF, "<<<<<< Null", this, this->UN_PAUSE_APP_BACKGROUND);
        }
}


void GameMidlet_destroyAppInRunnable(GameMidlet* this, bool unconditional, bool isProgress) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        if (isProgress) {
            ProgressCanvas_start(progressCanvas);
            GameMidlet_commandAction(this, this->myCommandsFactory->SET_DISPLAYABLE, progressCanvas);
        }
        GameMidlet_destroyApp(this, unconditional);
        if (isProgress) {
            ProgressCanvas_end(progressCanvas);
        }
}


void GameMidlet_destroyApp(GameMidlet* this, bool unconditional) {
        const char* METHOD_NAME = "GameMidlet::destroyApp";
        JAVA_TRY {
            PreLogUtil_put(GameStatisticsFactory_toString(GameStatisticsFactory_getInstance()), this, METHOD_NAME);
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
            JAVA_CALL(GameAdState_getAdvertisements(gameAdState), stopAll);
            if (!GameMidlet_isDestroyed(this)) {
                GameMidlet_stopGameCanvasRunnableInterface(this);
                GameMidlet_setGameCanvasRunnableInterface(this, NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE);
                GameMidlet_mediaShutdown(this);
            } else {
                JAVA_CALL(this->logUtil, putF, "Midlet Managment Error: Midlet Should Only Be Destroyed Once", this, METHOD_NAME);
            }
            ProgressMidlet_destroyApp((&this->base), true);
            PreLogUtil_put(this->commonStrings->END, this, METHOD_NAME);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, METHOD_NAME, e);
        } JAVA_END_TRY;
        JAVA_CALL(this->logUtil, putF, this->commonStrings->END, this, METHOD_NAME);
}


// throws MIDletStateChangeException
void GameMidlet_startApp(GameMidlet* this) {
        JAVA_TRY {
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
            JAVA_CALL(GameAdState_getAdvertisements(gameAdState), startAll);
            const char* START_APP = "startApp";
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, START_APP);
            Any* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
            if (gameCanvasRunnableInterface == NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE) {
                GameMidletStateFactory_setCurrentGameState(this->gameMidletStateFactory, this->gameStateFactory->NO_GAME_STATE);
                GameMidlet_setDemo(this);
            } else {
                JAVA_CALL(this->logUtil, putF, "GameCanvasRunnableInterface is available", this, START_APP);
                if (gameCanvasRunnableInterface == GameMidlet_getCurrentDisplayable(this)) {
                    GameMidlet_unPauseAppBackground(this, false);
                } else {
                    JAVA_CALL(this->logUtil, putF, "GameCanvasRunnableInterface is not current displayable", this, START_APP);
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "startApp", e);
            GameMidlet_destroyApp(this, false);
            GameMidlet_notifyDestroyed(this);
        } JAVA_END_TRY;
}


// synchronized
void GameMidlet_commandAction(GameMidlet* this, Command* command, Displayable* displayable) {
        JAVA_TRY {
            const char* displayableAsString = this->NO_DISPLAYABLE;
            if (displayable != nullptr) {
                displayableAsString = Displayable_toString(displayable);
            }
            const char* label = this->NO_COMMAND;
            if (command != nullptr) {
                label = Command_getLabel(command);
            }
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->COMMAND_NAME), append, label), append, this->DISPLAYABLE), append, displayableAsString), toString), this, this->COMMAND_ACTION);
            GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
            GameCanvasRunnableInterface* allbinaryGameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
            Any* gameCanvasRunnableInterface = allbinaryGameCanvasRunnableInterface;
            if (command == gameCommandsFactory->SHOW_GAME_CANVAS) {
                if (JAVA_CALL(GameMidlet_getDisplay(this), getCurrent) != gameCanvasRunnableInterface && GameCanvasRunnableInterface_getType(allbinaryGameCanvasRunnableInterface) != JAVA_CALL(NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE, getType)) {
                    GameMidlet_setDisplay(this, ((Displayable*) gameCanvasRunnableInterface));
                }
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS) {
                MenuListener* menuListener = ((MenuListener*) displayable);
                MenuListener_close(menuListener);
                GameMidlet_setDisplay(this, ((Displayable*) gameCanvasRunnableInterface));
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == gameCommandsFactory->EXIT_COMMAND) {
                if (JAVA_CALL(GameMidletEventHandler_getEventListenerInterfaceListP(GameMidletEventHandler_getInstance()), size) == 0) {
                    GameMidlet_exitProgress(this, true);
                }
                GameMidletEventHandler_fireEvent(GameMidletEventHandler_getInstance(), DemoGameMidletEvent_new(this, DemoGameMidletStateFactory_getInstance()->NONE));
            } else if (command == gameCommandsFactory->EXIT_WITHOUT_PROGRESS_COMMAND) {
                GameMidlet_exitProgress(this, false);
            } else if (command == gameCommandsFactory->START_COMMAND || command == gameCommandsFactory->RESTART_COMMAND || command == gameCommandsFactory->CONTINUE_COMMAND) {
                if (GameMidletStateFactory_getCurrentGameState(this->gameMidletStateFactory) != this->gameStateFactory->PLAYING_GAME_STATE || command == gameCommandsFactory->RESTART_COMMAND) {
                    if (TimeDelayHelper_isTimeTNT(this->gameStartTimeHelper)) {
                        if (command == gameCommandsFactory->START_COMMAND && GameMidlet_isDemoLoading(this)) {
                            JAVA_CALL(this->logUtil, putF, "Trying to Start Game Before Loading Complete", this, this->midletStrings->COMMAND_ACTION);
                        } else {
                            this->startedBefore = true;
                            GameMidlet_createGame(this);
                            GameMidletStateFactory_setCurrentGameState(this->gameMidletStateFactory, this->gameStateFactory->PLAYING_GAME_STATE);
                        }
                    } else {
                        JAVA_CALL(this->logUtil, putF, "Starting Game Too Often", this, this->midletStrings->COMMAND_ACTION);
                    }
                } else {
                    JAVA_CALL(this->logUtil, putF, "Already in playing state", this, this->COMMAND_ACTION);
                }
            } else if (command == gameCommandsFactory->BUY_COMMAND) {
                InApplicationPurchaseFactory* inApplicationPurchaseFactory = InApplicationPurchaseFactory_getInstance();
                BasicArrayList* list = LockableFeatureFactory_getList(LockableFeatureFactory_getInstance());
                LockableFeature* lockableFeature = ((LockableFeature*) BasicArrayList_get(list, 0));
                if (BasicArrayList_size(list) > 0 && !InApplicationPurchaseFactory_isPurchased(inApplicationPurchaseFactory, lockableFeature)) {
                    InApplicationPurchaseFactory_purchase(inApplicationPurchaseFactory, lockableFeature);
                } else {
                    TextNotificationUtil_fireSuccess(TextNotificationUtil_getInstance(), "Already Purchased");
                }
            } else if (command == gameCommandsFactory->QUIT_COMMAND) {
                if (TimeDelayHelper_isTimeTNT(this->gameStartTimeHelper)) {
                    if (java_instanceof(displayable, "HighScoreTextBox")) {
                        MenuListener* menuListener = ((MenuListener*) displayable);
                        MenuListener_close(menuListener);
                    }
                    GameMidlet_stopGameCanvasRunnableInterface(this);
                    GameMidletStateFactory_setCurrentGameState(this->gameMidletStateFactory, this->gameStateFactory->NO_GAME_STATE);
                    GameMidlet_setDemo(this);
                }
            } else if (command == this->myCommandsFactory->RESUME_COMMAND) {
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == this->myCommandsFactory->PAUSE_COMMAND) {
                GameMidlet_pauseAppBackground(this, false);
            } else if (command == this->myCommandsFactory->SET_DISPLAYABLE) {
                GameMidlet_pauseAppBackground(this, false);
                GameMidlet_setDisplay(this, displayable);
            } else if (command == gameCommandsFactory->SET_MENU_DISPLAYABLE) {
                GameMidlet_pauseAppBackground(this, false);
                MenuListener* menuListener = ((MenuListener*) displayable);
                MenuListener_open(menuListener);
                GameMidlet_setDisplay(this, displayable);
            } else if (command == gameCommandsFactory->START_TRACE) {
                DebugInterface_start(this->debugInterface);
                AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) allbinaryGameCanvasRunnableInterface);
                AllBinaryGameCanvas_addCommand(gameCanvas, gameCommandsFactory->STOP_TRACE);
                AllBinaryGameCanvas_removeCommand(gameCanvas, gameCommandsFactory->START_TRACE);
            } else if (command == gameCommandsFactory->STOP_TRACE) {
                GameMidlet_pauseAppBackground(this, false);
                DebugInterface_stop(this->debugInterface);
                GameMidlet_unPauseAppBackground(this, false);
                AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) allbinaryGameCanvasRunnableInterface);
                AllBinaryGameCanvas_addCommand(gameCanvas, gameCommandsFactory->START_TRACE);
                AllBinaryGameCanvas_removeCommand(gameCanvas, gameCommandsFactory->STOP_TRACE);
            } else if (command == gameCommandsFactory->DEFAULT_OPTIONS) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "GameOptionsForm")) {
                    GameFeatureFormUtil_setDefault(GameFeatureFormUtil_getInstance(), ((CommandForm*) tempDisplayable));
                }
            } else if (command == GameInputMappingInstructionsCanvas_DISPLAY) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "GameInputMappingCanvas")) {
                    GameInputMappingCanvas* gameInputMappingCanvas = ((GameInputMappingCanvas*) tempDisplayable);
                    GameInputMappingCanvas_update(gameInputMappingCanvas);
                }
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getInputMappingInstructionsCanvas(this));
            } else if (HighScoreCommandsFactory_isHighScoreCommand(HighScoreCommandsFactory_getInstance(), command)) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "HighScoresCanvas")) {
                    HighScoresCanvas* highScoresCanvas = ((HighScoresCanvas*) tempDisplayable);
                    HighScoresCanvas_updateCommand(highScoresCanvas, command);
                }
            } else if (command == HighScoreCommands_getInstance()->DISPLAY) {
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_createHighScoresCanvas(this));
            } else if (command == GameInputMappingInstructionsCanvas_CLOSE) {
                MenuListener* menuListener = ((MenuListener*) displayable);
                MenuListener_close(menuListener);
                GameMidlet_commandAction(this, GameInputMappingCanvas_DISPLAY, NullCanvas_NULL_CANVAS);
            } else if (command == GameInputMappingCanvas_DISPLAY) {
                if (J2MEUtil_isHTML()) {
                    GameMidlet_pauseAppBackground(this, false);
                }
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getInputMappingCanvas(this));
            } else if (command == GameInputMappingCanvas_DEFAULT) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "GameInputMappingCanvas")) {
                    GameInputMappingCanvas* gameInputMappingCanvas = ((GameInputMappingCanvas*) tempDisplayable);
                    GameInputMappingCanvas_setDefault(gameInputMappingCanvas);
                }
            } else if (command == InGameOptionsForm_DISPLAY) {
                GameMidlet_pauseAppBackground(this, false);
                ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
                ProgressCanvas_addNormalPortion(progressCanvas, 50, "In Game Options");
                AllBinaryGameLayerManager* layerManager = GameMidlet_createGameLayerManager(this);
                InGameOptionsFormFactory* inGameOptionsFormFactory = InGameOptionsFormFactory_getInstance();
                InGameOptionsFormFactory_init(inGameOptionsFormFactory, this, InGameFeatures_new(), "Options In Game", AllBinaryGameLayerManager_getBackgroundBasicColor(layerManager), AllBinaryGameLayerManager_getForegroundBasicColor(layerManager));
                CommandForm* inGameOptionsForm = InGameOptionsFormFactory_get(inGameOptionsFormFactory);
                InGameOptionsForm_setItemStateListener(inGameOptionsForm, allbinaryGameCanvasRunnableInterface);
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, inGameOptionsForm);
            } else if (command == InGameOptionsForm_DEFAULT) {
                InGameOptionsForm* inGameOptionsForm = ((InGameOptionsForm*) InGameOptionsFormFactory_get(InGameOptionsFormFactory_getInstance()));
                GameFeatureFormUtil_setDefault(GameFeatureFormUtil_getInstance(), inGameOptionsForm);
            } else if (command == gameCommandsFactory->DISPLAY_OPTIONS) {
                AllBinaryMediaManager_setMuted(true);
                GameMidlet_stopAll(this);
                MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
                this->isFullScreen = Features_isFeature(this->features, mainFeatureFactory->FULL_SCREEN);
                ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), true);
                GameMidlet_setResized(this, false);
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getGameOptionsForm(this));
            } else if (command == gameCommandsFactory->CLOSE_OPTIONS) {
                ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), false);
                GameMidlet_commandAction(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS, displayable);
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Close isFullScreen/change: ");
                StringMaker_appendboolean(stringBuffer, this->isFullScreen);
                StringMaker_appendboolean(stringBuffer, FullScreenUtil_isScreenChange(this->fullScreenUtil, this->isFullScreen));
                StringMaker_append(stringBuffer, " isResized: ");
                StringMaker_appendboolean(stringBuffer, GameMidlet_isResized(this));
                PreLogUtil_put(StringMaker_toString(stringBuffer), this, this->COMMAND_ACTION);
                if (GameMidlet_isResized(this) || FullScreenUtil_isScreenChange(this->fullScreenUtil, this->isFullScreen)) {
                    GameMidlet_updateFullScreen(this);
                }
                AllBinaryMediaManager_setMuted(false);
            } else if (command == gameCommandsFactory->DISPLAY_LOAD_FORM) {
                GameMidlet_pauseAppBackground(this, false);
                KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                KeyValuePersistance_clear(keyValuePersistance);
                KeyValuePersistance_loadAll(keyValuePersistance, this->abeClientInformation);
                if (GameMidlet_getLoadGameForm(this) == CommandForm_getNullCommandForm()) {
                    AllBinaryGameLayerManager* layerManager = GameMidlet_createGameLayerManager(this);
                    GameMidlet_setLoadGameForm(this, LoadGameForm_new(this, "Load Game", AllBinaryGameLayerManager_getBackgroundBasicColor(layerManager), AllBinaryGameLayerManager_getForegroundBasicColor(layerManager)));
                } else {
                    JAVA_CALL(GameMidlet_getLoadGameForm(this), update);
                }
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getLoadGameForm(this));
            } else if (command == gameCommandsFactory->LOAD_FILE) {
                LoadGameForm* loadGameForm = ((LoadGameForm*) GameMidlet_getLoadGameForm(this));
                int32_t index = CommandForm_getSelectedId(loadGameForm);
                if (index != -1) {
                    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                    GameMidlet_setStartStateHashtable(this, KeyValuePersistance_get(keyValuePersistance, index));
                    MenuListener* menuListener = GameMidlet_getLoadGameForm(this);
                    MenuListener_close(menuListener);
                    PreLogUtil_put(BasicMotionGesturesHandler_toString(BasicMotionGesturesHandler_getInstance()), this, this->COMMAND_ACTION);
                    GameMidlet_commandAction(this, gameCommandsFactory->START_COMMAND, NullCanvas_NULL_CANVAS);
                    PreLogUtil_put(BasicMotionGesturesHandler_toString(BasicMotionGesturesHandler_getInstance()), this, this->COMMAND_ACTION);
                }
            } else if (command == gameCommandsFactory->DELETE_FILE) {
                LoadGameForm* loadGameForm = ((LoadGameForm*) GameMidlet_getLoadGameForm(this));
                int32_t index = CommandForm_getSelectedText(loadGameForm);
                if (index != -1) {
                    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                    KeyValuePersistance_delete(keyValuePersistance, this->abeClientInformation, index);
                    KeyValuePersistance_clear(keyValuePersistance);
                    KeyValuePersistance_loadAllSize(keyValuePersistance, this->abeClientInformation, 1);
                    JAVA_CALL(GameMidlet_getLoadGameForm(this), update);
                }
            } else if (command == gameCommandsFactory->SAVE) {
                KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                GameMidlet_pauseAppBackground(this, false);
                KeyValuePersistance_save(keyValuePersistance, this->abeClientInformation, GameMidlet_getCurrentStateHashtable(this));
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == HighScoreUtil_SUBMIT_TEXTBOX_COMMAND) {
                JAVA_CALL(this->logUtil, putF, "Submitted Score", this, this->COMMAND_ACTION);
                if (java_instanceof(displayable, "HighScoreTextBox")) {
                    HighScoreTextBox* highScoreTextBox = ((HighScoreTextBox*) displayable);
                    highScoreTextBox->submitted = true;
                }
                GameCanvasRunnableInterface_setHighScoreSubmitted(allbinaryGameCanvasRunnableInterface, true);
                GameMidlet_commandAction(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS, displayable);
            } else if (command == gameCommandsFactory->DISPLAY_ABOUT) {
                AboutCommandProcessor_process(this->aboutCommandProcessor, this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getAboutCanvas(this));
            } else if (command == gameCommandsFactory->OPEN_WEB_URL) {
                WebCommandProcessor_process(this->webCommandProcessor, this, gameCommandsFactory->OPEN_WEB_URL, NullCanvas_NULL_CANVAS);
            } else if (command == gameCommandsFactory->TOGGLE_KEYBOARD) {
                VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
                VirtualKeyboardEventHandler_fireEvent(virtualKeyboardEventHandler, virtualKeyboardEventHandler->SHOW_EVENT);
            } else if (TsUtil_compareTo(this->tsUtil, Command_getLabel(command), JAVA_CALL(gameCommandsFactory->TOGGLE_FULLSCREEN, getLabel)) == 0) {
                MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
                bool isFullScreen = Features_isFeature(this->features, mainFeatureFactory->FULL_SCREEN);
                if (isFullScreen) {
                    Features_removeDefault(this->features, mainFeatureFactory->FULL_SCREEN);
                } else {
                    Features_addDefault(this->features, mainFeatureFactory->FULL_SCREEN);
                }
                GameMidlet_updateFullScreen(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), append, Command_getLabel(command)), toString), this, this->midletStrings->COMMAND_ACTION, e);
            if (command != GameCommandsFactory_getInstance()->EXIT_COMMAND) {
                GameMidlet_exitProgress(this, false);
            }
        } JAVA_END_TRY;
}


static void GameMidlet_updateFullScreen(GameMidlet* this) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        bool isFullScreen = Features_isFeature(this->features, mainFeatureFactory->FULL_SCREEN);
        Displayable* displayable = JAVA_CALL(GameMidlet_getDisplay(this), getCurrent);
        if (java_instanceof(displayable, "Canvas")) {
            Canvas* canvas = ((Canvas*) displayable);
            Canvas_setFullScreenMode(canvas, isFullScreen);
        }
}


void GameMidlet_onEvent(GameMidlet* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
MyCanvas* GameMidlet_getInputMappingInstructionsCanvas(GameMidlet* this) {
        return GameInputMappingInstructionsCanvas_new(this, GameMidlet_createGameLayerManager(this));
}


// throws Exception
MyCanvas* GameMidlet_getInputMappingCanvas(GameMidlet* this) {
        return GameInputMappingCanvas_new(this->abeClientInformation, this, GameMidlet_createGameLayerManager(this), GameMidlet_getHelpPaintable(this));
}


// throws Exception
MyCanvas* GameMidlet_getAboutCanvas(GameMidlet* this) {
        return BasicPaintablesCanvas_new(this, CanvasStrings_getInstance()->ABOUT, GameMidlet_createGameLayerManager(this), AboutPaintableFactory_getInstance()->paintableArray);
}


// throws Exception
HelpPaintable* GameMidlet_getHelpPaintable(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
HighScoresCanvas* GameMidlet_createHighScoresCanvas(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void GameMidlet_startGameCanvasRunnableInterface(GameMidlet* this) {
        ThreadFactoryUtil* threadFactoryUtil = ThreadFactoryUtil_getInstance();
        this->thread = ThreadFactoryUtil_getInstanceGameCanvasRunnable(threadFactoryUtil, this->allbinaryGameCanvasRunnableInterface);
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Thread Priority: "), appendint, ((int32_t) Thread_getPriority(this->thread))), toString), this, "startGameCanvasRunnableInterface");
        GameCanvasRunnableInterface_setThread(this->allbinaryGameCanvasRunnableInterface, this->thread);
        ThreadFactoryUtil_start(threadFactoryUtil, this->thread);
}


// throws Exception
void GameMidlet_stopGameCanvasRunnableInterface(GameMidlet* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
        GameNotificationEventHandler_removeAllListeners(GameNotificationEventHandler_getInstance());
        ColorChangeEventHandler_removeAllListeners(ColorChangeEventHandler_getInstance());
        GameEventHandlerUtil_removeAllListeners();
        GameCanvasRunnableInterface* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
        if (gameCanvasRunnableInterface != NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE) {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Set Running False: "), append, GameCanvasRunnableInterface_toString(gameCanvasRunnableInterface)), toString), this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
            GameCanvasRunnableInterface_setRunning(gameCanvasRunnableInterface, false);
        } else {
            JAVA_CALL(this->logUtil, putF, "StopGame - Could Not Stop", this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
        }
        ThreadUtil_join(ThreadUtil_getInstance(), this->thread);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        if (Features_isFeature(this->features, MainFeatureFactory_getInstance()->LOAD_ALL)) {
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Stopped Game Runnable");
        } else {
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Stopped Main Runnable");
        }
        JAVA_CALL(this->logUtil, putF, this->commonStrings->END, this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
}


GameCanvasRunnableInterface* GameMidlet_getGameCanvasRunnableInterface(GameMidlet* this) {
        return this->allbinaryGameCanvasRunnableInterface;
}


void GameMidlet_setGameCanvasRunnableInterface(GameMidlet* this, GameCanvasRunnableInterface* gameCanvasRunnableInterface) {
        this->allbinaryGameCanvasRunnableInterface = gameCanvasRunnableInterface;
}


AllBinaryGameLayerManager* GameMidlet_createGameLayerManager(GameMidlet* this) {
        GameInfo* gameInfo = GameInfo_new(GameTypeFactory_getInstance()->SINGLE_PLAYER, GameMode_SERVER, PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 1, 1);
        return AllBinaryGameLayerManager_new(this->basicColorFactory->BLACK, this->basicColorFactory->WHITE, gameInfo);
}


CommandForm* GameMidlet_getGameOptionsForm(GameMidlet* this) {
        AllBinaryGameLayerManager* layerManager = GameMidlet_createGameLayerManager(this);
        return GameOptionsFormFactory_init(GameOptionsFormFactory_getInstance(), this, "Game Options", AllBinaryGameLayerManager_getBackgroundBasicColor(layerManager), AllBinaryGameLayerManager_getForegroundBasicColor(layerManager));
}


// throws Exception
void GameMidlet_save(GameMidlet* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->SAVE);
        ABHashtable* hashtable = GameMidlet_getCurrentStateHashtable(this);
        GamePersistanceSingleton_save(GamePersistanceSingleton_getInstance(), this->abeClientInformation, hashtable);
}


// throws Exception
ABHashtable* GameMidlet_getCurrentStateHashtable(GameMidlet* this) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, "getCurrentStateHashtable");
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        if (this->allbinaryGameCanvasRunnableInterface != NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE) {
            ABHashtable* currentHashtable = GameCanvasRunnableInterface_getCurrentStateHashtable(this->allbinaryGameCanvasRunnableInterface);
            Enumeration* enumeration = ABHashtable_keys(currentHashtable);
            Any* key = nullptr;
            while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
                key = EnumerationUtil_nextElement(this->enumerationUtil, enumeration);
                ABHashtable_put(hashtable, key, ABHashtable_get(currentHashtable, key));
            }
        }
        return hashtable;
}


void GameMidlet_setLoadGameForm(GameMidlet* this, LoadGameForm* loadGameForm) {
        this->loadGameForm = loadGameForm;
}


CommandForm* GameMidlet_getLoadGameForm(GameMidlet* this) {
        return this->loadGameForm;
}


void GameMidlet_setResized(GameMidlet* this, bool resized) {
        this->resized = resized;
}


bool GameMidlet_isResized(GameMidlet* this) {
        return this->resized;
}


bool GameMidlet_isDemoLoading(GameMidlet* this) {
        if (this->startedBefore) {
            return false;
        }
        Displayable* displayable = JAVA_CALL(GameMidlet_getDisplay(this), getCurrent);
        if (java_instanceof(displayable, "DemoCanvas")) {
            DemoCanvas* demoCanvas = ((DemoCanvas*) displayable);
            if (DemoCanvas_isDemoLoading(demoCanvas)) {
                return true;
            }
        }
        return false;
}

