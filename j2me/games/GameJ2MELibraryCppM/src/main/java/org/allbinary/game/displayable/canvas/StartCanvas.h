
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;
class CommandListener;
class Graphics;
class Item;
class J2MEUtil;
class Animation;
class IndexedAnimationBehavior;
class SpecialAnimation;
class GameAdStateFactory;
class BaseGameStatistics;
class CustomGameMenuUtil;
class FullScreenUtil;
class GameStatisticsFactory;
#include <org/allbinary/canvas/RunnableCanvas.h>
class GameAdState;
class GameCommandsFactory;
class ChangedGameFeatureListener;
class Features;
class GameFeatureFactory;
class InputFeatureFactory;
class MainFeatureFactory;
class BasicBuildGameInitializerFactory;
class GameInitializationUtil;
class GameInputStrings;
class GameKey;
class GameKeyFactory;
class PlatformInputMappingFactory;
class DownGameKeyEventHandler;
class GameKeyEvent;
class GameKeyEventFactory;
class GameKeyEventHandler;
class UpGameKeyEventHandler;
class InputToGameKeyMapping;
class AllBinaryGameLayerManager;
class SWTUtil;
class DemoGameMidlet;
class HighScoreCommands;
class HighScores;
class HighScoresFactoryInterface;
class HighScoresHelper;
class HighScoresPaintable;
class NullHighScoresSingletonFactory;
class GameState;
class GameStateFactory;
class Rectangle;
class ResizableListenerHandler;
class ProgressCanvas;
class ProgressCanvasFactory;
class BasicColorFactory;
class MyCommandsFactory;
class DisplayChangeEvent;
class DisplayChangeEventHandler;
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
class FormType;
class FormTypeFactory;
class ScrollSelectionForm;
class CurrentDisplayableFactory;
class OpenGLFeatureFactory;
class OpenGLFeatureUtil;
class OpenGLThreadUtil;
class InitUpdatePaintable;
class NullPaintable;
class Paintable;
class PaintableInterface;
class StatePaintable;
class StatePaintableFactory;
class BasicMotionGesturesHandler;
class ForcedLogUtil;
class PreLogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class OperatingSystemFactory;
class AbeClientInformationInterface;
class InApplicationPurchaseFactory;
class LockableFeature;
class LockableFeatureFactory;
class AllBinaryEventObject;
class EventStrings;
class AllBinaryMediaManager;
class EarlySoundsFactory;
class CommonSeps;
class TimeDelayHelper;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
class FormUtil;
class NoMenuInputProcessor;
class BasicMenuInputProcessor;
class NullWaitGameRunnable;
class GameRunnable;
class GameInputMappingCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StartCanvas: public RunnableCanvas, public virtual GameCanvasRunnableInterface, public virtual MenuListener, public virtual DisplayChangeEventListener {

    private: static inline const int32_t id = 0;

    private: static inline const std::string BOT_GAME_STATS = "Bot Game Statistics: ";

    /*protected*/ public: BasicColorFactory* basicColorFactory;

    /*protected*/ public: Features* features;

    /*protected*/ public: OpenGLFeatureFactory* openGLFeatureFactory;

    /*protected*/ public: MyCommandsFactory* myCommandsFactory;

    /*protected*/ public: GameAdStateFactory* gameAdStateFactory;

    /*protected*/ public: GameStateFactory* gameStateFactory;

    /*protected*/ public: GameInputStrings* gameInputStrings;

    /*protected*/ public: FormUtil* formUtil;

    private: StatePaintable* basicGameDemoPaintable;

    private: SpecialAnimation* specialAnimationInterface;

    /*protected*/ public: Animation* paintedSpecialAnimationInterface;

    private: FullScreenUtil* fullScreenUtil;

    private: HighScoresHelper* highScoresHelper;

    private: HighScoresPaintable* realHighScoresPaintable;

    private: Paintable* highScoresPaintable;

    private: int32_t state = 0;

    private: TimeDelayHelper* timeDelayHelper;

    private: HighScoresFactoryInterface* highScoresFactoryInterface;

    private: BasicMenuInputProcessor* menuInputProcessor;

    private: ScrollSelectionForm* menuForm;

    private: BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface;

    private: bool initialized= false;

    private: Paintable* defaultPaintableInterface;

    private: PaintableInterface* paintableInterface;

    private: InitUpdatePaintable* overlayPaintable;

    private: int32_t tempWait;

    private: InputToGameKeyMapping* inputToGameKeyMapping;

    /*protected*/ public: GameRunnable* gameRunnable;

