
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H

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

public constructor (AbeClientInformationInterface abeClientInformation, CommandListener commandListener, HighScoresFactoryInterface highScoresFactoryInterface, Paintable paintable, InitUpdatePaintable overlayPaintable, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool isContinue);

    public onEvent(AllBinaryEventObject eventObject);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    std::vector<any> getCustomCommands();

    public initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    public initPostPaint();

                //@Throws(Exception.constructor)
            
    public mediaInit();

    public itemStateChanged(Item item);

                //@Throws(Exception.constructor)
            
    initMenu();

    public open();

    public close();

    public int32_t getSourceId();

    public keyPressed(int32_t keyCode);

    public keyReleased(int32_t keyCode);

    public keyRepeated(int32_t keyCode);

    public keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    private: isSingleKeyRepeatableProcessing: bool = this.features.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS)!;

    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    addGameKeyEvent(int32_t keyCode, bool repeated);

    removeGameKeyEvent(int32_t keyCode, bool repeated);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause();

    public bool isPausable();

    public bool isGameOver();

                //@Throws(Exception.constructor)
            
    public setLoadStateHashtable(Hashtable<any, any> hashtable);

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getLoadStateHashtable();

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable();

    public setHighScoreSubmitted(bool isNotUsed);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public processGameOver();

    demoStateChange();

    private: const SET_STATE: string = "setState";

    updateDemoState();

                //@Throws(Exception.constructor)
            
    int32_t getNextRandom();

                //@Throws(Exception.constructor)
            
    AllBinaryGameLayerManager createGameLayerManager(int32_t randomValue);

                //@Throws(Exception.constructor)
            
    GameCanvasRunnableInterface createRunnable(int32_t randomLevel);

                //@Throws(Exception.constructor)
            
    createCanvas();

                //@Throws(Exception.constructor)
            
    start();

    public preDemoProcess();

                //@Throws(Exception.constructor)
            
    public process();

                //@Throws(Exception.constructor)
            
    startDemoGame();

                //@Throws(Exception.constructor)
            
    processGame();

    public run();

    public setRunning(bool running);

    private: const baseGameStatistics: BaseGameStatistics = GameStatisticsFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public end();

    public setGameState(GameState gameState);

    public GameState getGameState();

    int32_t getState();

    setState(int32_t state);

    public bool isHighScoreSubmitted();

    public HighScoresPaintable getRealHighScoresPaintable();

    setSpecialAnimationInterface(SpecialAnimation specialAnimationInterface);

    SpecialAnimation getSpecialAnimationInterface();

    setPaintableInterface(PaintableInterface paintableInterface);

    PaintableInterface getPaintableInterface();

    setDefaultPaintableInterface(Paintable defaultPaintableInterface);

    Paintable getDefaultPaintableInterface();

    public HighScoresFactoryInterface getHighScoresFactoryInterface();

    setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor);

    BasicMenuInputProcessor getMenuInputProcessor();

    public ScrollSelectionForm getMenuForm();

    public setMenuForm(ScrollSelectionForm menuForm);

    public bool isInitialized();

    Paintable getOverlayPaintable();

    setBasicGameDemoPaintable(StatePaintable basicGameDemoPaintable);

    StatePaintable getBasicGameDemoPaintable();

    public setTempWait(int32_t tempWait);

    public int32_t getTempWait();

    public bool isSingleThread();

    public bool isRunningInAnotherThread();

    public BasicBuildGameInitializerFactory getGameInitializationInterfaceFactoryInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H
