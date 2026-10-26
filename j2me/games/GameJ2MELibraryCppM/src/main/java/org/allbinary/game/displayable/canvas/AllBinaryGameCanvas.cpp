
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
        



            #include <vector>
        
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
        #include "AllBinaryGameCanvasInterface.h"
#include "GameCanvasRunnableInterface.h"
#include "MenuListener.h"
#include "PopupMenuInterface.h"
#include "GameCanvasRunnable.h"
#include "GameCanvasPauseRunnable.h"
#include "FormUtil.h"
#include "MyFormUtil.h"
#include "EndGameInfo.h"
#include "NoMenuInputProcessor.h"
#include "BasicMenuInputProcessor.h"
#include "DemoGameBehavior.h"
#include "BaseMenuBehavior.h"
#include "BaseGameBehavior.h"
#include "BasicPopupMenuPaintable.h"
#include "PopupMenuInputProcessor.h"
#include "InGameMenuBehavior.h"
#include "GameLimitedCommandTextItemArrayFactory.h"
#include "PopupCommandFormInputProcessor.h"
#include "NullWaitGameRunnable.h"
#include "GameProcessor.h"
#include "CheatGameInputProcessor.h"
#include "EndGameProcessor.h"
#include "StartIntermissionProcessor.h"
#include "EndGamePaintable.h"
#include "NullDemoPaintable.h"
#include "DemoPaintableInterface.h"
#include "GameCanvasInputProcessor.h"
#include "FormInputProcessor.h"

class AllBinaryGameCanvas: public RunnableCanvas, public AllBinaryGameCanvasInterface, public GameCanvasRunnableInterface, public MenuListener, public IntermissionCompositeInterface, public IntermissionEnableListenerInterface, public PopupMenuInterface, public DisplayChangeEventListener, public UpdateMyFontInterface {

    private: static const int32_t id = 0;

    public: static const int32_t TYPE = 2;

    protected: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    protected: const TouchFeatureFactory touchFeatureFactory = TouchFeatureFactory::getInstance();

    protected: const OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();

    protected: const TouchButtonFactory touchButtonFactory = TouchButtonFactory::getInstance();

    protected: const GameAdStateFactory gameAdStateFactory = GameAdStateFactory::getInstance();

    protected: const GameStrings gameStrings = GameStrings::getInstance();

    protected: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    protected: const GameStateFactory gameStateFactory = GameStateFactory::getInstance();

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: const GameTickDisplayInfoSingleton gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton::getInstance();

    public: const GameCanvasRunnable gameRunnable = GameCanvasRunnable(this);

    public: const GameCanvasPauseRunnable gamePauseRunnable = GameCanvasPauseRunnable(this);

    protected: const FormUtil formUtil = FormUtil::getInstance();

    protected: const MyFormUtil myFormUtil = MyFormUtil::getInstance();

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    private: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    protected: Paintable gameSpecificPaintable = NullPaintable::getInstance();

    private: const SensorGameUpdateProcessor sensorGameUpdateProcessor = SingleSensorGameUpdateProcessor();

    protected: EndGameInfo endGameInfo = EndGameInfo();

    private: const IntermissionInterface startIntermissionInterface = Intermission();

    private: const IntermissionInterface endLevelIntermissionInterface = Intermission();

    protected: AllBinaryGameLayerManager gameLayerManager = AllBinaryGameLayerManager::getNullInstance();

    private: GameState gameState = this->gameStateFactory.NO_GAME_STATE;

    private: bool gameOver= false;

    private: bool initialized= false;

    private: const TimeDelayHelper gameStateTimeHelper = TimeDelayHelper(0);

    protected: HighScoresHelperBaseInterface highScoresHelper;

    private: bool highScoreSubmitted= false;

    private: const HighScoresPaintable realHighScoresPaintable = HighScoresPaintable();

    private: Paintable highScoresPaintable = NullPaintable::getInstance();

    private: BasicArrayList localPlayerGameInputList = BasicArrayListD();

    private: bool isCheating= false;

    private: ABHashtable<Object*, Object*> hashtable = this->stdUtil.NULL_TABLE;

    private: bool isSingleKeyRepeatableProcessing= false;

    private: BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface = BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;

    private: Paintable touchButtonsPaintable = NullPaintable::getInstance();

    protected: Paintable touchPaintable = NullPaintable::getInstance();

    private: PlayerGameInput cheatProcessor = NoPlayerGameInput::getInstance();

    private: Processor gameInputProcessor = Processor::getInstance();

    private: Processor endGameProcessor = Processor::getInstance();

    private: Processor realEndGameProcessor = Processor::getInstance();

    private: Processor startIntermissionProcessor = Processor::getInstance();

    private: Processor realStartIntermissionProcessor = Processor::getInstance();

    private: Paintable endGamePaintable = NullPaintable::getInstance();

    private: Paintable endGameStatePaintable = NullPaintable::getInstance();

    protected: Paintable nonBotPaintable = NullPaintable::getInstance();

    private: Paintable intermissionPaintable = NullPaintable::getInstance();

    private: InitUpdatePaintable startIntermissionPaintable = NullInitUpdatePaintable::getInstance();

    private: Processor mainStateProcessor = Processor::getInstance();

    private: Processor processGameProcessor = Processor::getInstance();

    private: HighScoresFactoryInterface highScoresFactoryInterface;

    private: int32_t startLevel= 0;

    private: BasicMenuInputProcessor mainMenuInputProcessor = NoMenuInputProcessor::getInstance();

    private: BasicMenuInputProcessor popupMenuInputProcessor = NoMenuInputProcessor::getInstance();

    private: BasicMenuInputProcessor menuInputProcessor = NoMenuInputProcessor::getInstance();

    private: ScrollSelectionForm menuForm = ScrollSelectionForm::getNullScrollSelectionForm();

    private: Paintable formPaintable = NullPaintable::getInstance();

    private: Paintable openMenuPaintable = NullPaintable::getInstance();

    private: Paintable menuPaintable = NullPaintable::getInstance();

    private: BaseTouchInput currentTouchInputFactory = NoButtonsTouchInputFactory::getInstance();

    protected: ColorFillBasePaintable colorFillPaintable = ColorFillPaintableFactory::getInstance().getInstance(this->basicColorFactory.BLACK, true);

    private: const BaseGameStatistics baseGameStatistics = GameStatisticsFactory::getInstance();

    private: const PlayerQueue primaryPlayerQueue = PrimaryPlayerQueueFactory::getInstance();

    private: const PlayerQueue secondaryPlayerQueue = SecondaryPlayerQueueFactory::getInstance();

    protected: const std::string BUILD_GAME = "buildGame";

