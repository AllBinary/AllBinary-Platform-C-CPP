
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCanvasRunnableInterface.h"
#include "MenuListener.h"
#include "FormUtil.h"
#include "NoMenuInputProcessor.h"
#include "BasicMenuInputProcessor.h"
#include "NullWaitGameRunnable.h"
#include "GameRunnable.h"
#include "GameInputMappingCanvas.h"

class StartCanvas: public RunnableCanvas: public GameCanvasRunnableInterface, public MenuListener, public DisplayChangeEventListener {
        

    private: static const id: int32_t = 0;

    private: static const BOT_GAME_STATS: string = "Bot Game Statistics: ";

    const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    const features: Features = Features.getInstance()!;

    const openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;

    const myCommandsFactory: MyCommandsFactory = MyCommandsFactory.getInstance()!;

    const gameAdStateFactory: GameAdStateFactory = GameAdStateFactory.getInstance()!;

    const gameStateFactory: GameStateFactory = GameStateFactory.getInstance()!;

    const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    const formUtil: FormUtil = FormUtil.getInstance()!;

    private: basicGameDemoPaintable: StatePaintable = StatePaintableFactory.getInstance()!;

    private: specialAnimationInterface: SpecialAnimation = SpecialAnimation.getInstance()!;

    paintedSpecialAnimationInterface: Animation = SpecialAnimation.getInstance()!;

    private: const fullScreenUtil: FullScreenUtil = FullScreenUtil.getInstance()!;

    private: const highScoresHelper: HighScoresHelper = new HighScoresHelper();

    private: const realHighScoresPaintable: HighScoresPaintable = new HighScoresPaintable();

    private: highScoresPaintable: Paintable = NullPaintable.getInstance()!;

    private: state: int32_t = 0;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(6000);

    private: const highScoresFactoryInterface: HighScoresFactoryInterface;

    private: menuInputProcessor: BasicMenuInputProcessor = NoMenuInputProcessor.getInstance()!;

    private: menuForm: ScrollSelectionForm = ScrollSelectionForm.getNullScrollSelectionForm()!;

    private: const gameInitializationInterfaceFactoryInterface: BasicBuildGameInitializerFactory;

    private: initialized: bool= false;

    private: defaultPaintableInterface: Paintable = NullPaintable.getInstance()!;

    private: paintableInterface: PaintableInterface = NullPaintable.getInstance()!;

    private: const overlayPaintable: InitUpdatePaintable;

    private: tempWait: int32_t = NullWaitGameRunnable.getInstance()!.WAIT;

    private: const inputToGameKeyMapping: InputToGameKeyMapping = PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance()!.getInputMapping()!;

    gameRunnable: GameRunnable = NullWaitGameRunnable.getInstance()!;

