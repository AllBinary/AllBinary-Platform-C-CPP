
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

class AllBinaryGameCanvas: public RunnableCanvas, public AllBinaryGameCanvasInterface, public GameCanvasRunnableInterface, public MenuListener, public IntermissionCompositeInterface, public IntermissionEnableListenerInterface, public PopupMenuInterface, public DisplayChangeEventListener, public UpdateMyFontInterface {

    private: static inline const int32_t id = 0;

    public: static inline const int32_t TYPE = 2;

    protected: BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();

    protected: BasicColorSetUtil* basicSetColorUtil = BasicColorSetUtil::getInstance();

    protected: TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory::getInstance();

    protected: OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();

    protected: TouchButtonFactory* touchButtonFactory = TouchButtonFactory::getInstance();

    protected: GameAdStateFactory* gameAdStateFactory = GameAdStateFactory::getInstance();

    protected: GameStrings* gameStrings = GameStrings::getInstance();

    protected: GameInputStrings* gameInputStrings = GameInputStrings::getInstance();

    protected: GameStateFactory* gameStateFactory = GameStateFactory::getInstance();

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton::getInstance();

    public: GameCanvasRunnable* gameRunnable = new GameCanvasRunnable(this);

    public: GameCanvasPauseRunnable* gamePauseRunnable = new GameCanvasPauseRunnable(this);

    protected: FormUtil* formUtil = FormUtil::getInstance();

    protected: MyFormUtil* myFormUtil = MyFormUtil::getInstance();

    private: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    private: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    protected: Paintable* gameSpecificPaintable = NullPaintable::getInstance();

    private: SensorGameUpdateProcessor* sensorGameUpdateProcessor = new SingleSensorGameUpdateProcessor();

    protected: EndGameInfo* endGameInfo = new EndGameInfo();

    private: IntermissionInterface* startIntermissionInterface = new Intermission();

    private: IntermissionInterface* endLevelIntermissionInterface = new Intermission();

    protected: AllBinaryGameLayerManager* gameLayerManager = AllBinaryGameLayerManager::getNullInstance();

    private: GameState* gameState = this->gameStateFactory->NO_GAME_STATE;

    private: bool gameOver= false;

    private: bool initialized= false;

    private: TimeDelayHelper* gameStateTimeHelper = new TimeDelayHelper(0);

    protected: HighScoresHelperBaseInterface* highScoresHelper;

    private: bool highScoreSubmitted= false;

    private: HighScoresPaintable* realHighScoresPaintable = new HighScoresPaintable();

    private: Paintable* highScoresPaintable = NullPaintable::getInstance();

    private: BasicArrayList* localPlayerGameInputList = new BasicArrayListD();

    private: bool isCheating= false;

    private: ABHashtable<Object*, Object*>* hashtable = this->stdUtil.NULL_TABLE;

    private: bool isSingleKeyRepeatableProcessing= false;

    private: BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface = BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;

    private: Paintable* touchButtonsPaintable = NullPaintable::getInstance();

    protected: Paintable* touchPaintable = NullPaintable::getInstance();

    private: PlayerGameInput* cheatProcessor = NoPlayerGameInput::getInstance();

    private: Processor* gameInputProcessor = Processor::getInstance();

    private: Processor* endGameProcessor = Processor::getInstance();

    private: Processor* realEndGameProcessor = Processor::getInstance();

    private: Processor* startIntermissionProcessor = Processor::getInstance();

    private: Processor* realStartIntermissionProcessor = Processor::getInstance();

    private: Paintable* endGamePaintable = NullPaintable::getInstance();

    private: Paintable* endGameStatePaintable = NullPaintable::getInstance();

    protected: Paintable* nonBotPaintable = NullPaintable::getInstance();

    private: Paintable* intermissionPaintable = NullPaintable::getInstance();

    private: InitUpdatePaintable* startIntermissionPaintable = NullInitUpdatePaintable::getInstance();

    private: Processor* mainStateProcessor = Processor::getInstance();

