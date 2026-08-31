
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
        
            #include "../../../../../java/lang/System.h"
        
            #include "../../../../../java/lang/Integer.h"
        
            #include "../../../../../java/lang/Thread.h"
        
            #include "../../../../../java/lang/Runnable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
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

class AllBinaryGameCanvas: public RunnableCanvas: public AllBinaryGameCanvasInterface, public GameCanvasRunnableInterface, public MenuListener, public IntermissionCompositeInterface, public IntermissionEnableListenerInterface, public PopupMenuInterface, public DisplayChangeEventListener, public UpdateMyFontInterface {
        

    private: static const id: int32_t = 0;

    public static const TYPE: int32_t = 2;

    const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    const touchFeatureFactory: TouchFeatureFactory = TouchFeatureFactory.getInstance()!;

    const openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;

    const touchButtonFactory: TouchButtonFactory = TouchButtonFactory.getInstance()!;

    const gameAdStateFactory: GameAdStateFactory = GameAdStateFactory.getInstance()!;

    const gameStrings: GameStrings = GameStrings.getInstance()!;

    const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    const gameStateFactory: GameStateFactory = GameStateFactory.getInstance()!;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const gameTickDisplayInfoSingleton: GameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton.getInstance()!;

    public const gameRunnable: GameCanvasRunnable = new GameCanvasRunnable(this);

    public const gamePauseRunnable: GameCanvasPauseRunnable = new GameCanvasPauseRunnable(this);

    const formUtil: FormUtil = FormUtil.getInstance()!;

    const myFormUtil: MyFormUtil = MyFormUtil.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    gameSpecificPaintable: Paintable = NullPaintable.getInstance()!;

    private: const sensorGameUpdateProcessor: SensorGameUpdateProcessor = new SingleSensorGameUpdateProcessor();

    endGameInfo: EndGameInfo = new EndGameInfo();

    private: const startIntermissionInterface: IntermissionInterface = new Intermission();

    private: const endLevelIntermissionInterface: IntermissionInterface = new Intermission();

    gameLayerManager: AllBinaryGameLayerManager = AllBinaryGameLayerManager.getNullInstance()!;

    private: gameState: GameState = this.gameStateFactory!.NO_GAME_STATE;

    private: gameOver: bool= false;

    private: initialized: bool= false;

    private: const gameStateTimeHelper: TimeDelayHelper = new TimeDelayHelper(0);

    const highScoresHelper: HighScoresHelperBaseInterface;

    private: highScoreSubmitted: bool= false;

    private: const realHighScoresPaintable: HighScoresPaintable = new HighScoresPaintable();

    private: highScoresPaintable: Paintable = NullPaintable.getInstance()!;

    private: localPlayerGameInputList: BasicArrayList = new BasicArrayListD();

    private: isCheating: bool= false;

    private: hashtable: Hashtable<any, any> = this.nullUtil!.NULL_TABLE;

    private: isSingleKeyRepeatableProcessing: bool= false;

    private: gameInitializationInterfaceFactoryInterface: BasicBuildGameInitializerFactory = BasicBuildGameInitializerFactory.NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;

    private: touchButtonsPaintable: Paintable = NullPaintable.getInstance()!;

    touchPaintable: Paintable = NullPaintable.getInstance()!;

    private: cheatProcessor: PlayerGameInput = NoPlayerGameInput.getInstance()!;

    private: gameInputProcessor: Processor = Processor.getInstance()!;

    private: endGameProcessor: Processor = Processor.getInstance()!;

    private: realEndGameProcessor: Processor = Processor.getInstance()!;

    private: startIntermissionProcessor: Processor = Processor.getInstance()!;

    private: realStartIntermissionProcessor: Processor = Processor.getInstance()!;

    private: endGamePaintable: Paintable = NullPaintable.getInstance()!;

    private: endGameStatePaintable: Paintable = NullPaintable.getInstance()!;

    nonBotPaintable: Paintable = NullPaintable.getInstance()!;

    private: intermissionPaintable: Paintable = NullPaintable.getInstance()!;

    private: startIntermissionPaintable: InitUpdatePaintable = NullInitUpdatePaintable.getInstance()!;

    private: mainStateProcessor: Processor = Processor.getInstance()!;

    private: processGameProcessor: Processor = Processor.getInstance()!;

    private: const highScoresFactoryInterface: HighScoresFactoryInterface;

    private: startLevel: int32_t= 0;

    private: mainMenuInputProcessor: BasicMenuInputProcessor = NoMenuInputProcessor.getInstance()!;

    private: popupMenuInputProcessor: BasicMenuInputProcessor = NoMenuInputProcessor.getInstance()!;

    private: menuInputProcessor: BasicMenuInputProcessor = NoMenuInputProcessor.getInstance()!;

    private: menuForm: ScrollSelectionForm = ScrollSelectionForm.getNullScrollSelectionForm()!;

    private: formPaintable: Paintable = NullPaintable.getInstance()!;

    private: openMenuPaintable: Paintable = NullPaintable.getInstance()!;

    private: menuPaintable: Paintable = NullPaintable.getInstance()!;

    private: currentTouchInputFactory: BaseTouchInput = NoButtonsTouchInputFactory.getInstance()!;

    colorFillPaintable: ColorFillBasePaintable = ColorFillPaintableFactory.getInstance()!.getInstance(this.basicColorFactory!.BLACK, true)!;

    private: const baseGameStatistics: BaseGameStatistics = GameStatisticsFactory.getInstance()!;

    private: const primaryPlayerQueue: PlayerQueue = PrimaryPlayerQueueFactory.getInstance()!;

    private: const secondaryPlayerQueue: PlayerQueue = SecondaryPlayerQueueFactory.getInstance()!;

    const BUILD_GAME: string = "buildGame";

    const gameTypeFactory: GameTypeFactory = GameTypeFactory.getInstance()!;

    const screenCapture: ScreenCapture = ScreenCaptureFactory.getInstance()!;

    private: const basicMotionGesturesHandler: BasicMotionGesturesHandler = BasicMotionGesturesHandler.getInstance()!;

    private: const gameKeyEventHandler: GameKeyEventHandler = GameKeyEventHandler.getInstance()!;

    private: const gameBehavior: DemoGameBehavior;

    private: const menuBehavior: BaseMenuBehavior;

    private: progressPaintable: PaintableInterface = ProgressCanvasFactory.getLazyInstance()!;