    private: progressPaintable: PaintableInterface = ProgressCanvasFactory.getLazyInstance()!;

public constructor (AbeClientInformationInterface abeClientInformation, CommandListener commandListener, HighScoresFactoryInterface highScoresFactoryInterface, Paintable paintable, InitUpdatePaintable overlayPaintable, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool isContinue){
            super(commandListener, CurrentDisplayableFactory.getInstance()!.DEFAULT_CHILD_NAME_LIST, true);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setWait(NullWaitGameRunnable.getInstance()!.WAIT);
    
this.gameInitializationInterfaceFactoryInterface= gameInitializationInterfaceFactoryInterface;
    
GameInitializationUtil.getInstance()!.initDemo(abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
    
ResizableListenerHandler.getInstance()!.fireEvent(false);
    
this.overlayPaintable= overlayPaintable;
    
this.highScoresFactoryInterface= highScoresFactoryInterface;
    
this.setDefaultPaintableInterface(paintable);
    
this.setPaintableInterface(this.getDefaultPaintableInterface());
    

                        if(isContinue)
                        
                                    {
                                    this.addCommand(GameCommandsFactory.getInstance()!.CONTINUE_COMMAND);
    

                                    }
                                

                        if(ChangedGameFeatureListener.getInstance()!.isChangedFeature(GameFeatureFactory.getInstance()!.SOUND))
                        
                                    {
                                    this.mediaInit();
    

                                    }
                                
DisplayChangeEventHandler.getInstance()!.addListenerInterface(this);
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            
    scrollSelectionForm: ScrollSelectionForm = this.getMenuForm()!;;
    

                        if(scrollSelectionForm != 
                                    null
                                )
                        
                                    {
                                    
    formType: FormType = FormTypeFactory.getInstance()!.getFormType()!;;
    

    rectangle: Rectangle = this.formUtil!.createFormRectangle()!;;
    
scrollSelectionForm!.init(rectangle, formType);
    

                                    }
                                
this.overlayPaintable!.init();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.canvasStrings!.ON_DISPLAY_CHANGE_EVENT, e);
    
}

}


    std::vector<any> getCustomCommands(){

    gameCommandsFactory: GameCommandsFactory = GameCommandsFactory.getInstance()!;;
    

                        if(J2MEUtil.isHTML())
                        
                                    {
                                    
    commandArray: std::vector<any> = 
                                                        [
                                                            gameCommandsFactory!.START_COMMAND,HighScoreCommands.getInstance()!.DISPLAY,GameInputMappingCanvas.DISPLAY,gameCommandsFactory!.DISPLAY_ABOUT
                                                        ];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commandArray;
    

                                    }
                                
                        else {
                            
    commandList: BasicArrayList = new BasicArrayListD();;
    
commandList!.add(gameCommandsFactory!.START_COMMAND);
    

    inApplicationPurchaseFactory: InApplicationPurchaseFactory = InApplicationPurchaseFactory.getInstance()!;;
    

                        if(inApplicationPurchaseFactory!.isEnabled())
                        
                                    {
                                    
    list: BasicArrayList = LockableFeatureFactory.getInstance()!.getList()!;;
    

                        if(list.size() > 0 && !inApplicationPurchaseFactory!.isPurchased(list.get(0) as LockableFeature))
                        
                                    {
                                    commandList!.add(gameCommandsFactory!.BUY_COMMAND);
    

                                    }
                                

                                    }
                                
commandList!.add(HighScoreCommands.getInstance()!.DISPLAY);
    

        try {
            
    isOverScan: bool = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!.isOverScan()!;;
    

                        if(SWTUtil.isSWT)
                        
                                    {
                                    commandList!.add(GameInputMappingCanvas.DISPLAY);
    

                                    }
                                
                             else 
                        if(!isOverScan)
                        
                                    {
                                    commandList!.add(gameCommandsFactory!.DISPLAY_OPTIONS);
    
commandList!.add(gameCommandsFactory!.DISPLAY_LOAD_FORM);
    
commandList!.add(GameInputMappingCanvas.DISPLAY);
    

                                    }
                                

                //: 
} catch(e) 
            {
}

commandList!.add(gameCommandsFactory!.DISPLAY_ABOUT);
    

    commandArray: std::vector<any> = commandList!.toArray()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commandArray;
    

                        }
                            
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    

    commandArray: std::vector<any> = this.getCustomCommands()!;;
    

    size: int32_t = commandArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.addCommand(commandArray[index]! as Command);
    
}

CustomGameMenuUtil.add(this);
    
this.setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public initPostPaint(){
}


                //@Throws(Exception.constructor)
            
    public mediaInit(){
AllBinaryMediaManager.init(EarlySoundsFactory.getInstance());
    
}


    public itemStateChanged(Item item){
ForcedLogUtil.log(this.commonStrings!.NOT_IMPLEMENTED, this);
    
}


                //@Throws(Exception.constructor)
            
    initMenu(){
this.close();
    
this.open();
    
}


    public open(){
BasicMotionGesturesHandler.getInstance()!.addListenerInterface(this.getMenuInputProcessor());
    
GameKeyEventHandler.getInstance()!.addListener(this.getMenuInputProcessor());
    
}


    public close(){
BasicMotionGesturesHandler.getInstance()!.removeListener(this.getMenuInputProcessor());
    
GameKeyEventHandler.getInstance()!.removeListener(this.getMenuInputProcessor());
    
}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StartCanvas.id;
    
}


    public keyPressed(int32_t keyCode){
this.keyPressedByDevice(keyCode, 0);
    
}


    public keyReleased(int32_t keyCode){
this.keyReleasedByDevice(keyCode, 0);
    
}


    public keyRepeated(int32_t keyCode){
this.keyRepeatedByDevice(keyCode, 0);
    
}


    public keyPressedByDevice(int32_t keyCode, int32_t deviceId){
this.addGameKeyEvent(keyCode, false);
    
}


    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