    private: Processor* processGameProcessor = Processor::getInstance();

    private: HighScoresFactoryInterface* highScoresFactoryInterface;

    private: int32_t startLevel= 0;

    private: BasicMenuInputProcessor* mainMenuInputProcessor = NoMenuInputProcessor::getInstance();

    private: BasicMenuInputProcessor* popupMenuInputProcessor = NoMenuInputProcessor::getInstance();

    private: BasicMenuInputProcessor* menuInputProcessor = NoMenuInputProcessor::getInstance();

    private: ScrollSelectionForm* menuForm = ScrollSelectionForm::getNullScrollSelectionForm();

    private: Paintable* formPaintable = NullPaintable::getInstance();

    private: Paintable* openMenuPaintable = NullPaintable::getInstance();

    private: Paintable* menuPaintable = NullPaintable::getInstance();

    private: BaseTouchInput* currentTouchInputFactory = NoButtonsTouchInputFactory::getInstance();

    protected: ColorFillBasePaintable* colorFillPaintable = ColorFillPaintableFactory::getInstance()->getInstance(this->basicColorFactory->BLACK, true);

    private: BaseGameStatistics* baseGameStatistics = GameStatisticsFactory::getInstance();

    private: PlayerQueue* primaryPlayerQueue = PrimaryPlayerQueueFactory::getInstance();

    private: PlayerQueue* secondaryPlayerQueue = SecondaryPlayerQueueFactory::getInstance();

    protected: const std::string BUILD_GAME = "buildGame";

    protected: GameTypeFactory* gameTypeFactory = GameTypeFactory::getInstance();

    protected: ScreenCapture* screenCapture = ScreenCaptureFactory::getInstance();

    private: BasicMotionGesturesHandler* basicMotionGesturesHandler = BasicMotionGesturesHandler::getInstance();

    private: GameKeyEventHandler* gameKeyEventHandler = GameKeyEventHandler::getInstance();

    private: DemoGameBehavior* gameBehavior;

    private: BaseMenuBehavior* menuBehavior;

    private: PaintableInterface* progressPaintable = ProgressCanvasFactory::getLazyInstance();

    protected: int32_t fontHeightP= 0;

public: AllBinaryGameCanvas(CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered);

    public: void updateMeasurement(Graphics* graphics);

    public: BaseMenuBehavior* getInGameMenuBehavior();

    public: void setCurrentThread();

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

                //@Throws(Exception.constructor)
            
    public: void updateMenuFromEvent(DisplayChangeEvent* displayChangeEvent);

                //@Throws(Exception.constructor)
            
    public: void processSleep();

                //@Throws(Exception.constructor)
            
    protected: void initPopupMenu();

    protected: void initMenu();

                //@Throws(Exception.constructor)
            
    protected: void initMenu2();

    public: void updateMenu();

                //@Throws(Exception.constructor)
            
    public: void updateMenu2();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause();

    public: bool isPausable();

                //@Throws(Exception.constructor)
            
    public: void popupMenu();

                //@Throws(Exception.constructor)
            
    public: void popupMenu2();

                //@Throws(Exception.constructor)
            
    public: void toggleMenu();

    public: void closeMenu();

    public: void closeMenu2();

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    protected: void processorInit();

    protected: void setProcessGameProcessorInit();

    protected: void initSpecialPaint();

                //@Throws(Exception.constructor)
            
    private: void init(AllBinaryGameLayerManager* gameLayerManager, bool buffered);

    public: void notifyIntermission(bool enable);

                //@Throws(Exception.constructor)
            
