
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/util/Enumeration.h>
class Canvas;
class Command;
#include <javax/microedition/lcdui/CommandListener.h>
class Displayable;
class NullCanvas;
class MIDletStateChangeException;
class J2MEUtil;
class TsUtil;
class GameAdStateFactory;
class FullScreenUtil;
class GameStatisticsFactory;
class DebugFactory;
class DebugInterface;
class GameAdState;
class GameInfo;
class GameMode;
class GameStrings;
class GameTypeFactory;
class PlayerTypesFactory;
class GameCommandsFactory;
class GameOptionsForm;
class GameOptionsFormFactory;
class InGameFeatures;
class InGameOptionsForm;
class InGameOptionsFormFactory;
class LoadGameForm;
class ChangedGameFeatureListener;
class GameFeatureEventHandler;
class Features;
class GameFeatureFormUtil;
class MainFeatureFactory;
class GamePersistanceSingleton;
class KeyValuePersistance;
class AllBinaryGameCanvas;
class BasicPaintablesCanvas;
class DemoCanvas;
class GameCanvasRunnableInterface;
class GameEventHandlerUtil;
class GameInputMappingCanvas;
class GameInputMappingInstructionsCanvas;
class MenuListener;
class NullGameCanvasRunnable;
class TextNotificationUtil;
class AllBinaryGameLayerManager;
class GameNotificationEventHandler;
class HelpPaintable;
class HighScoreCommands;
class HighScoreCommandsFactory;
class HighScoreTextBox;
class HighScoreUtil;
class HighScoresCanvas;
class GameStateFactory;
class ResizableListenerHandler;
class ProgressCanvas;
class ProgressCanvasFactory;
class BasicColorFactory;
class ColorChangeEventHandler;
class CanvasStrings;
class MyCanvas;
class MyCommandsFactory;
class AboutCommandProcessor;
class AboutPaintableFactory;
class CommandForm;
class WebCommandProcessor;
class AllBinarySensorManager;
class VirtualKeyboardEventHandler;
class BasicMotionGesturesHandler;
class ForcedLogUtil;
class PreLogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class ClientInformationFactory;
class InApplicationPurchaseFactory;
class LockableFeature;
class LockableFeatureFactory;
class AllBinaryEventObject;
class EventStrings;
class AllBinaryMediaManager;
class MidletStrings;
#include <org/allbinary/midlet/ProgressMidlet.h>
class NullThread;
class ThreadFactoryUtil;
class ThreadUtil;
class TimeDelayHelper;
class BasicArrayList;
class EnumerationUtil;
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameMidletStateFactory;
class GameMidletEventHandler;
class DemoGameMidletEvent;
class DemoGameMidletStateFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameMidlet: public ProgressMidlet, public CommandListener {

    private: EnumerationUtil* enumerationUtil;

    /*protected*/ public: BasicColorFactory* basicColorFactory;

    /*protected*/ public: Features* features;

    /*protected*/ public: MidletStrings* midletStrings;

    /*protected*/ public: MyCommandsFactory* myCommandsFactory;

    /*protected*/ public: GameStrings* gameStrings;

    /*protected*/ public: GameAdStateFactory* gameAdStateFactory;

    /*protected*/ public: GameStateFactory* gameStateFactory;

    /*protected*/ public: TsUtil* tsUtil;

    private: const std::string DISPLAYABLE = " Displayable: ";

    private: const std::string COMMAND_NAME = "command Name/Label: ";

    private: const std::string NO_COMMAND = "No Command";

    private: const std::string NO_DISPLAYABLE = "No Displayable";

    private: const std::string COMMAND_ACTION;

    private: const std::string PAUSE_APP_BACKGROUND = "pauseAppBackground";

    private: const std::string UN_PAUSE_APP_BACKGROUND = "unPauseAppBackground";

    private: AboutCommandProcessor* aboutCommandProcessor;

    private: WebCommandProcessor* webCommandProcessor;

    private: GameMidletStateFactory* gameMidletStateFactory;

    /*protected*/ public: TimeDelayHelper* gameStartTimeHelper;

    private: FullScreenUtil* fullScreenUtil;

    private: DebugInterface* debugInterface;

    private: GameCanvasRunnableInterface* allbinaryGameCanvasRunnableInterface;

    private: Thread* thread;

    private: CommandForm* loadGameForm;

    private: bool isFullScreen= false;

    private: bool resized= false;

public: GameMidlet(ClientInformationFactory* clientInformationFactory);

    /*protected*/ public: void init();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setDemo();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void createGame();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void mediaShutdown();

    public: void stopAll();

    /*protected*/ public: void pauseApp();

    /*protected*/ public: void pauseAppBackground(bool background);

    /*protected*/ public: void unPauseApp();

    /*protected*/ public: void unPauseAppBackground(bool background);

    /*protected*/ public: void destroyAppInRunnable(bool unconditional, bool isProgress);

    /*protected*/ public: void destroyApp(bool unconditional);

                //@Throws(MIDletStateChangeException.constructor)
            
    /*protected*/ public: void startApp();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void commandAction(Command* command, Displayable* displayable);

    private: void updateFullScreen();

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: MyCanvas* getInputMappingInstructionsCanvas();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: MyCanvas* getInputMappingCanvas();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: MyCanvas* getAboutCanvas();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: HelpPaintable* getHelpPaintable();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: HighScoresCanvas* createHighScoresCanvas();

                //@Throws(Exception.constructor)
            
