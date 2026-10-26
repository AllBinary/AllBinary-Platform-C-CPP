
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
        
            #include "java/lang/Thread.h"
        
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

      
#include <org/allbinary/game/GameInfo.h>

      
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

      
#include <org/allbinary/game/score/HighScoresHelperBase.h>

      
#include <org/allbinary/game/score/HighScoresPaintable.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/ResizableListenerHandler.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h>

      
#include <org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>

      
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockableFeature.h>

      
#include <org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/AllBinaryMediaManager.h>

      
#include <org/allbinary/media/audio/EarlySoundsFactory.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/thread/NullThread.h>

      
#include <org/allbinary/thread/ThreadFactoryUtil.h>

      
#include <org/allbinary/thread/ThreadUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCanvasRunnableInterface.h"
#include "MenuListener.h"
#include "DemoPaintableInterface.h"
#include "FormUtil.h"
#include "NullGameCanvas.h"
#include "AllBinaryGameCanvas.h"
#include "NoMenuInputProcessor.h"
#include "BasicMenuInputProcessor.h"
#include "DemoGameStartupRunnable.h"
#include "NullWaitGameRunnable.h"
#include "GameRunnable.h"
#include "GameInputMappingCanvas.h"
#include "DemoLimitedCommandTextItemArrayFactory.h"
#include "CommandFormInputProcessor.h"
#include "DemoCanvasProgressUtil.h"
#include "DemoGameRunnable.h"

class DemoCanvas: public RunnableCanvas, public GameCanvasRunnableInterface, public MenuListener, public DisplayChangeEventListener, public DemoPaintableInterface {

    private: static const int32_t id = 0;

    private: static const std::string BOT_GAME_STATS = "Bot Game Statistics: ";

    public: static const int32_t TYPE = 3;

    protected: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    protected: const MyCommandsFactory myCommandsFactory = MyCommandsFactory::getInstance();

    protected: const GameAdStateFactory gameAdStateFactory = GameAdStateFactory::getInstance();

    protected: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    protected: const GameStateFactory gameStateFactory = GameStateFactory::getInstance();

    private: const ThreadFactoryUtil threadFactoryUtil = ThreadFactoryUtil::getInstance();

    protected: const FormUtil formUtil = FormUtil::getInstance();

    protected: Paintable fullscreenPaintable = FullScreenPaintableFactory::getInstance().paintable;

    private: StatePaintable basicGameDemoPaintable = StatePaintableFactory::getInstance();

    private: SpecialAnimation specialAnimationInterface = SpecialAnimation::getInstance();

    private: Animation paintedSpecialAnimationInterface = SpecialAnimation::getInstance();

    private: const FullScreenUtil fullScreenUtil = FullScreenUtil::getInstance();

    private: AllBinaryGameCanvas gameCanvas = NullGameCanvas::getInstance();

    private: const HighScoresHelperBase highScoresHelper = HighScoresHelper();

    private: const HighScoresPaintable realHighScoresPaintable = HighScoresPaintable();

    private: Paintable highScoresPaintable = NullPaintable::getInstance();

    private: int32_t state = 0;

    private: Thread canvasThread = NullThread::NULL_THREAD;

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(6000);

    private: BasicColor basicColor = this->basicColorFactory.RED;

    protected: AbeClientInformationInterface abeClientInformation;

    private: HighScoresFactoryInterface highScoresFactoryInterface;

    private: BasicMenuInputProcessor menuInputProcessor = NoMenuInputProcessor::getInstance();

    private: ScrollSelectionForm menuForm = ScrollSelectionForm::getNullScrollSelectionForm();

    private: BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface;

    private: bool initialized= false;

    private: DemoGameStartupRunnable demoGameRunnable;

    private: Paintable defaultPaintableInterface = NullPaintable::getInstance();

    private: PaintableInterface paintableInterface = NullPaintable::getInstance();

    private: InitUpdatePaintable overlayPaintable;

    private: const PaintableInterface progressPaintable = ProgressCanvasFactory::getLazyInstance();

