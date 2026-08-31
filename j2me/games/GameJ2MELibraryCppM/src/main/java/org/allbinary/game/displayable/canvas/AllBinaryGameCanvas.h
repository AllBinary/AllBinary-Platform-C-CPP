
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H

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

public constructor (CommandListener commandListener, AllBinaryGameLayerManager gameLayerManager, HighScoresFactoryInterface highScoresFactoryInterface, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool buffered);

    public updateMeasurement(Graphics graphics);

    public BaseMenuBehavior getInGameMenuBehavior();

    public setCurrentThread();

    public onEvent(AllBinaryEventObject eventObject);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

                //@Throws(Exception.constructor)
            
    public updateMenuFromEvent(DisplayChangeEvent displayChangeEvent);

                //@Throws(Exception.constructor)
            
    public processSleep();

                //@Throws(Exception.constructor)
            
    initPopupMenu();

    initMenu();

                //@Throws(Exception.constructor)
            
    initMenu2();

    public updateMenu();

                //@Throws(Exception.constructor)
            
    public updateMenu2();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause();

    public bool isPausable();

                //@Throws(Exception.constructor)
            
    public popupMenu();

                //@Throws(Exception.constructor)
            
    public popupMenu2();

                //@Throws(Exception.constructor)
            
    public toggleMenu();

    public closeMenu();

    public closeMenu2();

    public open();

    public close();

                //@Throws(Exception.constructor)
            
    processorInit();

    initSpecialPaint();

                //@Throws(Exception.constructor)
            
    init(AllBinaryGameLayerManager gameLayerManager, bool buffered);

    public notifyIntermission(bool enable);

                //@Throws(Exception.constructor)
            
    public mediaInit();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    initConfigurable(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    initApp(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    initTouch();

                //@Throws(Exception.constructor)
            
    public updateCurrentTouchInputFactory(BaseTouchInput nextTouchInput);

                //@Throws(Exception.constructor)
            
    updateTouch();

                //@Throws(Exception.constructor)
            
    updateTouch2();

                //@Throws(Exception.constructor)
            
    postInitTouch();

    public initCommands(CommandListener cmdListener);

    public addCommands();

    public itemStateChanged(Item item);

                //@Throws(Exception.constructor)
            
    public updateScreenButtonPaintable();

    public updateScreenButtonPaintable2();

    public AllBinaryGameLayerManager getLayerManager();

    public setLayerManager(AllBinaryGameLayerManager layerManager);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isGameOver();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setGameOver(bool gameOver);

                //@Throws(Exception.constructor)
            
    public processGameOver();

    public bool isHighScoreSubmitted();

                //@Throws(Exception.constructor)
            
    public setHighScoreSubmitted(bool highScoreSubmitted);

    public GameState getGameState();

                //@Throws(Exception.constructor)
            
    public setGameState(GameState gameState);

                //@Throws(Exception.constructor)
            
    public updateGameState();

    updateGameKeyEventProcessor();

    removeAllGameKeyInputListenersOnBuild();

    removeAllGameKeyInputListeners();

    removeAllGameKeyInputListeners2();

    public removeKeyInputListener(PlayerGameInput playerGameInput);

                //@Throws(Exception.constructor)
            
    updateEndGameProcessor();

                //@Throws(Exception.constructor)
            
    updateEndGameProcessor2();

                //@Throws(Exception.constructor)
            
    public buildGameInit(bool isPortion);

                //@Throws(Exception.constructor)
            
    cleanupGame();

                //@Throws(Exception.constructor)
            
    public loadResourceLoadingLevel(ResourceLoadingLevel resourceLoadingLevel);

                //@Throws(Exception.constructor)
            
    public loadResources(int32_t level);

                //@Throws(Exception.constructor)
            
    public updateColor();

                //@Throws(Exception.constructor)
            
    public buildGame(int32_t portion);

    public buildGame2();

    public addKeyInputListener(PlayerGameInput playerGameInput);

    private: gameCanvasStartListener: DemoPaintableInterface = NullDemoPaintable.NULL_DEMO_PAINTABLE;

    public setGameCanvasStartListener(DemoPaintableInterface gameCanvasStartListener);

                //@Throws(Exception.constructor)
            
    public loadState();

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getLoadStateHashtable();

    public setLoadStateHashtable(Hashtable<any, any> hashtable);

    public Hashtable<any, any> getCurrentStateHashtable();

    public paintGameOver(Graphics graphics);

    public draw(Graphics graphics);

    public clear(Graphics graphics);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public processEndLevelIntermissionGameState();

    public nonBotPaint(Graphics graphics);

    public paintIntermission(Graphics graphics);

    private: const rawGameInputProcessor: InputProcessor = new GameCanvasInputProcessor(this);

    private: const rawInputProcessor: InputProcessor = new FormInputProcessor(this);

    private: inputProcessor: InputProcessor = this.getRawGameInputProcessor()!;

    public keyPressed(int32_t keyCode);

    public keyReleased(int32_t keyCode);

    public keyRepeated(int32_t keyCode);

    public keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

                //@Throws(Exception.constructor)
            
    public handleRawKey(int32_t keyCode, int32_t deviceId, bool repeated);

    int32_t endProgress(bool isProgress);

                //@Throws(Exception.constructor)
            
    processPlayingGame();

                //@Throws(Exception.constructor)
            
    threadInit();

                //@Throws(Exception.constructor)
            
    processGame();

    public notifyDonePainting();

    private: const YIELD_SLEEP: int64_t = 100;

                //@Throws(Exception.constructor)
            
    public shouldWait();

    public run();

                //@Throws(Exception.constructor)
            
    public run2();

                //@Throws(Exception.constructor)
            
    public run3();

    public setRunning(bool running);

                //@Throws(Exception.constructor)
            
    public end();

                //@Throws(Exception.constructor)
            
    public endGameThread();

    public HighScore createHighScore(int64_t score);

                //@Throws(Exception.constructor)
            
    public setHighScore(AbeClientInformationInterface abeClientInformation, string name, int64_t score, bool autoSubmit, bool isLast);

                //@Throws(Exception.constructor)
            
    public setHighScore2(AbeClientInformationInterface abeClientInformation, string name, int64_t score, bool autoSubmit, bool isLast);

    TimeDelayHelper getGameStateTimeHelper();

    setInitialized(bool initialized);

    public bool isInitialized();

    public int32_t getSourceId();

    public setProgressPaintable(PaintableInterface paintable);

    public IntermissionInterface getStartIntermissionInterface();

    public IntermissionInterface getEndLevelIntermissionInterface();

    setTouchPaintableP(Paintable paintable);

    public Paintable getTouchPaintableP();

    setEndGamePaintable(Paintable endGamePaintable);

    public Paintable getEndGamePaintable();

    setIntermissionPaintable(Paintable intermissionPaintable);

    public Paintable getIntermissionPaintable();

    public EndGameInfo getEndGameInfoP();

    public setHighScoresPaintable(Paintable highScoresPaintable);

    public Paintable getHighScoresPaintable();

    HighScoresPaintable getRealHighScoresPaintable();

    clearPlayerGameInputList();

    addPlayerGameInput(PlayerGameInput playerGameInput);

    setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor);

    BasicMenuInputProcessor getMenuInputProcessor();

    public ScrollSelectionForm getMenuForm();

    public setMenuForm(ScrollSelectionForm menuForm);

    public int32_t getStartLevel();

    public setStartLevel(int32_t startLevel);

    setTouchButtonsPaintable(Paintable touchButtonsPaintable);

    Paintable getTouchButtonsPaintable();

    public setGameInputProcessor(Processor gameInputProcessor);

    Processor getGameInputProcessor();

    setEndGameProcessor(Processor endGameProcessor);

    Processor getEndGameProcessor();

    setEndGameStatePaintable(Paintable endGameStatePaintable);

    Paintable getEndGameStatePaintable();

    setNonBotPaintableP(Paintable nonBotPaintable);

    Paintable getNonBotPaintableP();

    setStartIntermissionPaintable(InitUpdatePaintable startIntermissionPaintable);

    InitUpdatePaintable getStartIntermissionPaintable();

    public setMainStateProcessor(Processor mainStateProcessor);

    Processor getMainStateProcessor();

    setProcessGameProcessor(Processor processGameProcessor);

    public Processor getProcessGameProcessor();

    setOpenMenuPaintable(Paintable openMenuPaintable);

    Paintable getOpenMenuPaintable();

    setPopupMenuInputProcessor(BasicMenuInputProcessor popupMenuInputProcessor);

    BasicMenuInputProcessor getPopupMenuInputProcessor();

    public SensorGameUpdateProcessor getSensorGameUpdateProcessor();

    public InputProcessor getRawGameInputProcessor();

    public InputProcessor getRawInputProcessor();

    public setInputProcessor(InputProcessor inputProcessor);

    InputProcessor getInputProcessor();

    setMenuPaintable(Paintable menuPaintable);

    Paintable getMenuPaintable();

    setFormPaintable(Paintable formPaintable);

    Paintable getFormPaintable();

    public setGameSpecificPaintableP(Paintable gameSpecificPaintable);

    Paintable getGameSpecificPaintableP();

    public bool isSingleThread();

    public bool isRunningInAnotherThread();

    public int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H
