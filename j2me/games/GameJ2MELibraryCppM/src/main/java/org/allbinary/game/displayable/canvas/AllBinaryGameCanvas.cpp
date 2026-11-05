
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/GameStrings.h>

      
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/game/Intermission.h>

      
#include <org/allbinary/game/IntermissionCompositeInterface.h>

      
#include <org/allbinary/game/IntermissionEnableListenerInterface.h>

      
#include <org/allbinary/game/IntermissionInterface.h>

      
#include <org/allbinary/game/PlayerTypesFactory.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/InGameFeatures.h>

      
#include <org/allbinary/game/configuration/InGameOptionsForm.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureUtil.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/TouchFeatureFactory.h>

      
#include <org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h>

      
#include <org/allbinary/game/init/BasicBuildGameInitializerFactory.h>

      
#include <org/allbinary/game/init/GameInitializationUtil.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/InputProcessor.h>

      
#include <org/allbinary/game/input/NoPlayerGameInput.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresPaintable.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/game/score/displayable/HighScoreTextBox.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/ScreenCapture.h>

      
#include <org/allbinary/graphics/ScreenCaptureFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>

      
#include <org/allbinary/graphics/form/FormPaintable.h>

      
#include <org/allbinary/graphics/form/FormType.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>

      
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/graphics/opengles/OpenGLThreadUtil.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/image/opengles/OpenGLImageSpecificFactory.h>

      
#include <org/allbinary/input/gyro/SensorGameUpdateProcessor.h>

      
#include <org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h>

      
#include <org/allbinary/input/motion/button/BaseTouchInput.h>

      
#include <org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h>

      
#include <org/allbinary/input/motion/button/TouchButtonFactory.h>

      
#include <org/allbinary/input/motion/button/TouchButtonsPaintableFactory.h>

      
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/AllBinaryMediaManager.h>

      
#include <org/allbinary/media/audio/PlayerQueue.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/SecondaryThreadPool.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInterface.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h"
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#include "org/allbinary/game/displayable/canvas/MyFormUtil.h"
#include "org/allbinary/game/displayable/canvas/EndGameInfo.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#include "org/allbinary/game/displayable/canvas/BaseGameBehavior.h"
#include "org/allbinary/game/displayable/canvas/BasicPopupMenuPaintable.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/InGameMenuBehavior.h"
#include "org/allbinary/game/displayable/canvas/GameLimitedCommandTextItemArrayFactory.h"
#include "org/allbinary/game/displayable/canvas/PopupCommandFormInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameProcessor.h"
#include "org/allbinary/game/displayable/canvas/CheatGameInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/EndGameProcessor.h"
#include "org/allbinary/game/displayable/canvas/StartIntermissionProcessor.h"
#include "org/allbinary/game/displayable/canvas/EndGamePaintable.h"
#include "org/allbinary/game/displayable/canvas/NullDemoPaintable.h"
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/FormInputProcessor.h"


