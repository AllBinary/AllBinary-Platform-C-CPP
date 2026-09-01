
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

            #include <vector>
        
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

class StartCanvas: public RunnableCanvas, public GameCanvasRunnableInterface, public MenuListener, public DisplayChangeEventListener {

    private: static const int32_t id = 0;

    private: static const std::string BOT_GAME_STATS = "Bot Game Statistics: ";

    protected: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    protected: const Features features = Features::getInstance();

    protected: const OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();

    protected: const MyCommandsFactory myCommandsFactory = MyCommandsFactory::getInstance();

    protected: const GameAdStateFactory gameAdStateFactory = GameAdStateFactory::getInstance();

    protected: const GameStateFactory gameStateFactory = GameStateFactory::getInstance();

    protected: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    protected: const FormUtil formUtil = FormUtil::getInstance();

    private: StatePaintable basicGameDemoPaintable = StatePaintableFactory::getInstance();

    private: SpecialAnimation specialAnimationInterface = SpecialAnimation::getInstance();

    protected: Animation paintedSpecialAnimationInterface = SpecialAnimation::getInstance();

    private: const FullScreenUtil fullScreenUtil = FullScreenUtil::getInstance();

    private: const HighScoresHelper highScoresHelper = HighScoresHelper();

    private: const HighScoresPaintable realHighScoresPaintable = HighScoresPaintable();

    private: Paintable highScoresPaintable = NullPaintable::getInstance();

    private: int32_t state = 0;

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(6000);

    private: HighScoresFactoryInterface highScoresFactoryInterface;

    private: BasicMenuInputProcessor menuInputProcessor = NoMenuInputProcessor::getInstance();

    private: ScrollSelectionForm menuForm = ScrollSelectionForm::getNullScrollSelectionForm();

    private: BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface;

    private: bool initialized= false;

    private: Paintable defaultPaintableInterface = NullPaintable::getInstance();

    private: PaintableInterface paintableInterface = NullPaintable::getInstance();

    private: InitUpdatePaintable overlayPaintable;

    private: int32_t tempWait = NullWaitGameRunnable::getInstance().WAIT;

    private: const InputToGameKeyMapping inputToGameKeyMapping = PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().getInputMapping();

    protected: GameRunnable gameRunnable = NullWaitGameRunnable::getInstance();

    private: PaintableInterface progressPaintable = ProgressCanvasFactory::getLazyInstance();

public: StartCanvas(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, HighScoresFactoryInterface highScoresFactoryInterface, Paintable paintable, InitUpdatePaintable overlayPaintable, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool isContinue);

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    protected: std::vector<Object*> getCustomCommands();

    public: void initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    public: void initPostPaint();

                //@Throws(Exception.constructor)
            
    public: void mediaInit();

    public: void itemStateChanged(Item item);

                //@Throws(Exception.constructor)
            
    protected: void initMenu();

    public: void open();

    public: void close();

    public: int32_t getSourceId();

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    private: bool isSingleKeyRepeatableProcessing = this->features.isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    private: const GameKey NONE = GameKeyFactory::getInstance().NONE;

    private: const GameKeyEventFactory gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: void addGameKeyEvent(int32_t keyCode, bool repeated);

    private: void removeGameKeyEvent(int32_t keyCode, bool repeated);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause();

    public: bool isPausable();

    public: bool isGameOver();

                //@Throws(Exception.constructor)
            
    public: void setLoadStateHashtable(Hashtable<any, any> hashtable);

                //@Throws(Exception.constructor)
            
    public: Hashtable<any, any> getLoadStateHashtable();

                //@Throws(Exception.constructor)
            
    public: Hashtable<any, any> getCurrentStateHashtable();

    public: void setHighScoreSubmitted(bool isNotUsed);

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processGameOver();

    protected: void demoStateChange();

    private: const std::string SET_STATE = "setState";

    protected: void updateDemoState();

                //@Throws(Exception.constructor)
            
    protected: int32_t getNextRandom();

                //@Throws(Exception.constructor)
            
    protected: AllBinaryGameLayerManager createGameLayerManager(int32_t randomValue);

                //@Throws(Exception.constructor)
            
    protected: GameCanvasRunnableInterface createRunnable(int32_t randomLevel);

                //@Throws(Exception.constructor)
            
    protected: void createCanvas();

                //@Throws(Exception.constructor)
            
    protected: void start();

    public: void preDemoProcess();

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    protected: void startDemoGame();

                //@Throws(Exception.constructor)
            
    protected: void processGame();

    public: void run();

    public: void setRunning(bool running);

    private: const BaseGameStatistics baseGameStatistics = GameStatisticsFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: void end();

    public: void setGameState(GameState gameState);

    public: GameState getGameState();

    protected: int32_t getState();

    protected: void setState(int32_t state);

    public: bool isHighScoreSubmitted();

    public: HighScoresPaintable getRealHighScoresPaintable();

    protected: void setSpecialAnimationInterface(SpecialAnimation specialAnimationInterface);

    protected: SpecialAnimation getSpecialAnimationInterface();

    protected: void setPaintableInterface(PaintableInterface paintableInterface);

    protected: PaintableInterface getPaintableInterface();

    protected: void setDefaultPaintableInterface(Paintable defaultPaintableInterface);

    protected: Paintable getDefaultPaintableInterface();

    public: HighScoresFactoryInterface getHighScoresFactoryInterface();

    protected: void setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor);

    protected: BasicMenuInputProcessor getMenuInputProcessor();

    public: ScrollSelectionForm getMenuForm();

    public: void setMenuForm(ScrollSelectionForm menuForm);

    public: bool isInitialized();

    protected: Paintable getOverlayPaintable();

    protected: void setBasicGameDemoPaintable(StatePaintable basicGameDemoPaintable);

    protected: StatePaintable getBasicGameDemoPaintable();

    public: void setTempWait(int32_t tempWait);

    public: int32_t getTempWait();

    public: bool isSingleThread();

    public: bool isRunningInAnotherThread();

    public: BasicBuildGameInitializerFactory getGameInitializationInterfaceFactoryInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H