    protected: const GameTypeFactory gameTypeFactory = GameTypeFactory::getInstance();

    protected: const ScreenCapture screenCapture = ScreenCaptureFactory::getInstance();

    private: const BasicMotionGesturesHandler basicMotionGesturesHandler = BasicMotionGesturesHandler::getInstance();

    private: const GameKeyEventHandler gameKeyEventHandler = GameKeyEventHandler::getInstance();

    private: const DemoGameBehavior gameBehavior;

    private: const BaseMenuBehavior menuBehavior;

    private: PaintableInterface progressPaintable = ProgressCanvasFactory::getLazyInstance();

    protected: int32_t fontHeightP= 0;

public: AllBinaryGameCanvas(CommandListener commandListener, AllBinaryGameLayerManager gameLayerManager, HighScoresFactoryInterface highScoresFactoryInterface, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool buffered) : RunnableCanvas(commandListener, CanvasStrings::getInstance().EMPTY_CHILD_NAME_LIST, true){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->highScoresHelper= highScoresFactoryInterface.createHighScoresHelper();
    
this->gameInitializationInterfaceFactoryInterface= gameInitializationInterfaceFactoryInterface;
    
this->init(gameLayerManager, buffered);
    
this->highScoresFactoryInterface= highScoresFactoryInterface;
    

                        if(this->gameLayerManager.getGameInfo().getGameType() == this->gameTypeFactory.BOT || this->gameLayerManager.getGameInfo().getGameType() == this->gameTypeFactory.NONE)
                        
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
    
DisplayChangeEventHandler::getInstance().addListenerInterface(this);
    
}