    public: void mediaInit();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void initConfigurable(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    protected: void initApp(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    protected: void initTouch();

                //@Throws(Exception.constructor)
            
    public: void updateCurrentTouchInputFactory(BaseTouchInput* nextTouchInput);

                //@Throws(Exception.constructor)
            
    protected: void updateTouch();

                //@Throws(Exception.constructor)
            
    protected: void updateTouch2();

                //@Throws(Exception.constructor)
            
    protected: void postInitTouch();

    public: void initCommands(CommandListener* cmdListener);

    public: void addCommands();

    public: void itemStateChanged(Item* item);

                //@Throws(Exception.constructor)
            
    public: void updateScreenButtonPaintable();

    public: void updateScreenButtonPaintable2();

    public: AllBinaryGameLayerManager* getLayerManager();

    public: void setLayerManager(AllBinaryGameLayerManager* layerManager);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isGameOver();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setGameOver(bool gameOver);

                //@Throws(Exception.constructor)
            
    public: void processGameOver();

    public: bool isHighScoreSubmitted();

                //@Throws(Exception.constructor)
            
    public: void setHighScoreSubmitted(bool highScoreSubmitted);

    public: GameState* getGameState();

                //@Throws(Exception.constructor)
            
    public: void setGameState(GameState* gameState);

                //@Throws(Exception.constructor)
            
    public: void updateGameState();

    private: void updateGameKeyEventProcessor();

    protected: void removeAllGameKeyInputListenersOnBuild();

    protected: void removeAllGameKeyInputListeners();

    protected: void removeAllGameKeyInputListeners2();

    public: void removeKeyInputListener(PlayerGameInput* playerGameInput);

                //@Throws(Exception.constructor)
            
    protected: void updateEndGameProcessor();

                //@Throws(Exception.constructor)
            
    protected: void updateEndGameProcessor2();

                //@Throws(Exception.constructor)
            
    public: void buildGameInit(bool isPortion);

                //@Throws(Exception.constructor)
            
    protected: void cleanupGame();

                //@Throws(Exception.constructor)
            
    public: void loadResourceLoadingLevel(ResourceLoadingLevel* resourceLoadingLevel);

                //@Throws(Exception.constructor)
            
    public: void loadResources(int32_t level);

                //@Throws(Exception.constructor)
            
    public: void updateColor();

                //@Throws(Exception.constructor)
            
    public: void buildGame(int32_t portion);

    public: void buildGame2();

    public: void addKeyInputListener(PlayerGameInput* playerGameInput);

    private: DemoPaintableInterface* gameCanvasStartListener = NullDemoPaintable::NULL_DEMO_PAINTABLE;

    public: void setGameCanvasStartListener(DemoPaintableInterface* gameCanvasStartListener);

                //@Throws(Exception.constructor)
            
    public: void loadState();

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getLoadStateHashtable();

    public: void setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable);

    public: ABHashtable<Object*, Object*>* getCurrentStateHashtable();

    public: void paintGameOver(Graphics* graphics);

    public: void draw(Graphics* graphics);

    public: void clear(Graphics* graphics);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void processEndLevelIntermissionGameState();

    public: void nonBotPaint(Graphics* graphics);

    public: void paintIntermission(Graphics* graphics);

    private: InputProcessor* rawGameInputProcessor = new GameCanvasInputProcessor(this);

    private: InputProcessor* rawInputProcessor = new FormInputProcessor(this);

    private: InputProcessor* inputProcessor = this->getRawGameInputProcessor();

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

                //@Throws(Exception.constructor)
            
    public: void handleRawKey(int32_t keyCode, int32_t deviceId, bool repeated);

    protected: int32_t endProgress(bool isProgress);

                //@Throws(Exception.constructor)
            
    protected: void processPlayingGame();

                //@Throws(Exception.constructor)
            
    protected: void threadInit();

                //@Throws(Exception.constructor)
            
    protected: void processGame();

    public: void notifyDonePainting();

    private: const int64_t YIELD_SLEEP = 100;

                //@Throws(Exception.constructor)
            
    public: void shouldWait();

    public: void run();

                //@Throws(Exception.constructor)
            
    public: void run2();

                //@Throws(Exception.constructor)
            
    public: void run3();

    public: void setRunning(bool running);

                //@Throws(Exception.constructor)
            
    public: void end();

                //@Throws(Exception.constructor)
            
    public: void endGameThread();

    public: HighScore* createHighScore(int64_t score);

                //@Throws(Exception.constructor)
            
    public: void setHighScore(AbeClientInformationInterface* abeClientInformation, std::string name, int64_t score, bool autoSubmit, bool isLast);

                //@Throws(Exception.constructor)
            
    public: void setHighScore2(AbeClientInformationInterface* abeClientInformation, std::string name, int64_t score, bool autoSubmit, bool isLast);

    protected: TimeDelayHelper* getGameStateTimeHelper();

    protected: void setInitialized(bool initialized);

    public: bool isInitialized();

    public: int32_t getSourceId();

    public: void setProgressPaintable(PaintableInterface* paintable);

    public: IntermissionInterface* getStartIntermissionInterface();

    public: IntermissionInterface* getEndLevelIntermissionInterface();

    protected: void setTouchPaintableP(Paintable* paintable);

    public: Paintable* getTouchPaintableP();

    protected: void setEndGamePaintable(Paintable* endGamePaintable);

    public: Paintable* getEndGamePaintable();

    protected: void setIntermissionPaintable(Paintable* intermissionPaintable);

    public: Paintable* getIntermissionPaintable();

    public: EndGameInfo* getEndGameInfoP();

    public: void setHighScoresPaintable(Paintable* highScoresPaintable);

    public: Paintable* getHighScoresPaintable();

    protected: HighScoresPaintable* getRealHighScoresPaintable();

    protected: void clearPlayerGameInputList();

    protected: void addPlayerGameInput(PlayerGameInput* playerGameInput);

    protected: void setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor);