    private: int32_t tempWait = NullWaitGameRunnable::getInstance().WAIT;

    private: const InputToGameKeyMapping inputToGameKeyMapping = PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().getInputMapping();

    protected: GameRunnable gameRunnable = NullWaitGameRunnable::getInstance();

public: DemoCanvas(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, HighScoresFactoryInterface highScoresFactoryInterface, Paintable paintable, InitUpdatePaintable overlayPaintable, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool isContinue) : RunnableCanvas(commandListener, CurrentDisplayableFactory::getInstance().DEFAULT_CHILD_NAME_LIST, true){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setWait(NullWaitGameRunnable::getInstance().WAIT);
    
this->gameInitializationInterfaceFactoryInterface= gameInitializationInterfaceFactoryInterface;
    
GameInitializationUtil::getInstance().initDemo(abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
    
ResizableListenerHandler::getInstance().fireEvent(false);
    
this->overlayPaintable= overlayPaintable;
    
this->highScoresFactoryInterface= highScoresFactoryInterface;
    
this->setDefaultPaintableInterface(paintable);
    
this->setPaintableInterface(this->getDefaultPaintableInterface());
    

                        if(isContinue)
                        
                                    {
                                    this->addCommand(GameCommandsFactory::getInstance().CONTINUE_COMMAND);
    

                                    }
                                

                        if(ChangedGameFeatureListener::getInstance().isChangedFeature(GameFeatureFactory::getInstance().SOUND))
                        
                                    {
                                    this->mediaInit();
    

                                    }
                                
this->demoGameRunnable= DemoGameStartupRunnable(this);
    
DisplayChangeEventHandler::getInstance().addListenerInterface(this);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            this->logUtil.putF(StringMaker().append(this->commonLabels.START_LABEL).append(this->displayInfo.toString()).toString(), this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT);
    

    ScrollSelectionForm scrollSelectionForm = this->getMenuForm();;
    

                        if(scrollSelectionForm != 
                                    nullptr
                                )
                        
                                    {
                                    
    FormType formType = FormTypeFactory::getInstance().getFormType();;
    

    Rectangle rectangle = this->formUtil.createFormRectangle();;
    
scrollSelectionForm.init(rectangle, formType);
    

                                    }
                                
this->overlayPaintable.init();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT, e);
    
}

}


    protected: std::vector<Object*> getCustomCommands(){

    GameCommandsFactory gameCommandsFactory = GameCommandsFactory::getInstance();;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    
    std::vector<Object*> commandArray = 
                                                        {
                                                            gameCommandsFactory.START_COMMAND,HighScoreCommands::getInstance().DISPLAY,GameInputMappingCanvas::DISPLAY,gameCommandsFactory.DISPLAY_ABOUT
                                                        };;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commandArray;
    

                                    }
                                
                        else {
                            
    BasicArrayList commandList = BasicArrayListD();;
    
commandList.add(gameCommandsFactory.START_COMMAND);
    

    InApplicationPurchaseFactory inApplicationPurchaseFactory = InApplicationPurchaseFactory::getInstance();;
    

                        if(inApplicationPurchaseFactory.isEnabled())
                        
                                    {
                                    
    BasicArrayList list = LockableFeatureFactory::getInstance().getList();;
    

                        if(list.size() > 0 && !inApplicationPurchaseFactory.isPurchased(list.get(0)))
                        
                                    {
                                    commandList.add(gameCommandsFactory.BUY_COMMAND);
    

                                    }
                                

                                    }
                                
commandList.add(HighScoreCommands::getInstance().DISPLAY);
    

        try {
            
    bool isOverScan = OperatingSystemFactory::getInstance().getOperatingSystemInstance().isOverScan();;
    

                        if(SWTUtil::isSWT)
                        
                                    {
                                    commandList.add(GameInputMappingCanvas::DISPLAY);
    

                                    }
                                
                             else 
                        if(!isOverScan)
                        
                                    {
                                    commandList.add(gameCommandsFactory.DISPLAY_OPTIONS);
    
commandList.add(gameCommandsFactory.DISPLAY_LOAD_FORM);
    
commandList.add(GameInputMappingCanvas::DISPLAY);
    

                                    }
                                

                //: 
} catch(e) 
            {
}

commandList.add(gameCommandsFactory.DISPLAY_ABOUT);
    

    std::vector<Object*> commandArray = commandList.toArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commandArray;
    

                        }
                            
}


    public: void initCommands(CommandListener cmdListener){
this->removeAllCommands();
    

    std::vector<Object*> commandArray = this->getCustomCommands();;
    

    int32_t size = commandArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->addCommand(commandArray[index]);
    
}

