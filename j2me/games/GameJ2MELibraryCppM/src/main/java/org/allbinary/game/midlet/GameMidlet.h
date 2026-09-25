
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H

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

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameMidletStateFactory.h"
#include "GameMidletEventHandler.h"
#include "DemoGameMidletEvent.h"
#include "DemoGameMidletStateFactory.h"

class GameMidlet: public ProgressMidlet, public CommandListener {

    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    protected: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    protected: const Features features = Features::getInstance();

    protected: const MidletStrings midletStrings = MidletStrings::getInstance();

    protected: const MyCommandsFactory myCommandsFactory = MyCommandsFactory::getInstance();

    protected: const GameStrings gameStrings = GameStrings::getInstance();

    protected: const GameAdStateFactory gameAdStateFactory = GameAdStateFactory::getInstance();

    protected: const GameStateFactory gameStateFactory = GameStateFactory::getInstance();

    protected: const TsUtil tsUtil = TsUtil::getInstance();

    private: const std::string DISPLAYABLE = " Displayable: ";

    private: const std::string COMMAND_NAME = "command Name/Label: ";

    private: const std::string NO_COMMAND = "No Command";

    private: const std::string NO_DISPLAYABLE = "No Displayable";

    private: const std::string COMMAND_ACTION = StringMaker().append("GameMidlet::").append(this->midletStrings.COMMAND_ACTION).toString();

    private: const std::string PAUSE_APP_BACKGROUND = "pauseAppBackground";

    private: const std::string UN_PAUSE_APP_BACKGROUND = "unPauseAppBackground";

    private: const AboutCommandProcessor aboutCommandProcessor = AboutCommandProcessor::getInstance();

    private: const WebCommandProcessor webCommandProcessor = WebCommandProcessor::getInstance();

    private: const GameMidletStateFactory gameMidletStateFactory = GameMidletStateFactory::getInstance();

    protected: const TimeDelayHelper gameStartTimeHelper = TimeDelayHelper(240);

    private: const FullScreenUtil fullScreenUtil = FullScreenUtil::getInstance();

    private: DebugInterface debugInterface;

    private: GameCanvasRunnableInterface allbinaryGameCanvasRunnableInterface = NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE;

    private: Thread thread = NullThread::NULL_THREAD;

    private: CommandForm loadGameForm;

    private: bool isFullScreen= false;

    private: bool resized= false;

public: GameMidlet(ClientInformationFactory clientInformationFactory);

    protected: void init();

                //@Throws(Exception.constructor)
            
    protected: void setDemo();

                //@Throws(Exception.constructor)
            
    protected: void createGame();

                //@Throws(Exception.constructor)
            
    protected: void mediaShutdown();

    public: void stopAll();

    protected: void pauseApp();

    protected: void pauseAppBackground(bool background);

    protected: void unPauseApp();

    protected: void unPauseAppBackground(bool background);

    protected: void destroyAppInRunnable(bool unconditional, bool isProgress);

    protected: void destroyApp(bool unconditional);

                //@Throws(MIDletStateChangeException.constructor)
            
    protected: void startApp();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void commandAction(Command command, Displayable displayable);

    private: void updateFullScreen();

    public: void onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    protected: MyCanvas getInputMappingInstructionsCanvas();

                //@Throws(Exception.constructor)
            
    protected: MyCanvas getInputMappingCanvas();

                //@Throws(Exception.constructor)
            
    protected: MyCanvas getAboutCanvas();

                //@Throws(Exception.constructor)
            
    protected: HelpPaintable getHelpPaintable();

                //@Throws(Exception.constructor)
            
    protected: HighScoresCanvas createHighScoresCanvas();

                //@Throws(Exception.constructor)
            
    public: void startGameCanvasRunnableInterface();

                //@Throws(Exception.constructor)
            
    protected: void stopGameCanvasRunnableInterface();

    public: GameCanvasRunnableInterface getGameCanvasRunnableInterface();

    public: void setGameCanvasRunnableInterface(GameCanvasRunnableInterface gameCanvasRunnableInterface);

    protected: AllBinaryGameLayerManager createGameLayerManager();

    protected: CommandForm getGameOptionsForm();

                //@Throws(Exception.constructor)
            
    public: void save();

                //@Throws(Exception.constructor)
            
    public: Hashtable<any, any> getCurrentStateHashtable();

    public: void setLoadGameForm(LoadGameForm loadGameForm);

    public: CommandForm getLoadGameForm();

    public: void setResized(bool resized);

    public: bool isResized();

    private: bool startedBefore = false;

    public: bool isDemoLoading();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H
