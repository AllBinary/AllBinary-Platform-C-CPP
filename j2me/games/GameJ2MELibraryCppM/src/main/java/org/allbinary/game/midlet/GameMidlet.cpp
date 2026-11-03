
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/GameMidlet.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/util/Enumeration.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <javax/microedition/midlet/MIDletStateChangeException.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>

      
#include <org/allbinary/canvas/FullScreenUtil.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/DebugInterface.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/GameMode.h>

      
#include <org/allbinary/game/GameStrings.h>

      
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/game/PlayerTypesFactory.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/GameOptionsForm.h>

      
#include <org/allbinary/game/configuration/GameOptionsFormFactory.h>

      
#include <org/allbinary/game/configuration/InGameFeatures.h>

      
#include <org/allbinary/game/configuration/InGameOptionsForm.h>

      
#include <org/allbinary/game/configuration/InGameOptionsFormFactory.h>

      
#include <org/allbinary/game/configuration/LoadGameForm.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>

      
#include <org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/MenuListener.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>

      
#include <org/allbinary/game/input/TextNotificationUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/paint/help/HelpPaintable.h>

      
#include <org/allbinary/game/score/HighScoreCommands.h>

      
#include <org/allbinary/game/score/HighScoreCommandsFactory.h>

      
#include <org/allbinary/game/score/displayable/HighScoreTextBox.h>

      
#include <org/allbinary/game/score/displayable/HighScoreUtil.h>

      
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/graphics/ResizableListenerHandler.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h>

      
#include <org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/graphics/displayable/screen/WebCommandProcessor.h>

      
#include <org/allbinary/input/AllBinarySensorManager.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockableFeature.h>

      
#include <org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/AllBinaryMediaManager.h>

      
#include <org/allbinary/midlet/MidletStrings.h>

      
#include <org/allbinary/midlet/ProgressMidlet.h>

      
#include <org/allbinary/thread/NullThread.h>

      
#include <org/allbinary/thread/ThreadFactoryUtil.h>

      
#include <org/allbinary/thread/ThreadUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/GameMidletStateFactory.h"
#include "org/allbinary/game/midlet/GameMidletEventHandler.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"


GameMidlet::GameMidlet(ClientInformationFactory* clientInformationFactory) : ProgressMidlet(clientInformationFactory), enumerationUtil(EnumerationUtil::getInstance()), basicColorFactory(BasicColorFactory::getInstance()), features(Features::getInstance()), midletStrings(MidletStrings::getInstance()), myCommandsFactory(MyCommandsFactory::getInstance()), gameStrings(GameStrings::getInstance()), gameAdStateFactory(GameAdStateFactory::getInstance()), gameStateFactory(GameStateFactory::getInstance()), tsUtil(TsUtil::getInstance()), COMMAND_ACTION((new StringMaker())->append("GameMidlet::")->append(this->midletStrings->COMMAND_ACTION)->toString()), aboutCommandProcessor(AboutCommandProcessor::getInstance()), webCommandProcessor(WebCommandProcessor::getInstance()), gameMidletStateFactory(GameMidletStateFactory::getInstance()), gameStartTimeHelper(new TimeDelayHelper(240)), fullScreenUtil(FullScreenUtil::getInstance()), allbinaryGameCanvasRunnableInterface(NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE), thread(NullThread::NULL_THREAD){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
SmallIntegerSingletonFactory::getInstance()->initWithRange(0x291, 6);
    
this->loadGameForm= CommandForm::getNullCommandForm();
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->init(this);
    
GameFeatureEventHandler::getInstance()->addListenerInterface(ChangedGameFeatureListener::getInstance());
    
GamePersistanceSingleton::getInstance()->clear();
    
this->debugInterface= DebugFactory::getInstance();
    
this->init();
    
}


    auto GameMidlet::init() -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::setDemo() -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::createGame() -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::mediaShutdown() -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto GameMidlet::stopAll() -> void{
}


    auto GameMidlet::pauseApp() -> void{
this->pauseAppBackground(true);
    

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->getAdvertisements()->stopAll();
    
}


    auto GameMidlet::pauseAppBackground(bool background) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->PAUSE_APP_BACKGROUND);
    

                        if(this->allbinaryGameCanvasRunnableInterface != NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    this->allbinaryGameCanvasRunnableInterface->pause();
    

                                    }
                                
                        else {
                            this->logUtil->putF("<<<<<< Null", this, this->PAUSE_APP_BACKGROUND);
    

                        }
                            
