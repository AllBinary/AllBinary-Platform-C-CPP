
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/StartCanvas.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <org/allbinary/animation/special/SpecialAnimation.h>

      
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/CustomGameMenuUtil.h>

      
#include <org/allbinary/canvas/FullScreenUtil.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/init/BasicBuildGameInitializerFactory.h>

      
#include <org/allbinary/game/init/GameInitializationUtil.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/game/midlet/DemoGameMidlet.h>

      
#include <org/allbinary/game/score/HighScoreCommands.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresHelper.h>

      
#include <org/allbinary/game/score/HighScoresPaintable.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/ResizableListenerHandler.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/graphics/form/FormType.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/graphics/opengles/OpenGLThreadUtil.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/graphics/paint/StatePaintable.h>

      
#include <org/allbinary/graphics/paint/StatePaintableFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockableFeature.h>

      
#include <org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/AllBinaryMediaManager.h>

      
#include <org/allbinary/media/audio/EarlySoundsFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"


StartCanvas::StartCanvas(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) : RunnableCanvas(commandListener, CurrentDisplayableFactory::getInstance()->DEFAULT_CHILD_NAME_LIST, true), basicColorFactory(BasicColorFactory::getInstance()), features(Features::getInstance()), openGLFeatureFactory(OpenGLFeatureFactory::getInstance()), myCommandsFactory(MyCommandsFactory::getInstance()), gameAdStateFactory(GameAdStateFactory::getInstance()), gameStateFactory(GameStateFactory::getInstance()), gameInputStrings(GameInputStrings::getInstance()), formUtil(FormUtil::getInstance()), basicGameDemoPaintable(StatePaintableFactory::getInstance()), specialAnimationInterface(SpecialAnimation::getInstance()), paintedSpecialAnimationInterface(SpecialAnimation::getInstance()), fullScreenUtil(FullScreenUtil::getInstance()), highScoresHelper(new HighScoresHelper()), realHighScoresPaintable(new HighScoresPaintable()), highScoresPaintable(NullPaintable::getInstance()), timeDelayHelper(new TimeDelayHelper(6000)), menuInputProcessor(NoMenuInputProcessor::getInstance()), menuForm(ScrollSelectionForm::getNullScrollSelectionForm()), defaultPaintableInterface(NullPaintable::getInstance()), paintableInterface(NullPaintable::getInstance()), tempWait(NullWaitGameRunnable::getInstance()->WAIT), inputToGameKeyMapping(PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping()), gameRunnable(NullWaitGameRunnable::getInstance()), progressPaintable(ProgressCanvasFactory::getLazyInstance()), isSingleKeyRepeatableProcessing(this->features->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS)), NONE(GameKeyFactory::getInstance()->NONE), gameKeyEventFactory(GameKeyEventFactory::getInstance()), baseGameStatistics(GameStatisticsFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setWait(NullWaitGameRunnable::getInstance()->WAIT);
    
this->gameInitializationInterfaceFactoryInterface= gameInitializationInterfaceFactoryInterface;
    
GameInitializationUtil::getInstance()->initDemo(abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
    
ResizableListenerHandler::getInstance()->fireEvent(false);
    
this->overlayPaintable= overlayPaintable;
    
this->highScoresFactoryInterface= highScoresFactoryInterface;
    
this->setDefaultPaintableInterface(paintable);
    
this->setPaintableInterface(this->getDefaultPaintableInterface());
    

                        if(isContinue)
                        
                                    {
                                    this->addCommand(GameCommandsFactory::getInstance()->CONTINUE_COMMAND);
    

                                    }
                                

                        if(ChangedGameFeatureListener::getInstance()->isChangedFeature(GameFeatureFactory::getInstance()->SOUND))
                        
                                    {
                                    this->mediaInit();
    

                                    }
                                
DisplayChangeEventHandler::getInstance()->addListenerInterface(this);
    
}


    auto StartCanvas::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto StartCanvas::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{

        try {
            
    ScrollSelectionForm* scrollSelectionForm = this->getMenuForm();;
    

                        if(scrollSelectionForm != 
                                    nullptr
                                )
                        
                                    {
                                    
    FormType* formType = FormTypeFactory::getInstance()->getFormType();;
    

    Rectangle* rectangle = this->formUtil->createFormRectangle();;
    
scrollSelectionForm->init(rectangle, formType);
    

                                    }
                                
this->overlayPaintable->init();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, &e);
    
}

}


    auto StartCanvas::getCustomCommands() -> std::vector<Object*>{

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    
    std::vector<Object*> commandArray = 
                                                        {
                                                            JavaBoxes::toObject(gameCommandsFactory->START_COMMAND),JavaBoxes::toObject(HighScoreCommands::getInstance()->DISPLAY),JavaBoxes::toObject(GameInputMappingCanvas::DISPLAY),JavaBoxes::toObject(gameCommandsFactory->DISPLAY_ABOUT)
                                                        };;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return commandArray;
    

                                    }
                                
                        else {
                            
    BasicArrayList* commandList = new BasicArrayListD();;
    
commandList->add(gameCommandsFactory->START_COMMAND);
    

    InApplicationPurchaseFactory* inApplicationPurchaseFactory = InApplicationPurchaseFactory::getInstance();;
    

                        if(inApplicationPurchaseFactory->isEnabled())
                        
                                    {
                                    
    BasicArrayList* list = LockableFeatureFactory::getInstance()->getList();;
    

                        if(list->size() > 0 && !inApplicationPurchaseFactory->isPurchased(dynamic_cast<LockableFeature*>(list->get(0))))
                        
                                    {
                                    commandList->add(gameCommandsFactory->BUY_COMMAND);
    

                                    }
                                

                                    }
                                
commandList->add(HighScoreCommands::getInstance()->DISPLAY);
    

        try {
            
    bool isOverScan = OperatingSystemFactory::getInstance()->getOperatingSystemInstance()->isOverScan();;
    

                        if(SWTUtil::isSWT)
                        
                                    {
                                    commandList->add(GameInputMappingCanvas::DISPLAY);
    

                                    }
                                
                             else 
                        if(!isOverScan)
                        
                                    {
                                    commandList->add(gameCommandsFactory->DISPLAY_OPTIONS);
    
commandList->add(gameCommandsFactory->DISPLAY_LOAD_FORM);
    
commandList->add(GameInputMappingCanvas::DISPLAY);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
}

commandList->add(gameCommandsFactory->DISPLAY_ABOUT);
    

    std::vector<Object*> commandArray = commandList->toArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return commandArray;
    

                        }
                            
}


    auto StartCanvas::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    

    std::vector<Object*> commandArray = this->getCustomCommands();;
    

    int32_t size = commandArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->addCommand(dynamic_cast<Command*>(commandArray[index]));
    
}