    protected: BasicMenuInputProcessor* getMenuInputProcessor();

    public: ScrollSelectionForm* getMenuForm();

    public: void setMenuForm(ScrollSelectionForm* menuForm);

    public: int32_t getStartLevel();

    public: void setStartLevel(int32_t startLevel);

    protected: void setTouchButtonsPaintable(Paintable* touchButtonsPaintable);

    protected: Paintable* getTouchButtonsPaintable();

    public: void setGameInputProcessor(Processor* gameInputProcessor);

    protected: Processor* getGameInputProcessor();

    protected: void setEndGameProcessor(Processor* endGameProcessor);

    protected: Processor* getEndGameProcessor();

    protected: void setEndGameStatePaintable(Paintable* endGameStatePaintable);

    protected: Paintable* getEndGameStatePaintable();

    protected: void setNonBotPaintableP(Paintable* nonBotPaintable);

    protected: Paintable* getNonBotPaintableP();

    protected: void setStartIntermissionPaintable(InitUpdatePaintable* startIntermissionPaintable);

    protected: InitUpdatePaintable* getStartIntermissionPaintable();

    public: void setMainStateProcessor(Processor* mainStateProcessor);

    protected: Processor* getMainStateProcessor();

    protected: void setProcessGameProcessor(Processor* processGameProcessor);

    public: Processor* getProcessGameProcessor();

    protected: void setOpenMenuPaintable(Paintable* openMenuPaintable);

    protected: Paintable* getOpenMenuPaintable();

    protected: void setPopupMenuInputProcessor(BasicMenuInputProcessor* popupMenuInputProcessor);

    protected: BasicMenuInputProcessor* getPopupMenuInputProcessor();

    public: SensorGameUpdateProcessor* getSensorGameUpdateProcessor();

    public: InputProcessor* getRawGameInputProcessor();

    public: InputProcessor* getRawInputProcessor();

    public: void setInputProcessor(InputProcessor* inputProcessor);

    protected: InputProcessor* getInputProcessor();

    protected: void setMenuPaintable(Paintable* menuPaintable);

    protected: Paintable* getMenuPaintable();

    private: void setFormPaintable(Paintable* formPaintable);

    protected: Paintable* getFormPaintable();

    public: void setGameSpecificPaintableP(Paintable* gameSpecificPaintable);

    protected: Paintable* getGameSpecificPaintableP();

    public: bool isSingleThread();

    public: bool isRunningInAnotherThread();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H