this.removeGameKeyEvent(keyCode, false);
    
}


    private: isSingleKeyRepeatableProcessing: bool = this.features.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS)!;

    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){

                        if(this.isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this.addGameKeyEvent(keyCode, true);
    

                                    }
                                
}


    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    addGameKeyEvent(int32_t keyCode, bool repeated){

        try {
            
    gameKey: GameKey = this.inputToGameKeyMapping!.getInstanceForCanvas(this, keyCode)!;;
    

                        if(gameKey != this.NONE)
                        
                                    {
                                    
    gameKeyEvent: GameKeyEvent = this.gameKeyEventFactory!.getInstanceForInput(this, gameKey)!;;
    
DownGameKeyEventHandler.getInstance()!.fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append(this.gameInputStrings!.NO_KEY)!.appendint(keyCode)!.toString(), this, this.gameInputStrings!.ADD_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put("Key Event Error", this, this.gameInputStrings!.ADD_KEY_EVENT, e);
    
}

}


    removeGameKeyEvent(int32_t keyCode, bool repeated){

        try {
            
    gameKey: GameKey = this.inputToGameKeyMapping!.getInstanceForCanvas(this, keyCode)!;;
    

                        if(gameKey != this.NONE)
                        
                                    {
                                    
    gameKeyEvent: GameKeyEvent = this.gameKeyEventFactory!.getInstanceForInput(this, gameKey)!;;
    
UpGameKeyEventHandler.getInstance()!.fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append(this.gameInputStrings!.NO_KEY)!.appendint(keyCode)!.toString(), this, this.gameInputStrings!.REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put("Key Event Error", this, this.gameInputStrings!.REMOVE_KEY_EVENT, e);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause(){
this.close();
    
this.setPaused(true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause(){
this.open();
    
this.setPaused(false);
    
}


    public bool isPausable(){

                        if(CurrentDisplayableFactory.getInstance()!.getUsedRunnable() == NullWaitGameRunnable.getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public bool isGameOver(){
this.logUtil!.putF(new StringMaker().append(this.commonStrings!.NOT_IMPLEMENTED)!.append(" since not a game")!.toString(), this, "isGameOver");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public setLoadStateHashtable(Hashtable<any, any> hashtable){
this.logUtil!.putF("Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
    
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getLoadStateHashtable(){
this.logUtil!.putF("Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.nullUtil!.NULL_TABLE;
    
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable(){
this.logUtil!.putF("Trying to save the AI lol", this, "getCurrentStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.nullUtil!.NULL_TABLE;
    
}


    public setHighScoreSubmitted(bool isNotUsed){
}


    public paint(Graphics graphics){
this.paintableInterface!.paint(graphics);
    
this.paintedSpecialAnimationInterface!.paintXY(graphics, 0, 0);
    
this.highScoresPaintable!.paint(graphics);
    
this.getBasicGameDemoPaintable()!.paint(graphics);
    
this.overlayPaintable!.paint(graphics);
    
this.progressPaintable!.paint(graphics);
    
}


    public paintThreed(Graphics graphics){
this.paintableInterface!.paintThreed(graphics);
    
this.paintedSpecialAnimationInterface!.paintThreedXYZ(graphics, 0, 0, 0);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public processGameOver(){
this.logUtil!.putF("Not Implemented since not a game", this, "setGameOver");
    
}


    demoStateChange(){

    newState: int32_t = this.state +1;;
    

                        if(newState > 2)
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                             else 
                        if(newState == 2)
                        
                                    {
                                    
                        if(!this.highScoresHelper!.isAnyHighScores())
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                        else {
                            
    highScores: HighScores = this.highScoresHelper!.getNextHighScores()!;;
    

                        if(highScores == NullHighScoresSingletonFactory.getInstance())
                        
                                    {
                                    newState= 0;
    

                                    }
                                
                        else {
                            this.getRealHighScoresPaintable()!.setHighScores(highScores);
    

                        }
                            

                        }
                            

                                    }
                                
this.setState(newState);
    
this.updateDemoState();
    
}


    private: const SET_STATE: string = "setState";

    updateDemoState(){
PreLogUtil.put(SmallIntegerSingletonFactory.getInstance()!.createInstance(this.state)!.toString(), this, this.SET_STATE);
    
this.getBasicGameDemoPaintable()!.setState(this.state);
    

                        if(this.state == 0)
                        
                                    {
                                    this.highScoresPaintable= NullPaintable.getInstance();
    
this.paintedSpecialAnimationInterface= this.getSpecialAnimationInterface();
    
this.getSpecialAnimationInterface()!.reset();
    

                                    }
                                
                             else 
                        if(this.state == 1)
                        
                                    {
                                    this.paintedSpecialAnimationInterface= SpecialAnimation.getInstance();
    

                                    }
                                
                             else 
                        if(this.state == 2)
                        
                                    {
                                    this.highScoresPaintable= this.getRealHighScoresPaintable();
    

                                    }
                                

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.processPageAdState();
    
}


                //@Throws(Exception.constructor)
            
    int32_t getNextRandom(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    AllBinaryGameLayerManager createGameLayerManager(int32_t randomValue){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    GameCanvasRunnableInterface createRunnable(int32_t randomLevel){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    createCanvas(){
this.highScoresPaintable= NullPaintable.getInstance();
    

    randomLevel: int32_t = this.getNextRandom()!;;
    
}


                //@Throws(Exception.constructor)
            
    start(){
}


    public preDemoProcess(){
this.overlayPaintable!.update();
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.getMenuInputProcessor()!.processInputList();
    
this.preDemoProcess();
    

                        if(this.state == 0)
                        
                                    {
                                    
    indexedAnimationBehavior: IndexedAnimationBehavior = this.getSpecialAnimationInterface()!.getAnimationBehavior() as IndexedAnimationBehavior;;
    

                        if(indexedAnimationBehavior!.loopIndex < 1)
                        
                                    {
                                    this.timeDelayHelper!.setStartTimeTNT();
    

                                    }
                                

    demoGameMidlet: DemoGameMidlet = this.getCustomCommandListener() as DemoGameMidlet;;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    startDemoGame(){
}


                //@Throws(Exception.constructor)
            
    processGame(){
this.gameRunnable!.run();
    
this.specialAnimationInterface!.nextFrame();
    
this.process();
    
}


    public run(){
this.logUtil!.putF(this.commonStrings!.START_RUNNABLE, this, this.commonStrings!.RUN);
    

        try {
            
    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.addNormalPortion(50, "Demo Thread");
    
this.setCurrentThread();
    
this.setRunning(true);
    

                        if(this.features.isFeature(MainFeatureFactory.getInstance()!.LOAD_ONDEMAND))
                        
                                    {
                                    progressCanvas!.end();
    

                                    }
                                
                        else {
                            progressCanvas!.addNormalPortion(50, "Demo Thread Running");
    

                        }
                            
this.fullScreenUtil!.initOnRun(this, this.getCustomCommandListener());
    
this.initMenu();
    
this.initPostPaint();
    
this.updateDemoState();
    

                        if(this.features.isDefault(this.openGLFeatureFactory!.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    OpenGLThreadUtil.getInstance()!.onResume();
    

                                    }
                                

                        if(this.features.isDefault(this.openGLFeatureFactory!.OPENGL_AS_GAME_THREAD) || J2MEUtil.isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
        while(this.isRunning())
        {
this.loopTimeHelper!.setStartTimeTNT();
    
this.processGame();
    
this.processLoopSleep();
    
}

this.end();
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.RUN, e);
    
}

this.logUtil!.putF(this.commonStrings!.END_RUNNABLE, this, this.commonStrings!.RUN);
    
}


    public setRunning(bool running){
super.setRunning(running);
    

        try {
            
                        if((this.features.isDefault(this.openGLFeatureFactory!.OPENGL) || J2MEUtil.isHTML()) && !running)
                        
                                    {
                                    
    currentDisplayableFactory: CurrentDisplayableFactory = CurrentDisplayableFactory.getInstance()!;;
    
currentDisplayableFactory!.clearRunnable();
    
this.end();
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.SET_RUNNING, e);
    
}

}


    private: const baseGameStatistics: BaseGameStatistics = GameStatisticsFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public end(){

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
this.baseGameStatistics!.add(new StringMaker().append(StartCanvas.BOT_GAME_STATS)!.append(this.baseGameStatistics!.toString())!.append(CommonSeps.getInstance()!.NEW_LINE)!.toString());
    
this.baseGameStatistics!.init();
    

                        if(this.features.isFeature(MainFeatureFactory.getInstance()!.LOAD_ONDEMAND))
                        
                                    {
                                    progressCanvas!.start();
    

                                    }
                                
this.logUtil!.putF("Demo End", this, this.commonStrings!.RUN);
    
this.close();
    
DisplayChangeEventHandler.getInstance()!.removeListener(this);
    
}


    public setGameState(GameState gameState){
}


    public GameState getGameState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameStateFactory!.PLAYING_GAME_STATE;
    
}


    int32_t getState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.state;
    
}


    setState(int32_t state){
this.state= state;
    
}


    public bool isHighScoreSubmitted(){
this.logUtil!.putF("Wow the AI got a high score!", this, "isHighScoreSubmitted");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public HighScoresPaintable getRealHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.realHighScoresPaintable;
    
}


    setSpecialAnimationInterface(SpecialAnimation specialAnimationInterface){
specialAnimationInterface!.setFrame(0);
    
this.specialAnimationInterface= specialAnimationInterface;
    
}


    SpecialAnimation getSpecialAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.specialAnimationInterface;
    
}


    setPaintableInterface(PaintableInterface paintableInterface){
this.paintableInterface= paintableInterface;
    
}


    PaintableInterface getPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paintableInterface;
    
}


    setDefaultPaintableInterface(Paintable defaultPaintableInterface){
this.defaultPaintableInterface= defaultPaintableInterface;
    
}


    Paintable getDefaultPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.defaultPaintableInterface;
    
}


    public HighScoresFactoryInterface getHighScoresFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.highScoresFactoryInterface;
    
}


    setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor){
this.menuInputProcessor= menuInputProcessor;
    
}


    BasicMenuInputProcessor getMenuInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.menuInputProcessor;
    
}


    public ScrollSelectionForm getMenuForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.menuForm;
    
}


    public setMenuForm(ScrollSelectionForm menuForm){
this.menuForm= menuForm;
    
}


    public bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initialized;
    
}


    Paintable getOverlayPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.overlayPaintable;
    
}


    setBasicGameDemoPaintable(StatePaintable basicGameDemoPaintable){
this.basicGameDemoPaintable= basicGameDemoPaintable;
    
}


    StatePaintable getBasicGameDemoPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicGameDemoPaintable;
    
}


    public setTempWait(int32_t tempWait){
this.tempWait= tempWait;
    
}


    public int32_t getTempWait(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tempWait;
    
}


    public bool isSingleThread(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureUtil.getInstance()!.isAnyThreed() || SWTUtil.isSWT;
    
}


    public bool isRunningInAnotherThread(){

    features: Features = Features.getInstance()!;;
    

    openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;;
    

                        if(features.isDefault(openGLFeatureFactory!.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isRunning();;
    

                        }
                            
}


    public BasicBuildGameInitializerFactory getGameInitializationInterfaceFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameInitializationInterfaceFactoryInterface;
    
}


};

            