CustomGameMenuUtil::add(this);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public: void initPostPaint(){
}


                //@Throws(Exception.constructor)
            
    public: void mediaInit(){
AllBinaryMediaManager::init(EarlySoundsFactory::getInstance());
    
}


    public: void itemStateChanged(Item item){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initMenu(){
this->close();
    

    CommandTextItemArrayFactory commandTextItemArrayFactory = DemoLimitedCommandTextItemArrayFactory::getInstance().getCommandTextItemArrayFactory();;
    

    std::vector<ABCustomItem> items = commandTextItemArrayFactory.getInstance(this->getCommandStack(), this->basicColorFactory.BLACK, this->basicColorFactory.WHITE);;
    

    FormType formType = FormTypeFactory::getInstance().getFormType();;
    

    Rectangle rectangle = this->formUtil.createFormRectangle();;
    
PreLogUtil::put(StringMaker().append(this->commonLabels.START_LABEL).append(this->displayInfo.toString()).toString(), this, "initMenu");
    

    ScrollSelectionForm scrollSelectionForm = CommandCurrentSelectionFormFactory::getInstance(StringUtil::getInstance().EMPTY_STRING, items, rectangle, formType, 15, true, this->basicColorFactory.BLACK, this->basicColorFactory.WHITE);;
    
this->setMenuForm(scrollSelectionForm);
    

    FormType formType2 = FormTypeFactory::getInstance().getFormType();;
    

    Rectangle rectangle2 = this->formUtil.createFormRectangle();;
    
scrollSelectionForm.init(rectangle2, formType2);
    

                        if(this->getMenuForm() != ScrollSelectionFormNoneFactory::getInstance())
                        
                                    {
                                    this->setMenuInputProcessor(CommandFormInputProcessor(BasicArrayListD(),  -1, this, this->getMenuForm()));
    

                                    }
                                
this->open();
    
}


    public: void open(){
BasicMotionGesturesHandler::getInstance().addListenerInterface(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance().addListener(this->getMenuInputProcessor());
    
}


    public: void close(){
BasicMotionGesturesHandler::getInstance().removeListener(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance().removeListener(this->getMenuInputProcessor());
    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DemoCanvas::id;
    
}


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
this->addGameKeyEvent(keyCode, false);
    
}


    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
this->removeGameKeyEvent(keyCode, false);
    
}


    private: bool isSingleKeyRepeatableProcessing = Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){

                        if(this->isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this->addGameKeyEvent(keyCode, true);
    

                                    }
                                
}


    private: const GameKey NONE = GameKeyFactory::getInstance().NONE;

    private: const GameKeyEventFactory gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: int32_t lastKeyNotMapped =  -1;

    private: void addGameKeyEvent(int32_t keyCode, bool repeated){

        try {
            
    GameKey gameKey = this->inputToGameKeyMapping.getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->NONE)
                        
                                    {
                                    
    GameKeyEvent gameKeyEvent = this->gameKeyEventFactory.getInstanceForInput(this, gameKey);;
    
DownGameKeyEventHandler::getInstance().fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            
                        if(this->lastKeyNotMapped != keyCode)
                        
                                    {
                                    this->lastKeyNotMapped= keyCode;
    
this->logUtil.putF(StringMaker().append(this->gameInputStrings.NO_KEY).appendint(keyCode).toString(), this, this->gameInputStrings.ADD_KEY_EVENT);
    

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put("Key Event Error", this, this->gameInputStrings.ADD_KEY_EVENT, e);
    
}

}


    private: void removeGameKeyEvent(int32_t keyCode, bool repeated){

        try {
            
    GameKey gameKey = this->inputToGameKeyMapping.getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->NONE)
                        
                                    {
                                    
    GameKeyEvent gameKeyEvent = this->gameKeyEventFactory.getInstanceForInput(this, gameKey);;
    
UpGameKeyEventHandler::getInstance().fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil.putF(StringMaker().append(this->gameInputStrings.NO_KEY).appendint(keyCode).toString(), this, this->gameInputStrings.REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put("Key Event Error", this, this->gameInputStrings.REMOVE_KEY_EVENT, e);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause(){
this->close();
    
this->setPaused(true);
    
this->gameRunnable= NullWaitGameRunnable::getInstance();
    
this->gameCanvas.pause();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause(){
this->open();
    
this->gameCanvas.unPause();
    
this->gameRunnable= this->gameCanvas.gameRunnable;
    
this->setPaused(false);
    
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


    public: bool isGameOver(){
this->logUtil.putF(StringMaker().append(this->commonStrings.NOT_IMPLEMENTED).append(" since not a game").toString(), this, "isGameOver");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void setLoadStateHashtable(ABHashtable<Object*, Object*> hashtable){
this->logUtil.putF("Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
    
}


                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*> getLoadStateHashtable(){
this->logUtil.putF("Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stdUtil.NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*> getCurrentStateHashtable(){
this->logUtil.putF("Trying to save the AI lol", this, "getCurrentStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stdUtil.NULL_TABLE;
    
}


    public: void setHighScoreSubmitted(bool isNotUsed){
}


    public: void paint(Graphics graphics){
this->paintableInterface.paint(graphics);
    
this->paintedSpecialAnimationInterface.paintXY(graphics, 0, 0);
    
this->highScoresPaintable.paint(graphics);
    
this->getBasicGameDemoPaintable().paint(graphics);
    
this->overlayPaintable.paint(graphics);
    
this->fullscreenPaintable.paint(graphics);
    
this->progressPaintable.paint(graphics);
    
}


    public: void paintThreed(Graphics graphics){
this->paintableInterface.paintThreed(graphics);
    
this->paintedSpecialAnimationInterface.paintThreedXYZ(graphics, 0, 0, 0);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processGameOver(){
this->logUtil.putF("Not Implemented since not a game", this, "setGameOver");
    
}


    protected: void demoStateChange(){

    int32_t newState = this->state +1;;
    

                        if(newState > 2)
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                             else 
                        if(newState == 2)
                        
                                    {
                                    
                        if(!this->highScoresHelper.isAnyHighScores())
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                        else {
                            
    HighScores highScores = this->highScoresHelper.getNextHighScores();;
    

                        if(highScores == NullHighScoresSingletonFactory::getInstance())
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                        else {
                            this->getRealHighScoresPaintable().setHighScores(highScores);
    

                        }
                            

                        }
                            

                                    }
                                
this->setState(newState);
    
this->updateDemoState();
    
}


    private: const std::string SET_STATE = "setState";

    protected: void updateDemoState(){
PreLogUtil::put(SmallIntegerSingletonFactory::getInstance().createInstance(this->state).toString(), this, this->SET_STATE);
    
this->getBasicGameDemoPaintable().setState(this->state);
    

                        if(this->state == 0)
                        
                                    {
                                    this->highScoresPaintable= NullPaintable::getInstance();
    
this->paintedSpecialAnimationInterface= this->getSpecialAnimationInterface();
    

                        if(!this->demoGameRunnable.isRunning() && this->gameCanvas.isInitialized())
                        
                                    {
                                    this->getSpecialAnimationInterface().reset();
    

                                    }
                                

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
                                

    GameAdState gameAdState = this->gameAdStateFactory.getCurrentInstance();;
    
gameAdState.processPageAdState();
    
}


                //@Throws(Exception.constructor)
            
    protected: int32_t getNextRandom(){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    protected: AllBinaryGameLayerManager createGameLayerManager(int32_t randomValue){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    protected: GameCanvasRunnableInterface createRunnable(int32_t randomLevel){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    protected: void create(){
PreLogUtil::put(this->commonStrings.START, this, "create");
    
this->highScoresPaintable= NullPaintable::getInstance();
    

    int32_t randomLevel = this->getNextRandom();;
    
this->gameCanvas= this->createRunnable(randomLevel);
    
this->basicColor= this->gameCanvas.getLayerManager().getForegroundBasicColor();
    
this->getRealHighScoresPaintable().setBasicColorP(this->basicColor);
    
this->gameCanvas.setGameCanvasStartListener(this);
    

    GameInfo gameInfo = this->gameCanvas.getLayerManager().getGameInfo();;
    
this->getHighScoresFactoryInterface().fetchHighScores(gameInfo, this->highScoresHelper);
    
}


                //@Throws(Exception.constructor)
            
    protected: void start(){

    AllBinaryGameCanvas gameCanvas = this->gameCanvas;;
    
PreLogUtil::put(StringMaker().append("Game Thread in DemoCanvas: ").append(this->stringUtil.toString(gameCanvas)).toString(), this, this->commonStrings.START);
    
this->canvasThread= this->threadFactoryUtil.getInstanceGameCanvasRunnable(gameCanvas);
    
this->gameCanvas.setThread(this->canvasThread);
    
this->threadFactoryUtil.start(this->canvasThread);
    

                        if(this->getWait() == NullWaitGameRunnable::getInstance().WAIT)
                        
                                    {
                                    this->setWait(this->getTempWait());
    

                                    }
                                
}


    public: void preDemoProcess(){

                        if(!this->gameCanvas.isInitialized() || this->gameCanvas.getTitle() == NullGameCanvas::NO_GAME)
                        
                                    {
                                    
                        if(AllBinaryMediaManager::update())
                        
                                    {
                                    
                        if(!PrimaryPlayerQueueFactory::getInstance().process())
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance().process();
    

                                    }
                                

                                    }
                                

                                    }
                                
this->overlayPaintable.update();
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
super.process();
    
this->getMenuInputProcessor().processInputList();
    
this->preDemoProcess();
    

                        if(this->state == 0)
                        
                                    {
                                    
    IndexedAnimationBehavior indexedAnimationBehavior = (this->getSpecialAnimationInterface().getAnimationBehavior());;
    

                        if(indexedAnimationBehavior.loopIndex < 1)
                        
                                    {
                                    this->timeDelayHelper.setStartTimeTNT();
    

                                    }
                                

    DemoGameMidlet demoGameMidlet = this->getCustomCommandListener();;
    

                        if(this->gameCanvas != NullGameCanvas::getInstance() && this->gameCanvas.isGameOver())
                        
                                    {
                                    this->stopGameDemo();
    

    int32_t randomLevel = this->getNextRandom();;
    

    GameInfo gameInfo = this->gameCanvas.getLayerManager().getGameInfo();;
    
gameInfo.setCurrentLevel(randomLevel);
    
this->gameCanvas.setGameOver(false);
    
this->start();
    

                                    }
                                
                             else 
                        if(this->gameCanvas == NullGameCanvas::getInstance() && demoGameMidlet.isReady())
                        
                                    {
                                    
                        if(!this->demoGameRunnable.isRunning())
                        
                                    {
                                    this->startDemoGame();
    
this->demoGameRunnable.setRunning(true);
    

    Thread thread = this->threadFactoryUtil.getInstanceForRunnable(this->demoGameRunnable);;
    
this->demoGameRunnable.setThread(thread);
    
this->threadFactoryUtil.start(thread);
    

                                    }
                                

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void startDemoGame(){
DemoCanvasProgressUtil::showProgress(this);
    
}


                //@Throws(Exception.constructor)
            
    protected: void stopGameDemo(){

                        if(this->gameCanvas != NullGameCanvas::getInstance())
                        
                                    {
                                    this->logUtil.putF("Set Running False", this, "stopGameDemo");
    
this->gameCanvas.setRunning(false);
    

                                    }
                                
ThreadUtil::getInstance().join(this->canvasThread);
    
}


    public: void showGamePaintable(){

    std::string METHOD_NAME = "showGamePaintable";;
    
PreLogUtil::put(this->commonStrings.START, this, METHOD_NAME);
    

    bool isDefault = J2MEUtil::isHTML();;
    

                        if(this->gameCanvas != NullGameCanvas::getInstance() && (this->gameCanvas.isRunning() || isDefault || SWTUtil::isSWT) && !(this->gameCanvas.getType() == NullGameCanvas::TYPE))
                        
                                    {
                                    this->gameRunnable= this->gameCanvas.gameRunnable;
    
PreLogUtil::put("Showing Game", this, METHOD_NAME);
    
this->setPaintableInterface(this->gameCanvas);
    

                                    }
                                
                        else {
                            this->gameRunnable= NullWaitGameRunnable::getInstance();
    
PreLogUtil::put("Not Showing Game", this, METHOD_NAME);
    
this->setPaintableInterface(this->getDefaultPaintableInterface());
    

                        }
                            
}


    protected: bool isReadyForStateChange(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return !this->demoGameRunnable.isRunning() && this->gameCanvas.isInitialized();
    
}


                //@Throws(Exception.constructor)
            
    protected: void processGame(){
this->gameRunnable.run();
    

                        if(!this->specialAnimationInterface.isComplete() && this->isReadyForStateChange())
                        
                                    {
                                    this->specialAnimationInterface.nextFrame();
    

                                    }
                                

                        if(this->timeDelayHelper.isTimeTNT() && this->isReadyForStateChange())
                        
                                    {
                                    this->demoStateChange();
    

                                    }
                                
                        else {
                            this->process();
    

                        }
                            
}


    public: void run(){
this->logUtil.putF(this->commonStrings.START_RUNNABLE, this, this->commonStrings.RUN);
    

        try {
            
    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Features features = Features::getInstance();;
    

    OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    
progressCanvas.addNormalPortion(50, "Demo Thread");
    
this->setCurrentThread();
    
this->setRunning(true);
    

                        if(features.isFeature(MainFeatureFactory::getInstance().LOAD_ONDEMAND))
                        
                                    {
                                    progressCanvas.end();
    

                                    }
                                
                        else {
                            progressCanvas.addNormalPortion(50, "Demo Thread Running");
    

                        }
                            
this->fullScreenUtil.initOnRun(this, this->getCustomCommandListener());
    
this->initMenu();
    
this->initPostPaint();
    
this->updateDemoState();
    

                        if(features.isDefault(openGLFeatureFactory.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    
        while(this->gameCanvas == NullGameCanvas::getInstance() || !this->gameCanvas.isInitialized())
        {
this->loopTimeHelper.setStartTimeTNT();
    
this->processGame();
    
this->processLoopSleep();
    
}


    DemoGameRunnable demoGameRunnable = DemoGameRunnable(this);;
    

    CurrentDisplayableFactory currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory.setRunnable(demoGameRunnable);
    
currentDisplayableFactory.setMyCanvas(this);
    
OpenGLThreadUtil::getInstance().onResume();
    

                                    }
                                

                        if(features.isDefault(openGLFeatureFactory.OPENGL_AS_GAME_THREAD) || J2MEUtil::isHTML())
                        
                                    {
                                    
    DemoGameRunnable demoGameRunnable = DemoGameRunnable(this);;
    

    CurrentDisplayableFactory currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory.setRunnable(demoGameRunnable);
    
currentDisplayableFactory.setMyCanvas(this);
    

                                    }
                                
                        else {
                            
        while(this->isRunning())
        {
this->run3();
    
}

this->end();
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

this->logUtil.putF(this->commonStrings.END_RUNNABLE, this, this->commonStrings.RUN);
    
}


                //@Throws(Exception.constructor)
            
    public: void run3(){
this->loopTimeHelper.setStartTimeTNT();
    
this->processGame();
    
this->processLoopSleep();
    
}


    public: void setRunning(bool running){
super.setRunning(running);
    

        try {
            
    Features features = Features::getInstance();;
    

    OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(running)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if((features.isDefault(openGLFeatureFactory.OPENGL) || J2MEUtil::isHTML()) || SWTUtil::isSWT)
                        
                                    {
                                    
    CurrentDisplayableFactory currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory.clearRunnable();
    
this->end();
    

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->SET_RUNNING, e);
    
}

}


    private: const BaseGameStatistics baseGameStatistics = GameStatisticsFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: void end(){

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Features features = Features::getInstance();;
    
this->baseGameStatistics.add(StringMaker().append(DemoCanvas::BOT_GAME_STATS).append(this->baseGameStatistics.toString()).append(CommonSeps::getInstance().NEW_LINE).toString());
    
this->baseGameStatistics.init();
    

                        if(features.isFeature(MainFeatureFactory::getInstance().LOAD_ONDEMAND))
                        
                                    {
                                    progressCanvas.start();
    

                                    }
                                
this->logUtil.putF("Demo End", this, this->commonStrings.RUN);
    
this->close();
    
DisplayChangeEventHandler::getInstance().removeListener(this);
    
this->stopGameDemo();
    
}


    public: void setGameState(GameState gameState){
}


    public: GameState getGameState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameStateFactory.PLAYING_GAME_STATE;
    
}


    public: AllBinaryGameCanvas getGameCanvasRunnableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameCanvas;
    
}


    public: bool isDemoLoading(){

    AllBinaryGameCanvas gameCanvas = this->gameCanvas;;
    

                        if(gameCanvas == NullGameCanvas::getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(gameCanvas.isInitialized())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    protected: int32_t getState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->state;
    
}


    protected: void setState(int32_t state){
this->state= state;
    
}


    public: bool isHighScoreSubmitted(){
this->logUtil.putF("Wow the AI got a high score!", this, "isHighScoreSubmitted");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: HighScoresPaintable getRealHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->realHighScoresPaintable;
    
}


    protected: void setSpecialAnimationInterface(SpecialAnimation specialAnimationInterface){
specialAnimationInterface.setFrame(0);
    
this->specialAnimationInterface= specialAnimationInterface;
    
}


    protected: SpecialAnimation getSpecialAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->specialAnimationInterface;
    
}


    protected: void setPaintableInterface(PaintableInterface paintableInterface){
this->paintableInterface= paintableInterface;
    
}


    protected: PaintableInterface getPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paintableInterface;
    
}


    protected: void setDefaultPaintableInterface(Paintable defaultPaintableInterface){
this->defaultPaintableInterface= defaultPaintableInterface;
    
}


    protected: Paintable getDefaultPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultPaintableInterface;
    
}


    public: HighScoresFactoryInterface getHighScoresFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highScoresFactoryInterface;
    
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


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


    protected: Paintable getOverlayPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->overlayPaintable;
    
}


    protected: void setBasicGameDemoPaintable(StatePaintable basicGameDemoPaintable){
this->basicGameDemoPaintable= basicGameDemoPaintable;
    
}


    protected: StatePaintable getBasicGameDemoPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicGameDemoPaintable;
    
}


    public: void setTempWait(int32_t tempWait){
this->tempWait= tempWait;
    
}


    public: int32_t getTempWait(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tempWait;
    
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


    public: BasicBuildGameInitializerFactory getGameInitializationInterfaceFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInitializationInterfaceFactoryInterface;
    
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DemoCanvas::TYPE;
    
}


};

            