    public: void startGameCanvasRunnableInterface();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void stopGameCanvasRunnableInterface();

    public: GameCanvasRunnableInterface* getGameCanvasRunnableInterface();

    public: void setGameCanvasRunnableInterface(GameCanvasRunnableInterface* gameCanvasRunnableInterface);

    /*protected*/ public: AllBinaryGameLayerManager* createGameLayerManager();

    /*protected*/ public: CommandForm* getGameOptionsForm();

                //@Throws(Exception.constructor)
            
    public: void save();

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getCurrentStateHashtable();

    public: void setLoadGameForm(LoadGameForm* loadGameForm);

    public: CommandForm* getLoadGameForm();

    public: void setResized(bool resized);

    public: bool isResized();

    private: bool startedBefore = false;

    public: bool isDemoLoading();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLET_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCanvas.h>)
#include <javax/microedition/lcdui/NullCanvas.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDletStateChangeException.h>)
#include <javax/microedition/midlet/MIDletStateChangeException.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/GameAdStateFactory.h>)
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/FullScreenUtil.h>)
#include <org/allbinary/canvas/FullScreenUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/GameStatisticsFactory.h>)
#include <org/allbinary/canvas/GameStatisticsFactory.h>
#endif
#if __has_include(<org/allbinary/debug/DebugFactory.h>)
#include <org/allbinary/debug/DebugFactory.h>
#endif
#if __has_include(<org/allbinary/debug/DebugInterface.h>)
#include <org/allbinary/debug/DebugInterface.h>
#endif
#if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/GameMode.h>)
#include <org/allbinary/game/GameMode.h>
#endif
#if __has_include(<org/allbinary/game/GameStrings.h>)
#include <org/allbinary/game/GameStrings.h>
#endif
#if __has_include(<org/allbinary/game/GameTypeFactory.h>)
#include <org/allbinary/game/GameTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/PlayerTypesFactory.h>)
#include <org/allbinary/game/PlayerTypesFactory.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameOptionsForm.h>)
#include <org/allbinary/game/configuration/GameOptionsForm.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameOptionsFormFactory.h>)
#include <org/allbinary/game/configuration/GameOptionsFormFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/InGameFeatures.h>)
#include <org/allbinary/game/configuration/InGameFeatures.h>
#endif
#if __has_include(<org/allbinary/game/configuration/InGameOptionsForm.h>)
#include <org/allbinary/game/configuration/InGameOptionsForm.h>
#endif
#if __has_include(<org/allbinary/game/configuration/InGameOptionsFormFactory.h>)
#include <org/allbinary/game/configuration/InGameOptionsFormFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/LoadGameForm.h>)
#include <org/allbinary/game/configuration/LoadGameForm.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>)
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameFeatureEventHandler.h>)
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>)
#include <org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/KeyValuePersistance.h>)
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h>)
#include <org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/DemoCanvas.h>)
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>)
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h>)
#include <org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>)
#include <org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>)
#include <org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/MenuListener.h>)
#include <org/allbinary/game/displayable/canvas/MenuListener.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>)
#include <org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>
#endif
#if __has_include(<org/allbinary/game/input/TextNotificationUtil.h>)
#include <org/allbinary/game/input/TextNotificationUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>)
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/paint/help/HelpPaintable.h>)
#include <org/allbinary/game/paint/help/HelpPaintable.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoreCommands.h>)
#include <org/allbinary/game/score/HighScoreCommands.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoreCommandsFactory.h>)
#include <org/allbinary/game/score/HighScoreCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoreTextBox.h>)
#include <org/allbinary/game/score/displayable/HighScoreTextBox.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoreUtil.h>)
#include <org/allbinary/game/score/displayable/HighScoreUtil.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoresCanvas.h>)
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/ResizableListenerHandler.h>)
#include <org/allbinary/graphics/ResizableListenerHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorChangeEventHandler.h>)
#include <org/allbinary/graphics/color/ColorChangeEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandsFactory.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h>)
#include <org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h>)
#include <org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/WebCommandProcessor.h>)
#include <org/allbinary/graphics/displayable/screen/WebCommandProcessor.h>
#endif
#if __has_include(<org/allbinary/input/AllBinarySensorManager.h>)
#include <org/allbinary/input/AllBinarySensorManager.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventHandler.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>)
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockableFeature.h>)
#include <org/allbinary/logic/system/security/licensing/LockableFeature.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h>)
#include <org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/media/audio/AllBinaryMediaManager.h>)
#include <org/allbinary/media/audio/AllBinaryMediaManager.h>
#endif
#if __has_include(<org/allbinary/midlet/MidletStrings.h>)
#include <org/allbinary/midlet/MidletStrings.h>
#endif
#if __has_include(<org/allbinary/midlet/ProgressMidlet.h>)
#include <org/allbinary/midlet/ProgressMidlet.h>
#endif
#if __has_include(<org/allbinary/thread/NullThread.h>)
#include <org/allbinary/thread/NullThread.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadFactoryUtil.h>)
#include <org/allbinary/thread/ThreadFactoryUtil.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadUtil.h>)
#include <org/allbinary/thread/ThreadUtil.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/midlet/GameMidletStateFactory.h")
#include "org/allbinary/game/midlet/GameMidletStateFactory.h"
#endif
#if __has_include("org/allbinary/game/midlet/GameMidletEventHandler.h")
#include "org/allbinary/game/midlet/GameMidletEventHandler.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletEvent.h")
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletStateFactory.h")
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#endif

        #endif
    