AllBinarySensorManager::getInstance()->shutdown();
    
}


    auto GameMidlet::unPauseApp() -> void{
this->unPauseAppBackground(true);
    

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->getAdvertisements()->startAll();
    
}


    auto GameMidlet::unPauseAppBackground(bool background) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->UN_PAUSE_APP_BACKGROUND);
    
AllBinarySensorManager::getInstance()->init();
    

    GameCanvasRunnableInterface* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;;
    

                        if(gameCanvasRunnableInterface != NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    gameCanvasRunnableInterface->unPause();
    

                                    }
                                
                        else {
                            this->logUtil->putF("<<<<<< Null", this, this->UN_PAUSE_APP_BACKGROUND);
    

                        }
                            
}


    auto GameMidlet::destroyAppInRunnable(bool unconditional, bool isProgress) -> void{

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

                        if(isProgress)
                        
                                    {
                                    progressCanvas->start();
    
this->commandAction(this->myCommandsFactory->SET_DISPLAYABLE, progressCanvas);
    

                                    }
                                
this->destroyApp(unconditional);
    

                        if(isProgress)
                        
                                    {
                                    progressCanvas->end();
    

                                    }
                                
}


    auto GameMidlet::destroyApp(bool unconditional) -> void{

    std::string METHOD_NAME = "GameMidlet::destroyApp";;
    

        try {
            PreLogUtil::put(GameStatisticsFactory::getInstance()->toString(), this, METHOD_NAME);
    

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->getAdvertisements()->stopAll();
    

                        if(!this->isDestroyed())
                        
                                    {
                                    this->stopGameCanvasRunnableInterface();
    
this->setGameCanvasRunnableInterface(NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE);
    
this->mediaShutdown();
    

                                    }
                                
                        else {
                            this->logUtil->putF("Midlet Managment Error: Midlet Should Only Be Destroyed Once", this, METHOD_NAME);
    

                        }
                            
ProgressMidlet::destroyApp(true);
    
PreLogUtil::put(this->commonStrings->END, this, METHOD_NAME);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, METHOD_NAME, &e);
    
}