CustomGameMenuUtil::add(this);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::initPostPaint() -> void{
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::mediaInit() -> void{
AllBinaryMediaManager::init(EarlySoundsFactory::getInstance());
    
}


    auto StartCanvas::itemStateChanged(Item* item) -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::initMenu() -> void{
this->close();
    
this->open();
    
}


    auto StartCanvas::open() -> void{
BasicMotionGesturesHandler::getInstance()->addListenerInterface(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance()->addListener(this->getMenuInputProcessor());
    
}


    auto StartCanvas::close() -> void{
BasicMotionGesturesHandler::getInstance()->removeListener(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance()->removeListener(this->getMenuInputProcessor());
    
}


    auto StartCanvas::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StartCanvas::id;
    
}


    auto StartCanvas::keyPressed(int32_t keyCode) -> void{
this->keyPressedByDevice(keyCode, 0);
    
}


    auto StartCanvas::keyReleased(int32_t keyCode) -> void{
this->keyReleasedByDevice(keyCode, 0);
    
}


    auto StartCanvas::keyRepeated(int32_t keyCode) -> void{
this->keyRepeatedByDevice(keyCode, 0);
    
}


    auto StartCanvas::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->addGameKeyEvent(keyCode, false);
    
}


    auto StartCanvas::keyReleasedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->removeGameKeyEvent(keyCode, false);
    
}


    auto StartCanvas::keyRepeatedByDevice(int32_t keyCode, int32_t deviceId) -> void{

                        if(this->isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this->addGameKeyEvent(keyCode, true);
    

                                    }
                                
}


    auto StartCanvas::addGameKeyEvent(int32_t keyCode, bool repeated) -> void{

        try {
            
    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->NONE)
                        
                                    {
                                    
    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(this, gameKey);;
    
DownGameKeyEventHandler::getInstance()->fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->gameInputStrings->NO_KEY)->appendint(keyCode)), this, this->gameInputStrings->ADD_KEY_EVENT);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, &e);
    
}

}


    auto StartCanvas::removeGameKeyEvent(int32_t keyCode, bool repeated) -> void{

        try {
            
    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->NONE)
                        
                                    {
                                    
    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(this, gameKey);;
    
UpGameKeyEventHandler::getInstance()->fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->gameInputStrings->NO_KEY)->appendint(keyCode)), this, this->gameInputStrings->REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, &e);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto StartCanvas::pause() -> void{
this->close();
    
this->setPaused(true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto StartCanvas::unPause() -> void{
this->open();
    
this->setPaused(false);
    
}


    auto StartCanvas::isPausable() -> bool{

                        if(CurrentDisplayableFactory::getInstance()->getUsedRunnable() == NullWaitGameRunnable::getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto StartCanvas::isGameOver() -> bool{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->commonStrings->NOT_IMPLEMENTED)->append(" since not a game")), this, "isGameOver");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable) -> void{
this->logUtil->putF("Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::getLoadStateHashtable() -> ABHashtable<Object*, Object*>*{
this->logUtil->putF("Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->stdUtil->NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::getCurrentStateHashtable() -> ABHashtable<Object*, Object*>*{
this->logUtil->putF("Trying to save the AI lol", this, "getCurrentStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->stdUtil->NULL_TABLE;
    
}


    auto StartCanvas::setHighScoreSubmitted(bool isNotUsed) -> void{
}


    auto StartCanvas::paint(Graphics* graphics) -> void{
this->paintableInterface->paint(graphics);
    
this->paintedSpecialAnimationInterface->paintXY(graphics, 0, 0);
    
this->highScoresPaintable->paint(graphics);
    
this->getBasicGameDemoPaintable()->paint(graphics);
    
this->overlayPaintable->paint(graphics);
    
this->progressPaintable->paint(graphics);
    
}


    auto StartCanvas::paintThreed(Graphics* graphics) -> void{
this->paintableInterface->paintThreed(graphics);
    
this->paintedSpecialAnimationInterface->paintThreedXYZ(graphics, 0, 0, 0);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto StartCanvas::processGameOver() -> void{
this->logUtil->putF("Not Implemented since not a game", this, "setGameOver");
    
}


    auto StartCanvas::demoStateChange() -> void{

    int32_t newState = this->state +1;;
    

                        if(newState > 2)
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                             else 
                        if(newState == 2)
                        
                                    {
                                    
                        if(!this->highScoresHelper->isAnyHighScores())
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                        else {
                            
    HighScores* highScores = this->highScoresHelper->getNextHighScores();;
    

                        if(highScores == NullHighScoresSingletonFactory::getInstance())
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                        else {
                            this->getRealHighScoresPaintable()->setHighScores(highScores);
    

                        }
                            

                        }
                            

                                    }
                                
this->setState(newState);
    
this->updateDemoState();
    
}


    auto StartCanvas::updateDemoState() -> void{
PreLogUtil::put(JavaString::valueOf(SmallIntegerSingletonFactory::getInstance()->createInstance(this->state)), this, this->SET_STATE);
    
this->getBasicGameDemoPaintable()->setState(this->state);
    

                        if(this->state == 0)
                        
                                    {
                                    this->highScoresPaintable= NullPaintable::getInstance();
    
this->paintedSpecialAnimationInterface= this->getSpecialAnimationInterface();
    
this->getSpecialAnimationInterface()->reset();
    

                                    }
                                
                             else 
                        if(this->state == 1)
                        
                                    {
                                    this->paintedSpecialAnimationInterface= SpecialAnimation::getInstance();
    

                                    }
                                
                             else 
                        if(this->state == 2)
                        
                                    {
                                    this->highScoresPaintable= this->getRealHighScoresPaintable();
    

                                    }
                                

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->processPageAdState();
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::getNextRandom() -> int32_t{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::createGameLayerManager(int32_t randomValue) -> AllBinaryGameLayerManager*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::createRunnable(int32_t randomLevel) -> GameCanvasRunnableInterface*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::createCanvas() -> void{
this->highScoresPaintable= NullPaintable::getInstance();
    

    int32_t randomLevel = this->getNextRandom();;
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::start() -> void{
}


    auto StartCanvas::preDemoProcess() -> void{
this->overlayPaintable->update();
    
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::process() -> void{
this->getMenuInputProcessor()->processInputList();
    
this->preDemoProcess();
    

                        if(this->state == 0)
                        
                                    {
                                    
    IndexedAnimationBehavior* indexedAnimationBehavior = dynamic_cast<IndexedAnimationBehavior*>(this->getSpecialAnimationInterface()->getAnimationBehavior());;
    

                        if(indexedAnimationBehavior->loopIndex < 1)
                        
                                    {
                                    this->timeDelayHelper->setStartTimeTNT();
    

                                    }
                                

    DemoGameMidlet* demoGameMidlet = dynamic_cast<DemoGameMidlet*>(this->getCustomCommandListener());;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::startDemoGame() -> void{
}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::processGame() -> void{
this->gameRunnable->run();
    
this->specialAnimationInterface->nextFrame();
    
this->process();
    
}


    auto StartCanvas::run() -> void{
this->logUtil->putF(this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
    

        try {
            
    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->addNormalPortion(50, "Demo Thread");
    
this->setCurrentThread();
    
this->setRunning(true);
    

                        if(this->features->isFeature(MainFeatureFactory::getInstance()->LOAD_ONDEMAND))
                        
                                    {
                                    progressCanvas->end();
    

                                    }
                                
                        else {
                            progressCanvas->addNormalPortion(50, "Demo Thread Running");
    

                        }
                            
this->fullScreenUtil->initOnRun(this, this->getCustomCommandListener());
    
this->initMenu();
    
this->initPostPaint();
    
this->updateDemoState();
    

                        if(this->features->isDefault(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    OpenGLThreadUtil::getInstance()->onResume();
    

                                    }
                                

                        if(this->features->isDefault(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
        while(this->isRunning())
        {
this->loopTimeHelper->setStartTimeTNT();
    
this->processGame();
    
this->processLoopSleep();
    
}

this->end();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    
}


    auto StartCanvas::setRunning(bool running) -> void{
RunnableCanvas::setRunning(running);
    

        try {
            
                        if((this->features->isDefault(this->openGLFeatureFactory->OPENGL) || J2MEUtil::isHTML()) && !running)
                        
                                    {
                                    
    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory->clearRunnable();
    
this->end();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->SET_RUNNING, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto StartCanvas::end() -> void{

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
this->baseGameStatistics->add(JavaString::valueOf((new StringMaker())->append(StartCanvas::BOT_GAME_STATS)->append(JavaString::valueOf(this->baseGameStatistics))->append(CommonSeps::getInstance()->NEW_LINE)));
    
this->baseGameStatistics->init();
    

                        if(this->features->isFeature(MainFeatureFactory::getInstance()->LOAD_ONDEMAND))
                        
                                    {
                                    progressCanvas->start();
    

                                    }
                                
this->logUtil->putF("Demo End", this, this->commonStrings->RUN);
    
this->close();
    
DisplayChangeEventHandler::getInstance()->removeListener(this);
    
}


    auto StartCanvas::setGameState(GameState* gameState) -> void{
}


    auto StartCanvas::getGameState() -> GameState*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameStateFactory->PLAYING_GAME_STATE;
    
}


    auto StartCanvas::getState() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->state;
    
}


    auto StartCanvas::setState(int32_t state) -> void{
this->state= state;
    
}


    auto StartCanvas::isHighScoreSubmitted() -> bool{
this->logUtil->putF("Wow the AI got a high score!", this, "isHighScoreSubmitted");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto StartCanvas::getRealHighScoresPaintable() -> HighScoresPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->realHighScoresPaintable;
    
}


    auto StartCanvas::setSpecialAnimationInterface(SpecialAnimation* specialAnimationInterface) -> void{
specialAnimationInterface->setFrame(0);
    
this->specialAnimationInterface= specialAnimationInterface;
    
}


    auto StartCanvas::getSpecialAnimationInterface() -> SpecialAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->specialAnimationInterface;
    
}


    auto StartCanvas::setPaintableInterface(PaintableInterface* paintableInterface) -> void{
this->paintableInterface= paintableInterface;
    
}


    auto StartCanvas::getPaintableInterface() -> PaintableInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paintableInterface;
    
}


    auto StartCanvas::setDefaultPaintableInterface(Paintable* defaultPaintableInterface) -> void{
this->defaultPaintableInterface= defaultPaintableInterface;
    
}


    auto StartCanvas::getDefaultPaintableInterface() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->defaultPaintableInterface;
    
}


    auto StartCanvas::getHighScoresFactoryInterface() -> HighScoresFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->highScoresFactoryInterface;
    
}


    auto StartCanvas::setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor) -> void{
this->menuInputProcessor= menuInputProcessor;
    
}


    auto StartCanvas::getMenuInputProcessor() -> BasicMenuInputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuInputProcessor;
    
}


    auto StartCanvas::getMenuForm() -> ScrollSelectionForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuForm;
    
}


    auto StartCanvas::setMenuForm(ScrollSelectionForm* menuForm) -> void{
this->menuForm= menuForm;
    
}


    auto StartCanvas::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->initialized;
    
}


    auto StartCanvas::getOverlayPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->overlayPaintable;
    
}


    auto StartCanvas::setBasicGameDemoPaintable(StatePaintable* basicGameDemoPaintable) -> void{
this->basicGameDemoPaintable= basicGameDemoPaintable;
    
}


    auto StartCanvas::getBasicGameDemoPaintable() -> StatePaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicGameDemoPaintable;
    
}


    auto StartCanvas::setTempWait(int32_t tempWait) -> void{
this->tempWait= tempWait;
    
}


    auto StartCanvas::getTempWait() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tempWait;
    
}


    auto StartCanvas::isSingleThread() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLFeatureUtil::getInstance()->isAnyThreed() || SWTUtil::isSWT;
    
}


    auto StartCanvas::isRunningInAnotherThread() -> bool{

    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(features->isDefault(openGLFeatureFactory->OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isRunning();;
    

                        }
                            
}


    auto StartCanvas::getGameInitializationInterfaceFactoryInterface() -> BasicBuildGameInitializerFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameInitializationInterfaceFactoryInterface;
    
}


    auto StartCanvas::getTitle() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RunnableCanvas::getTitle();;
    
}


    auto StartCanvas::isPaused() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RunnableCanvas::isPaused();;
    
}


    auto StartCanvas::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RunnableCanvas::getType();;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_CPP