    private: PaintableInterface* progressPaintable;

public: StartCanvas(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

    /*protected*/ public: std::vector<Object*> getCustomCommands();

    public: void initCommands(CommandListener* cmdListener);

                //@Throws(Exception.constructor)
            
    public: void initPostPaint();

                //@Throws(Exception.constructor)
            
    public: void mediaInit();

    public: void itemStateChanged(Item* item);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initMenu();

    public: void open();

    public: void close();

    public: int32_t getSourceId();

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    private: bool isSingleKeyRepeatableProcessing;

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    private: GameKey* NONE;

    private: GameKeyEventFactory* gameKeyEventFactory;

    private: void addGameKeyEvent(int32_t keyCode, bool repeated);

    private: void removeGameKeyEvent(int32_t keyCode, bool repeated);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause();

    public: bool isPausable();

    public: bool isGameOver();

                //@Throws(Exception.constructor)
            
    public: void setLoadStateHashtable(ABHashtable<Object*, Object*>* hashtable);

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getLoadStateHashtable();

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getCurrentStateHashtable();

    public: void setHighScoreSubmitted(bool isNotUsed);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processGameOver();

    /*protected*/ public: void demoStateChange();

    private: const std::string SET_STATE = "setState";

    /*protected*/ public: void updateDemoState();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: int32_t getNextRandom();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: AllBinaryGameLayerManager* createGameLayerManager(int32_t randomValue);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: GameCanvasRunnableInterface* createRunnable(int32_t randomLevel);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void createCanvas();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void start();

    public: void preDemoProcess();

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void startDemoGame();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processGame();

    public: void run();

    public: void setRunning(bool running);

    private: BaseGameStatistics* baseGameStatistics;

                //@Throws(Exception.constructor)
            
    public: void end();

    public: void setGameState(GameState* gameState);

    public: GameState* getGameState();

    /*protected*/ public: int32_t getState();

    /*protected*/ public: void setState(int32_t state);

    public: bool isHighScoreSubmitted();

    public: HighScoresPaintable* getRealHighScoresPaintable();

    /*protected*/ public: void setSpecialAnimationInterface(SpecialAnimation* specialAnimationInterface);

    /*protected*/ public: SpecialAnimation* getSpecialAnimationInterface();

    /*protected*/ public: void setPaintableInterface(PaintableInterface* paintableInterface);

    /*protected*/ public: PaintableInterface* getPaintableInterface();

    /*protected*/ public: void setDefaultPaintableInterface(Paintable* defaultPaintableInterface);

    /*protected*/ public: Paintable* getDefaultPaintableInterface();

    public: HighScoresFactoryInterface* getHighScoresFactoryInterface();

    /*protected*/ public: void setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor);

    /*protected*/ public: BasicMenuInputProcessor* getMenuInputProcessor();

    public: ScrollSelectionForm* getMenuForm();

    public: void setMenuForm(ScrollSelectionForm* menuForm);

    public: bool isInitialized();

    /*protected*/ public: Paintable* getOverlayPaintable();

    /*protected*/ public: void setBasicGameDemoPaintable(StatePaintable* basicGameDemoPaintable);

    /*protected*/ public: StatePaintable* getBasicGameDemoPaintable();

    public: void setTempWait(int32_t tempWait);

    public: int32_t getTempWait();

    public: bool isSingleThread();

    public: bool isRunningInAnotherThread();

    public: BasicBuildGameInitializerFactory* getGameInitializationInterfaceFactoryInterface();

    public: std::string getTitle();

    public: bool isPaused();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimationBehavior.h>)
#include <org/allbinary/animation/IndexedAnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/special/SpecialAnimation.h>)
#include <org/allbinary/animation/special/SpecialAnimation.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/GameAdStateFactory.h>)
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/BaseGameStatistics.h>)
#include <org/allbinary/canvas/BaseGameStatistics.h>
#endif
#if __has_include(<org/allbinary/canvas/CustomGameMenuUtil.h>)
#include <org/allbinary/canvas/CustomGameMenuUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/FullScreenUtil.h>)
#include <org/allbinary/canvas/FullScreenUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/GameStatisticsFactory.h>)
#include <org/allbinary/canvas/GameStatisticsFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/RunnableCanvas.h>)
#include <org/allbinary/canvas/RunnableCanvas.h>
#endif
#if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>)
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InputFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/init/BasicBuildGameInitializerFactory.h>)
#include <org/allbinary/game/init/BasicBuildGameInitializerFactory.h>
#endif
#if __has_include(<org/allbinary/game/init/GameInitializationUtil.h>)
#include <org/allbinary/game/init/GameInitializationUtil.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputStrings.h>)
#include <org/allbinary/game/input/GameInputStrings.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/DownGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/UpGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/SWTUtil.h>)
#include <org/allbinary/game/layer/SWTUtil.h>
#endif
#if __has_include(<org/allbinary/game/midlet/DemoGameMidlet.h>)
#include <org/allbinary/game/midlet/DemoGameMidlet.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoreCommands.h>)
#include <org/allbinary/game/score/HighScoreCommands.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScores.h>)
#include <org/allbinary/game/score/HighScores.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresHelper.h>)
#include <org/allbinary/game/score/HighScoresHelper.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresPaintable.h>)
#include <org/allbinary/game/score/HighScoresPaintable.h>
#endif
#if __has_include(<org/allbinary/game/score/NullHighScoresSingletonFactory.h>)
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
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
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandsFactory.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormType.h>)
#include <org/allbinary/graphics/form/FormType.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormTypeFactory.h>)
#include <org/allbinary/graphics/form/FormTypeFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>)
#include <org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLThreadUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLThreadUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/InitUpdatePaintable.h>)
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/StatePaintable.h>)
#include <org/allbinary/graphics/paint/StatePaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/StatePaintableFactory.h>)
#include <org/allbinary/graphics/paint/StatePaintableFactory.h>
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
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
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
#if __has_include(<org/allbinary/media/audio/EarlySoundsFactory.h>)
#include <org/allbinary/media/audio/EarlySoundsFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/MenuListener.h")
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/FormUtil.h")
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h")
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h")
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#endif

        #endif
    
