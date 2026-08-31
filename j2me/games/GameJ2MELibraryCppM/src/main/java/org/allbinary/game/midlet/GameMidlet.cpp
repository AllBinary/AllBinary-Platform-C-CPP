
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameMidletStateFactory.h"
#include "GameMidletEventHandler.h"
#include "DemoGameMidletEvent.h"
#include "DemoGameMidletStateFactory.h"

class GameMidlet: public ProgressMidlet: public CommandListener {
        

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    const features: Features = Features.getInstance()!;

    const midletStrings: MidletStrings = MidletStrings.getInstance()!;

    const myCommandsFactory: MyCommandsFactory = MyCommandsFactory.getInstance()!;

    const gameStrings: GameStrings = GameStrings.getInstance()!;

    const gameAdStateFactory: GameAdStateFactory = GameAdStateFactory.getInstance()!;

    const gameStateFactory: GameStateFactory = GameStateFactory.getInstance()!;

    const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const DISPLAYABLE: string = " Displayable: ";

    private: const COMMAND_NAME: string = "command Name/Label: ";

    private: const NO_COMMAND: string = "No Command";

    private: const NO_DISPLAYABLE: string = "No Displayable";

    private: const COMMAND_ACTION: string = new StringMaker().append("GameMidlet::")!.append(this.midletStrings!.COMMAND_ACTION)!.toString()!;

    private: const PAUSE_APP_BACKGROUND: string = "pauseAppBackground";

    private: const UN_PAUSE_APP_BACKGROUND: string = "unPauseAppBackground";

    private: const aboutCommandProcessor: AboutCommandProcessor = AboutCommandProcessor.getInstance()!;

    private: const webCommandProcessor: WebCommandProcessor = WebCommandProcessor.getInstance()!;

    private: const gameMidletStateFactory: GameMidletStateFactory = GameMidletStateFactory.getInstance()!;

    const gameStartTimeHelper: TimeDelayHelper = new TimeDelayHelper(240);

    private: const fullScreenUtil: FullScreenUtil = FullScreenUtil.getInstance()!;

    private: const debugInterface: DebugInterface;

    private: allbinaryGameCanvasRunnableInterface: GameCanvasRunnableInterface = NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE;

    private: thread: Thread = NullThread.NULL_THREAD;

    private: loadGameForm: CommandForm;

    private: isFullScreen: bool= false;