this->logUtil->putF(this->commonStrings->END, this, METHOD_NAME);
    
}


                //@Throws(MIDletStateChangeException.constructor)
            
    auto GameMidlet::startApp() -> void{

        try {
            
    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->getAdvertisements()->startAll();
    

    std::string START_APP = "startApp";;
    
this->logUtil->putF(this->commonStrings->START, this, START_APP);
    

    Object* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;;
    

                        if(gameCanvasRunnableInterface == NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    this->gameMidletStateFactory->setCurrentGameState(this->gameStateFactory->NO_GAME_STATE);
    
this->setDemo();
    

                                    }
                                
                        else {
                            this->logUtil->putF("GameCanvasRunnableInterface is available", this, START_APP);
    

                        if(gameCanvasRunnableInterface == this->getCurrentDisplayable())
                        
                                    {
                                    this->unPauseAppBackground(false);
    

                                    }
                                
                        else {
                            this->logUtil->putF("GameCanvasRunnableInterface is not current displayable", this, START_APP);
    

                        }
                            

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "startApp", &e);
    
this->destroyApp(false);
    
this->notifyDestroyed();
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GameMidlet::commandAction(Command* command, Displayable* displayable) -> void{

        try {
            
    std::string displayableAsString = this->NO_DISPLAYABLE;;
    

                        if(displayable != 
                                    nullptr
                                )
                        
                                    {
                                    displayableAsString= displayable->toString();
    

                                    }
                                

    std::string label = this->NO_COMMAND;;
    

                        if(command != 
                                    nullptr
                                )
                        
                                    {
                                    label= command->getLabel();
    

                                    }
                                
PreLogUtil::put((new StringMaker())->append(this->COMMAND_NAME)->append(label)->append(this->DISPLAYABLE)->append(displayableAsString)->toString(), this, this->COMMAND_ACTION);
    

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

    GameCanvasRunnableInterface* allbinaryGameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;;
    

    Object* gameCanvasRunnableInterface = allbinaryGameCanvasRunnableInterface;;
    

                        if(command == gameCommandsFactory->SHOW_GAME_CANVAS)
                        
                                    {
                                    
                        if(this->getDisplay()->getCurrent() != gameCanvasRunnableInterface && allbinaryGameCanvasRunnableInterface->getType() != NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE->getType())
                        
                                    {
                                    this->setDisplay(dynamic_cast<Displayable*>(gameCanvasRunnableInterface));
    

                                    }
                                
this->unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS)
                        
                                    {
                                    
    MenuListener* menuListener = dynamic_cast<MenuListener*>(displayable);;
    
menuListener->close();
    
this->setDisplay(dynamic_cast<Displayable*>(gameCanvasRunnableInterface));
    
this->unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->EXIT_COMMAND)
                        
                                    {
                                    
                        if(GameMidletEventHandler::getInstance()->getEventListenerInterfaceListP()->size() == 0)
                        
                                    {
                                    this->exitProgress(true);
    

                                    }
                                
GameMidletEventHandler::getInstance()->fireEvent(new DemoGameMidletEvent(this, DemoGameMidletStateFactory::getInstance()->NONE));
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->EXIT_WITHOUT_PROGRESS_COMMAND)
                        
                                    {
                                    this->exitProgress(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->START_COMMAND || command == gameCommandsFactory->RESTART_COMMAND || command == gameCommandsFactory->CONTINUE_COMMAND)
                        
                                    {
                                    
                        if(this->gameMidletStateFactory->getCurrentGameState() != this->gameStateFactory->PLAYING_GAME_STATE || command == gameCommandsFactory->RESTART_COMMAND)
                        
                                    {
                                    
                        if(this->gameStartTimeHelper->isTimeTNT())
                        
                                    {
                                    
                        if(command == gameCommandsFactory->START_COMMAND && this->isDemoLoading())
                        
                                    {
                                    this->logUtil->putF("Trying to Start Game Before Loading Complete", this, this->midletStrings->COMMAND_ACTION);
    

                                    }
                                
                        else {
                            this->startedBefore= true;
    
this->createGame();
    
this->gameMidletStateFactory->setCurrentGameState(this->gameStateFactory->PLAYING_GAME_STATE);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("Starting Game Too Often", this, this->midletStrings->COMMAND_ACTION);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("Already in playing state", this, this->COMMAND_ACTION);
    

                        }
                            

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->BUY_COMMAND)
                        
                                    {
                                    
    InApplicationPurchaseFactory* inApplicationPurchaseFactory = InApplicationPurchaseFactory::getInstance();;
    

    BasicArrayList* list = LockableFeatureFactory::getInstance()->getList();;
    

    LockableFeature* lockableFeature = dynamic_cast<LockableFeature*>(list->get(0));;
    

                        if(list->size() > 0 && !inApplicationPurchaseFactory->isPurchased(lockableFeature))
                        
                                    {
                                    inApplicationPurchaseFactory->purchase(lockableFeature);
    

                                    }
                                
                        else {
                            TextNotificationUtil::getInstance()->fireSuccess("Already Purchased");
    

                        }
                            

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->QUIT_COMMAND)
                        
                                    {
                                    
                        if(this->gameStartTimeHelper->isTimeTNT())
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const HighScoreTextBox*>(displayable) != nullptr)
                                    )
                        
                                    {
                                    
    MenuListener* menuListener = dynamic_cast<MenuListener*>(displayable);;
    
menuListener->close();
    

                                    }
                                
this->stopGameCanvasRunnableInterface();
    
this->gameMidletStateFactory->setCurrentGameState(this->gameStateFactory->NO_GAME_STATE);
    
this->setDemo();
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == this->myCommandsFactory->RESUME_COMMAND)
                        
                                    {
                                    this->unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == this->myCommandsFactory->PAUSE_COMMAND)
                        
                                    {
                                    this->pauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == this->myCommandsFactory->SET_DISPLAYABLE)
                        
                                    {
                                    this->pauseAppBackground(false);
    
this->setDisplay(displayable);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->SET_MENU_DISPLAYABLE)
                        
                                    {
                                    this->pauseAppBackground(false);
    

    MenuListener* menuListener = dynamic_cast<MenuListener*>(displayable);;
    
menuListener->open();
    
this->setDisplay(displayable);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->START_TRACE)
                        
                                    {
                                    this->debugInterface->start();
    

    AllBinaryGameCanvas* gameCanvas = dynamic_cast<AllBinaryGameCanvas*>(allbinaryGameCanvasRunnableInterface);;
    
gameCanvas->addCommand(gameCommandsFactory->STOP_TRACE);
    
gameCanvas->removeCommand(gameCommandsFactory->START_TRACE);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->STOP_TRACE)
                        
                                    {
                                    this->pauseAppBackground(false);
    
this->debugInterface->stop();
    
this->unPauseAppBackground(false);
    

    AllBinaryGameCanvas* gameCanvas = dynamic_cast<AllBinaryGameCanvas*>(allbinaryGameCanvasRunnableInterface);;
    
gameCanvas->addCommand(gameCommandsFactory->START_TRACE);
    
gameCanvas->removeCommand(gameCommandsFactory->STOP_TRACE);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->DEFAULT_OPTIONS)
                        
                                    {
                                    
    Displayable* tempDisplayable = displayable;;
    

                        if(
                                        (dynamic_cast<const GameOptionsForm*>(tempDisplayable) != nullptr)
                                    )
                        
                                    {
                                    GameFeatureFormUtil::getInstance()->setDefault(dynamic_cast<CommandForm*>(tempDisplayable));
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == GameInputMappingInstructionsCanvas::DISPLAY)
                        
                                    {
                                    
    Displayable* tempDisplayable = displayable;;
    

                        if(
                                        (dynamic_cast<const GameInputMappingCanvas*>(tempDisplayable) != nullptr)
                                    )
                        
                                    {
                                    
    GameInputMappingCanvas* gameInputMappingCanvas = dynamic_cast<GameInputMappingCanvas*>(tempDisplayable);;
    
gameInputMappingCanvas->update();
    

                                    }
                                
this->commandAction(gameCommandsFactory->SET_MENU_DISPLAYABLE, this->getInputMappingInstructionsCanvas());
    

                                    }
                                
                             else 
                        if(HighScoreCommandsFactory::getInstance()->isHighScoreCommand(command))
                        
                                    {
                                    
    Displayable* tempDisplayable = displayable;;
    

                        if(
                                        (dynamic_cast<const HighScoresCanvas*>(tempDisplayable) != nullptr)
                                    )
                        
                                    {
                                    
    HighScoresCanvas* highScoresCanvas = dynamic_cast<HighScoresCanvas*>(tempDisplayable);;
    
highScoresCanvas->updateCommand(command);
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == HighScoreCommands::getInstance()->DISPLAY)
                        
                                    {
                                    this->commandAction(gameCommandsFactory->SET_MENU_DISPLAYABLE, this->createHighScoresCanvas());
    

                                    }
                                
                             else 
                        if(command == GameInputMappingInstructionsCanvas::CLOSE)
                        
                                    {
                                    
    MenuListener* menuListener = dynamic_cast<MenuListener*>(displayable);;
    
menuListener->close();
    
this->commandAction(GameInputMappingCanvas::DISPLAY, NullCanvas::NULL_CANVAS);
    

                                    }
                                
                             else 
                        if(command == GameInputMappingCanvas::DISPLAY)
                        
                                    {
                                    
                        if(J2MEUtil::isHTML())
                        
                                    {
                                    this->pauseAppBackground(false);
    

                                    }
                                
this->commandAction(gameCommandsFactory->SET_MENU_DISPLAYABLE, this->getInputMappingCanvas());
    

                                    }
                                
                             else 
                        if(command == GameInputMappingCanvas::DEFAULT)
                        
                                    {
                                    
    Displayable* tempDisplayable = displayable;;
    

                        if(
                                        (dynamic_cast<const GameInputMappingCanvas*>(tempDisplayable) != nullptr)
                                    )
                        
                                    {
                                    
    GameInputMappingCanvas* gameInputMappingCanvas = dynamic_cast<GameInputMappingCanvas*>(tempDisplayable);;
    
gameInputMappingCanvas->setDefault();
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == InGameOptionsForm::DISPLAY)
                        
                                    {
                                    this->pauseAppBackground(false);
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->addNormalPortion(50, "In Game Options");
    

    AllBinaryGameLayerManager* layerManager = this->createGameLayerManager();;
    

    InGameOptionsFormFactory* inGameOptionsFormFactory = InGameOptionsFormFactory::getInstance();;
    
inGameOptionsFormFactory->init(this, new InGameFeatures(), "Options In Game", layerManager->getBackgroundBasicColor(), layerManager->getForegroundBasicColor());
    

    CommandForm* inGameOptionsForm = inGameOptionsFormFactory->get();;
    
inGameOptionsForm->setItemStateListener(allbinaryGameCanvasRunnableInterface);
    
this->commandAction(gameCommandsFactory->SET_MENU_DISPLAYABLE, inGameOptionsForm);
    

                                    }
                                
                             else 
                        if(command == InGameOptionsForm::DEFAULT)
                        
                                    {
                                    
    InGameOptionsForm* inGameOptionsForm = dynamic_cast<InGameOptionsForm*>(InGameOptionsFormFactory::getInstance()->get());;
    
GameFeatureFormUtil::getInstance()->setDefault(inGameOptionsForm);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->DISPLAY_OPTIONS)
                        
                                    {
                                    AllBinaryMediaManager::setMuted(true);
    
this->stopAll();
    

    MainFeatureFactory* mainFeatureFactory = MainFeatureFactory::getInstance();;
    
this->isFullScreen= this->features->isFeature(mainFeatureFactory->FULL_SCREEN);
    
ResizableListenerHandler::getInstance()->fireEvent(true);
    
this->setResized(false);
    
this->commandAction(gameCommandsFactory->SET_MENU_DISPLAYABLE, this->getGameOptionsForm());
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->CLOSE_OPTIONS)
                        
                                    {
                                    ResizableListenerHandler::getInstance()->fireEvent(false);
    
this->commandAction(gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS, displayable);
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Close isFullScreen/change: ");
    
stringBuffer->appendboolean(this->isFullScreen);
    
stringBuffer->appendboolean(this->fullScreenUtil->isScreenChange(this->isFullScreen));
    
stringBuffer->append(" isResized: ");
    
stringBuffer->appendboolean(this->isResized());
    
PreLogUtil::put(stringBuffer->toString(), this, this->COMMAND_ACTION);
    

                        if(this->isResized() || this->fullScreenUtil->isScreenChange(this->isFullScreen))
                        
                                    {
                                    this->updateFullScreen();
    

                                    }
                                
AllBinaryMediaManager::setMuted(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->DISPLAY_LOAD_FORM)
                        
                                    {
                                    this->pauseAppBackground(false);
    

    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton::getInstance();;
    
keyValuePersistance->clear();
    
keyValuePersistance->loadAll(this->abeClientInformation);
    

                        if(this->getLoadGameForm() == CommandForm::getNullCommandForm())
                        
                                    {
                                    
    AllBinaryGameLayerManager* layerManager = this->createGameLayerManager();;
    
this->setLoadGameForm(new LoadGameForm(this, "Load Game", layerManager->getBackgroundBasicColor(), layerManager->getForegroundBasicColor()));
    

                                    }
                                
                        else {
                            this->getLoadGameForm()->update();
    

                        }
                            
this->commandAction(gameCommandsFactory->SET_MENU_DISPLAYABLE, this->getLoadGameForm());
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->LOAD_FILE)
                        
                                    {
                                    
    LoadGameForm* loadGameForm = dynamic_cast<LoadGameForm*>(this->getLoadGameForm());;
    

    int32_t index = loadGameForm->getSelectedId();;
    

                        if(index !=  -1)
                        
                                    {
                                    
    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton::getInstance();;
    
this->setStartStateHashtable(keyValuePersistance->get(index));
    

    MenuListener* menuListener = this->getLoadGameForm();;
    
menuListener->close();
    
PreLogUtil::put(BasicMotionGesturesHandler::getInstance()->toString(), this, this->COMMAND_ACTION);
    
this->commandAction(gameCommandsFactory->START_COMMAND, NullCanvas::NULL_CANVAS);
    
PreLogUtil::put(BasicMotionGesturesHandler::getInstance()->toString(), this, this->COMMAND_ACTION);
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->DELETE_FILE)
                        
                                    {
                                    
    LoadGameForm* loadGameForm = dynamic_cast<LoadGameForm*>(this->getLoadGameForm());;
    

    int32_t index = loadGameForm->getSelectedText();;
    

                        if(index !=  -1)
                        
                                    {
                                    
    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton::getInstance();;
    
keyValuePersistance->delete_(this->abeClientInformation, index);
    
keyValuePersistance->clear();
    
keyValuePersistance->loadAllSize(this->abeClientInformation, 1);
    
this->getLoadGameForm()->update();
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->SAVE)
                        
                                    {
                                    
    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton::getInstance();;
    
this->pauseAppBackground(false);
    
keyValuePersistance->save(this->abeClientInformation, this->getCurrentStateHashtable());
    
this->unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == HighScoreUtil::SUBMIT_TEXTBOX_COMMAND)
                        
                                    {
                                    this->logUtil->putF("Submitted Score", this, this->COMMAND_ACTION);
    

                        if(
                                        (dynamic_cast<const HighScoreTextBox*>(displayable) != nullptr)
                                    )
                        
                                    {
                                    
    HighScoreTextBox* highScoreTextBox = dynamic_cast<HighScoreTextBox*>(displayable);;
    
highScoreTextBox->submitted= true;
    

                                    }
                                
allbinaryGameCanvasRunnableInterface->setHighScoreSubmitted(true);
    
this->commandAction(gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS, displayable);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->DISPLAY_ABOUT)
                        
                                    {
                                    this->aboutCommandProcessor->process(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, this->getAboutCanvas());
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->OPEN_WEB_URL)
                        
                                    {
                                    this->webCommandProcessor->process(this, gameCommandsFactory->OPEN_WEB_URL, NullCanvas::NULL_CANVAS);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory->TOGGLE_KEYBOARD)
                        
                                    {
                                    
    VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler::getInstance();;
    
virtualKeyboardEventHandler->fireEvent(virtualKeyboardEventHandler->SHOW_EVENT);
    

                                    }
                                
                             else 
                        if(this->tsUtil->compareTo(command->getLabel(), gameCommandsFactory->TOGGLE_FULLSCREEN->getLabel()) == 0)
                        
                                    {
                                    
    MainFeatureFactory* mainFeatureFactory = MainFeatureFactory::getInstance();;
    

    bool isFullScreen = this->features->isFeature(mainFeatureFactory->FULL_SCREEN);;
    

                        if(isFullScreen)
                        
                                    {
                                    this->features->removeDefault(mainFeatureFactory->FULL_SCREEN);
    

                                    }
                                
                        else {
                            this->features->addDefault(mainFeatureFactory->FULL_SCREEN);
    

                        }
                            
this->updateFullScreen();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put((new StringMaker())->append(this->commonStrings->EXCEPTION_LABEL)->append(command->getLabel())->toString(), this, this->midletStrings->COMMAND_ACTION, &e);
    

                        if(command != GameCommandsFactory::getInstance()->EXIT_COMMAND)
                        
                                    {
                                    this->exitProgress(false);
    

                                    }
                                
}

}


    auto GameMidlet::updateFullScreen() -> void{

    MainFeatureFactory* mainFeatureFactory = MainFeatureFactory::getInstance();;
    

    bool isFullScreen = this->features->isFeature(mainFeatureFactory->FULL_SCREEN);;
    

    Displayable* displayable = this->getDisplay()->getCurrent();;
    

                        if(
                                        (dynamic_cast<const Canvas*>(displayable) != nullptr)
                                    )
                        
                                    {
                                    
    Canvas* canvas = dynamic_cast<Canvas*>(displayable);;
    
canvas->setFullScreenMode(isFullScreen);
    

                                    }
                                
}


    auto GameMidlet::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::getInputMappingInstructionsCanvas() -> MyCanvas*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GameInputMappingInstructionsCanvas(this, this->createGameLayerManager());
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::getInputMappingCanvas() -> MyCanvas*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GameInputMappingCanvas(this->abeClientInformation, this, this->createGameLayerManager(), this->getHelpPaintable());
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::getAboutCanvas() -> MyCanvas*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BasicPaintablesCanvas(this, CanvasStrings::getInstance()->ABOUT, this->createGameLayerManager(), AboutPaintableFactory::getInstance()->paintableArray);
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::getHelpPaintable() -> HelpPaintable*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::createHighScoresCanvas() -> HighScoresCanvas*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::startGameCanvasRunnableInterface() -> void{

    ThreadFactoryUtil* threadFactoryUtil = ThreadFactoryUtil::getInstance();;
    
this->thread= threadFactoryUtil->getInstanceGameCanvasRunnable(this->allbinaryGameCanvasRunnableInterface);
    
this->logUtil->putF((new StringMaker())->append("Thread Priority: ")->appendint(this->thread->getPriority())->toString(), this, "startGameCanvasRunnableInterface");
    
this->allbinaryGameCanvasRunnableInterface->setThread(this->thread);
    
threadFactoryUtil->start(this->thread);
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::stopGameCanvasRunnableInterface() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    
GameNotificationEventHandler::getInstance()->removeAllListeners();
    
ColorChangeEventHandler::getInstance()->removeAllListeners();
    
GameEventHandlerUtil::removeAllListeners();
    

    GameCanvasRunnableInterface* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;;
    

                        if(gameCanvasRunnableInterface != NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Set Running False: ")->append(gameCanvasRunnableInterface->toString())->toString(), this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    
gameCanvasRunnableInterface->setRunning(false);
    

                                    }
                                
                        else {
                            this->logUtil->putF("StopGame - Could Not Stop", this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    

                        }
                            
ThreadUtil::getInstance()->join(this->thread);
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

                        if(this->features->isFeature(MainFeatureFactory::getInstance()->LOAD_ALL))
                        
                                    {
                                    progressCanvas->addNormalPortion(50, "Stopped Game Runnable");
    

                                    }
                                
                        else {
                            progressCanvas->addNormalPortion(50, "Stopped Main Runnable");
    

                        }
                            
this->logUtil->putF(this->commonStrings->END, this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    
}


    auto GameMidlet::getGameCanvasRunnableInterface() -> GameCanvasRunnableInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->allbinaryGameCanvasRunnableInterface;
    
}


    auto GameMidlet::setGameCanvasRunnableInterface(GameCanvasRunnableInterface* gameCanvasRunnableInterface) -> void{
this->allbinaryGameCanvasRunnableInterface= gameCanvasRunnableInterface;
    
}


    auto GameMidlet::createGameLayerManager() -> AllBinaryGameLayerManager*{

    GameInfo* gameInfo = new GameInfo(GameTypeFactory::getInstance()->SINGLE_PLAYER, GameMode::SERVER, PlayerTypesFactory::getInstance()->PLAYER_TYPE_ONE, 1, 1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AllBinaryGameLayerManager(this->basicColorFactory->BLACK, this->basicColorFactory->WHITE, gameInfo);
    
}


    auto GameMidlet::getGameOptionsForm() -> CommandForm*{

    AllBinaryGameLayerManager* layerManager = this->createGameLayerManager();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameOptionsFormFactory::getInstance()->init(this, "Game Options", layerManager->getBackgroundBasicColor(), layerManager->getForegroundBasicColor());;
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::save() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->SAVE);
    

    ABHashtable<Object*, Object*>* hashtable = this->getCurrentStateHashtable();;
    
GamePersistanceSingleton::getInstance()->save(this->abeClientInformation, hashtable);
    
}


                //@Throws(Exception.constructor)
            
    auto GameMidlet::getCurrentStateHashtable() -> ABHashtable<Object*, Object*>*{
this->logUtil->putF(this->commonStrings->START, this, "getCurrentStateHashtable");
    

    ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();;
    

                        if(this->allbinaryGameCanvasRunnableInterface != NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    
    ABHashtable<Object*, Object*>* currentHashtable = this->allbinaryGameCanvasRunnableInterface->getCurrentStateHashtable();;
    

    Enumeration<Object*>* enumeration = currentHashtable->keys();;
    

    Object* key;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
key= this->enumerationUtil->nextElement(enumeration);
    
hashtable->put(key, currentHashtable->get(key));
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashtable;
    
}


    auto GameMidlet::setLoadGameForm(LoadGameForm* loadGameForm) -> void{
this->loadGameForm= loadGameForm;
    
}


    auto GameMidlet::getLoadGameForm() -> CommandForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->loadGameForm;
    
}


    auto GameMidlet::setResized(bool resized) -> void{
this->resized= resized;
    
}


    auto GameMidlet::isResized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->resized;
    
}


    auto GameMidlet::isDemoLoading() -> bool{

                        if(this->startedBefore)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                

    Displayable* displayable = this->getDisplay()->getCurrent();;
    

                        if(
                                        (dynamic_cast<const DemoCanvas*>(displayable) != nullptr)
                                    )
                        
                                    {
                                    
    DemoCanvas* demoCanvas = dynamic_cast<DemoCanvas*>(displayable);;
    

                        if(demoCanvas->isDemoLoading())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_CPP