    fontHeightP: int32_t= 0;

public constructor (CommandListener commandListener, AllBinaryGameLayerManager gameLayerManager, HighScoresFactoryInterface highScoresFactoryInterface, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool buffered){
            super(commandListener, CanvasStrings.getInstance()!.EMPTY_CHILD_NAME_LIST, true);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.highScoresHelper= highScoresFactoryInterface!.createHighScoresHelper();
    
this.gameInitializationInterfaceFactoryInterface= gameInitializationInterfaceFactoryInterface;
    
this.init(gameLayerManager, buffered);
    
this.highScoresFactoryInterface= highScoresFactoryInterface;
    

                        if(this.gameLayerManager!.getGameInfo()!.getGameType() == this.gameTypeFactory!.BOT || this.gameLayerManager!.getGameInfo()!.getGameType() == this.gameTypeFactory!.NONE)
                        
                                    {
                                    this.gameBehavior= DemoGameBehavior.getInstance();
    
this.menuBehavior= BaseMenuBehavior.getInstance();
    

                                    }
                                
                        else {
                            this.gameBehavior= BaseGameBehavior.getInstance();
    
this.menuBehavior= this.getInGameMenuBehavior();
    

                        }
                            
this.initPopupMenu();
    
this.initMenu();
    
this.initSpecialPaint();
    
DisplayChangeEventHandler.getInstance()!.addListenerInterface(this);
    
}