    private: resized: bool= false;

public constructor (ClientInformationFactory clientInformationFactory){
            super(clientInformationFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
SmallIntegerSingletonFactory.getInstance()!.initWithRange(0x291, 6);
    
this.loadGameForm= CommandForm.getNullCommandForm();
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.init(this);
    
GameFeatureEventHandler.getInstance()!.addListenerInterface(ChangedGameFeatureListener.getInstance());
    
GamePersistanceSingleton.getInstance()!.clear();
    
this.debugInterface= DebugFactory.getInstance();
    
this.init();
    
}


    init(){
}


                //@Throws(Exception.constructor)
            
    setDemo(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    createGame(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    mediaShutdown(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public stopAll(){
}


    pauseApp(){
this.pauseAppBackground(true);
    

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.getAdvertisements()!.stopAll();
    
}


    pauseAppBackground(bool background){
this.logUtil!.putF(this.commonStrings!.START, this, this.PAUSE_APP_BACKGROUND);
    

                        if(this.allbinaryGameCanvasRunnableInterface != NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    this.allbinaryGameCanvasRunnableInterface!.pause();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("<<<<<< Null", this, this.PAUSE_APP_BACKGROUND);
    

                        }
                            
AllBinarySensorManager.getInstance()!.shutdown();
    
}


    unPauseApp(){
this.unPauseAppBackground(true);
    

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.getAdvertisements()!.startAll();
    
}


    unPauseAppBackground(bool background){
this.logUtil!.putF(this.commonStrings!.START, this, this.UN_PAUSE_APP_BACKGROUND);
    
AllBinarySensorManager.getInstance()!.init();
    

    gameCanvasRunnableInterface: GameCanvasRunnableInterface = this.allbinaryGameCanvasRunnableInterface;;
    

                        if(gameCanvasRunnableInterface != NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    gameCanvasRunnableInterface!.unPause();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("<<<<<< Null", this, this.UN_PAUSE_APP_BACKGROUND);
    

                        }
                            
}


    destroyAppInRunnable(bool unconditional, bool isProgress){

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    

                        if(isProgress)
                        
                                    {
                                    progressCanvas!.start();
    
this.commandAction(this.myCommandsFactory!.SET_DISPLAYABLE, progressCanvas);
    

                                    }
                                
this.destroyApp(unconditional);
    

                        if(isProgress)
                        
                                    {
                                    progressCanvas!.end();
    

                                    }
                                
}


    destroyApp(bool unconditional){

    METHOD_NAME: string = "GameMidlet::destroyApp";;
    

        try {
            PreLogUtil.put(GameStatisticsFactory.getInstance()!.toString(), this, METHOD_NAME);
    

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.getAdvertisements()!.stopAll();
    

                        if(!this.isDestroyed())
                        
                                    {
                                    this.stopGameCanvasRunnableInterface();
    
this.setGameCanvasRunnableInterface(NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE);
    
this.mediaShutdown();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Midlet Managment Error: Midlet Should Only Be Destroyed Once", this, METHOD_NAME);
    

                        }
                            
super.destroyApp(true);
    
PreLogUtil.put(this.commonStrings!.END, this, METHOD_NAME);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, METHOD_NAME, e);
    
}

this.logUtil!.putF(this.commonStrings!.END, this, METHOD_NAME);
    
}


                //@Throws(MIDletStateChangeException.constructor)
            
    startApp(){

        try {
            
    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.getAdvertisements()!.startAll();
    

    START_APP: string = "startApp";;
    
this.logUtil!.putF(this.commonStrings!.START, this, START_APP);
    

    gameCanvasRunnableInterface: any = this.allbinaryGameCanvasRunnableInterface;;
    

                        if(gameCanvasRunnableInterface == NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    this.gameMidletStateFactory!.setCurrentGameState(this.gameStateFactory!.NO_GAME_STATE);
    
this.setDemo();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("GameCanvasRunnableInterface is available", this, START_APP);
    

                        if(gameCanvasRunnableInterface == this.getCurrentDisplayable())
                        
                                    {
                                    this.unPauseAppBackground(false);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("GameCanvasRunnableInterface is not current displayable", this, START_APP);
    

                        }
                            

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "startApp", e);
    
this.destroyApp(false);
    
this.notifyDestroyed();
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public commandAction(Command command, Displayable displayable){

        try {
            
    displayableAsString: string = this.NO_DISPLAYABLE;;
    

                        if(displayable != 
                                    null
                                )
                        
                                    {
                                    displayableAsString= displayable.toString();
    

                                    }
                                

    label: string = this.NO_COMMAND;;
    

                        if(command != 
                                    null
                                )
                        
                                    {
                                    label= command.getLabel();
    

                                    }
                                
PreLogUtil.put(new StringMaker().append(this.COMMAND_NAME)!.append(label)!.append(this.DISPLAYABLE)!.append(displayableAsString)!.toString(), this, this.COMMAND_ACTION);
    

    gameCommandsFactory: GameCommandsFactory = GameCommandsFactory.getInstance()!;;
    

    allbinaryGameCanvasRunnableInterface: GameCanvasRunnableInterface = this.allbinaryGameCanvasRunnableInterface;;
    

    gameCanvasRunnableInterface: any = allbinaryGameCanvasRunnableInterface;;
    

                        if(command == gameCommandsFactory!.SHOW_GAME_CANVAS)
                        
                                    {
                                    
                        if(this.getDisplay()!.getCurrent() != gameCanvasRunnableInterface && allbinaryGameCanvasRunnableInterface!.getType() != NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE.getType())
                        
                                    {
                                    this.setDisplay(gameCanvasRunnableInterface as Displayable);
    

                                    }
                                
this.unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.CLOSE_AND_SHOW_GAME_CANVAS)
                        
                                    {
                                    
    menuListener: MenuListener = displayable as unknown as MenuListener;;
    
menuListener!.close();
    
this.setDisplay(gameCanvasRunnableInterface as Displayable);
    
this.unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.EXIT_COMMAND)
                        
                                    {
                                    
                        if(GameMidletEventHandler.getInstance()!.getEventListenerInterfaceListP()!.size() == 0)
                        
                                    {
                                    this.exitProgress(true);
    

                                    }
                                
GameMidletEventHandler.getInstance()!.fireEvent(new DemoGameMidletEvent(this, DemoGameMidletStateFactory.getInstance()!.NONE));
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.EXIT_WITHOUT_PROGRESS_COMMAND)
                        
                                    {
                                    this.exitProgress(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.START_COMMAND || command == gameCommandsFactory!.RESTART_COMMAND || command == gameCommandsFactory!.CONTINUE_COMMAND)
                        
                                    {
                                    
                        if(this.gameMidletStateFactory!.getCurrentGameState() != this.gameStateFactory!.PLAYING_GAME_STATE || command == gameCommandsFactory!.RESTART_COMMAND)
                        
                                    {
                                    
                        if(this.gameStartTimeHelper!.isTimeTNT())
                        
                                    {
                                    
                        if(command == gameCommandsFactory!.START_COMMAND && this.isDemoLoading())
                        
                                    {
                                    this.logUtil!.putF("Trying to Start Game Before Loading Complete", this, this.midletStrings!.COMMAND_ACTION);
    

                                    }
                                
                        else {
                            this.startedBefore= true;
    
this.createGame();
    
this.gameMidletStateFactory!.setCurrentGameState(this.gameStateFactory!.PLAYING_GAME_STATE);
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF("Starting Game Too Often", this, this.midletStrings!.COMMAND_ACTION);
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF("Already in playing state", this, this.COMMAND_ACTION);
    

                        }
                            

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.BUY_COMMAND)
                        
                                    {
                                    
    inApplicationPurchaseFactory: InApplicationPurchaseFactory = InApplicationPurchaseFactory.getInstance()!;;
    

    list: BasicArrayList = LockableFeatureFactory.getInstance()!.getList()!;;
    

    lockableFeature: LockableFeature = list.get(0) as LockableFeature;;
    

                        if(list.size() > 0 && !inApplicationPurchaseFactory!.isPurchased(lockableFeature))
                        
                                    {
                                    inApplicationPurchaseFactory!.purchase(lockableFeature);
    

                                    }
                                
                        else {
                            TextNotificationUtil.getInstance()!.fireSuccess("Already Purchased");
    

                        }
                            

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.QUIT_COMMAND)
                        
                                    {
                                    
                        if(this.gameStartTimeHelper!.isTimeTNT())
                        
                                    {
                                    
                        if(displayable instanceof HighScoreTextBox)
                        
                                    {
                                    
    menuListener: MenuListener = displayable as unknown as MenuListener;;
    
menuListener!.close();
    

                                    }
                                
this.stopGameCanvasRunnableInterface();
    
this.gameMidletStateFactory!.setCurrentGameState(this.gameStateFactory!.NO_GAME_STATE);
    
this.setDemo();
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == this.myCommandsFactory!.RESUME_COMMAND)
                        
                                    {
                                    this.unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == this.myCommandsFactory!.PAUSE_COMMAND)
                        
                                    {
                                    this.pauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == this.myCommandsFactory!.SET_DISPLAYABLE)
                        
                                    {
                                    this.pauseAppBackground(false);
    
this.setDisplay(displayable);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.SET_MENU_DISPLAYABLE)
                        
                                    {
                                    this.pauseAppBackground(false);
    

    menuListener: MenuListener = displayable as unknown as MenuListener;;
    
menuListener!.open();
    
this.setDisplay(displayable);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.START_TRACE)
                        
                                    {
                                    this.debugInterface!.start();
    

    gameCanvas: AllBinaryGameCanvas = allbinaryGameCanvasRunnableInterface as AllBinaryGameCanvas;;
    
gameCanvas!.addCommand(gameCommandsFactory!.STOP_TRACE);
    
gameCanvas!.removeCommand(gameCommandsFactory!.START_TRACE);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.STOP_TRACE)
                        
                                    {
                                    this.pauseAppBackground(false);
    
this.debugInterface!.stop();
    
this.unPauseAppBackground(false);
    

    gameCanvas: AllBinaryGameCanvas = allbinaryGameCanvasRunnableInterface as AllBinaryGameCanvas;;
    
gameCanvas!.addCommand(gameCommandsFactory!.START_TRACE);
    
gameCanvas!.removeCommand(gameCommandsFactory!.STOP_TRACE);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.DEFAULT_OPTIONS)
                        
                                    {
                                    
    tempDisplayable: Displayable = displayable;;
    

                        if(tempDisplayable instanceof GameOptionsForm)
                        
                                    {
                                    GameFeatureFormUtil.getInstance()!.setDefault(tempDisplayable as CommandForm);
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == GameInputMappingInstructionsCanvas.DISPLAY)
                        
                                    {
                                    
    tempDisplayable: Displayable = displayable;;
    

                        if(tempDisplayable instanceof GameInputMappingCanvas)
                        
                                    {
                                    
    gameInputMappingCanvas: GameInputMappingCanvas = tempDisplayable as GameInputMappingCanvas;;
    
gameInputMappingCanvas!.update();
    

                                    }
                                
this.commandAction(gameCommandsFactory!.SET_MENU_DISPLAYABLE, this.getInputMappingInstructionsCanvas());
    

                                    }
                                
                             else 
                        if(HighScoreCommandsFactory.getInstance()!.isHighScoreCommand(command))
                        
                                    {
                                    
    tempDisplayable: Displayable = displayable;;
    

                        if(tempDisplayable instanceof HighScoresCanvas)
                        
                                    {
                                    
    highScoresCanvas: HighScoresCanvas = tempDisplayable as HighScoresCanvas;;
    
highScoresCanvas!.updateCommand(command);
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == HighScoreCommands.getInstance()!.DISPLAY)
                        
                                    {
                                    this.commandAction(gameCommandsFactory!.SET_MENU_DISPLAYABLE, this.createHighScoresCanvas());
    

                                    }
                                
                             else 
                        if(command == GameInputMappingInstructionsCanvas.CLOSE)
                        
                                    {
                                    
    menuListener: MenuListener = displayable as unknown as MenuListener;;
    
menuListener!.close();
    
this.commandAction(GameInputMappingCanvas.DISPLAY, NullCanvas.NULL_CANVAS);
    

                                    }
                                
                             else 
                        if(command == GameInputMappingCanvas.DISPLAY)
                        
                                    {
                                    
                        if(J2MEUtil.isHTML())
                        
                                    {
                                    this.pauseAppBackground(false);
    

                                    }
                                
this.commandAction(gameCommandsFactory!.SET_MENU_DISPLAYABLE, this.getInputMappingCanvas());
    

                                    }
                                
                             else 
                        if(command == GameInputMappingCanvas.DEFAULT)
                        
                                    {
                                    
    tempDisplayable: Displayable = displayable;;
    

                        if(tempDisplayable instanceof GameInputMappingCanvas)
                        
                                    {
                                    
    gameInputMappingCanvas: GameInputMappingCanvas = tempDisplayable as GameInputMappingCanvas;;
    
gameInputMappingCanvas!.setDefault();
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == InGameOptionsForm.DISPLAY)
                        
                                    {
                                    this.pauseAppBackground(false);
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.addNormalPortion(50, "In Game Options");
    

    layerManager: AllBinaryGameLayerManager = this.createGameLayerManager()!;;
    

    inGameOptionsFormFactory: InGameOptionsFormFactory = InGameOptionsFormFactory.getInstance()!;;
    
inGameOptionsFormFactory!.init(this, new InGameFeatures(), "Options In Game", layerManager!.getBackgroundBasicColor(), layerManager!.getForegroundBasicColor());
    

    inGameOptionsForm: CommandForm = inGameOptionsFormFactory!.get()!;;
    
inGameOptionsForm!.setItemStateListener(allbinaryGameCanvasRunnableInterface);
    
this.commandAction(gameCommandsFactory!.SET_MENU_DISPLAYABLE, inGameOptionsForm);
    

                                    }
                                
                             else 
                        if(command == InGameOptionsForm.DEFAULT)
                        
                                    {
                                    
    inGameOptionsForm: InGameOptionsForm = InGameOptionsFormFactory.getInstance()!.get() as InGameOptionsForm;;
    
GameFeatureFormUtil.getInstance()!.setDefault(inGameOptionsForm);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.DISPLAY_OPTIONS)
                        
                                    {
                                    AllBinaryMediaManager.setMuted(true);
    
this.stopAll();
    

    mainFeatureFactory: MainFeatureFactory = MainFeatureFactory.getInstance()!;;
    
this.isFullScreen= this.features.isFeature(mainFeatureFactory!.FULL_SCREEN);
    
ResizableListenerHandler.getInstance()!.fireEvent(true);
    
this.setResized(false);
    
this.commandAction(gameCommandsFactory!.SET_MENU_DISPLAYABLE, this.getGameOptionsForm());
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.CLOSE_OPTIONS)
                        
                                    {
                                    ResizableListenerHandler.getInstance()!.fireEvent(false);
    
this.commandAction(gameCommandsFactory!.CLOSE_AND_SHOW_GAME_CANVAS, displayable);
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Close isFullScreen/change: ");
    
stringBuffer!.appendboolean(this.isFullScreen);
    
stringBuffer!.appendboolean(this.fullScreenUtil!.isScreenChange(this.isFullScreen));
    
stringBuffer!.append(" isResized: ");
    
stringBuffer!.appendboolean(this.isResized());
    
PreLogUtil.put(stringBuffer!.toString(), this, this.COMMAND_ACTION);
    

                        if(this.isResized() || this.fullScreenUtil!.isScreenChange(this.isFullScreen))
                        
                                    {
                                    this.updateFullScreen();
    

                                    }
                                
AllBinaryMediaManager.setMuted(false);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.DISPLAY_LOAD_FORM)
                        
                                    {
                                    this.pauseAppBackground(false);
    

    keyValuePersistance: KeyValuePersistance = GamePersistanceSingleton.getInstance()!;;
    
keyValuePersistance!.clear();
    
keyValuePersistance!.loadAll(this.abeClientInformation);
    

                        if(this.getLoadGameForm() == CommandForm.getNullCommandForm())
                        
                                    {
                                    
    layerManager: AllBinaryGameLayerManager = this.createGameLayerManager()!;;
    
this.setLoadGameForm(new LoadGameForm(this, "Load Game", layerManager!.getBackgroundBasicColor(), layerManager!.getForegroundBasicColor()));
    

                                    }
                                
                        else {
                            this.getLoadGameForm()!.update();
    

                        }
                            
this.commandAction(gameCommandsFactory!.SET_MENU_DISPLAYABLE, this.getLoadGameForm());
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.LOAD_FILE)
                        
                                    {
                                    
    loadGameForm: LoadGameForm = this.getLoadGameForm() as LoadGameForm;;
    

    index: int32_t = loadGameForm!.getSelectedId()!;;
    

                        if(index !=  -1)
                        
                                    {
                                    
    keyValuePersistance: KeyValuePersistance = GamePersistanceSingleton.getInstance()!;;
    
this.setStartStateHashtable(keyValuePersistance!.get(index));
    

    menuListener: MenuListener = this.getLoadGameForm()!;;
    
menuListener!.close();
    
PreLogUtil.put(BasicMotionGesturesHandler.getInstance()!.toString(), this, this.COMMAND_ACTION);
    
this.commandAction(gameCommandsFactory!.START_COMMAND, NullCanvas.NULL_CANVAS);
    
PreLogUtil.put(BasicMotionGesturesHandler.getInstance()!.toString(), this, this.COMMAND_ACTION);
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.DELETE_FILE)
                        
                                    {
                                    
    loadGameForm: LoadGameForm = this.getLoadGameForm() as LoadGameForm;;
    

    index: int32_t = loadGameForm!.getSelectedText()!;;
    

                        if(index !=  -1)
                        
                                    {
                                    
    keyValuePersistance: KeyValuePersistance = GamePersistanceSingleton.getInstance()!;;
    
keyValuePersistance!.delete(this.abeClientInformation, index);
    
keyValuePersistance!.clear();
    
keyValuePersistance!.loadAllSize(this.abeClientInformation, 1);
    
this.getLoadGameForm()!.update();
    

                                    }
                                

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.SAVE)
                        
                                    {
                                    
    keyValuePersistance: KeyValuePersistance = GamePersistanceSingleton.getInstance()!;;
    
this.pauseAppBackground(false);
    
keyValuePersistance!.save(this.abeClientInformation, this.getCurrentStateHashtable());
    
this.unPauseAppBackground(false);
    

                                    }
                                
                             else 
                        if(command == HighScoreUtil.SUBMIT_TEXTBOX_COMMAND)
                        
                                    {
                                    this.logUtil!.putF("Submitted Score", this, this.COMMAND_ACTION);
    

                        if(displayable instanceof HighScoreTextBox)
                        
                                    {
                                    
    highScoreTextBox: HighScoreTextBox = displayable as unknown as HighScoreTextBox;;
    
highScoreTextBox!.submitted= true;
    

                                    }
                                
allbinaryGameCanvasRunnableInterface!.setHighScoreSubmitted(true);
    
this.commandAction(gameCommandsFactory!.CLOSE_AND_SHOW_GAME_CANVAS, displayable);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.DISPLAY_ABOUT)
                        
                                    {
                                    this.aboutCommandProcessor!.process(this, gameCommandsFactory!.SET_MENU_DISPLAYABLE, this.getAboutCanvas());
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.OPEN_WEB_URL)
                        
                                    {
                                    this.webCommandProcessor!.process(this, gameCommandsFactory!.OPEN_WEB_URL, NullCanvas.NULL_CANVAS);
    

                                    }
                                
                             else 
                        if(command == gameCommandsFactory!.TOGGLE_KEYBOARD)
                        
                                    {
                                    
    virtualKeyboardEventHandler: VirtualKeyboardEventHandler = VirtualKeyboardEventHandler.getInstance()!;;
    
virtualKeyboardEventHandler!.fireEvent(virtualKeyboardEventHandler!.SHOW_EVENT);
    

                                    }
                                
                             else 
                        if(this.tsUtil!.compareTo(command.getLabel(), gameCommandsFactory!.TOGGLE_FULLSCREEN.getLabel()) == 0)
                        
                                    {
                                    
    mainFeatureFactory: MainFeatureFactory = MainFeatureFactory.getInstance()!;;
    

    isFullScreen: bool = this.features.isFeature(mainFeatureFactory!.FULL_SCREEN)!;;
    

                        if(isFullScreen)
                        
                                    {
                                    this.features.removeDefault(mainFeatureFactory!.FULL_SCREEN);
    

                                    }
                                
                        else {
                            this.features.addDefault(mainFeatureFactory!.FULL_SCREEN);
    

                        }
                            
this.updateFullScreen();
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.midletStrings!.COMMAND_ACTION, e);
    

                        if(command != GameCommandsFactory.getInstance()!.EXIT_COMMAND)
                        
                                    {
                                    this.exitProgress(false);
    

                                    }
                                
}

}


    updateFullScreen(){

    mainFeatureFactory: MainFeatureFactory = MainFeatureFactory.getInstance()!;;
    

    isFullScreen: bool = this.features.isFeature(mainFeatureFactory!.FULL_SCREEN)!;;
    

    displayable: Displayable = this.getDisplay()!.getCurrent()!;;
    

                        if(displayable instanceof Canvas)
                        
                                    {
                                    
    canvas: Canvas = displayable as unknown as Canvas;;
    
canvas.setFullScreenMode(isFullScreen);
    

                                    }
                                
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    MyCanvas getInputMappingInstructionsCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GameInputMappingInstructionsCanvas(this, this.createGameLayerManager());
    
}


                //@Throws(Exception.constructor)
            
    MyCanvas getInputMappingCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GameInputMappingCanvas(this.abeClientInformation, this, this.createGameLayerManager(), this.getHelpPaintable());
    
}


                //@Throws(Exception.constructor)
            
    MyCanvas getAboutCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicPaintablesCanvas(this, CanvasStrings.getInstance()!.ABOUT, this.createGameLayerManager(), AboutPaintableFactory.getInstance()!.paintableArray);
    
}


                //@Throws(Exception.constructor)
            
    HelpPaintable getHelpPaintable(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    HighScoresCanvas createHighScoresCanvas(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public startGameCanvasRunnableInterface(){

    threadFactoryUtil: ThreadFactoryUtil = ThreadFactoryUtil.getInstance()!;;
    
this.thread= threadFactoryUtil!.getInstanceGameCanvasRunnable(this.allbinaryGameCanvasRunnableInterface);
    
this.logUtil!.putF(new StringMaker().append("Thread Priority: ")!.appendint(this.thread.getPriority())!.toString(), this, "startGameCanvasRunnableInterface");
    
this.allbinaryGameCanvasRunnableInterface!.setThread(this.thread);
    
threadFactoryUtil!.start(this.thread);
    
}


                //@Throws(Exception.constructor)
            
    stopGameCanvasRunnableInterface(){
this.logUtil!.putF(this.commonStrings!.START, this, this.gameStrings!.STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    
GameNotificationEventHandler.getInstance()!.removeAllListeners();
    
ColorChangeEventHandler.getInstance()!.removeAllListeners();
    
GameEventHandlerUtil.removeAllListeners();
    

    gameCanvasRunnableInterface: GameCanvasRunnableInterface = this.allbinaryGameCanvasRunnableInterface;;
    

                        if(gameCanvasRunnableInterface != NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    this.logUtil!.putF("Set Running False", this, this.gameStrings!.STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    
gameCanvasRunnableInterface!.setRunning(false);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("StopGame - Could Not Stop", this, this.gameStrings!.STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    

                        }
                            
ThreadUtil.getInstance()!.join(this.thread);
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    

                        if(this.features.isFeature(MainFeatureFactory.getInstance()!.LOAD_ALL))
                        
                                    {
                                    progressCanvas!.addNormalPortion(50, "Stopped Game Runnable");
    

                                    }
                                
                        else {
                            progressCanvas!.addNormalPortion(50, "Stopped Main Runnable");
    

                        }
                            
this.logUtil!.putF(this.commonStrings!.END, this, this.gameStrings!.STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
    
}


    public GameCanvasRunnableInterface getGameCanvasRunnableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allbinaryGameCanvasRunnableInterface;
    
}


    public setGameCanvasRunnableInterface(GameCanvasRunnableInterface gameCanvasRunnableInterface){
this.allbinaryGameCanvasRunnableInterface= gameCanvasRunnableInterface;
    
}


    AllBinaryGameLayerManager createGameLayerManager(){

    gameInfo: GameInfo = new GameInfo(GameTypeFactory.getInstance()!.SINGLE_PLAYER, GameMode.SERVER, PlayerTypesFactory.getInstance()!.PLAYER_TYPE_ONE, 1, 1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinaryGameLayerManager(this.basicColorFactory!.BLACK, this.basicColorFactory!.WHITE, gameInfo);
    
}


    CommandForm getGameOptionsForm(){

    layerManager: AllBinaryGameLayerManager = this.createGameLayerManager()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameOptionsFormFactory.getInstance()!.init(this, "Game Options", layerManager!.getBackgroundBasicColor(), layerManager!.getForegroundBasicColor());;
    
}


                //@Throws(Exception.constructor)
            
    public save(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.SAVE);
    

    hashtable: Hashtable<any, any> = this.getCurrentStateHashtable()!;;
    
GamePersistanceSingleton.getInstance()!.save(this.abeClientInformation, hashtable);
    
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable(){
this.logUtil!.putF(this.commonStrings!.START, this, "getCurrentStateHashtable");
    

    hashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    

                        if(this.allbinaryGameCanvasRunnableInterface != NullGameCanvasRunnable.NULL_GAME_CANVAS_RUNNABLE)
                        
                                    {
                                    
    currentHashtable: Hashtable<any, any> = this.allbinaryGameCanvasRunnableInterface!.getCurrentStateHashtable()!;;
    

    enumeration: Enumeration<any> = currentHashtable!.keys()!;;
    

    key: any;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
key= this.enumerationUtil!.nextElement(enumeration)!;
    
hashtable.put(key, currentHashtable!.get(key));
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


    public setLoadGameForm(LoadGameForm loadGameForm){
this.loadGameForm= loadGameForm;
    
}


    public CommandForm getLoadGameForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.loadGameForm;
    
}


    public setResized(bool resized){
this.resized= resized;
    
}


    public bool isResized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.resized;
    
}


    private: startedBefore: bool = false;

    public bool isDemoLoading(){

                        if(this.startedBefore)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    displayable: Displayable = this.getDisplay()!.getCurrent()!;;
    

                        if(displayable instanceof DemoCanvas)
                        
                                    {
                                    
    demoCanvas: DemoCanvas = displayable as unknown as DemoCanvas;;
    

                        if(demoCanvas!.isDemoLoading())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