    public: void updateMeasurement(Graphics graphics){

        try {
            
    Font font = graphics.getFont();;
    
this->logUtil.putF(StringMaker().append(this->commonStrings.START).append(this->canvasStrings.FD_WIDTH).appendint(MyFontProcessor::defaultCharWidth(font)).append(this->canvasStrings.FD_HEIGHT).appendint(font.getHeight()).toString(), this, this->canvasStrings.UPDATE_MEASUREMENT);
    
this->fontHeightP= font.getHeight();
    
this->myFormUtil.updateMeasurement(graphics);
    

    Rectangle popupMenuRectangle = this->myFormUtil.getPopupMenuRectangle();;
    

    BasicPopupMenuPaintable basicPopupMenuPaintable = (this->getOpenMenuPaintable());;
    
basicPopupMenuPaintable.init(popupMenuRectangle);
    

                        if(this->getPopupMenuInputProcessor() != NoMenuInputProcessor::getInstance())
                        
                                    {
                                    
    PopupMenuInputProcessor popupMenuInputProcessor = (this->getPopupMenuInputProcessor());;
    
popupMenuInputProcessor.init(popupMenuRectangle);
    

                                    }
                                
this->myFontProcessor= MyFontProcessor::getInstance();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT, e);
    
}

}


    public: BaseMenuBehavior getInGameMenuBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InGameMenuBehavior::getInstance();;
    
}


    public: void setCurrentThread(){

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    super.setCurrentThreadFake();
    

                                    }
                                
                        else {
                            super.setCurrentThread();
    

                        }
                            
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            this->logUtil.putF(StringMaker().append(this->commonStrings.START).append(DisplayInfoSingleton::getInstance().toString()).toString(), this, this->canvasStrings.UPDATE_MEASUREMENT);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
this->menuBehavior.onDisplayChangeEvent(this, displayChangeEvent);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void updateMenuFromEvent(DisplayChangeEvent displayChangeEvent){

    FormType formType = FormTypeFactory::getInstance().getFormType();;
    

    Rectangle rectangle = this->formUtil.createFormRectangle();;
    
this->menuForm.init(rectangle, formType);
    

                        if(this->currentTouchInputFactory != NoButtonsTouchInputFactory::getInstance())
                        
                                    {
                                    this->touchButtonFactory.toggle(this->isPaused(), this->currentTouchInputFactory.getList());
    

                                    }
                                
this->myFontProcessor= this->updateMyFontProcessor;
    
}


                //@Throws(Exception.constructor)
            
    public: void processSleep(){
super.processSleep();
    

                        if(AllBinaryMediaManager::update())
                        
                                    {
                                    
                        if(!this->primaryPlayerQueue.process())
                        
                                    {
                                    this->secondaryPlayerQueue.process();
    

                                    }
                                

                                    }
                                

                        if(this->menuInputProcessor.processInputList() !=  -1)
                        
                                    {
                                    this->runnableCanvasRefreshHelper.process();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void initPopupMenu(){

                        if(this->popupMenuInputProcessor == NoMenuInputProcessor::getInstance())
                        
                                    {
                                    
    Features features = Features::getInstance();;
    

    Rectangle popupMenuRectangle = this->myFormUtil.getPopupMenuRectangle();;
    

                        if(features.isFeature(this->touchFeatureFactory.TOUCH_ENABLED))
                        
                                    {
                                    this->setOpenMenuPaintable(BasicPopupMenuPaintable(popupMenuRectangle, this->gameLayerManager.getBackgroundBasicColor(), this->gameLayerManager.getForegroundBasicColor()));
    
this->setPopupMenuInputProcessor(PopupMenuInputProcessor(BasicArrayListD(),  -1, this, popupMenuRectangle));
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
}


    protected: void initMenu(){

        try {
            this->menuBehavior.initMenu(this);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "initMenu", e);
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void initMenu2(){
this->closeMenu();
    

    FormType formType = FormTypeFactory::getInstance().getFormType();;
    

    GameLimitedCommandTextItemArrayFactory gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory::getInstance();;
    

    CommandTextItemArrayFactory commandTextItemArrayFactory = gameLimitedCommandTextItemArrayFactory.getCommandTextItemArrayFactory();;
    

    std::vector<ABCustomItem> items = commandTextItemArrayFactory.getInstance(this->getCommandStack(), this->gameLayerManager.getBackgroundBasicColor(), this->gameLayerManager.getForegroundBasicColor());;
    

    Rectangle rectangle = this->formUtil.createFormRectangle();;
    
this->setMenuForm(CommandCurrentSelectionFormFactory::getInstance(StringUtil::getInstance().EMPTY_STRING, items, rectangle, formType, 25, false, this->gameLayerManager.getBackgroundBasicColor(), this->gameLayerManager.getForegroundBasicColor()));
    

    ScrollSelectionForm scrollSelectionForm = this->getMenuForm();;
    

    Features features = Features::getInstance();;
    

                        if(features.isFeature(this->touchFeatureFactory.TOUCH_ENABLED))
                        
                                    {
                                    this->mainMenuInputProcessor= PopupCommandFormInputProcessor(BasicArrayListD(),  -1, this, scrollSelectionForm, this->getPopupMenuInputProcessor());
    

                                    }
                                
                        else {
                            
                        }
                            
this->setMenuInputProcessor(this->getPopupMenuInputProcessor());
    

                        if(scrollSelectionForm != ScrollSelectionFormNoneFactory::getInstance())
                        
                                    {
                                    this->setFormPaintable(FormPaintable(scrollSelectionForm));
    

                                    }
                                
                        else {
                            
                        }
                            
this->closeMenu();
    
}


    public: void updateMenu(){

        try {
            this->menuBehavior.updateMenu(this);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "initMenu", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void updateMenu2(){

    ScrollSelectionForm scrollSelectionForm = this->getMenuForm();;
    
scrollSelectionForm.deleteAll();
    

    GameLimitedCommandTextItemArrayFactory gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory::getInstance();;
    

    CommandTextItemArrayFactory commandTextItemArrayFactory = gameLimitedCommandTextItemArrayFactory.getCommandTextItemArrayFactory();;
    

    std::vector<ABCustomItem> items = commandTextItemArrayFactory.getInstance(this->getCommandStack(), this->gameLayerManager.getBackgroundBasicColor(), this->gameLayerManager.getForegroundBasicColor());;
    

    int32_t size = items.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
scrollSelectionForm.append(items[index]);
    
}


    FormType formType = FormTypeFactory::getInstance().getFormType();;
    

    Rectangle rectangle = this->formUtil.createFormRectangle();;
    
scrollSelectionForm.init(rectangle, formType);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause(){
this->gameBehavior.pause(this);
    
this->closeMenu();
    
super.pause();
    
this->touchButtonFactory.toggle(this->isPaused(), BasicArrayListUtil::getInstance().getImmutableInstance());
    
this->tsUtil.gc();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause(){
this->logUtil.putF(this->commonStrings.START, this, this->gameStrings.UNPAUSE);
    
this->closeMenu();
    
this->tsUtil.gc();
    
super.unPause();
    
this->touchButtonFactory.toggle(this->isPaused(), BasicArrayListUtil::getInstance().getImmutableInstance());
    
this->gameBehavior.unPause(this);
    
}


    public: bool isPausable(){

                        if(CurrentDisplayableFactory::getInstance().getUsedRunnable() == NullWaitGameRunnable::getInstance())
                        
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
            
    public: void popupMenu(){
this->menuBehavior.popupMenu(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void popupMenu2(){
this->primaryPlayerQueue.add(SelectSound::getInstance());
    
this->setMenuPaintable(this->getFormPaintable());
    
this->setMenuInputProcessor(this->mainMenuInputProcessor);
    
this->basicMotionGesturesHandler.addListenerInterface(this->mainMenuInputProcessor);
    
this->gameKeyEventHandler.addListener(this->mainMenuInputProcessor);
    
}


                //@Throws(Exception.constructor)
            
    public: void toggleMenu(){
this->logUtil.putF(this->commonStrings.START, this, this->gameStrings.TOGGLE_MENU);
    

                        if(this->getMenuPaintable() == this->getOpenMenuPaintable())
                        
                                    {
                                    this->pause();
    
this->updateMenu();
    
this->popupMenu();
    

                                    }
                                
                             else 
                        if(this->getMenuPaintable() == this->getFormPaintable())
                        
                                    {
                                    this->primaryPlayerQueue.add(SelectSound::getInstance());
    
this->unPause();
    

                                    }
                                
}


    public: void closeMenu(){
this->menuBehavior.closeMenu(this);
    
}


    public: void closeMenu2(){
this->setMenuPaintable(this->getOpenMenuPaintable());
    
this->basicMotionGesturesHandler.removeListener(this->mainMenuInputProcessor);
    
this->gameKeyEventHandler.removeListener(this->mainMenuInputProcessor);
    
this->setMenuInputProcessor(this->getPopupMenuInputProcessor());
    
}


    public: void open(){
this->basicMotionGesturesHandler.addListenerInterface(this->menuInputProcessor);
    
this->gameKeyEventHandler.addListener(this->menuInputProcessor);
    
}


    public: void close(){
this->basicMotionGesturesHandler.removeListener(this->menuInputProcessor);
    
this->gameKeyEventHandler.removeListener(this->menuInputProcessor);
    
this->primaryPlayerQueue.clear();
    
this->secondaryPlayerQueue.clear();
    
}


                //@Throws(Exception.constructor)
            
    protected: void processorInit(){
this->setMainStateProcessor(Processor::getInstance());
    
this->setProcessGameProcessorInit();
    
}


    protected: void setProcessGameProcessorInit(){
this->setProcessGameProcessor(GameProcessor(this));
    
}


    protected: void initSpecialPaint(){
this->menuBehavior.initSpecialPaint(this);
    
}


                //@Throws(Exception.constructor)
            
    private: void init(AllBinaryGameLayerManager gameLayerManager, bool buffered){
this->gameStateTimeHelper.setStartTimeTNT();
    
this->setHighScoreSubmitted(false);
    
this->setLayerManager(gameLayerManager);
    

                        if(!buffered)
                        
                                    {
                                    
    std::string BUFF_MESSAGE = "XXX Not Buffering Causes Concurrency Issues XXX";;
    
this->logUtil.putF(BUFF_MESSAGE, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
                        else {
                            


                            throw Exception("Buffering is disabled");
                    

                        }
                            
this->setGameInputProcessor(Processor::getInstance());
    

    Features features = Features::getInstance();;
    

                        if(features.isFeature(GameFeatureFactory::getInstance().CHEATING))
                        
                                    {
                                    this->isCheating= true;
    
this->cheatProcessor= CheatGameInputProcessor(this);
    
this->gameKeyEventHandler.addListener(this->cheatProcessor);
    

                                    }
                                
                        else {
                            this->isCheating= false;
    
this->cheatProcessor= NoPlayerGameInput::getInstance();
    

                        }
                            
this->realEndGameProcessor= EndGameProcessor(this);
    
this->setEndGameProcessor(Processor::getInstance());
    
this->realStartIntermissionProcessor= StartIntermissionProcessor(this);
    
this->startIntermissionProcessor= Processor::getInstance();
    
this->setEndGameStatePaintable(EndGamePaintable(this));
    
this->setEndGamePaintable(NullPaintable::getInstance());
    
this->setIntermissionPaintable(NullPaintable::getInstance());
    
this->getStartIntermissionInterface().setListener(this);
    
}


    public: void notifyIntermission(bool enable){

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
            
    public: void mediaInit(){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void initConfigurable(AbeClientInformationInterface abeClientInformation){

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.addNormalPortion(50, "Setting Configurables");
    
GameInitializationUtil::getInstance().initGame(abeClientInformation, this, this->gameInitializationInterfaceFactoryInterface);
    

    GameFeatureFactory gameFeatureFactory = GameFeatureFactory::getInstance();;
    

    ChangedGameFeatureListener changedGameFeatureListener = ChangedGameFeatureListener::getInstance();;
    

                        if(changedGameFeatureListener.isChangedFeature(gameFeatureFactory.SOUND))
                        
                                    {
                                    
    Features features = Features::getInstance();;
    
this->logUtil.putF(StringMaker().append("Sound Changing To: ").appendboolean(features.isFeature(gameFeatureFactory.SOUND)).toString(), this, "initConfigurable");
    
this->mediaInit();
    
changedGameFeatureListener.remove(gameFeatureFactory.SOUND);
    

                                    }
                                

    SensorFeatureFactory sensorFeatureFactory = SensorFeatureFactory::getInstance();;
    

                        if(changedGameFeatureListener.isChangedFeature(sensorFeatureFactory.ORIENTATION_SENSORS) || changedGameFeatureListener.isChangedFeature(sensorFeatureFactory.NO_ORIENTATION) || changedGameFeatureListener.isChangedFeature(sensorFeatureFactory.SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    changedGameFeatureListener.remove(sensorFeatureFactory.NO_ORIENTATION);
    
changedGameFeatureListener.remove(sensorFeatureFactory.ORIENTATION_SENSORS);
    
changedGameFeatureListener.remove(sensorFeatureFactory.SIMULATED_ORIENTATION_SENSORS);
    

                                    }
                                

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    
this->loadResourceLoadingLevel(resourceLoadingLevelFactory.LOAD_GAME);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initApp(AbeClientInformationInterface abeClientInformation){
this->initConfigurable(abeClientInformation);
    
this->processorInit();
    
this->sensorGameUpdateProcessor.process(this->gameLayerManager);
    
this->sensorGameUpdateProcessor.sendNotifications(this->gameLayerManager);
    
this->initTouch();
    
}


                //@Throws(Exception.constructor)
            
    protected: void initTouch(){

    GameInitializedEvent gameInitializedEvent = GameInitializationUtil::getInstance().EVENT;;
    

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    
gameInitializedEvent.setResourceLoadingLevel(resourceLoadingLevelFactory.LOAD_TOUCH);
    
GameInitializedEventHandler::getInstance().fireEvent(gameInitializedEvent);
    
this->touchButtonFactory.defaultList();
    
this->updateTouch();
    
this->postInitTouch();
    
}


                //@Throws(Exception.constructor)
            
    public: void updateCurrentTouchInputFactory(BaseTouchInput nextTouchInput){

                        if(nextTouchInput != this->currentTouchInputFactory)
                        
                                    {
                                    this->currentTouchInputFactory= nextTouchInput;
    
PreLogUtil::put(this->currentTouchInputFactory.toString(), this, this->gameInputStrings.UDPATE_CURRENT_TOUCH_INPUT_FACTORY);
    
this->touchButtonFactory.toggle(this->isPaused(), this->currentTouchInputFactory.getList());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void updateTouch(){
this->gameBehavior.updateTouch(this);
    
}


                //@Throws(Exception.constructor)
            
    protected: void updateTouch2(){

    Features features = Features::getInstance();;
    

                        if(features.isFeature(this->touchFeatureFactory.AUTO_HIDE_SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    
                        if(this->gameLayerManager.getGameInfo().getCurrentLevel() -this->getStartLevel() == 1)
                        
                                    {
                                    this->setTouchPaintableP(NullPaintable::getInstance());
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void postInitTouch(){
this->setTouchButtonsPaintable(TouchButtonsPaintableFactory::getInstance(this->gameLayerManager.getForegroundBasicColor()));
    
this->updateScreenButtonPaintable();
    
}


    public: void initCommands(CommandListener cmdListener){
this->removeAllCommands();
    
this->addCommands();
    
this->setCommandListener(cmdListener);
    
}


    public: void addCommands(){

    GameCommandsFactory gameCommandsFactory = GameCommandsFactory::getInstance();;
    

    MyCommandsFactory myCommandsFactory = MyCommandsFactory::getInstance();;
    

                        if(DebugFactory::getInstance() != NoDebug::getInstance())
                        
                                    {
                                    this->addCommand(gameCommandsFactory.START_TRACE);
    

                                    }
                                
this->addCommand(gameCommandsFactory.RESTART_COMMAND);
    
this->addCommand(myCommandsFactory.PAUSE_COMMAND);
    
this->addCommand(gameCommandsFactory.QUIT_COMMAND);
    

    bool isOverScan = OperatingSystemFactory::getInstance().getOperatingSystemInstance().isOverScan();;
    

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
                                    
                        if(TouchScreenFactory::getInstance().isTouch() && InGameFeatures().isAny())
                        
                                    {
                                    this->addCommand(InGameOptionsForm::DISPLAY);
    

                                    }
                                
this->addCommand(gameCommandsFactory.SAVE);
    
this->addCommand(gameCommandsFactory.DISPLAY_LOAD_FORM);
    

                                    }
                                
}


    public: void itemStateChanged(Item item){

        try {
            
    std::string itemLabel = item.getLabel();;
    
this->logUtil.putF(StringMaker().append(this->commonLabels.ITEM_LABEL).append(itemLabel).toString(), this, "itemStateChanged");
    

                        if(item instanceof ChoiceGroup)
                        
                                    {
                                    
    GameFeatureUtil gameFeatureUtil = GameFeatureUtil::getInstance();;
    

                        if(gameFeatureUtil.isExclusive(itemLabel))
                        
                                    {
                                    gameFeatureUtil.updateExclusiveForChoiceGroup(item);
    

                                    }
                                
                        else {
                            gameFeatureUtil.updateMultiple(item);
    

                        }
                            

                                    }
                                
this->sensorGameUpdateProcessor.process(this->gameLayerManager);
    
this->updateTouch();
    
this->updateScreenButtonPaintable();
    
this->sensorGameUpdateProcessor.sendNotifications(this->gameLayerManager);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "itemStateChanged", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void updateScreenButtonPaintable(){
this->gameBehavior.updateScreenButtonPaintable(this);
    
}


    public: void updateScreenButtonPaintable2(){

    Features features = Features::getInstance();;
    

                        if(features.isFeature(this->touchFeatureFactory.AUTO_HIDE_SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    this->setTouchPaintableP(this->getTouchButtonsPaintable());
    
this->setStartLevel(this->gameLayerManager.getGameInfo().getCurrentLevel());
    

                                    }
                                
                             else 
                        if(features.isFeature(this->touchFeatureFactory.SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    this->setTouchPaintableP(this->getTouchButtonsPaintable());
    

                                    }
                                
                             else 
                        if(features.isFeature(this->touchFeatureFactory.HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    this->setTouchPaintableP(NullPaintable::getInstance());
    

                                    }
                                
                        else {
                            this->setTouchPaintableP(NullPaintable::getInstance());
    

                        }
                            
}


    public: AllBinaryGameLayerManager getLayerManager(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameLayerManager;
    
}


    public: void setLayerManager(AllBinaryGameLayerManager layerManager){
this->gameLayerManager= layerManager;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isGameOver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameOver;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setGameOver(bool gameOver){
this->gameOver= gameOver;
    
}


                //@Throws(Exception.constructor)
            
    public: void processGameOver(){
PreLogUtil::put(this->commonStrings.START, this, this->gameStrings.SET_GAME_OVER);
    
this->setGameOver(true);
    
this->removePauseCommand();
    
this->setGameState(this->gameStateFactory.SHOW_END_RESULT_GAME_STATE);
    
this->setEndGamePaintable(this->getEndGameStatePaintable());
    
}


    public: bool isHighScoreSubmitted(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highScoreSubmitted;
    
}


                //@Throws(Exception.constructor)
            
    public: void setHighScoreSubmitted(bool highScoreSubmitted){
this->highScoreSubmitted= highScoreSubmitted;
    

                        if(highScoreSubmitted)
                        
                                    {
                                    this->highScoresHelper.setSelectedHighScores(NullHighScoresSingletonFactory::getInstance());
    

                                    }
                                
this->logUtil.putF(StringMaker().append("isHighScoreSubmitted: ").appendboolean(highScoreSubmitted).toString(), this, "setHighScoreSubmitted");
    
}


    public: GameState getGameState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameState;
    
}


                //@Throws(Exception.constructor)
            
    public: void setGameState(GameState gameState){
this->logUtil.putF(StringMaker().append(this->gameStrings.GAME_STATE).append(this->stringUtil.toString(gameState)).toString(), this, this->gameStrings.SET_GAME_STATE);
    
this->gameState= gameState;
    
this->gameStateTimeHelper.setStartTimeTNT();
    
this->updateEndGameProcessor();
    
this->updateGameKeyEventProcessor();
    
this->gameBehavior.setGameState(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void updateGameState(){

    GameAdState gameAdState = this->gameAdStateFactory.getCurrentInstance();;
    
gameAdState.processAdState(this->gameState, this->gameLayerManager.getGameInfo().getGameType());
    

                        if(this->gameState != this->gameStateFactory.PLAYING_GAME_STATE)
                        
                                    {
                                    gameAdState.processPageAdState();
    

                                    }
                                
}


    private: void updateGameKeyEventProcessor(){

                        if(this->getGameState() != this->gameStateFactory.PLAYING_GAME_STATE || this->isCheating)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        }
                            
}


    protected: void removeAllGameKeyInputListenersOnBuild(){
this->removeAllGameKeyInputListeners();
    
}


    protected: void removeAllGameKeyInputListeners(){
this->gameBehavior.removeAllGameKeyInputListeners(this);
    
}


    protected: void removeAllGameKeyInputListeners2(){
this->logUtil.putF("Remove PlayerInput Listeners", this, "removeAllGameKeyInputListeners");
    




                        for (
    int32_t index = this->localPlayerGameInputList.size() -1;index >= 0; index--)
        {

    PlayerGameInput playerGameInput = this->localPlayerGameInputList.get(index);;
    
this->removeKeyInputListener(playerGameInput);
    
playerGameInput.removeNonAIInputGameKeyEvents();
    
}

}


    public: void removeKeyInputListener(PlayerGameInput playerGameInput){
this->gameKeyEventHandler.removeListener(playerGameInput);
    
}


                //@Throws(Exception.constructor)
            
    protected: void updateEndGameProcessor(){
this->gameBehavior.updateEndGameProcessor(this);
    
}


                //@Throws(Exception.constructor)
            
    protected: void updateEndGameProcessor2(){

                        if(this->getGameState() == this->gameStateFactory.SHOW_END_RESULT_GAME_STATE || this->getGameState() == this->gameStateFactory.SHOW_HIGH_SCORE_GAME_STATE)
                        
                                    {
                                    this->setEndGameProcessor(this->realEndGameProcessor);
    

                                    }
                                
                        else {
                            this->setEndGameProcessor(Processor::getInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void buildGameInit(bool isPortion){
}


                //@Throws(Exception.constructor)
            
    protected: void cleanupGame(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CLEANUP);
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.addNormalPortion(10, "Cleaning Up");
    
this->primaryPlayerQueue.clear();
    
this->secondaryPlayerQueue.clear();
    
GameLevelDisplayChangeEventListenersFactory::getInstance().clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void loadResourceLoadingLevel(ResourceLoadingLevel resourceLoadingLevel){

    GameInitializedEvent gameInitializedEvent = GameInitializationUtil::getInstance().EVENT;;
    
gameInitializedEvent.setResourceLoadingLevel(resourceLoadingLevel);
    
GameInitializedEventHandler::getInstance().fireEvent(gameInitializedEvent);
    
}


                //@Throws(Exception.constructor)
            
    public: void loadResources(int32_t level){

    GameInitializedEvent gameInitializedEvent = GameInitializationUtil::getInstance().EVENT;;
    
gameInitializedEvent.setLevel(level);
    
GameInitializedEventHandler::getInstance().fireEvent(gameInitializedEvent);
    
}


                //@Throws(Exception.constructor)
            
    public: void updateColor(){
}


                //@Throws(Exception.constructor)
            
    public: void buildGame(int32_t portion){
this->screenCapture.endRecording();
    
this->screenCapture.startRecording();
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Features features = Features::getInstance();;
    
progressCanvas.addNormalPortion(portion, "Generic Build");
    
this->removeAllGameKeyInputListenersOnBuild();
    
this->updateTouch();
    
progressCanvas.addNormalPortion(portion, "High Scores");
    
this->highScoresFactoryInterface.fetchHighScores(this->gameLayerManager.getGameInfo(), this->highScoresHelper);
    
this->setHighScoresPaintable(NullPaintable::getInstance());
    
progressCanvas.addNormalPortion(portion, "Finishing.");
    
this->getEndGameInfoP().update(this->getLayerManager().getGameInfo(), this);
    
this->isSingleKeyRepeatableProcessing= features.isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS);
    
this->setGameOver(false);
    
progressCanvas.addNormalPortion(portion, "Finishing..");
    
this->updateColor();
    
this->getStartIntermissionPaintable().update();
    

                        if(!this->isRunningInAnotherThread())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
progressCanvas.addNormalPortion(portion, "Finishing...");
    

                        if(this->isMainCanvas() || !this->isInitialized())
                        
                                    {
                                    
                        if(features.isFeature(MainFeatureFactory::getInstance().LOAD_ONDEMAND))
                        
                                    {
                                    
                        if(this->getCustomCommandListener() != 
                                    nullptr
                                )
                        
                                    {
                                    progressCanvas.end();
    

                                    }
                                

                                    }
                                
                        else {
                            progressCanvas.end();
    

                        }
                            
this->setInitialized(true);
    

                                    }
                                

                        if(this->getCustomCommandListener() == NullCommandListener::NULL_COMMAND_LISTENER)
                        
                                    {
                                    this->logUtil.putF("Show Game Paintable in DemoCanvas Thread", this, this->BUILD_GAME);
    
this->gameCanvasStartListener.showGamePaintable();
    

                                    }
                                
                        else {
                            this->logUtil.putF("No GameCanvasStartListener", this, this->BUILD_GAME);
    

                        }
                            
this->colorFillPaintable.setBasicColorP(this->gameLayerManager.getBackgroundBasicColor());
    
this->gameBehavior.buildGame(this);
    
}


    public: void buildGame2(){
PreLogUtil::put(StringMaker().append(this->gameInputStrings.ENABLE_PLAYER_GAME_INPUTS).appendint(this->localPlayerGameInputList.size()).toString(), this, this->BUILD_GAME);
    

    PlayerGameInput playerGameInput;;
    




                        for (
    int32_t index = this->localPlayerGameInputList.size() -1;index >= 0; index--)
        {
playerGameInput= this->localPlayerGameInputList.get(index);
    
PreLogUtil::put(StringMaker().append(this->gameInputStrings.ENABLE_PLAYER_GAME_INPUT).append(playerGameInput.toString()).toString(), this, this->BUILD_GAME);
    
playerGameInput.removeNonAIInputGameKeyEvents();
    
this->addKeyInputListener(playerGameInput);
    
}

}


    public: void addKeyInputListener(PlayerGameInput playerGameInput){
GameKeyEventHandler::getInstance().addListenerForPlayer(playerGameInput, playerGameInput.getPlayerInputId());
    
}


    private: DemoPaintableInterface gameCanvasStartListener = NullDemoPaintable::NULL_DEMO_PAINTABLE;

    public: void setGameCanvasStartListener(DemoPaintableInterface gameCanvasStartListener){
this->gameCanvasStartListener= gameCanvasStartListener;
    
}


                //@Throws(Exception.constructor)
            
    public: void loadState(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.LOAD);
    

    ABHashtable<Object*, Object*> hashtable = this->getLoadStateHashtable();;
    

                        if(hashtable != 
                                    nullptr
                                 && hashtable.size() > 0)
                        
                                    {
                                    
    std::string levelAsString = hashtable.get(GameInfo::LEVEL_NAME);;
    

    int32_t level = Integer::valueOf(levelAsString).intValue();;
    

    GameInfo gameInfo = this->gameLayerManager.getGameInfo();;
    
gameInfo.setCurrentLevel(level);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*> getLoadStateHashtable(){
this->logUtil.putF(StringMaker().append(this->commonLabels.START_LABEL).append(this->stringUtil.toString(this->hashtable)).toString(), this, "getLoadStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: void setLoadStateHashtable(ABHashtable<Object*, Object*> hashtable){
this->logUtil.putF(StringMaker().append(this->commonLabels.START_LABEL).append(this->stringUtil.toString(hashtable)).toString(), this, "setLoadStateHashtable");
    
this->hashtable= hashtable;
    
}


    public: ABHashtable<Object*, Object*> getCurrentStateHashtable(){

    ABHashtable<Object*, Object*> hashtable = this->stdUtil.createHashtable();;
    

    int32_t level = this->gameLayerManager.getGameInfo().getCurrentLevel();;
    
hashtable.put(GameInfo::LEVEL_NAME.toString(), std::to_string(level));
    
this->logUtil.putF(StringMaker().append("End: ").append(this->stringUtil.toString(hashtable)).toString(), this, "getCurrentStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


    public: void paintGameOver(Graphics graphics){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    
}


    public: void draw(Graphics graphics){
this->colorFillPaintable.paint(graphics);
    
this->basicSetColorUtil.setBasicColorP(graphics, this->gameLayerManager.getForegroundBasicColor());
    
this->gameSpecificPaintable.paint(graphics);
    
}


    public: void clear(Graphics graphics){
this->colorFillPaintable.paint(graphics);
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    
this->baseGameStatistics.nextRefresh();
    
this->draw(graphics);
    
this->menuPaintable.paint(graphics);
    
this->progressPaintable.paint(graphics);
    
}


    public: void paintThreed(Graphics graphics){
}


                //@Throws(Exception.constructor)
            
    public: void processEndLevelIntermissionGameState(){
}


    public: void nonBotPaint(Graphics graphics){
this->endGamePaintable.paint(graphics);
    
this->intermissionPaintable.paint(graphics);
    
this->paintIntermission(graphics);
    
this->touchPaintable.paint(graphics);
    
}


    public: void paintIntermission(Graphics graphics){
}


    private: const InputProcessor rawGameInputProcessor = GameCanvasInputProcessor(this);

    private: const InputProcessor rawInputProcessor = FormInputProcessor(this);

    private: InputProcessor inputProcessor = this->getRawGameInputProcessor();

    public: void keyPressed(int32_t keyCode){
this->keyPressedByDevice(keyCode, 0);
    
}


    public: void keyReleased(int32_t keyCode){
this->keyReleasedByDevice(keyCode, 0);
    
}


    public: void keyRepeated(int32_t keyCode){
this->keyRepeatedByDevice(keyCode, 0);
    
}


    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId){
this->inputProcessor.keyPressedByDevice(keyCode, deviceId);
    
}


    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){

                        if(this->isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this->inputProcessor.keyPressedByDevice(keyCode, deviceId);
    

                                    }
                                
}


    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
this->inputProcessor.keyReleasedByDevice(this, keyCode, deviceId);
    
}


                //@Throws(Exception.constructor)
            
    public: void handleRawKey(int32_t keyCode, int32_t deviceId, bool repeated){
}


    protected: int32_t endProgress(bool isProgress){

    int32_t portion = 30;;
    

                        if(isProgress && this->isMainCanvas())
                        
                                    {
                                    
    MyCommandsFactory myCommandsFactory = MyCommandsFactory::getInstance();;
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.start();
    
this->getCustomCommandListener().commandAction(myCommandsFactory.SET_DISPLAYABLE, progressCanvas);
    
portion= 4;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return portion;
    
}


                //@Throws(Exception.constructor)
            
    protected: void processPlayingGame(){
this->cheatProcessor.update();
    
this->sensorGameUpdateProcessor.getInputSensor().update();
    
this->gameInputProcessor.process();
    
this->gameLayerManager.process();
    
this->startIntermissionProcessor.process();
    
}


                //@Throws(Exception.constructor)
            
    protected: void threadInit(){
}


                //@Throws(Exception.constructor)
            
    protected: void processGame(){
super.process();
    

                        if(AllBinaryMediaManager::update())
                        
                                    {
                                    
                        if(!this->primaryPlayerQueue.process())
                        
                                    {
                                    this->secondaryPlayerQueue.process();
    

                                    }
                                

                                    }
                                
this->mainStateProcessor.process();
    
this->menuInputProcessor.processInputList();
    
this->endGameProcessor.process();
    
this->baseGameStatistics.nextFrame();
    
}


    public: void notifyDonePainting(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil.notifyObject(this);
    


}


    private: const int64_t YIELD_SLEEP = 100;

                //@Throws(Exception.constructor)
            
    public: void shouldWait(){

    Features features = Features::getInstance();;
    

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(features.isFeature(this->openGLFeatureFactory.OPENGL_2D))
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(features.isDefault(this->openGLFeatureFactory.OPENGL))
                        
                                    {
                                    
    OpenGLImageSpecificFactory openGLImageSpecificFactory = OpenGLImageSpecificFactory::getInstance();;
    

        while(openGLImageSpecificFactory.updating)
        {
Thread::sleep(this->YIELD_SLEEP);
    
}


                                    }
                                

                        }
                            
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START_RUNNABLE, this, this->commonStrings.RUN);
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.addNormalPortion(50, "Game Thread");
    
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
    

    GameAdState gameAdState = this->gameAdStateFactory.getCurrentInstance();;
    
gameAdState.init();
    
gameAdState.setGameIsReady(true);
    
this->gameBehavior.run(this);
    
this->logUtil.putF(this->commonStrings.END_RUNNABLE, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void run2(){

    Features features = Features::getInstance();;
    

                        if(features.isDefault(this->openGLFeatureFactory.OPENGL_AS_GAME_THREAD) || J2MEUtil::isHTML())
                        
                                    {
                                    
                        if(features.isDefault(this->openGLFeatureFactory.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    this->logUtil.putF(this->openGLFeatureFactory.OPENGL_AS_GAME_THREAD.getName(), this, this->commonStrings.RUN);
    

                                    }
                                

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    this->logUtil.putF(GraphicsStrings::getInstance().HTML, this, this->commonStrings.RUN);
    

                                    }
                                

    CurrentDisplayableFactory currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory.setRunnable(this->gameRunnable);
    
currentDisplayableFactory.setDisplayable(this);
    
OpenGLThreadUtil::getInstance().onResume();
    

                                    }
                                
                             else 
                        if(features.isDefault(this->openGLFeatureFactory.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS))
                        
                                    {
                                    this->logUtil.putF(this->openGLFeatureFactory.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS.getName(), this, this->commonStrings.RUN);
    
OpenGLThreadUtil::getInstance().onResume();
    

        while(this->isRunning())
        {
this->run3();
    
}

this->end();
    

                                    }
                                
                        else {
                            this->logUtil.putF("this thread", this, this->commonStrings.RUN);
    

        while(this->isRunning())
        {
this->run3();
    
}

this->end();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void run3(){
this->loopTimeHelper.setStartTime(this->gameTickTimeDelayHelper.setStartTime());
    
this->gameTickDisplayInfoSingleton.update();
    
this->processGame();
    
this->processLoopSleep();
    
}


    public: void setRunning(bool running){
super.setRunning(running);
    

        try {
            
    Features features = Features::getInstance();;
    

                        if(running)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(features.isDefault(this->openGLFeatureFactory.OPENGL) || SWTUtil::isSWT)
                        
                                    {
                                    
                        if(this->gameLayerManager.getGameInfo().getGameType() != this->gameTypeFactory.BOT)
                        
                                    {
                                    
    CurrentDisplayableFactory currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory.clearRunnable();
    

                                    }
                                
this->end();
    

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->SET_RUNNING, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void end(){
this->screenCapture.endRecording();
    
this->baseGameStatistics.add(StringMaker().append(this->baseGameStatistics.toString()).append(CommonSeps::getInstance().NEW_LINE).toString());
    
this->baseGameStatistics.init();
    
this->gameKeyEventHandler.removeListener(this->cheatProcessor);
    
this->close();
    
this->removeAllGameKeyInputListeners();
    
this->endGameThread();
    
}


                //@Throws(Exception.constructor)
            
    public: void endGameThread(){
DisplayChangeEventHandler::getInstance().removeListener(this);
    
GameLevelDisplayChangeEventListenersFactory::getInstance().clear();
    

    GameAdState gameAdState = this->gameAdStateFactory.getCurrentInstance();;
    
gameAdState.notPlayingAdState();
    
}


    public: HighScore createHighScore(int64_t score){

    GameInfo gameInfo = this->gameLayerManager.getGameInfo();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScore(0, "NONE", GameInfo(gameInfo.getGameType(), gameInfo.getGameMode(), PlayerTypesFactory::getInstance().PLAYER_TYPE_ONE, 0, 0), score);
    
}


                //@Throws(Exception.constructor)
            
    public: void setHighScore(AbeClientInformationInterface abeClientInformation, std::string name, int64_t score, bool autoSubmit, bool isLast){
this->gameBehavior.setHighScore(abeClientInformation, this, name, score, autoSubmit, isLast);
    
}


                //@Throws(Exception.constructor)
            
    public: void setHighScore2(AbeClientInformationInterface abeClientInformation, std::string name, int64_t score, bool autoSubmit, bool isLast){

    HighScore highScore = this->createHighScore(score);;
    

    HighScoreTextBox textBox = HighScoreTextBox(this->highScoresFactoryInterface, this->highScoresHelper, abeClientInformation, this->gameLayerManager.getGameInfo(), this->getCustomCommandListener(), name, highScore, this->gameLayerManager.getBackgroundBasicColor(), this->gameLayerManager.getForegroundBasicColor());;
    

                        if(isLast)
                        
                                    {
                                    this->getCustomCommandListener().commandAction(GameCommandsFactory::getInstance().SET_MENU_DISPLAYABLE, textBox);
    

                                    }
                                

                        if(autoSubmit)
                        
                                    {
                                    
//inner=true member= isStatic=
class SaveHighScoreRunnable
            : public Object
        : public Runnable {

    private: const ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();

    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(isLast)
                        
                                    {
                                    textBox.submit();
    

                                    }
                                
                        else {
                            textBox.saveHighScore();
    

                        }
                            

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, this, "run", e);
    
this->progressCanvas.end();
    
}

}


};

            
SecondaryThreadPool::getInstance().runTask(SaveHighScoreRunnable());
    

                                    }
                                
}


    protected: TimeDelayHelper getGameStateTimeHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameStateTimeHelper;
    
}


    protected: void setInitialized(bool initialized){
this->initialized= initialized;
    
}


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryGameCanvas::id;
    
}


    public: void setProgressPaintable(PaintableInterface paintable){
this->progressPaintable= paintable;
    
}


    public: IntermissionInterface getStartIntermissionInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startIntermissionInterface;
    
}


    public: IntermissionInterface getEndLevelIntermissionInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endLevelIntermissionInterface;
    
}


    protected: void setTouchPaintableP(Paintable paintable){
this->touchPaintable= paintable;
    
}


    public: Paintable getTouchPaintableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touchPaintable;
    
}


    protected: void setEndGamePaintable(Paintable endGamePaintable){
this->endGamePaintable= endGamePaintable;
    
}


    public: Paintable getEndGamePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endGamePaintable;
    
}


    protected: void setIntermissionPaintable(Paintable intermissionPaintable){
this->intermissionPaintable= intermissionPaintable;
    
}


    public: Paintable getIntermissionPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->intermissionPaintable;
    
}


    public: EndGameInfo getEndGameInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endGameInfo;
    
}


    public: void setHighScoresPaintable(Paintable highScoresPaintable){
this->highScoresPaintable= highScoresPaintable;
    
}


    public: Paintable getHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highScoresPaintable;
    
}


    protected: HighScoresPaintable getRealHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->realHighScoresPaintable;
    
}


    protected: void clearPlayerGameInputList(){

    PlayerGameInput playerGameInput;;
    




                        for (
    int32_t index = this->localPlayerGameInputList.size() -1;index >= 0; index--)
        {
playerGameInput= this->localPlayerGameInputList.get(index);
    
this->gameKeyEventHandler.removeListener(playerGameInput);
    
}

this->localPlayerGameInputList.clear();
    
}


    protected: void addPlayerGameInput(PlayerGameInput playerGameInput){
this->localPlayerGameInputList.add(playerGameInput);
    
}


    protected: void setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor){
this->menuInputProcessor= menuInputProcessor;
    
}


    protected: BasicMenuInputProcessor getMenuInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->menuInputProcessor;
    
}


    public: ScrollSelectionForm getMenuForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->menuForm;
    
}


    public: void setMenuForm(ScrollSelectionForm menuForm){
this->menuForm= menuForm;
    
}


    public: int32_t getStartLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startLevel;
    
}


    public: void setStartLevel(int32_t startLevel){
this->startLevel= startLevel;
    
}


    protected: void setTouchButtonsPaintable(Paintable touchButtonsPaintable){
this->touchButtonsPaintable= touchButtonsPaintable;
    
}


    protected: Paintable getTouchButtonsPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touchButtonsPaintable;
    
}


    public: void setGameInputProcessor(Processor gameInputProcessor){
this->gameInputProcessor= gameInputProcessor;
    
}


    protected: Processor getGameInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInputProcessor;
    
}


    protected: void setEndGameProcessor(Processor endGameProcessor){
this->endGameProcessor= endGameProcessor;
    
}


    protected: Processor getEndGameProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endGameProcessor;
    
}


    protected: void setEndGameStatePaintable(Paintable endGameStatePaintable){
this->endGameStatePaintable= endGameStatePaintable;
    
}


    protected: Paintable getEndGameStatePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endGameStatePaintable;
    
}


    protected: void setNonBotPaintableP(Paintable nonBotPaintable){
this->nonBotPaintable= nonBotPaintable;
    
}


    protected: Paintable getNonBotPaintableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nonBotPaintable;
    
}


    protected: void setStartIntermissionPaintable(InitUpdatePaintable startIntermissionPaintable){
this->startIntermissionPaintable= startIntermissionPaintable;
    
}


    protected: InitUpdatePaintable getStartIntermissionPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startIntermissionPaintable;
    
}


    public: void setMainStateProcessor(Processor mainStateProcessor){
this->mainStateProcessor= mainStateProcessor;
    
}


    protected: Processor getMainStateProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mainStateProcessor;
    
}


    protected: void setProcessGameProcessor(Processor processGameProcessor){
this->processGameProcessor= processGameProcessor;
    
}


    public: Processor getProcessGameProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->processGameProcessor;
    
}


    protected: void setOpenMenuPaintable(Paintable openMenuPaintable){
this->openMenuPaintable= openMenuPaintable;
    
}


    protected: Paintable getOpenMenuPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->openMenuPaintable;
    
}


    protected: void setPopupMenuInputProcessor(BasicMenuInputProcessor popupMenuInputProcessor){
this->popupMenuInputProcessor= popupMenuInputProcessor;
    
}


    protected: BasicMenuInputProcessor getPopupMenuInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->popupMenuInputProcessor;
    
}


    public: SensorGameUpdateProcessor getSensorGameUpdateProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sensorGameUpdateProcessor;
    
}


    public: InputProcessor getRawGameInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rawGameInputProcessor;
    
}


    public: InputProcessor getRawInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rawInputProcessor;
    
}


    public: void setInputProcessor(InputProcessor inputProcessor){
this->inputProcessor= inputProcessor;
    
}


    protected: InputProcessor getInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputProcessor;
    
}


    protected: void setMenuPaintable(Paintable menuPaintable){
this->menuPaintable= menuPaintable;
    
}


    protected: Paintable getMenuPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->menuPaintable;
    
}


    private: void setFormPaintable(Paintable formPaintable){
this->formPaintable= formPaintable;
    
}


    protected: Paintable getFormPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->formPaintable;
    
}


    public: void setGameSpecificPaintableP(Paintable gameSpecificPaintable){
this->gameSpecificPaintable= gameSpecificPaintable;
    
}


    protected: Paintable getGameSpecificPaintableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameSpecificPaintable;
    
}


    public: bool isSingleThread(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureUtil::getInstance().isAnyThreed() || SWTUtil::isSWT;
    
}


    public: bool isRunningInAnotherThread(){

    Features features = Features::getInstance();;
    

    OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(features.isDefault(openGLFeatureFactory.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRunning();;
    

                        }
                            
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryGameCanvas::TYPE;
    
}


};

            