    public updateMeasurement(Graphics graphics){

        try {
            
    font: Font = graphics.getFont()!;;
    
this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.append(this.canvasStrings!.FD_WIDTH)!.appendint(MyFontProcessor.defaultCharWidth(font))!.append(this.canvasStrings!.FD_HEIGHT)!.appendint(font.getHeight())!.toString(), this, this.canvasStrings!.UPDATE_MEASUREMENT);
    
this.fontHeightP= font.getHeight();
    
this.myFormUtil!.updateMeasurement(graphics);
    

    popupMenuRectangle: Rectangle = this.myFormUtil!.getPopupMenuRectangle()!;;
    

    basicPopupMenuPaintable: BasicPopupMenuPaintable = (this.getOpenMenuPaintable() as BasicPopupMenuPaintable);;
    
basicPopupMenuPaintable!.init(popupMenuRectangle);
    

                        if(this.getPopupMenuInputProcessor() != NoMenuInputProcessor.getInstance())
                        
                                    {
                                    
    popupMenuInputProcessor: PopupMenuInputProcessor = (this.getPopupMenuInputProcessor() as PopupMenuInputProcessor);;
    
popupMenuInputProcessor!.init(popupMenuRectangle);
    

                                    }
                                
this.myFontProcessor= MyFontProcessor.getInstance();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.canvasStrings!.ON_DISPLAY_CHANGE_EVENT, e);
    
}

}


    public BaseMenuBehavior getInGameMenuBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InGameMenuBehavior.getInstance();;
    
}


    public setCurrentThread(){

                        if(J2MEUtil.isHTML())
                        
                                    {
                                    super.setCurrentThreadFake();
    

                                    }
                                
                        else {
                            super.setCurrentThread();
    

                        }
                            
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.append(DisplayInfoSingleton.getInstance()!.toString())!.toString(), this, this.canvasStrings!.UPDATE_MEASUREMENT);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
this.menuBehavior!.onDisplayChangeEvent(this, displayChangeEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.canvasStrings!.ON_DISPLAY_CHANGE_EVENT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public updateMenuFromEvent(DisplayChangeEvent displayChangeEvent){

    formType: FormType = FormTypeFactory.getInstance()!.getFormType()!;;
    

    rectangle: Rectangle = this.formUtil!.createFormRectangle()!;;
    
this.menuForm!.init(rectangle, formType);
    

                        if(this.currentTouchInputFactory != NoButtonsTouchInputFactory.getInstance())
                        
                                    {
                                    this.touchButtonFactory!.toggle(this.isPaused(), this.currentTouchInputFactory!.getList());
    

                                    }
                                
this.myFontProcessor= this.updateMyFontProcessor;
    
}


                //@Throws(Exception.constructor)
            
    public processSleep(){
super.processSleep();
    

                        if(AllBinaryMediaManager.update())
                        
                                    {
                                    
                        if(!this.primaryPlayerQueue!.process())
                        
                                    {
                                    this.secondaryPlayerQueue!.process();
    

                                    }
                                

                                    }
                                

                        if(this.menuInputProcessor!.processInputList() !=  -1)
                        
                                    {
                                    this.runnableCanvasRefreshHelper!.process();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    initPopupMenu(){

                        if(this.popupMenuInputProcessor == NoMenuInputProcessor.getInstance())
                        
                                    {
                                    
    features: Features = Features.getInstance()!;;
    

    popupMenuRectangle: Rectangle = this.myFormUtil!.getPopupMenuRectangle()!;;
    

                        if(features.isFeature(this.touchFeatureFactory!.TOUCH_ENABLED))
                        
                                    {
                                    this.setOpenMenuPaintable(new BasicPopupMenuPaintable(popupMenuRectangle, this.gameLayerManager!.getBackgroundBasicColor(), this.gameLayerManager!.getForegroundBasicColor()));
    
this.setPopupMenuInputProcessor(new PopupMenuInputProcessor(new BasicArrayListD(),  -1, this, popupMenuRectangle));
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
}


    initMenu(){

        try {
            this.menuBehavior!.initMenu(this);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "initMenu", e);
    
}

}


                //@Throws(Exception.constructor)
            
    initMenu2(){
this.closeMenu();
    

    formType: FormType = FormTypeFactory.getInstance()!.getFormType()!;;
    

    gameLimitedCommandTextItemArrayFactory: GameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory.getInstance()!;;
    

    commandTextItemArrayFactory: CommandTextItemArrayFactory = gameLimitedCommandTextItemArrayFactory!.getCommandTextItemArrayFactory()!;;
    

    items: std::vector<ABCustomItem> = commandTextItemArrayFactory!.getInstance(this.getCommandStack() as Vector<any>, this.gameLayerManager!.getBackgroundBasicColor(), this.gameLayerManager!.getForegroundBasicColor())!;;
    

    rectangle: Rectangle = this.formUtil!.createFormRectangle()!;;
    
this.setMenuForm(CommandCurrentSelectionFormFactory.getInstance(StringUtil.getInstance()!.EMPTY_STRING, items, rectangle, formType, 25, false, this.gameLayerManager!.getBackgroundBasicColor(), this.gameLayerManager!.getForegroundBasicColor()));
    

    scrollSelectionForm: ScrollSelectionForm = this.getMenuForm()!;;
    

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(this.touchFeatureFactory!.TOUCH_ENABLED))
                        
                                    {
                                    this.mainMenuInputProcessor= new PopupCommandFormInputProcessor(new BasicArrayListD(),  -1, this, scrollSelectionForm, this.getPopupMenuInputProcessor() as PopupMenuInputProcessor);
    

                                    }
                                
                        else {
                            
                        }
                            
this.setMenuInputProcessor(this.getPopupMenuInputProcessor());
    

                        if(scrollSelectionForm != ScrollSelectionFormNoneFactory.getInstance())
                        
                                    {
                                    this.setFormPaintable(new FormPaintable(scrollSelectionForm));
    

                                    }
                                
                        else {
                            
                        }
                            
this.closeMenu();
    
}


    public updateMenu(){

        try {
            this.menuBehavior!.updateMenu(this);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "initMenu", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public updateMenu2(){

    scrollSelectionForm: ScrollSelectionForm = this.getMenuForm()!;;
    
scrollSelectionForm!.deleteAll();
    

    gameLimitedCommandTextItemArrayFactory: GameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory.getInstance()!;;
    

    commandTextItemArrayFactory: CommandTextItemArrayFactory = gameLimitedCommandTextItemArrayFactory!.getCommandTextItemArrayFactory()!;;
    

    items: std::vector<ABCustomItem> = commandTextItemArrayFactory!.getInstance(this.getCommandStack() as Vector<any>, this.gameLayerManager!.getBackgroundBasicColor(), this.gameLayerManager!.getForegroundBasicColor())!;;
    

    size: int32_t = items.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
scrollSelectionForm!.append(items[index]!);
    
}


    formType: FormType = FormTypeFactory.getInstance()!.getFormType()!;;
    

    rectangle: Rectangle = this.formUtil!.createFormRectangle()!;;
    
scrollSelectionForm!.init(rectangle, formType);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause(){
this.gameBehavior!.pause(this);
    
this.closeMenu();
    
super.pause();
    
this.touchButtonFactory!.toggle(this.isPaused(), BasicArrayListUtil.getInstance()!.getImmutableInstance());
    
System.gc();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause(){
this.logUtil!.putF(this.commonStrings!.START, this, this.gameStrings!.UNPAUSE);
    
this.closeMenu();
    
System.gc();
    
super.unPause();
    
this.touchButtonFactory!.toggle(this.isPaused(), BasicArrayListUtil.getInstance()!.getImmutableInstance());
    
this.gameBehavior!.unPause(this);
    
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


                //@Throws(Exception.constructor)
            
    public popupMenu(){
this.menuBehavior!.popupMenu(this);
    
}


                //@Throws(Exception.constructor)
            
    public popupMenu2(){
this.primaryPlayerQueue!.add(SelectSound.getInstance());
    
this.setMenuPaintable(this.getFormPaintable());
    
this.setMenuInputProcessor(this.mainMenuInputProcessor);
    
this.basicMotionGesturesHandler!.addListenerInterface(this.mainMenuInputProcessor);
    
this.gameKeyEventHandler!.addListener(this.mainMenuInputProcessor);
    
}


                //@Throws(Exception.constructor)
            
    public toggleMenu(){
this.logUtil!.putF(this.commonStrings!.START, this, this.gameStrings!.TOGGLE_MENU);
    

                        if(this.getMenuPaintable() == this.getOpenMenuPaintable())
                        
                                    {
                                    this.pause();
    
this.updateMenu();
    
this.popupMenu();
    

                                    }
                                
                             else 
                        if(this.getMenuPaintable() == this.getFormPaintable())
                        
                                    {
                                    this.primaryPlayerQueue!.add(SelectSound.getInstance());
    
this.unPause();
    

                                    }
                                
}


    public closeMenu(){
this.menuBehavior!.closeMenu(this);
    
}


    public closeMenu2(){
this.setMenuPaintable(this.getOpenMenuPaintable());
    
this.basicMotionGesturesHandler!.removeListener(this.mainMenuInputProcessor);
    
this.gameKeyEventHandler!.removeListener(this.mainMenuInputProcessor);
    
this.setMenuInputProcessor(this.getPopupMenuInputProcessor());
    
}


    public open(){
this.basicMotionGesturesHandler!.addListenerInterface(this.menuInputProcessor);
    
this.gameKeyEventHandler!.addListener(this.menuInputProcessor);
    
}


    public close(){
this.basicMotionGesturesHandler!.removeListener(this.menuInputProcessor);
    
this.gameKeyEventHandler!.removeListener(this.menuInputProcessor);
    
this.primaryPlayerQueue!.clear();
    
this.secondaryPlayerQueue!.clear();
    
}


                //@Throws(Exception.constructor)
            
    processorInit(){
this.setMainStateProcessor(Processor.getInstance());
    
this.setProcessGameProcessor(new GameProcessor(this));
    
}


    initSpecialPaint(){
this.menuBehavior!.initSpecialPaint(this);
    
}


                //@Throws(Exception.constructor)
            
    init(AllBinaryGameLayerManager gameLayerManager, bool buffered){
this.gameStateTimeHelper!.setStartTimeTNT();
    
this.setHighScoreSubmitted(false);
    
this.setLayerManager(gameLayerManager);
    

                        if(!buffered)
                        
                                    {
                                    
    BUFF_MESSAGE: string = "XXX Not Buffering Causes Concurrency Issues XXX";;
    
this.logUtil!.putF(BUFF_MESSAGE, this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
                        else {
                            


                            throw new Exception("Buffering is disabled");
                    

                        }
                            
this.setGameInputProcessor(Processor.getInstance());
    

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(GameFeatureFactory.getInstance()!.CHEATING))
                        
                                    {
                                    this.isCheating= true;
    
this.cheatProcessor= new CheatGameInputProcessor(this);
    
this.gameKeyEventHandler!.addListener(this.cheatProcessor);
    

                                    }
                                
                        else {
                            this.isCheating= false;
    
this.cheatProcessor= NoPlayerGameInput.getInstance();
    

                        }
                            
this.realEndGameProcessor= new EndGameProcessor(this);
    
this.setEndGameProcessor(Processor.getInstance());
    
this.realStartIntermissionProcessor= new StartIntermissionProcessor(this);
    
this.startIntermissionProcessor= Processor.getInstance();
    
this.setEndGameStatePaintable(new EndGamePaintable(this));
    
this.setEndGamePaintable(NullPaintable.getInstance());
    
this.setIntermissionPaintable(NullPaintable.getInstance());
    
this.getStartIntermissionInterface()!.setListener(this);
    
}


    public notifyIntermission(bool enable){

                        if(enable)
                        
                                    {
                                    this.startIntermissionProcessor= this.realStartIntermissionProcessor;
    

                                    }
                                
                        else {
                            this.startIntermissionProcessor= Processor.getInstance();
    

                        }
                            

                        if(enable)
                        
                                    {
                                    this.setIntermissionPaintable(this.getStartIntermissionPaintable());
    

                                    }
                                
                        else {
                            this.setIntermissionPaintable(NullPaintable.getInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public mediaInit(){
ForcedLogUtil.log(this.commonStrings!.NOT_IMPLEMENTED, this);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    initConfigurable(AbeClientInformationInterface abeClientInformation){

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.addNormalPortion(50, "Setting Configurables");
    
GameInitializationUtil.getInstance()!.initGame(abeClientInformation, this, this.gameInitializationInterfaceFactoryInterface);
    

    gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;;
    

    changedGameFeatureListener: ChangedGameFeatureListener = ChangedGameFeatureListener.getInstance()!;;
    

                        if(changedGameFeatureListener!.isChangedFeature(gameFeatureFactory!.SOUND))
                        
                                    {
                                    
    features: Features = Features.getInstance()!;;
    
this.logUtil!.putF(new StringMaker().append("Sound Changing To: ")!.appendboolean(features.isFeature(gameFeatureFactory!.SOUND))!.toString(), this, "initConfigurable");
    
this.mediaInit();
    
changedGameFeatureListener!.remove(gameFeatureFactory!.SOUND);
    

                                    }
                                

    sensorFeatureFactory: SensorFeatureFactory = SensorFeatureFactory.getInstance()!;;
    

                        if(changedGameFeatureListener!.isChangedFeature(sensorFeatureFactory!.ORIENTATION_SENSORS) || changedGameFeatureListener!.isChangedFeature(sensorFeatureFactory!.NO_ORIENTATION) || changedGameFeatureListener!.isChangedFeature(sensorFeatureFactory!.SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    changedGameFeatureListener!.remove(sensorFeatureFactory!.NO_ORIENTATION);
    
changedGameFeatureListener!.remove(sensorFeatureFactory!.ORIENTATION_SENSORS);
    
changedGameFeatureListener!.remove(sensorFeatureFactory!.SIMULATED_ORIENTATION_SENSORS);
    

                                    }
                                

    resourceLoadingLevelFactory: ResourceLoadingLevelFactory = ResourceLoadingLevelFactory.getInstance()!;;
    
this.loadResourceLoadingLevel(resourceLoadingLevelFactory!.LOAD_GAME);
    
}


                //@Throws(Exception.constructor)
            
    initApp(AbeClientInformationInterface abeClientInformation){
this.initConfigurable(abeClientInformation);
    
this.processorInit();
    
this.sensorGameUpdateProcessor!.process(this.gameLayerManager);
    
this.sensorGameUpdateProcessor!.sendNotifications(this.gameLayerManager);
    
this.initTouch();
    
}


                //@Throws(Exception.constructor)
            
    initTouch(){

    gameInitializedEvent: GameInitializedEvent = GameInitializationUtil.getInstance()!.EVENT;;
    

    resourceLoadingLevelFactory: ResourceLoadingLevelFactory = ResourceLoadingLevelFactory.getInstance()!;;
    
gameInitializedEvent!.setResourceLoadingLevel(resourceLoadingLevelFactory!.LOAD_TOUCH);
    
GameInitializedEventHandler.getInstance()!.fireEvent(gameInitializedEvent);
    
this.touchButtonFactory!.defaultList();
    
this.updateTouch();
    
this.postInitTouch();
    
}


                //@Throws(Exception.constructor)
            
    public updateCurrentTouchInputFactory(BaseTouchInput nextTouchInput){

                        if(nextTouchInput != this.currentTouchInputFactory)
                        
                                    {
                                    this.currentTouchInputFactory= nextTouchInput;
    
PreLogUtil.put(this.currentTouchInputFactory!.toString(), this, this.gameInputStrings!.UDPATE_CURRENT_TOUCH_INPUT_FACTORY);
    
this.touchButtonFactory!.toggle(this.isPaused(), this.currentTouchInputFactory!.getList());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    updateTouch(){
this.gameBehavior!.updateTouch(this);
    
}


                //@Throws(Exception.constructor)
            
    updateTouch2(){

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(this.touchFeatureFactory!.AUTO_HIDE_SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    
                        if(this.gameLayerManager!.getGameInfo()!.getCurrentLevel() -this.getStartLevel() == 1)
                        
                                    {
                                    this.setTouchPaintableP(NullPaintable.getInstance());
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    postInitTouch(){
this.setTouchButtonsPaintable(TouchButtonsPaintableFactory.getInstance(this.gameLayerManager!.getForegroundBasicColor()));
    
this.updateScreenButtonPaintable();
    
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
this.addCommands();
    
this.setCommandListener(cmdListener);
    
}


    public addCommands(){

    gameCommandsFactory: GameCommandsFactory = GameCommandsFactory.getInstance()!;;
    

    myCommandsFactory: MyCommandsFactory = MyCommandsFactory.getInstance()!;;
    

                        if(DebugFactory.getInstance() != NoDebug.getInstance())
                        
                                    {
                                    this.addCommand(gameCommandsFactory!.START_TRACE);
    

                                    }
                                
this.addCommand(gameCommandsFactory!.RESTART_COMMAND);
    
this.addCommand(myCommandsFactory!.PAUSE_COMMAND);
    
this.addCommand(gameCommandsFactory!.QUIT_COMMAND);
    

    isOverScan: bool = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!.isOverScan()!;;
    

                        if(J2MEUtil.isHTML())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(SWTUtil.isSWT)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(!isOverScan)
                        
                                    {
                                    
                        if(TouchScreenFactory.getInstance()!.isTouch() && new InGameFeatures().isAny())
                        
                                    {
                                    this.addCommand(InGameOptionsForm.DISPLAY);
    

                                    }
                                
this.addCommand(gameCommandsFactory!.SAVE);
    
this.addCommand(gameCommandsFactory!.DISPLAY_LOAD_FORM);
    

                                    }
                                
}


    public itemStateChanged(Item item){

        try {
            
    itemLabel: string = item.getLabel()!;;
    
this.logUtil!.putF(new StringMaker().append(this.commonLabels!.ITEM_LABEL)!.append(itemLabel)!.toString(), this, "itemStateChanged");
    

                        if(item instanceof ChoiceGroup)
                        
                                    {
                                    
    gameFeatureUtil: GameFeatureUtil = GameFeatureUtil.getInstance()!;;
    

                        if(gameFeatureUtil!.isExclusive(itemLabel))
                        
                                    {
                                    gameFeatureUtil!.updateExclusiveForChoiceGroup(item as ChoiceGroup);
    

                                    }
                                
                        else {
                            gameFeatureUtil!.updateMultiple(item as ChoiceGroup);
    

                        }
                            

                                    }
                                
this.sensorGameUpdateProcessor!.process(this.gameLayerManager);
    
this.updateTouch();
    
this.updateScreenButtonPaintable();
    
this.sensorGameUpdateProcessor!.sendNotifications(this.gameLayerManager);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "itemStateChanged", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public updateScreenButtonPaintable(){
this.gameBehavior!.updateScreenButtonPaintable(this);
    
}


    public updateScreenButtonPaintable2(){

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(this.touchFeatureFactory!.AUTO_HIDE_SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    this.setTouchPaintableP(this.getTouchButtonsPaintable());
    
this.setStartLevel(this.gameLayerManager!.getGameInfo()!.getCurrentLevel());
    

                                    }
                                
                             else 
                        if(features.isFeature(this.touchFeatureFactory!.SHOW_SCREEN_BUTTONS))
                        
                                    {
                                    this.setTouchPaintableP(this.getTouchButtonsPaintable());
    

                                    }
                                
                             else 
                        if(features.isFeature(this.touchFeatureFactory!.HIDE_SCREEN_BUTTONS))
                        
                                    {
                                    this.setTouchPaintableP(NullPaintable.getInstance());
    

                                    }
                                
                        else {
                            this.setTouchPaintableP(NullPaintable.getInstance());
    

                        }
                            
}


    public AllBinaryGameLayerManager getLayerManager(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameLayerManager;
    
}


    public setLayerManager(AllBinaryGameLayerManager layerManager){
this.gameLayerManager= layerManager;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isGameOver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameOver;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setGameOver(bool gameOver){
this.gameOver= gameOver;
    
}


                //@Throws(Exception.constructor)
            
    public processGameOver(){
PreLogUtil.put(this.commonStrings!.START, this, this.gameStrings!.SET_GAME_OVER);
    
this.setGameOver(true);
    
this.removePauseCommand();
    
this.setGameState(this.gameStateFactory!.SHOW_END_RESULT_GAME_STATE);
    
this.setEndGamePaintable(this.getEndGameStatePaintable());
    
}


    public bool isHighScoreSubmitted(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.highScoreSubmitted;
    
}


                //@Throws(Exception.constructor)
            
    public setHighScoreSubmitted(bool highScoreSubmitted){
this.highScoreSubmitted= highScoreSubmitted;
    

                        if(highScoreSubmitted)
                        
                                    {
                                    this.highScoresHelper!.setSelectedHighScores(NullHighScoresSingletonFactory.getInstance());
    

                                    }
                                
this.logUtil!.putF(new StringMaker().append("isHighScoreSubmitted: ")!.appendboolean(highScoreSubmitted)!.toString(), this, "setHighScoreSubmitted");
    
}


    public GameState getGameState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameState;
    
}


                //@Throws(Exception.constructor)
            
    public setGameState(GameState gameState){
this.logUtil!.putF(new StringMaker().append(this.gameStrings!.GAME_STATE)!.append(this.stringUtil!.toString(gameState))!.toString(), this, this.gameStrings!.SET_GAME_STATE);
    
this.gameState= gameState;
    
this.gameStateTimeHelper!.setStartTimeTNT();
    
this.updateEndGameProcessor();
    
this.updateGameKeyEventProcessor();
    
this.gameBehavior!.setGameState(this);
    
}


                //@Throws(Exception.constructor)
            
    public updateGameState(){

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.processAdState(this.gameState, this.gameLayerManager!.getGameInfo()!.getGameType());
    

                        if(this.gameState != this.gameStateFactory!.PLAYING_GAME_STATE)
                        
                                    {
                                    gameAdState!.processPageAdState();
    

                                    }
                                
}


    updateGameKeyEventProcessor(){

                        if(this.getGameState() != this.gameStateFactory!.PLAYING_GAME_STATE || this.isCheating)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        }
                            
}


    removeAllGameKeyInputListenersOnBuild(){
this.removeAllGameKeyInputListeners();
    
}


    removeAllGameKeyInputListeners(){
this.gameBehavior!.removeAllGameKeyInputListeners(this);
    
}


    removeAllGameKeyInputListeners2(){
this.logUtil!.putF("Remove PlayerInput Listeners", this, "removeAllGameKeyInputListeners");
    




                        for (
    index: int32_t = this.localPlayerGameInputList!.size() -1;index >= 0; index--)
        {

    playerGameInput: PlayerGameInput = this.localPlayerGameInputList!.get(index) as PlayerGameInput;;
    
this.removeKeyInputListener(playerGameInput);
    
playerGameInput!.removeNonAIInputGameKeyEvents();
    
}

}


    public removeKeyInputListener(PlayerGameInput playerGameInput){
this.gameKeyEventHandler!.removeListener(playerGameInput);
    
}


                //@Throws(Exception.constructor)
            
    updateEndGameProcessor(){
this.gameBehavior!.updateEndGameProcessor(this);
    
}


                //@Throws(Exception.constructor)
            
    updateEndGameProcessor2(){

                        if(this.getGameState() == this.gameStateFactory!.SHOW_END_RESULT_GAME_STATE || this.getGameState() == this.gameStateFactory!.SHOW_HIGH_SCORE_GAME_STATE)
                        
                                    {
                                    this.setEndGameProcessor(this.realEndGameProcessor);
    

                                    }
                                
                        else {
                            this.setEndGameProcessor(Processor.getInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public buildGameInit(bool isPortion){
}


                //@Throws(Exception.constructor)
            
    cleanupGame(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CLEANUP);
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.addNormalPortion(10, "Cleaning Up");
    
this.primaryPlayerQueue!.clear();
    
this.secondaryPlayerQueue!.clear();
    
GameLevelDisplayChangeEventListenersFactory.getInstance()!.clear();
    
}


                //@Throws(Exception.constructor)
            
    public loadResourceLoadingLevel(ResourceLoadingLevel resourceLoadingLevel){

    gameInitializedEvent: GameInitializedEvent = GameInitializationUtil.getInstance()!.EVENT;;
    
gameInitializedEvent!.setResourceLoadingLevel(resourceLoadingLevel);
    
GameInitializedEventHandler.getInstance()!.fireEvent(gameInitializedEvent);
    
}


                //@Throws(Exception.constructor)
            
    public loadResources(int32_t level){

    gameInitializedEvent: GameInitializedEvent = GameInitializationUtil.getInstance()!.EVENT;;
    
gameInitializedEvent!.setLevel(level);
    
GameInitializedEventHandler.getInstance()!.fireEvent(gameInitializedEvent);
    
}


                //@Throws(Exception.constructor)
            
    public updateColor(){
}


                //@Throws(Exception.constructor)
            
    public buildGame(int32_t portion){
this.screenCapture!.endRecording();
    
this.screenCapture!.startRecording();
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    

    features: Features = Features.getInstance()!;;
    
progressCanvas!.addNormalPortion(portion, "Generic Build");
    
this.removeAllGameKeyInputListenersOnBuild();
    
this.updateTouch();
    
progressCanvas!.addNormalPortion(portion, "High Scores");
    
this.highScoresFactoryInterface!.fetchHighScores(this.gameLayerManager!.getGameInfo(), this.highScoresHelper);
    
this.setHighScoresPaintable(NullPaintable.getInstance());
    
progressCanvas!.addNormalPortion(portion, "Finishing.");
    
this.getEndGameInfoP()!.update(this.getLayerManager()!.getGameInfo(), this);
    
this.isSingleKeyRepeatableProcessing= features.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS);
    
this.setGameOver(false);
    
progressCanvas!.addNormalPortion(portion, "Finishing..");
    
this.updateColor();
    
this.getStartIntermissionPaintable()!.update();
    

                        if(!this.isRunningInAnotherThread())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
progressCanvas!.addNormalPortion(portion, "Finishing...");
    

                        if(this.isMainCanvas() || !this.isInitialized())
                        
                                    {
                                    
                        if(features.isFeature(MainFeatureFactory.getInstance()!.LOAD_ONDEMAND))
                        
                                    {
                                    
                        if(this.getCustomCommandListener() != 
                                    null
                                )
                        
                                    {
                                    progressCanvas!.end();
    

                                    }
                                

                                    }
                                
                        else {
                            progressCanvas!.end();
    

                        }
                            
this.setInitialized(true);
    

                                    }
                                

                        if(this.getCustomCommandListener() == NullCommandListener.NULL_COMMAND_LISTENER)
                        
                                    {
                                    this.logUtil!.putF("Show Game Paintable in DemoCanvas Thread", this, this.BUILD_GAME);
    
this.gameCanvasStartListener!.showGamePaintable();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("No GameCanvasStartListener", this, this.BUILD_GAME);
    

                        }
                            
this.colorFillPaintable!.setBasicColorP(this.gameLayerManager!.getBackgroundBasicColor());
    
this.gameBehavior!.buildGame(this);
    
}


    public buildGame2(){
PreLogUtil.put(new StringMaker().append(this.gameInputStrings!.ENABLE_PLAYER_GAME_INPUTS)!.appendint(this.localPlayerGameInputList!.size())!.toString(), this, this.BUILD_GAME);
    

    playerGameInput: PlayerGameInput;;
    




                        for (
    index: int32_t = this.localPlayerGameInputList!.size() -1;index >= 0; index--)
        {
playerGameInput= this.localPlayerGameInputList!.get(index) as PlayerGameInput;
    
PreLogUtil.put(new StringMaker().append(this.gameInputStrings!.ENABLE_PLAYER_GAME_INPUT)!.append(playerGameInput!.toString())!.toString(), this, this.BUILD_GAME);
    
playerGameInput!.removeNonAIInputGameKeyEvents();
    
this.addKeyInputListener(playerGameInput);
    
}

}


    public addKeyInputListener(PlayerGameInput playerGameInput){
GameKeyEventHandler.getInstance()!.addListenerForPlayer(playerGameInput, playerGameInput!.getPlayerInputId());
    
}


    private: gameCanvasStartListener: DemoPaintableInterface = NullDemoPaintable.NULL_DEMO_PAINTABLE;

    public setGameCanvasStartListener(DemoPaintableInterface gameCanvasStartListener){
this.gameCanvasStartListener= gameCanvasStartListener;
    
}


                //@Throws(Exception.constructor)
            
    public loadState(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.LOAD);
    

    hashtable: Hashtable<any, any> = this.getLoadStateHashtable()!;;
    

                        if(hashtable != 
                                    null
                                 && hashtable.length > 0)
                        
                                    {
                                    
    levelAsString: string = hashtable.get(GameInfo.LEVEL_NAME) as string;;
    

    level: int32_t = Integer.valueOf(levelAsString)!.intValue()!;;
    

    gameInfo: GameInfo = this.gameLayerManager!.getGameInfo()!;;
    
gameInfo!.setCurrentLevel(level);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getLoadStateHashtable(){
this.logUtil!.putF(new StringMaker().append(this.commonLabels!.START_LABEL)!.append(this.stringUtil!.toString(this.hashtable))!.toString(), this, "getLoadStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


    public setLoadStateHashtable(Hashtable<any, any> hashtable){
this.logUtil!.putF(new StringMaker().append(this.commonLabels!.START_LABEL)!.append(this.stringUtil!.toString(hashtable))!.toString(), this, "setLoadStateHashtable");
    
this.hashtable= hashtable;
    
}


    public Hashtable<any, any> getCurrentStateHashtable(){

    hashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    

    level: int32_t = this.gameLayerManager!.getGameInfo()!.getCurrentLevel()!;;
    
hashtable.put(GameInfo.LEVEL_NAME.toString(), level.toString());
    
this.logUtil!.putF(new StringMaker().append("End: ")!.append(this.stringUtil!.toString(hashtable))!.toString(), this, "getCurrentStateHashtable");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


    public paintGameOver(Graphics graphics){
ForcedLogUtil.log(this.commonStrings!.NOT_IMPLEMENTED, this);
    
}


    public draw(Graphics graphics){
this.colorFillPaintable!.paint(graphics);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.gameLayerManager!.getForegroundBasicColor());
    
this.gameSpecificPaintable!.paint(graphics);
    
}


    public clear(Graphics graphics){
this.colorFillPaintable!.paint(graphics);
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
this.baseGameStatistics!.nextRefresh();
    
this.draw(graphics);
    
this.menuPaintable!.paint(graphics);
    
this.progressPaintable!.paint(graphics);
    
}


    public paintThreed(Graphics graphics){
}


                //@Throws(Exception.constructor)
            
    public processEndLevelIntermissionGameState(){
}


    public nonBotPaint(Graphics graphics){
this.endGamePaintable!.paint(graphics);
    
this.intermissionPaintable!.paint(graphics);
    
this.paintIntermission(graphics);
    
this.touchPaintable!.paint(graphics);
    
}


    public paintIntermission(Graphics graphics){
}


    private: const rawGameInputProcessor: InputProcessor = new GameCanvasInputProcessor(this);

    private: const rawInputProcessor: InputProcessor = new FormInputProcessor(this);

    private: inputProcessor: InputProcessor = this.getRawGameInputProcessor()!;

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
this.inputProcessor!.keyPressedByDevice(keyCode, deviceId);
    
}


    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){

                        if(this.isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this.inputProcessor!.keyPressedByDevice(keyCode, deviceId);
    

                                    }
                                
}


    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
this.inputProcessor!.keyReleasedByDevice(this, keyCode, deviceId);
    
}


                //@Throws(Exception.constructor)
            
    public handleRawKey(int32_t keyCode, int32_t deviceId, bool repeated){
}


    int32_t endProgress(bool isProgress){

    portion: int32_t = 30;;
    

                        if(isProgress && this.isMainCanvas())
                        
                                    {
                                    
    myCommandsFactory: MyCommandsFactory = MyCommandsFactory.getInstance()!;;
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.start();
    
this.getCustomCommandListener()!.commandAction(myCommandsFactory!.SET_DISPLAYABLE, progressCanvas);
    
portion= 4;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return portion;
    
}


                //@Throws(Exception.constructor)
            
    processPlayingGame(){
this.cheatProcessor!.update();
    
this.sensorGameUpdateProcessor!.getInputSensor()!.update();
    
this.gameInputProcessor!.process();
    
this.gameLayerManager!.process();
    
this.startIntermissionProcessor!.process();
    
}


                //@Throws(Exception.constructor)
            
    threadInit(){
}


                //@Throws(Exception.constructor)
            
    processGame(){
super.process();
    

                        if(AllBinaryMediaManager.update())
                        
                                    {
                                    
                        if(!this.primaryPlayerQueue!.process())
                        
                                    {
                                    this.secondaryPlayerQueue!.process();
    

                                    }
                                

                                    }
                                
this.mainStateProcessor!.process();
    
this.menuInputProcessor!.processInputList();
    
this.endGameProcessor!.process();
    
this.baseGameStatistics!.nextFrame();
    
}


    public notifyDonePainting(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this.threadObjectUtil!.notifyObject(this);
    


}


    private: const YIELD_SLEEP: int64_t = 100;

                //@Throws(Exception.constructor)
            
    public shouldWait(){

    features: Features = Features.getInstance()!;;
    

                        if(AndroidUtil.isAndroid())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(features.isFeature(this.openGLFeatureFactory!.OPENGL_2D))
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(features.isDefault(this.openGLFeatureFactory!.OPENGL))
                        
                                    {
                                    
    openGLImageSpecificFactory: OpenGLImageSpecificFactory = OpenGLImageSpecificFactory.getInstance()!;;
    

        while(openGLImageSpecificFactory!.updating)
        {
Thread.sleep(this.YIELD_SLEEP);
    
}


                                    }
                                

                        }
                            
}


    public run(){

        try {
            this.logUtil!.putF(this.commonStrings!.START_RUNNABLE, this, this.commonStrings!.RUN);
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.addNormalPortion(50, "Game Thread");
    
this.setCurrentThread();
    
this.setRunning(true);
    

                        if(this.getCustomCommandListener() == NullCommandListener.NULL_COMMAND_LISTENER)
                        
                                    {
                                    Thread.sleep(this.YIELD_SLEEP);
    

                                    }
                                
this.shouldWait();
    
this.threadInit();
    

                        if(this.getCustomCommandListener() == NullCommandListener.NULL_COMMAND_LISTENER)
                        
                                    {
                                    Thread.sleep(this.YIELD_SLEEP);
    

                                    }
                                
this.open();
    

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.init();
    
gameAdState!.setGameIsReady(true);
    
this.gameBehavior!.run(this);
    
this.logUtil!.putF(this.commonStrings!.END_RUNNABLE, this, this.commonStrings!.RUN);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.RUN, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public run2(){

    features: Features = Features.getInstance()!;;
    

                        if(features.isDefault(this.openGLFeatureFactory!.OPENGL_AS_GAME_THREAD) || J2MEUtil.isHTML())
                        
                                    {
                                    
                        if(features.isDefault(this.openGLFeatureFactory!.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    this.logUtil!.putF(this.openGLFeatureFactory!.OPENGL_AS_GAME_THREAD.getName(), this, this.commonStrings!.RUN);
    

                                    }
                                

                        if(J2MEUtil.isHTML())
                        
                                    {
                                    this.logUtil!.putF(GraphicsStrings.getInstance()!.HTML, this, this.commonStrings!.RUN);
    

                                    }
                                

    currentDisplayableFactory: CurrentDisplayableFactory = CurrentDisplayableFactory.getInstance()!;;
    
currentDisplayableFactory!.setRunnable(this.gameRunnable);
    
currentDisplayableFactory!.setDisplayable(this);
    
OpenGLThreadUtil.getInstance()!.onResume();
    

                                    }
                                
                             else 
                        if(features.isDefault(this.openGLFeatureFactory!.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS))
                        
                                    {
                                    this.logUtil!.putF(this.openGLFeatureFactory!.OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS.getName(), this, this.commonStrings!.RUN);
    
OpenGLThreadUtil.getInstance()!.onResume();
    

        while(this.isRunning())
        {
this.run3();
    
}

this.end();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("this thread", this, this.commonStrings!.RUN);
    

        while(this.isRunning())
        {
this.run3();
    
}

this.end();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public run3(){
this.loopTimeHelper!.setStartTime(this.gameTickTimeDelayHelper!.setStartTime());
    
this.gameTickDisplayInfoSingleton!.update();
    
this.processGame();
    
this.processLoopSleep();
    
}


    public setRunning(bool running){
super.setRunning(running);
    

        try {
            
    features: Features = Features.getInstance()!;;
    

                        if(running)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(features.isDefault(this.openGLFeatureFactory!.OPENGL) || SWTUtil.isSWT)
                        
                                    {
                                    
                        if(this.gameLayerManager!.getGameInfo()!.getGameType() != this.gameTypeFactory!.BOT)
                        
                                    {
                                    
    currentDisplayableFactory: CurrentDisplayableFactory = CurrentDisplayableFactory.getInstance()!;;
    
currentDisplayableFactory!.clearRunnable();
    

                                    }
                                
this.end();
    

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.SET_RUNNING, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public end(){
this.screenCapture!.endRecording();
    
this.baseGameStatistics!.add(new StringMaker().append(this.baseGameStatistics!.toString())!.append(CommonSeps.getInstance()!.NEW_LINE)!.toString());
    
this.baseGameStatistics!.init();
    
this.gameKeyEventHandler!.removeListener(this.cheatProcessor);
    
this.close();
    
this.removeAllGameKeyInputListeners();
    
this.endGameThread();
    
}


                //@Throws(Exception.constructor)
            
    public endGameThread(){
DisplayChangeEventHandler.getInstance()!.removeListener(this);
    
GameLevelDisplayChangeEventListenersFactory.getInstance()!.clear();
    

    gameAdState: GameAdState = this.gameAdStateFactory!.getCurrentInstance()!;;
    
gameAdState!.notPlayingAdState();
    
}


    public HighScore createHighScore(int64_t score){

    gameInfo: GameInfo = this.gameLayerManager!.getGameInfo()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HighScore(0, "NONE", new GameInfo(gameInfo!.getGameType(), gameInfo!.getGameMode(), PlayerTypesFactory.getInstance()!.PLAYER_TYPE_ONE, 0, 0), score);
    
}


                //@Throws(Exception.constructor)
            
    public setHighScore(AbeClientInformationInterface abeClientInformation, string name, int64_t score, bool autoSubmit, bool isLast){
this.gameBehavior!.setHighScore(abeClientInformation, this, name, score, autoSubmit, isLast);
    
}


                //@Throws(Exception.constructor)
            
    public setHighScore2(AbeClientInformationInterface abeClientInformation, string name, int64_t score, bool autoSubmit, bool isLast){

    highScore: HighScore = this.createHighScore(score)!;;
    

    textBox: HighScoreTextBox = new HighScoreTextBox(this.highScoresFactoryInterface, this.highScoresHelper, abeClientInformation, this.gameLayerManager!.getGameInfo(), this.getCustomCommandListener(), name, highScore, this.gameLayerManager!.getBackgroundBasicColor(), this.gameLayerManager!.getForegroundBasicColor());;
    

                        if(isLast)
                        
                                    {
                                    this.getCustomCommandListener()!.commandAction(GameCommandsFactory.getInstance()!.SET_MENU_DISPLAYABLE, textBox);
    

                                    }
                                

                        if(autoSubmit)
                        
                                    {
                                    
//inner=true member= isStatic=
class SaveHighScoreRunnable
            : public Object
        : public Runnable {
        

    private: const progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;

    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
                        if(isLast)
                        
                                    {
                                    textBox!.submit();
    

                                    }
                                
                        else {
                            textBox!.saveHighScore();
    

                        }
                            

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, this, "run", e);
    
this.progressCanvas!.end();
    
}

}


};

            
SecondaryThreadPool.getInstance()!.runTask(new SaveHighScoreRunnable());
    

                                    }
                                
}


    TimeDelayHelper getGameStateTimeHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameStateTimeHelper;
    
}


    setInitialized(bool initialized){
this.initialized= initialized;
    
}


    public bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initialized;
    
}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryGameCanvas.id;
    
}


    public setProgressPaintable(PaintableInterface paintable){
this.progressPaintable= paintable;
    
}


    public IntermissionInterface getStartIntermissionInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startIntermissionInterface;
    
}


    public IntermissionInterface getEndLevelIntermissionInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.endLevelIntermissionInterface;
    
}


    setTouchPaintableP(Paintable paintable){
this.touchPaintable= paintable;
    
}


    public Paintable getTouchPaintableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.touchPaintable;
    
}


    setEndGamePaintable(Paintable endGamePaintable){
this.endGamePaintable= endGamePaintable;
    
}


    public Paintable getEndGamePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.endGamePaintable;
    
}


    setIntermissionPaintable(Paintable intermissionPaintable){
this.intermissionPaintable= intermissionPaintable;
    
}


    public Paintable getIntermissionPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.intermissionPaintable;
    
}


    public EndGameInfo getEndGameInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.endGameInfo;
    
}


    public setHighScoresPaintable(Paintable highScoresPaintable){
this.highScoresPaintable= highScoresPaintable;
    
}


    public Paintable getHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.highScoresPaintable;
    
}


    HighScoresPaintable getRealHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.realHighScoresPaintable;
    
}


    clearPlayerGameInputList(){

    playerGameInput: PlayerGameInput;;
    




                        for (
    index: int32_t = this.localPlayerGameInputList!.size() -1;index >= 0; index--)
        {
playerGameInput= this.localPlayerGameInputList!.get(index) as PlayerGameInput;
    
this.gameKeyEventHandler!.removeListener(playerGameInput);
    
}

this.localPlayerGameInputList!.clear();
    
}


    addPlayerGameInput(PlayerGameInput playerGameInput){
this.localPlayerGameInputList!.add(playerGameInput);
    
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


    public int32_t getStartLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startLevel;
    
}


    public setStartLevel(int32_t startLevel){
this.startLevel= startLevel;
    
}


    setTouchButtonsPaintable(Paintable touchButtonsPaintable){
this.touchButtonsPaintable= touchButtonsPaintable;
    
}


    Paintable getTouchButtonsPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.touchButtonsPaintable;
    
}


    public setGameInputProcessor(Processor gameInputProcessor){
this.gameInputProcessor= gameInputProcessor;
    
}


    Processor getGameInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameInputProcessor;
    
}


    setEndGameProcessor(Processor endGameProcessor){
this.endGameProcessor= endGameProcessor;
    
}


    Processor getEndGameProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.endGameProcessor;
    
}


    setEndGameStatePaintable(Paintable endGameStatePaintable){
this.endGameStatePaintable= endGameStatePaintable;
    
}


    Paintable getEndGameStatePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.endGameStatePaintable;
    
}


    setNonBotPaintableP(Paintable nonBotPaintable){
this.nonBotPaintable= nonBotPaintable;
    
}


    Paintable getNonBotPaintableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.nonBotPaintable;
    
}


    setStartIntermissionPaintable(InitUpdatePaintable startIntermissionPaintable){
this.startIntermissionPaintable= startIntermissionPaintable;
    
}


    InitUpdatePaintable getStartIntermissionPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startIntermissionPaintable;
    
}


    public setMainStateProcessor(Processor mainStateProcessor){
this.mainStateProcessor= mainStateProcessor;
    
}


    Processor getMainStateProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mainStateProcessor;
    
}


    setProcessGameProcessor(Processor processGameProcessor){
this.processGameProcessor= processGameProcessor;
    
}


    public Processor getProcessGameProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.processGameProcessor;
    
}


    setOpenMenuPaintable(Paintable openMenuPaintable){
this.openMenuPaintable= openMenuPaintable;
    
}


    Paintable getOpenMenuPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.openMenuPaintable;
    
}


    setPopupMenuInputProcessor(BasicMenuInputProcessor popupMenuInputProcessor){
this.popupMenuInputProcessor= popupMenuInputProcessor;
    
}


    BasicMenuInputProcessor getPopupMenuInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.popupMenuInputProcessor;
    
}


    public SensorGameUpdateProcessor getSensorGameUpdateProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sensorGameUpdateProcessor;
    
}


    public InputProcessor getRawGameInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rawGameInputProcessor;
    
}


    public InputProcessor getRawInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rawInputProcessor;
    
}


    public setInputProcessor(InputProcessor inputProcessor){
this.inputProcessor= inputProcessor;
    
}


    InputProcessor getInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inputProcessor;
    
}


    setMenuPaintable(Paintable menuPaintable){
this.menuPaintable= menuPaintable;
    
}


    Paintable getMenuPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.menuPaintable;
    
}


    setFormPaintable(Paintable formPaintable){
this.formPaintable= formPaintable;
    
}


    Paintable getFormPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.formPaintable;
    
}


    public setGameSpecificPaintableP(Paintable gameSpecificPaintable){
this.gameSpecificPaintable= gameSpecificPaintable;
    
}


    Paintable getGameSpecificPaintableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameSpecificPaintable;
    
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


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryGameCanvas.TYPE;
    
}


};

            