AllBinaryGameCanvas::AllBinaryGameCanvas(CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) : RunnableCanvas(commandListener, CanvasStrings::getInstance()->EMPTY_CHILD_NAME_LIST, true), basicColorFactory(BasicColorFactory::getInstance()), basicSetColorUtil(BasicColorSetUtil::getInstance()), touchFeatureFactory(TouchFeatureFactory::getInstance()), openGLFeatureFactory(OpenGLFeatureFactory::getInstance()), touchButtonFactory(TouchButtonFactory::getInstance()), gameAdStateFactory(GameAdStateFactory::getInstance()), gameStrings(GameStrings::getInstance()), gameInputStrings(GameInputStrings::getInstance()), gameStateFactory(GameStateFactory::getInstance()), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()), gameTickDisplayInfoSingleton(GameTickDisplayInfoSingleton::getInstance()), gameRunnable(new GameCanvasRunnable(this)), gamePauseRunnable(new GameCanvasPauseRunnable(this)), formUtil(FormUtil::getInstance()), myFormUtil(MyFormUtil::getInstance()), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), gameSpecificPaintable(NullPaintable::getInstance()), sensorGameUpdateProcessor(new SingleSensorGameUpdateProcessor()), endGameInfo(new EndGameInfo()), startIntermissionInterface(new Intermission()), endLevelIntermissionInterface(new Intermission()), gameLayerManager(AllBinaryGameLayerManager::getNullInstance()), gameState(this->gameStateFactory->NO_GAME_STATE), gameStateTimeHelper(new TimeDelayHelper(0)), realHighScoresPaintable(new HighScoresPaintable()), highScoresPaintable(NullPaintable::getInstance()), localPlayerGameInputList(new BasicArrayListD()), hashtable(this->stdUtil->NULL_TABLE), gameInitializationInterfaceFactoryInterface(BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY), touchButtonsPaintable(NullPaintable::getInstance()), touchPaintable(NullPaintable::getInstance()), cheatProcessor(NoPlayerGameInput::getInstance()), gameInputProcessor(Processor::getInstance()), endGameProcessor(Processor::getInstance()), realEndGameProcessor(Processor::getInstance()), startIntermissionProcessor(Processor::getInstance()), realStartIntermissionProcessor(Processor::getInstance()), endGamePaintable(NullPaintable::getInstance()), endGameStatePaintable(NullPaintable::getInstance()), nonBotPaintable(NullPaintable::getInstance()), intermissionPaintable(NullPaintable::getInstance()), startIntermissionPaintable(NullInitUpdatePaintable::getInstance()), mainStateProcessor(Processor::getInstance()), processGameProcessor(Processor::getInstance()), mainMenuInputProcessor(NoMenuInputProcessor::getInstance()), popupMenuInputProcessor(NoMenuInputProcessor::getInstance()), menuInputProcessor(NoMenuInputProcessor::getInstance()), menuForm(ScrollSelectionForm::getNullScrollSelectionForm()), formPaintable(NullPaintable::getInstance()), openMenuPaintable(NullPaintable::getInstance()), menuPaintable(NullPaintable::getInstance()), currentTouchInputFactory(NoButtonsTouchInputFactory::getInstance()), colorFillPaintable(ColorFillPaintableFactory::getInstance()->getInstance(this->basicColorFactory->BLACK, true)), baseGameStatistics(GameStatisticsFactory::getInstance()), primaryPlayerQueue(PrimaryPlayerQueueFactory::getInstance()), secondaryPlayerQueue(SecondaryPlayerQueueFactory::getInstance()), gameTypeFactory(GameTypeFactory::getInstance()), screenCapture(ScreenCaptureFactory::getInstance()), basicMotionGesturesHandler(BasicMotionGesturesHandler::getInstance()), gameKeyEventHandler(GameKeyEventHandler::getInstance()), progressPaintable(ProgressCanvasFactory::getLazyInstance()), gameCanvasStartListener(NullDemoPaintable::NULL_DEMO_PAINTABLE), rawGameInputProcessor(new GameCanvasInputProcessor(this)), rawInputProcessor(new FormInputProcessor(this)), inputProcessor(this->getRawGameInputProcessor()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->highScoresHelper= highScoresFactoryInterface->createHighScoresHelper();
    
this->gameInitializationInterfaceFactoryInterface= gameInitializationInterfaceFactoryInterface;
    
this->init(gameLayerManager, buffered);
    
this->highScoresFactoryInterface= highScoresFactoryInterface;
    

                        if(this->gameLayerManager->getGameInfo()->getGameType() == this->gameTypeFactory->BOT || this->gameLayerManager->getGameInfo()->getGameType() == this->gameTypeFactory->NONE)
                        
                                    {
                                    this->gameBehavior= DemoGameBehavior::getInstance();
    
this->menuBehavior= BaseMenuBehavior::getInstance();
    

                                    }
                                
                        else {
                            this->gameBehavior= BaseGameBehavior::getInstance();
    
this->menuBehavior= this->getInGameMenuBehavior();
    

                        }
                            
this->initPopupMenu();
    
this->initMenu();
    
this->initSpecialPaint();
    
DisplayChangeEventHandler::getInstance()->addListenerInterface(this);
    
}


    auto AllBinaryGameCanvas::updateMeasurement(Graphics* graphics) -> void{

        try {
            
    Font* font = graphics->getFont();;
    
this->logUtil->putF((new StringMaker())->append(this->commonStrings->START)->append(this->canvasStrings->FD_WIDTH)->appendint(MyFontProcessor::defaultCharWidth(font))->append(this->canvasStrings->FD_HEIGHT)->appendint(font->getHeight())->toString(), this, this->canvasStrings->UPDATE_MEASUREMENT);
    
this->fontHeightP= font->getHeight();
    
this->myFormUtil->updateMeasurement(graphics);
    

    Rectangle* popupMenuRectangle = this->myFormUtil->getPopupMenuRectangle();;
    

    BasicPopupMenuPaintable* basicPopupMenuPaintable = (dynamic_cast<BasicPopupMenuPaintable*>(this->getOpenMenuPaintable()));;
    
basicPopupMenuPaintable->init(popupMenuRectangle);
    

                        if(this->getPopupMenuInputProcessor() != NoMenuInputProcessor::getInstance())
                        
                                    {
                                    
    PopupMenuInputProcessor* popupMenuInputProcessor = (dynamic_cast<PopupMenuInputProcessor*>(this->getPopupMenuInputProcessor()));;
    
popupMenuInputProcessor->init(popupMenuRectangle);
    

                                    }
                                
this->myFontProcessor= MyFontProcessor::getInstance();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, &e);
    
}

}


    auto AllBinaryGameCanvas::getInGameMenuBehavior() -> BaseMenuBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InGameMenuBehavior::getInstance();;
    
}


    auto AllBinaryGameCanvas::setCurrentThread() -> void{

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    RunnableCanvas::setCurrentThreadFake();
    

                                    }
                                
                        else {
                            RunnableCanvas::setCurrentThread();
    

                        }
                            
}


    auto AllBinaryGameCanvas::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto AllBinaryGameCanvas::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{

        try {
            this->logUtil->putF((new StringMaker())->append(this->commonStrings->START)->append(DisplayInfoSingleton::getInstance()->toString())->toString(), this, this->canvasStrings->UPDATE_MEASUREMENT);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
this->menuBehavior->onDisplayChangeEvent(this, displayChangeEvent);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateMenuFromEvent(DisplayChangeEvent* displayChangeEvent) -> void{

    FormType* formType = FormTypeFactory::getInstance()->getFormType();;
    

    Rectangle* rectangle = this->formUtil->createFormRectangle();;
    
this->menuForm->init(rectangle, formType);
    

                        if(this->currentTouchInputFactory != NoButtonsTouchInputFactory::getInstance())
                        
                                    {
                                    this->touchButtonFactory->toggle(this->isPaused(), this->currentTouchInputFactory->getList());
    

                                    }
                                
this->myFontProcessor= this->updateMyFontProcessor;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::processSleep() -> void{
RunnableCanvas::processSleep();
    

                        if(AllBinaryMediaManager::update())
                        
                                    {
                                    
                        if(!this->primaryPlayerQueue->process())
                        
                                    {
                                    this->secondaryPlayerQueue->process();
    

                                    }
                                

                                    }
                                

                        if(this->menuInputProcessor->processInputList() !=  -1)
                        
                                    {
                                    this->runnableCanvasRefreshHelper->process();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::initPopupMenu() -> void{

                        if(this->popupMenuInputProcessor == NoMenuInputProcessor::getInstance())
                        
                                    {
                                    
    Features* features = Features::getInstance();;
    

    Rectangle* popupMenuRectangle = this->myFormUtil->getPopupMenuRectangle();;
    

                        if(features->isFeature(this->touchFeatureFactory->TOUCH_ENABLED))
                        
                                    {
                                    this->setOpenMenuPaintable(new BasicPopupMenuPaintable(popupMenuRectangle, this->gameLayerManager->getBackgroundBasicColor(), this->gameLayerManager->getForegroundBasicColor()));
    
this->setPopupMenuInputProcessor(new PopupMenuInputProcessor(new BasicArrayListD(),  -1, this, popupMenuRectangle));
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
}


    auto AllBinaryGameCanvas::initMenu() -> void{

        try {
            this->menuBehavior->initMenu(this);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "initMenu", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::initMenu2() -> void{
this->closeMenu();
    

    FormType* formType = FormTypeFactory::getInstance()->getFormType();;
    

    GameLimitedCommandTextItemArrayFactory* gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory::getInstance();;
    

    CommandTextItemArrayFactory* commandTextItemArrayFactory = gameLimitedCommandTextItemArrayFactory->getCommandTextItemArrayFactory();;
    

    std::vector<ABCustomItem*> items = commandTextItemArrayFactory->getInstance(this->getCommandStack(), this->gameLayerManager->getBackgroundBasicColor(), this->gameLayerManager->getForegroundBasicColor());;
    

    Rectangle* rectangle = this->formUtil->createFormRectangle();;
    
this->setMenuForm(CommandCurrentSelectionFormFactory::getInstance(StringUtil::getInstance()->EMPTY_STRING, items, rectangle, formType, 25, false, this->gameLayerManager->getBackgroundBasicColor(), this->gameLayerManager->getForegroundBasicColor()));
    

    ScrollSelectionForm* scrollSelectionForm = this->getMenuForm();;
    

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(this->touchFeatureFactory->TOUCH_ENABLED))
                        
                                    {
                                    this->mainMenuInputProcessor= new PopupCommandFormInputProcessor(new BasicArrayListD(),  -1, this, scrollSelectionForm, dynamic_cast<PopupMenuInputProcessor*>(this->getPopupMenuInputProcessor()));
    

                                    }
                                
                        else {
                            
                        }
                            
this->setMenuInputProcessor(this->getPopupMenuInputProcessor());
    

                        if(scrollSelectionForm != ScrollSelectionFormNoneFactory::getInstance())
                        
                                    {
                                    this->setFormPaintable(new FormPaintable(scrollSelectionForm));
    

                                    }
                                
                        else {
                            
                        }
                            
this->closeMenu();
    
}


    auto AllBinaryGameCanvas::updateMenu() -> void{

        try {
            this->menuBehavior->updateMenu(this);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "initMenu", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateMenu2() -> void{

    ScrollSelectionForm* scrollSelectionForm = this->getMenuForm();;
    
scrollSelectionForm->deleteAll();
    

    GameLimitedCommandTextItemArrayFactory* gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory::getInstance();;
    

    CommandTextItemArrayFactory* commandTextItemArrayFactory = gameLimitedCommandTextItemArrayFactory->getCommandTextItemArrayFactory();;
    

    std::vector<ABCustomItem*> items = commandTextItemArrayFactory->getInstance(this->getCommandStack(), this->gameLayerManager->getBackgroundBasicColor(), this->gameLayerManager->getForegroundBasicColor());;
    

    int32_t size = items.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
scrollSelectionForm->append(items[index]);
    
}


    FormType* formType = FormTypeFactory::getInstance()->getFormType();;
    

    Rectangle* rectangle = this->formUtil->createFormRectangle();;
    
scrollSelectionForm->init(rectangle, formType);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryGameCanvas::pause() -> void{
this->gameBehavior->pause(this);
    
this->closeMenu();
    
RunnableCanvas::pause();
    
this->touchButtonFactory->toggle(this->isPaused(), BasicArrayListUtil::getInstance()->getImmutableInstance());
    
this->tsUtil->gc();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryGameCanvas::unPause() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->gameStrings->UNPAUSE);
    
this->closeMenu();
    
this->tsUtil->gc();
    
RunnableCanvas::unPause();
    
this->touchButtonFactory->toggle(this->isPaused(), BasicArrayListUtil::getInstance()->getImmutableInstance());
    
this->gameBehavior->unPause(this);
    
}


    auto AllBinaryGameCanvas::isPausable() -> bool{

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


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::popupMenu() -> void{
this->menuBehavior->popupMenu(this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::popupMenu2() -> void{
this->primaryPlayerQueue->add(SelectSound::getInstance());
    
this->setMenuPaintable(this->getFormPaintable());
    
this->setMenuInputProcessor(this->mainMenuInputProcessor);
    
this->basicMotionGesturesHandler->addListenerInterface(this->mainMenuInputProcessor);
    
this->gameKeyEventHandler->addListener(this->mainMenuInputProcessor);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::toggleMenu() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->gameStrings->TOGGLE_MENU);
    

                        if(this->getMenuPaintable() == this->getOpenMenuPaintable())
                        
                                    {
                                    this->pause();
    
this->updateMenu();
    
this->popupMenu();
    

                                    }
                                
                             else 
                        if(this->getMenuPaintable() == this->getFormPaintable())
                        
                                    {
                                    this->primaryPlayerQueue->add(SelectSound::getInstance());
    
this->unPause();
    

                                    }
                                
}


    auto AllBinaryGameCanvas::closeMenu() -> void{
this->menuBehavior->closeMenu(this);
    
}


    auto AllBinaryGameCanvas::closeMenu2() -> void{
this->setMenuPaintable(this->getOpenMenuPaintable());
    
this->basicMotionGesturesHandler->removeListener(this->mainMenuInputProcessor);
    
this->gameKeyEventHandler->removeListener(this->mainMenuInputProcessor);
    
this->setMenuInputProcessor(this->getPopupMenuInputProcessor());
    
}


    auto AllBinaryGameCanvas::open() -> void{
this->basicMotionGesturesHandler->addListenerInterface(this->menuInputProcessor);
    
this->gameKeyEventHandler->addListener(this->menuInputProcessor);
    
}


    auto AllBinaryGameCanvas::close() -> void{
this->basicMotionGesturesHandler->removeListener(this->menuInputProcessor);
    
this->gameKeyEventHandler->removeListener(this->menuInputProcessor);
    
this->primaryPlayerQueue->clear();
    
this->secondaryPlayerQueue->clear();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::processorInit() -> void{
this->setMainStateProcessor(Processor::getInstance());
    
this->setProcessGameProcessorInit();
    
}


    auto AllBinaryGameCanvas::setProcessGameProcessorInit() -> void{
this->setProcessGameProcessor(new GameProcessor(this));
    
}


    auto AllBinaryGameCanvas::initSpecialPaint() -> void{
this->menuBehavior->initSpecialPaint(this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::init(AllBinaryGameLayerManager* gameLayerManager, bool buffered) -> void{
this->gameStateTimeHelper->setStartTimeTNT();
    
this->setHighScoreSubmitted(false);
    
this->setLayerManager(gameLayerManager);
    

                        if(!buffered)
                        
                                    {
                                    
    std::string BUFF_MESSAGE = "XXX Not Buffering Causes Concurrency Issues XXX";;
    
this->logUtil->putF(BUFF_MESSAGE, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
                        else {
                            


                            throw Exception("Buffering is disabled");
                    

                        }
                            
this->setGameInputProcessor(Processor::getInstance());
    

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(GameFeatureFactory::getInstance()->CHEATING))
                        
                                    {
                                    this->isCheating= true;
    
this->cheatProcessor= new CheatGameInputProcessor(this);
    
this->gameKeyEventHandler->addListener(this->cheatProcessor);
    

                                    }
                                
                        else {
                            this->isCheating= false;
    
this->cheatProcessor= NoPlayerGameInput::getInstance();
    

                        }
                            
this->realEndGameProcessor= new EndGameProcessor(this);
    
this->setEndGameProcessor(Processor::getInstance());
    
this->realStartIntermissionProcessor= new StartIntermissionProcessor(this);
    
this->startIntermissionProcessor= Processor::getInstance();
    
this->setEndGameStatePaintable(new EndGamePaintable(this));
    
this->setEndGamePaintable(NullPaintable::getInstance());
    
this->setIntermissionPaintable(NullPaintable::getInstance());
    
this->getStartIntermissionInterface()->setListener(this);
    
}


    auto AllBinaryGameCanvas::notifyIntermission(bool enable) -> void{

                        if(enable)
                        
                                    {
                                    this->startIntermissionProcessor= this->realStartIntermissionProcessor;
    

                                    }
                                
                        else {
                            this->startIntermissionProcessor= Processor::getInstance();
    

                        }
                            

                        if(enable)
                        
                                    {
                                    this->setIntermissionPaintable(this->getStartIntermissionPaintable());
    

                                    }
                                
                        else {
                            this->setIntermissionPaintable(NullPaintable::getInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::mediaInit() -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryGameCanvas::initConfigurable(AbeClientInformationInterface* abeClientInformation) -> void{

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->addNormalPortion(50, "Setting Configurables");
    
GameInitializationUtil::getInstance()->initGame(abeClientInformation, this, this->gameInitializationInterfaceFactoryInterface);
    

    GameFeatureFactory* gameFeatureFactory = GameFeatureFactory::getInstance();;
    

    ChangedGameFeatureListener* changedGameFeatureListener = ChangedGameFeatureListener::getInstance();;
    

                        if(changedGameFeatureListener->isChangedFeature(gameFeatureFactory->SOUND))
                        
                                    {
                                    
    Features* features = Features::getInstance();;
    
this->logUtil->putF((new StringMaker())->append("Sound Changing To: ")->appendboolean(features->isFeature(gameFeatureFactory->SOUND))->toString(), this, "initConfigurable");
    
this->mediaInit();
    
changedGameFeatureListener->remove(gameFeatureFactory->SOUND);
    

                                    }
                                

    SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory::getInstance();;
    

                        if(changedGameFeatureListener->isChangedFeature(sensorFeatureFactory->ORIENTATION_SENSORS) || changedGameFeatureListener->isChangedFeature(sensorFeatureFactory->NO_ORIENTATION) || changedGameFeatureListener->isChangedFeature(sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    changedGameFeatureListener->remove(sensorFeatureFactory->NO_ORIENTATION);
    
changedGameFeatureListener->remove(sensorFeatureFactory->ORIENTATION_SENSORS);
    
changedGameFeatureListener->remove(sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS);
    

                                    }
                                

    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    
this->loadResourceLoadingLevel(resourceLoadingLevelFactory->LOAD_GAME);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::initApp(AbeClientInformationInterface* abeClientInformation) -> void{
this->initConfigurable(abeClientInformation);
    
this->processorInit();
    
this->sensorGameUpdateProcessor->process(this->gameLayerManager);
    
this->sensorGameUpdateProcessor->sendNotifications(this->gameLayerManager);
    
this->initTouch();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::initTouch() -> void{

    GameInitializedEvent* gameInitializedEvent = GameInitializationUtil::getInstance()->EVENT;;
    

    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    
gameInitializedEvent->setResourceLoadingLevel(resourceLoadingLevelFactory->LOAD_TOUCH);
    
GameInitializedEventHandler::getInstance()->fireEvent(gameInitializedEvent);
    
this->touchButtonFactory->defaultList();
    
this->updateTouch();
    
this->postInitTouch();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateCurrentTouchInputFactory(BaseTouchInput* nextTouchInput) -> void{

                        if(nextTouchInput != this->currentTouchInputFactory)
                        
                                    {
                                    this->currentTouchInputFactory= nextTouchInput;
    
PreLogUtil::put(this->currentTouchInputFactory->toString(), this, this->gameInputStrings->UDPATE_CURRENT_TOUCH_INPUT_FACTORY);
    
this->touchButtonFactory->toggle(this->isPaused(), this->currentTouchInputFactory->getList());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateTouch() -> void{
this->gameBehavior->updateTouch(this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateTouch2() -> void{

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(this->touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    
                        if(this->gameLayerManager->getGameInfo()->getCurrentLevel() -this->getStartLevel() == 1)
                        
                                    {
                                    this->setTouchPaintableP(NullPaintable::getInstance());
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::postInitTouch() -> void{
this->setTouchButtonsPaintable(TouchButtonsPaintableFactory::getInstance(this->gameLayerManager->getForegroundBasicColor()));
    
this->updateScreenButtonPaintable();
    
}


    auto AllBinaryGameCanvas::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    
this->addCommands();
    
this->setCommandListener(cmdListener);
    
}


    auto AllBinaryGameCanvas::addCommands() -> void{

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

    MyCommandsFactory* myCommandsFactory = MyCommandsFactory::getInstance();;
    

                        if(DebugFactory::getInstance() != NoDebug::getInstance())
                        
                                    {
                                    this->addCommand(gameCommandsFactory->START_TRACE);
    

                                    }
                                
this->addCommand(gameCommandsFactory->RESTART_COMMAND);
    
this->addCommand(myCommandsFactory->PAUSE_COMMAND);
    
this->addCommand(gameCommandsFactory->QUIT_COMMAND);
    

    bool isOverScan = OperatingSystemFactory::getInstance()->getOperatingSystemInstance()->isOverScan();;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(SWTUtil::isSWT)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(!isOverScan)
                        
                                    {
                                    
                        if(TouchScreenFactory::getInstance()->isTouch() && (new InGameFeatures())->isAny())
                        
                                    {
                                    this->addCommand(InGameOptionsForm::DISPLAY);
    

                                    }
                                
this->addCommand(gameCommandsFactory->SAVE);
    
this->addCommand(gameCommandsFactory->DISPLAY_LOAD_FORM);
    

                                    }
                                
}


    auto AllBinaryGameCanvas::itemStateChanged(Item* item) -> void{

        try {
            
    std::string itemLabel = item->getLabel();;
    
this->logUtil->putF((new StringMaker())->append(this->commonLabels->ITEM_LABEL)->append(itemLabel)->toString(), this, "itemStateChanged");
    

                        if(
                                        (dynamic_cast<const ChoiceGroup*>(item) != nullptr)
                                    )
                        
                                    {
                                    
    GameFeatureUtil* gameFeatureUtil = GameFeatureUtil::getInstance();;
    

                        if(gameFeatureUtil->isExclusive(itemLabel))
                        
                                    {
                                    gameFeatureUtil->updateExclusiveForChoiceGroup(dynamic_cast<ChoiceGroup*>(item));
    

                                    }
                                
                        else {
                            gameFeatureUtil->updateMultiple(dynamic_cast<ChoiceGroup*>(item));
    

                        }
                            

                                    }
                                
this->sensorGameUpdateProcessor->process(this->gameLayerManager);
    
this->updateTouch();
    
this->updateScreenButtonPaintable();
    
this->sensorGameUpdateProcessor->sendNotifications(this->gameLayerManager);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "itemStateChanged", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateScreenButtonPaintable() -> void{
this->gameBehavior->updateScreenButtonPaintable(this);
    
}


    auto AllBinaryGameCanvas::updateScreenButtonPaintable2() -> void{

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(this->touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    this->setTouchPaintableP(this->getTouchButtonsPaintable());
    
this->setStartLevel(this->gameLayerManager->getGameInfo()->getCurrentLevel());
    

                                    }
                                
                             else 
                        if(features->isFeature(this->touchFeatureFactory->SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    this->setTouchPaintableP(this->getTouchButtonsPaintable());
    

                                    }
                                
                             else 
                        if(features->isFeature(this->touchFeatureFactory->HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    this->setTouchPaintableP(NullPaintable::getInstance());
    

                                    }
                                
                        else {
                            this->setTouchPaintableP(NullPaintable::getInstance());
    

                        }
                            
}


    auto AllBinaryGameCanvas::getLayerManager() -> AllBinaryGameLayerManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameLayerManager;
    
}


    auto AllBinaryGameCanvas::setLayerManager(AllBinaryGameLayerManager* layerManager) -> void{
this->gameLayerManager= layerManager;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryGameCanvas::isGameOver() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameOver;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryGameCanvas::setGameOver(bool gameOver) -> void{
this->gameOver= gameOver;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::processGameOver() -> void{
PreLogUtil::put(this->commonStrings->START, this, this->gameStrings->SET_GAME_OVER);
    
this->setGameOver(true);
    
this->removePauseCommand();
    
this->setGameState(this->gameStateFactory->SHOW_END_RESULT_GAME_STATE);
    
this->setEndGamePaintable(this->getEndGameStatePaintable());
    
}


    auto AllBinaryGameCanvas::isHighScoreSubmitted() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->highScoreSubmitted;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::setHighScoreSubmitted(bool highScoreSubmitted) -> void{
this->highScoreSubmitted= highScoreSubmitted;
    

                        if(highScoreSubmitted)
                        
                                    {
                                    this->highScoresHelper->setSelectedHighScores(NullHighScoresSingletonFactory::getInstance());
    

                                    }
                                
this->logUtil->putF((new StringMaker())->append("isHighScoreSubmitted: ")->appendboolean(highScoreSubmitted)->toString(), this, "setHighScoreSubmitted");
    
}


    auto AllBinaryGameCanvas::getGameState() -> GameState*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameState;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::setGameState(GameState* gameState) -> void{
this->logUtil->putF((new StringMaker())->append(this->gameStrings->GAME_STATE)->append(this->stringUtil->toString(gameState))->toString(), this, this->gameStrings->SET_GAME_STATE);
    
this->gameState= gameState;
    
this->gameStateTimeHelper->setStartTimeTNT();
    
this->updateEndGameProcessor();
    
this->updateGameKeyEventProcessor();
    
this->gameBehavior->setGameState(this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateGameState() -> void{

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->processAdState(this->gameState, this->gameLayerManager->getGameInfo()->getGameType());
    

                        if(this->gameState != this->gameStateFactory->PLAYING_GAME_STATE)
                        
                                    {
                                    gameAdState->processPageAdState();
    

                                    }
                                
}


    auto AllBinaryGameCanvas::updateGameKeyEventProcessor() -> void{

                        if(this->getGameState() != this->gameStateFactory->PLAYING_GAME_STATE || this->isCheating)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        }
                            
}


    auto AllBinaryGameCanvas::removeAllGameKeyInputListenersOnBuild() -> void{
this->removeAllGameKeyInputListeners();
    
}


    auto AllBinaryGameCanvas::removeAllGameKeyInputListeners() -> void{
this->gameBehavior->removeAllGameKeyInputListeners(this);
    
}


    auto AllBinaryGameCanvas::removeAllGameKeyInputListeners2() -> void{
this->logUtil->putF("Remove PlayerInput Listeners", this, "removeAllGameKeyInputListeners");
    




                        for (
    int32_t index = this->localPlayerGameInputList->size() -1;index >= 0; index--)
        {

    PlayerGameInput* playerGameInput = dynamic_cast<PlayerGameInput*>(this->localPlayerGameInputList->get(index));;
    
this->removeKeyInputListener(playerGameInput);
    
playerGameInput->removeNonAIInputGameKeyEvents();
    
}

}


    auto AllBinaryGameCanvas::removeKeyInputListener(PlayerGameInput* playerGameInput) -> void{
this->gameKeyEventHandler->removeListener(playerGameInput);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateEndGameProcessor() -> void{
this->gameBehavior->updateEndGameProcessor(this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateEndGameProcessor2() -> void{

                        if(this->getGameState() == this->gameStateFactory->SHOW_END_RESULT_GAME_STATE || this->getGameState() == this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE)
                        
                                    {
                                    this->setEndGameProcessor(this->realEndGameProcessor);
    

                                    }
                                
                        else {
                            this->setEndGameProcessor(Processor::getInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::buildGameInit(bool isPortion) -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::cleanupGame() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CLEANUP);
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->addNormalPortion(10, "Cleaning Up");
    
this->primaryPlayerQueue->clear();
    
this->secondaryPlayerQueue->clear();
    
GameLevelDisplayChangeEventListenersFactory::getInstance()->clear();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::loadResourceLoadingLevel(ResourceLoadingLevel* resourceLoadingLevel) -> void{

    GameInitializedEvent* gameInitializedEvent = GameInitializationUtil::getInstance()->EVENT;;
    
gameInitializedEvent->setResourceLoadingLevel(resourceLoadingLevel);
    
GameInitializedEventHandler::getInstance()->fireEvent(gameInitializedEvent);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::loadResources(int32_t level) -> void{

    GameInitializedEvent* gameInitializedEvent = GameInitializationUtil::getInstance()->EVENT;;
    
gameInitializedEvent->setLevel(level);
    
GameInitializedEventHandler::getInstance()->fireEvent(gameInitializedEvent);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::updateColor() -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::buildGame(int32_t portion) -> void{
this->screenCapture->endRecording();
    
this->screenCapture->startRecording();
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Features* features = Features::getInstance();;
    
progressCanvas->addNormalPortion(portion, "Generic Build");
    
this->removeAllGameKeyInputListenersOnBuild();
    
this->updateTouch();
    
progressCanvas->addNormalPortion(portion, "High Scores");
    
this->highScoresFactoryInterface->fetchHighScores(this->gameLayerManager->getGameInfo(), this->highScoresHelper);
    
this->setHighScoresPaintable(NullPaintable::getInstance());
    
progressCanvas->addNormalPortion(portion, "Finishing.");
    
this->getEndGameInfoP()->update(this->getLayerManager()->getGameInfo(), this);
    
this->isSingleKeyRepeatableProcessing= features->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS);
    
this->setGameOver(false);
    
progressCanvas->addNormalPortion(portion, "Finishing..");
    
this->updateColor();
    
this->getStartIntermissionPaintable()->update();
    

                        if(!this->isRunningInAnotherThread())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
progressCanvas->addNormalPortion(portion, "Finishing...");
    

                        if(this->isMainCanvas() || !this->isInitialized())
                        
                                    {
                                    
                        if(features->isFeature(MainFeatureFactory::getInstance()->LOAD_ONDEMAND))
                        
                                    {
                                    
                        if(this->getCustomCommandListener() != 
                                    nullptr
                                )
                        
                                    {
                                    progressCanvas->end();
    

                                    }
                                

                                    }
                                
                        else {
                            progressCanvas->end();
    

                        }
                            
this->setInitialized(true);
    

                                    }
                                

                        if(this->getCustomCommandListener() == NullCommandListener::NULL_COMMAND_LISTENER)
                        
                                    {
                                    this->logUtil->putF("Show Game Paintable in DemoCanvas Thread", this, this->BUILD_GAME);
    
this->gameCanvasStartListener->showGamePaintable();
    

                                    }
                                
                        else {
                            this->logUtil->putF("No GameCanvasStartListener", this, this->BUILD_GAME);
    

                        }
                            
this->colorFillPaintable->setBasicColorP(this->gameLayerManager->getBackgroundBasicColor());
    
this->gameBehavior->buildGame(this);
    
}


    auto AllBinaryGameCanvas::buildGame2() -> void{
PreLogUtil::put((new StringMaker())->append(this->gameInputStrings->ENABLE_PLAYER_GAME_INPUTS)->appendint(this->localPlayerGameInputList->size())->toString(), this, this->BUILD_GAME);
    

    PlayerGameInput* playerGameInput;;
    




                        for (
    int32_t index = this->localPlayerGameInputList->size() -1;index >= 0; index--)
        {
playerGameInput= dynamic_cast<PlayerGameInput*>(this->localPlayerGameInputList->get(index));
    
PreLogUtil::put((new StringMaker())->append(this->gameInputStrings->ENABLE_PLAYER_GAME_INPUT)->append(playerGameInput->toString())->toString(), this, this->BUILD_GAME);
    
playerGameInput->removeNonAIInputGameKeyEvents();
    
this->addKeyInputListener(playerGameInput);
    
}

}


    auto AllBinaryGameCanvas::addKeyInputListener(PlayerGameInput* playerGameInput) -> void{
GameKeyEventHandler::getInstance()->addListenerForPlayer(playerGameInput, playerGameInput->getPlayerInputId());
    
}


    auto AllBinaryGameCanvas::setGameCanvasStartListener(DemoPaintableInterface* gameCanvasStartListener) -> void{
this->gameCanvasStartListener= gameCanvasStartListener;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::loadState() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->LOAD);
    

    ABHashtable<Object*, Object*>* hashtable = this->getLoadStateHashtable();;
    

                        if(hashtable != 
                                    nullptr
                                 && hashtable->size() > 0)
                        
                                    {
                                    
    std::string levelAsString = JavaBoxes::unbox<std::string>(hashtable->get(GameInfo::LEVEL_NAME));;
    

    int32_t level = JavaBoxes::value<int32_t>(Integer.valueOf(levelAsString));;
    

    GameInfo* gameInfo = this->gameLayerManager->getGameInfo();;
    
gameInfo->setCurrentLevel(level);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::getLoadStateHashtable() -> ABHashtable<Object*, Object*>*{
this->logUtil->putF((new StringMaker())->append(this->commonLabels->START_LABEL)->append(this->stringUtil->toString(this->hashtable))->toString(), this, "getLoadStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashtable;
    
}


    auto AllBinaryGameCanvas::setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable) -> void{
this->logUtil->putF((new StringMaker())->append(this->commonLabels->START_LABEL)->append(this->stringUtil->toString(hashtable))->toString(), this, "setLoadStateHashtable");
    
this->hashtable= hashtable;
    
}


    auto AllBinaryGameCanvas::getCurrentStateHashtable() -> ABHashtable<Object*, Object*>*{

    ABHashtable<Object*, Object*>* hashtable = this->stdUtil->createHashtable();;
    

    int32_t level = this->gameLayerManager->getGameInfo()->getCurrentLevel();;
    
hashtable->put(GameInfo::LEVEL_NAME->toString(), std::to_string(level));
    
this->logUtil->putF((new StringMaker())->append("End: ")->append(this->stringUtil->toString(hashtable))->toString(), this, "getCurrentStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashtable;
    
}


    auto AllBinaryGameCanvas::paintGameOver(Graphics* graphics) -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    
}


    auto AllBinaryGameCanvas::draw(Graphics* graphics) -> void{
this->colorFillPaintable->paint(graphics);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->gameLayerManager->getForegroundBasicColor());
    
this->gameSpecificPaintable->paint(graphics);
    
}


    auto AllBinaryGameCanvas::clear(Graphics* graphics) -> void{
this->colorFillPaintable->paint(graphics);
    
}


    auto AllBinaryGameCanvas::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
this->baseGameStatistics->nextRefresh();
    
this->draw(graphics);
    
this->menuPaintable->paint(graphics);
    
this->progressPaintable->paint(graphics);
    
}


    auto AllBinaryGameCanvas::paintThreed(Graphics* graphics) -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::processEndLevelIntermissionGameState() -> void{
}


    auto AllBinaryGameCanvas::nonBotPaint(Graphics* graphics) -> void{
this->endGamePaintable->paint(graphics);
    
this->intermissionPaintable->paint(graphics);
    
this->paintIntermission(graphics);
    
this->touchPaintable->paint(graphics);
    
}


    auto AllBinaryGameCanvas::paintIntermission(Graphics* graphics) -> void{
}


    auto AllBinaryGameCanvas::keyPressed(int32_t keyCode) -> void{
this->keyPressedByDevice(keyCode, 0);
    
}


    auto AllBinaryGameCanvas::keyReleased(int32_t keyCode) -> void{
this->keyReleasedByDevice(keyCode, 0);
    
}


    auto AllBinaryGameCanvas::keyRepeated(int32_t keyCode) -> void{
this->keyRepeatedByDevice(keyCode, 0);
    
}


    auto AllBinaryGameCanvas::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->inputProcessor->keyPressedByDevice(keyCode, deviceId);
    
}


    auto AllBinaryGameCanvas::keyRepeatedByDevice(int32_t keyCode, int32_t deviceId) -> void{

                        if(this->isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this->inputProcessor->keyPressedByDevice(keyCode, deviceId);
    

                                    }
                                
}


    auto AllBinaryGameCanvas::keyReleasedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->inputProcessor->keyReleasedByDevice(this, keyCode, deviceId);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::handleRawKey(int32_t keyCode, int32_t deviceId, bool repeated) -> void{
}


    auto AllBinaryGameCanvas::endProgress(bool isProgress) -> int32_t{

    int32_t portion = 30;;
    

                        if(isProgress && this->isMainCanvas())
                        
                                    {
                                    
    MyCommandsFactory* myCommandsFactory = MyCommandsFactory::getInstance();;
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->start();
    
this->getCustomCommandListener()->commandAction(myCommandsFactory->SET_DISPLAYABLE, progressCanvas);
    
portion= 4;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return portion;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::processPlayingGame() -> void{
this->cheatProcessor->update();
    
this->sensorGameUpdateProcessor->getInputSensor()->update();
    
this->gameInputProcessor->process();
    
this->gameLayerManager->process();
    
this->startIntermissionProcessor->process();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::threadInit() -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::processGame() -> void{
RunnableCanvas::process();
    

                        if(AllBinaryMediaManager::update())
                        
                                    {
                                    
                        if(!this->primaryPlayerQueue->process())
                        
                                    {
                                    this->secondaryPlayerQueue->process();
    

                                    }
                                

                                    }
                                
this->mainStateProcessor->process();
    
this->menuInputProcessor->processInputList();
    
this->endGameProcessor->process();
    
this->baseGameStatistics->nextFrame();
    
}


    auto AllBinaryGameCanvas::notifyDonePainting() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil->notifyObject(this);
    


}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::shouldWait() -> void{

    Features* features = Features::getInstance();;
    

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(features->isFeature(this->openGLFeatureFactory->OPENGL_2D))
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(features->isDefault(this->openGLFeatureFactory->OPENGL))
                        
                                    {
                                    
    OpenGLImageSpecificFactory* openGLImageSpecificFactory = OpenGLImageSpecificFactory::getInstance();;
    

        while(openGLImageSpecificFactory->updating)
        {
Thread::sleep(this->YIELD_SLEEP);
    
}


                                    }
                                

                        }
                            
}


    auto AllBinaryGameCanvas::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->addNormalPortion(50, "Game Thread");
    
this->setCurrentThread();
    
this->setRunning(true);
    

                        if(this->getCustomCommandListener() == NullCommandListener::NULL_COMMAND_LISTENER)
                        
                                    {
                                    Thread::sleep(this->YIELD_SLEEP);
    

                                    }
                                
this->shouldWait();
    
this->threadInit();
    

                        if(this->getCustomCommandListener() == NullCommandListener::NULL_COMMAND_LISTENER)
                        
                                    {
                                    Thread::sleep(this->YIELD_SLEEP);
    

                                    }
                                
this->open();
    

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->init();
    
gameAdState->setGameIsReady(true);
    
this->gameBehavior->run(this);
    
this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::run2() -> void{

    Features* features = Features::getInstance();;
    

                        if(features->isDefault(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil::isHTML())
                        
                                    {
                                    
                        if(features->isDefault(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    this->logUtil->putF(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD->getName(), this, this->commonStrings->RUN);
    

                                    }
                                

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    this->logUtil->putF(GraphicsStrings::getInstance()->HTML, this, this->commonStrings->RUN);
    

                                    }
                                

    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory->setRunnable(this->gameRunnable);
    
currentDisplayableFactory->setDisplayable(this);
    
OpenGLThreadUtil::getInstance()->onResume();
    

                                    }
                                
                             else 
                        if(features->isDefault(this->openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS))
                        
                                    {
                                    this->logUtil->putF(this->openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS->getName(), this, this->commonStrings->RUN);
    
OpenGLThreadUtil::getInstance()->onResume();
    

        while(this->isRunning())
        {
this->run3();
    
}

this->end();
    

                                    }
                                
                        else {
                            this->logUtil->putF("this thread", this, this->commonStrings->RUN);
    

        while(this->isRunning())
        {
this->run3();
    
}

this->end();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::run3() -> void{
this->loopTimeHelper->setStartTime(this->gameTickTimeDelayHelper->setStartTime());
    
this->gameTickDisplayInfoSingleton->update();
    
this->processGame();
    
this->processLoopSleep();
    
}


    auto AllBinaryGameCanvas::setRunning(bool running) -> void{
RunnableCanvas::setRunning(running);
    

        try {
            
    Features* features = Features::getInstance();;
    

                        if(running)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(features->isDefault(this->openGLFeatureFactory->OPENGL) || SWTUtil::isSWT)
                        
                                    {
                                    
                        if(this->gameLayerManager->getGameInfo()->getGameType() != this->gameTypeFactory->BOT)
                        
                                    {
                                    
    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory->clearRunnable();
    

                                    }
                                
this->end();
    

                                    }
                                

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->SET_RUNNING, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::end() -> void{
this->screenCapture->endRecording();
    
this->baseGameStatistics->add((new StringMaker())->append(this->baseGameStatistics->toString())->append(CommonSeps::getInstance()->NEW_LINE)->toString());
    
this->baseGameStatistics->init();
    
this->gameKeyEventHandler->removeListener(this->cheatProcessor);
    
this->close();
    
this->removeAllGameKeyInputListeners();
    
this->endGameThread();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::endGameThread() -> void{
DisplayChangeEventHandler::getInstance()->removeListener(this);
    
GameLevelDisplayChangeEventListenersFactory::getInstance()->clear();
    

    GameAdState* gameAdState = this->gameAdStateFactory->getCurrentInstance();;
    
gameAdState->notPlayingAdState();
    
}


    auto AllBinaryGameCanvas::createHighScore(int64_t score) -> HighScore*{

    GameInfo* gameInfo = this->gameLayerManager->getGameInfo();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HighScore(0, "NONE", new GameInfo(gameInfo->getGameType(), gameInfo->getGameMode(), PlayerTypesFactory::getInstance()->PLAYER_TYPE_ONE, 0, 0), score);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::setHighScore(AbeClientInformationInterface* abeClientInformation, std::string name, int64_t score, bool autoSubmit, bool isLast) -> void{
this->gameBehavior->setHighScore(abeClientInformation, this, name, score, autoSubmit, isLast);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryGameCanvas::setHighScore2(AbeClientInformationInterface* abeClientInformation, std::string name, int64_t score, bool autoSubmit, bool isLast) -> void{

    HighScore* highScore = this->createHighScore(score);;
    

    HighScoreTextBox* textBox = new HighScoreTextBox(this->highScoresFactoryInterface, this->highScoresHelper, abeClientInformation, this->gameLayerManager->getGameInfo(), this->getCustomCommandListener(), name, highScore, this->gameLayerManager->getBackgroundBasicColor(), this->gameLayerManager->getForegroundBasicColor());;
    

                        if(isLast)
                        
                                    {
                                    this->getCustomCommandListener()->commandAction(GameCommandsFactory::getInstance()->SET_MENU_DISPLAYABLE, textBox);
    

                                    }
                                

                        if(autoSubmit)
                        
                                    {
                                    
//inner=true member= isStatic=
class SaveHighScoreRunnable
            : public virtual Object
        , public virtual Runnable {

    private: ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(isLast)
                        
                                    {
                                    textBox->submit();
    

                                    }
                                
                        else {
                            textBox->saveHighScore();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, "run", &e);
    
this->progressCanvas->end();
    
}

}


};

            
SecondaryThreadPool::getInstance()->runTask(new SaveHighScoreRunnable());
    

                                    }
                                
}


    auto AllBinaryGameCanvas::getGameStateTimeHelper() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameStateTimeHelper;
    
}


    auto AllBinaryGameCanvas::setInitialized(bool initialized) -> void{
this->initialized= initialized;
    
}


    auto AllBinaryGameCanvas::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->initialized;
    
}


    auto AllBinaryGameCanvas::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AllBinaryGameCanvas::id;
    
}


    auto AllBinaryGameCanvas::setProgressPaintable(PaintableInterface* paintable) -> void{
this->progressPaintable= paintable;
    
}


    auto AllBinaryGameCanvas::getStartIntermissionInterface() -> IntermissionInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startIntermissionInterface;
    
}


    auto AllBinaryGameCanvas::getEndLevelIntermissionInterface() -> IntermissionInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->endLevelIntermissionInterface;
    
}


    auto AllBinaryGameCanvas::setTouchPaintableP(Paintable* paintable) -> void{
this->touchPaintable= paintable;
    
}


    auto AllBinaryGameCanvas::getTouchPaintableP() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->touchPaintable;
    
}


    auto AllBinaryGameCanvas::setEndGamePaintable(Paintable* endGamePaintable) -> void{
this->endGamePaintable= endGamePaintable;
    
}


    auto AllBinaryGameCanvas::getEndGamePaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->endGamePaintable;
    
}


    auto AllBinaryGameCanvas::setIntermissionPaintable(Paintable* intermissionPaintable) -> void{
this->intermissionPaintable= intermissionPaintable;
    
}


    auto AllBinaryGameCanvas::getIntermissionPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->intermissionPaintable;
    
}


    auto AllBinaryGameCanvas::getEndGameInfoP() -> EndGameInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->endGameInfo;
    
}


    auto AllBinaryGameCanvas::setHighScoresPaintable(Paintable* highScoresPaintable) -> void{
this->highScoresPaintable= highScoresPaintable;
    
}


    auto AllBinaryGameCanvas::getHighScoresPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->highScoresPaintable;
    
}


    auto AllBinaryGameCanvas::getRealHighScoresPaintable() -> HighScoresPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->realHighScoresPaintable;
    
}


    auto AllBinaryGameCanvas::clearPlayerGameInputList() -> void{

    PlayerGameInput* playerGameInput;;
    




                        for (
    int32_t index = this->localPlayerGameInputList->size() -1;index >= 0; index--)
        {
playerGameInput= dynamic_cast<PlayerGameInput*>(this->localPlayerGameInputList->get(index));
    
this->gameKeyEventHandler->removeListener(playerGameInput);
    
}

this->localPlayerGameInputList->clear();
    
}


    auto AllBinaryGameCanvas::addPlayerGameInput(PlayerGameInput* playerGameInput) -> void{
this->localPlayerGameInputList->add(playerGameInput);
    
}


    auto AllBinaryGameCanvas::setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor) -> void{
this->menuInputProcessor= menuInputProcessor;
    
}


    auto AllBinaryGameCanvas::getMenuInputProcessor() -> BasicMenuInputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuInputProcessor;
    
}


    auto AllBinaryGameCanvas::getMenuForm() -> ScrollSelectionForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuForm;
    
}


    auto AllBinaryGameCanvas::setMenuForm(ScrollSelectionForm* menuForm) -> void{
this->menuForm= menuForm;
    
}


    auto AllBinaryGameCanvas::getStartLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startLevel;
    
}


    auto AllBinaryGameCanvas::setStartLevel(int32_t startLevel) -> void{
this->startLevel= startLevel;
    
}


    auto AllBinaryGameCanvas::setTouchButtonsPaintable(Paintable* touchButtonsPaintable) -> void{
this->touchButtonsPaintable= touchButtonsPaintable;
    
}


    auto AllBinaryGameCanvas::getTouchButtonsPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->touchButtonsPaintable;
    
}


    auto AllBinaryGameCanvas::setGameInputProcessor(Processor* gameInputProcessor) -> void{
this->gameInputProcessor= gameInputProcessor;
    
}


    auto AllBinaryGameCanvas::getGameInputProcessor() -> Processor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameInputProcessor;
    
}


    auto AllBinaryGameCanvas::setEndGameProcessor(Processor* endGameProcessor) -> void{
this->endGameProcessor= endGameProcessor;
    
}


    auto AllBinaryGameCanvas::getEndGameProcessor() -> Processor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->endGameProcessor;
    
}


    auto AllBinaryGameCanvas::setEndGameStatePaintable(Paintable* endGameStatePaintable) -> void{
this->endGameStatePaintable= endGameStatePaintable;
    
}


    auto AllBinaryGameCanvas::getEndGameStatePaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->endGameStatePaintable;
    
}


    auto AllBinaryGameCanvas::setNonBotPaintableP(Paintable* nonBotPaintable) -> void{
this->nonBotPaintable= nonBotPaintable;
    
}


    auto AllBinaryGameCanvas::getNonBotPaintableP() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->nonBotPaintable;
    
}


    auto AllBinaryGameCanvas::setStartIntermissionPaintable(InitUpdatePaintable* startIntermissionPaintable) -> void{
this->startIntermissionPaintable= startIntermissionPaintable;
    
}


    auto AllBinaryGameCanvas::getStartIntermissionPaintable() -> InitUpdatePaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startIntermissionPaintable;
    
}


    auto AllBinaryGameCanvas::setMainStateProcessor(Processor* mainStateProcessor) -> void{
this->mainStateProcessor= mainStateProcessor;
    
}


    auto AllBinaryGameCanvas::getMainStateProcessor() -> Processor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mainStateProcessor;
    
}


    auto AllBinaryGameCanvas::setProcessGameProcessor(Processor* processGameProcessor) -> void{
this->processGameProcessor= processGameProcessor;
    
}


    auto AllBinaryGameCanvas::getProcessGameProcessor() -> Processor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->processGameProcessor;
    
}


    auto AllBinaryGameCanvas::setOpenMenuPaintable(Paintable* openMenuPaintable) -> void{
this->openMenuPaintable= openMenuPaintable;
    
}


    auto AllBinaryGameCanvas::getOpenMenuPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->openMenuPaintable;
    
}


    auto AllBinaryGameCanvas::setPopupMenuInputProcessor(BasicMenuInputProcessor* popupMenuInputProcessor) -> void{
this->popupMenuInputProcessor= popupMenuInputProcessor;
    
}


    auto AllBinaryGameCanvas::getPopupMenuInputProcessor() -> BasicMenuInputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->popupMenuInputProcessor;
    
}


    auto AllBinaryGameCanvas::getSensorGameUpdateProcessor() -> SensorGameUpdateProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sensorGameUpdateProcessor;
    
}


    auto AllBinaryGameCanvas::getRawGameInputProcessor() -> InputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rawGameInputProcessor;
    
}


    auto AllBinaryGameCanvas::getRawInputProcessor() -> InputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rawInputProcessor;
    
}


    auto AllBinaryGameCanvas::setInputProcessor(InputProcessor* inputProcessor) -> void{
this->inputProcessor= inputProcessor;
    
}


    auto AllBinaryGameCanvas::getInputProcessor() -> InputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputProcessor;
    
}


    auto AllBinaryGameCanvas::setMenuPaintable(Paintable* menuPaintable) -> void{
this->menuPaintable= menuPaintable;
    
}


    auto AllBinaryGameCanvas::getMenuPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuPaintable;
    
}


    auto AllBinaryGameCanvas::setFormPaintable(Paintable* formPaintable) -> void{
this->formPaintable= formPaintable;
    
}


    auto AllBinaryGameCanvas::getFormPaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->formPaintable;
    
}


    auto AllBinaryGameCanvas::setGameSpecificPaintableP(Paintable* gameSpecificPaintable) -> void{
this->gameSpecificPaintable= gameSpecificPaintable;
    
}


    auto AllBinaryGameCanvas::getGameSpecificPaintableP() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameSpecificPaintable;
    
}


    auto AllBinaryGameCanvas::isSingleThread() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLFeatureUtil::getInstance()->isAnyThreed() || SWTUtil::isSWT;
    
}


    auto AllBinaryGameCanvas::isRunningInAnotherThread() -> bool{

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


    auto AllBinaryGameCanvas::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AllBinaryGameCanvas::TYPE;
    
}


    auto AllBinaryGameCanvas::getTitle() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RunnableCanvas::getTitle();;
    
}


    auto AllBinaryGameCanvas::isPaused() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RunnableCanvas::isPaused();;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_CPP
