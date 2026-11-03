
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
        
class ChoiceGroup;
class CommandListener;
class Font;
class Graphics;
class Item;
class NullCommandListener;
class AndroidUtil;
class J2MEUtil;
class GameAdStateFactory;
class BaseGameStatistics;
class GameStatisticsFactory;
class Processor;
#include <org/allbinary/canvas/RunnableCanvas.h>
class DebugFactory;
class NoDebug;
class GameAdState;
class GameInfo;
class GameStrings;
class GameTypeFactory;
class Intermission;
#include <org/allbinary/game/IntermissionCompositeInterface.h>
#include <org/allbinary/game/IntermissionEnableListenerInterface.h>
class IntermissionInterface;
class PlayerTypesFactory;
class GameCommandsFactory;
class InGameFeatures;
class InGameOptionsForm;
class ChangedGameFeatureListener;
class GameInitializedEvent;
class GameInitializedEventHandler;
class Features;
class GameFeatureFactory;
class GameFeatureUtil;
class InputFeatureFactory;
class MainFeatureFactory;
class SensorFeatureFactory;
class TouchFeatureFactory;
class GameLevelDisplayChangeEventListenersFactory;
class BasicBuildGameInitializerFactory;
class GameInitializationUtil;
class GameInputStrings;
class InputProcessor;
class NoPlayerGameInput;
class PlayerGameInput;
class GameKeyEventHandler;
class AllBinaryGameLayerManager;
class SWTUtil;
class ColorFillBasePaintable;
class ColorFillPaintableFactory;
class ResourceLoadingLevel;
class ResourceLoadingLevelFactory;
class HighScore;
class HighScoresHelperBaseInterface;
class HighScoresFactoryInterface;
class HighScoresPaintable;
class NullHighScoresSingletonFactory;
class HighScoreTextBox;
class GameState;
class GameStateFactory;
class GraphicsStrings;
class Rectangle;
class ScreenCapture;
class ScreenCaptureFactory;
class ProgressCanvas;
class ProgressCanvasFactory;
class BasicColorFactory;
class BasicColorSetUtil;
class CanvasStrings;
class DisplayInfoSingleton;
class GameTickDisplayInfoSingleton;
class MyCommandsFactory;
class DisplayChangeEvent;
class DisplayChangeEventHandler;
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class CommandCurrentSelectionFormFactory;
class FormPaintable;
class FormType;
class FormTypeFactory;
class ScrollSelectionForm;
class ScrollSelectionFormNoneFactory;
class CommandTextItemArrayFactory;
class ABCustomItem;
class CurrentDisplayableFactory;
class OpenGLFeatureFactory;
class OpenGLFeatureUtil;
class OpenGLThreadUtil;
class InitUpdatePaintable;
class NullInitUpdatePaintable;
class NullPaintable;
class Paintable;
class PaintableInterface;
class OpenGLImageSpecificFactory;
class SensorGameUpdateProcessor;
class SingleSensorGameUpdateProcessor;
class BaseTouchInput;
class NoButtonsTouchInputFactory;
class TouchButtonFactory;
class TouchButtonsPaintableFactory;
class TouchScreenFactory;
class BasicMotionGesturesHandler;

class ForcedLogUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class OperatingSystemFactory;
class AbeClientInformationInterface;
class AllBinaryEventObject;
class EventStrings;
class AllBinaryMediaManager;
class PlayerQueue;
class PrimaryPlayerQueueFactory;
class SecondaryPlayerQueueFactory;
class SelectSound;
class CommonSeps;
class CommonStrings;
class SecondaryThreadPool;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInterface.h"
class GameCanvasRunnable;
class GameCanvasPauseRunnable;
class FormUtil;
class MyFormUtil;
class EndGameInfo;
class NoMenuInputProcessor;
class BasicMenuInputProcessor;
class DemoGameBehavior;
class BaseMenuBehavior;
class BaseGameBehavior;
class BasicPopupMenuPaintable;
class PopupMenuInputProcessor;
class InGameMenuBehavior;
class GameLimitedCommandTextItemArrayFactory;
class PopupCommandFormInputProcessor;
class NullWaitGameRunnable;
class GameProcessor;
class CheatGameInputProcessor;
class EndGameProcessor;
class StartIntermissionProcessor;
class EndGamePaintable;
class NullDemoPaintable;
class DemoPaintableInterface;
class GameCanvasInputProcessor;
class FormInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryGameCanvas: public RunnableCanvas, public virtual AllBinaryGameCanvasInterface, public virtual GameCanvasRunnableInterface, public virtual MenuListener, public virtual IntermissionCompositeInterface, public virtual IntermissionEnableListenerInterface, public virtual PopupMenuInterface, public virtual DisplayChangeEventListener, public virtual UpdateMyFontInterface {

    private: static inline const int32_t id = 0;

    public: static inline const int32_t TYPE = 2;

    /*protected*/ public: BasicColorFactory* basicColorFactory;

    /*protected*/ public: BasicColorSetUtil* basicSetColorUtil;

    /*protected*/ public: TouchFeatureFactory* touchFeatureFactory;

    /*protected*/ public: OpenGLFeatureFactory* openGLFeatureFactory;

    /*protected*/ public: TouchButtonFactory* touchButtonFactory;

    /*protected*/ public: GameAdStateFactory* gameAdStateFactory;

    /*protected*/ public: GameStrings* gameStrings;

    /*protected*/ public: GameInputStrings* gameInputStrings;

    /*protected*/ public: GameStateFactory* gameStateFactory;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

    private: GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton;

    public: GameCanvasRunnable* gameRunnable;

    public: GameCanvasPauseRunnable* gamePauseRunnable;

    /*protected*/ public: FormUtil* formUtil;

    /*protected*/ public: MyFormUtil* myFormUtil;

    private: MyFontProcessor* updateMyFontProcessor;

    private: MyFontProcessor* myFontProcessor;

    /*protected*/ public: Paintable* gameSpecificPaintable;

    private: SensorGameUpdateProcessor* sensorGameUpdateProcessor;

    /*protected*/ public: EndGameInfo* endGameInfo;

    private: IntermissionInterface* startIntermissionInterface;

    private: IntermissionInterface* endLevelIntermissionInterface;

    /*protected*/ public: AllBinaryGameLayerManager* gameLayerManager;

    private: GameState* gameState;

    private: bool gameOver= false;

    private: bool initialized= false;

    private: TimeDelayHelper* gameStateTimeHelper;

    /*protected*/ public: HighScoresHelperBaseInterface* highScoresHelper;

    private: bool highScoreSubmitted= false;

    private: HighScoresPaintable* realHighScoresPaintable;

    private: Paintable* highScoresPaintable;

    private: BasicArrayList* localPlayerGameInputList;

    private: bool isCheating= false;

    private: ABHashtable<Object*, Object*>* hashtable;

    private: bool isSingleKeyRepeatableProcessing= false;

    private: BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface;

    private: Paintable* touchButtonsPaintable;

    /*protected*/ public: Paintable* touchPaintable;

    private: PlayerGameInput* cheatProcessor;

    private: Processor* gameInputProcessor;

    private: Processor* endGameProcessor;

    private: Processor* realEndGameProcessor;

    private: Processor* startIntermissionProcessor;

    private: Processor* realStartIntermissionProcessor;

    private: Paintable* endGamePaintable;

    private: Paintable* endGameStatePaintable;

    /*protected*/ public: Paintable* nonBotPaintable;

    private: Paintable* intermissionPaintable;

    private: InitUpdatePaintable* startIntermissionPaintable;

    private: Processor* mainStateProcessor;

    private: Processor* processGameProcessor;

    private: HighScoresFactoryInterface* highScoresFactoryInterface;

    private: int32_t startLevel= 0;

    private: BasicMenuInputProcessor* mainMenuInputProcessor;

    private: BasicMenuInputProcessor* popupMenuInputProcessor;

    private: BasicMenuInputProcessor* menuInputProcessor;

    private: ScrollSelectionForm* menuForm;

    private: Paintable* formPaintable;

    private: Paintable* openMenuPaintable;

    private: Paintable* menuPaintable;

    private: BaseTouchInput* currentTouchInputFactory;

    /*protected*/ public: ColorFillBasePaintable* colorFillPaintable;

    private: BaseGameStatistics* baseGameStatistics;

    private: PlayerQueue* primaryPlayerQueue;

    private: PlayerQueue* secondaryPlayerQueue;

    /*protected*/ public: const std::string BUILD_GAME = "buildGame";

    /*protected*/ public: GameTypeFactory* gameTypeFactory;

    /*protected*/ public: ScreenCapture* screenCapture;

    private: BasicMotionGesturesHandler* basicMotionGesturesHandler;

    private: GameKeyEventHandler* gameKeyEventHandler;

    private: DemoGameBehavior* gameBehavior;

    private: BaseMenuBehavior* menuBehavior;

    private: PaintableInterface* progressPaintable;

    /*protected*/ public: int32_t fontHeightP= 0;

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
            
    /*protected*/ public: void initPopupMenu();

    /*protected*/ public: void initMenu();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initMenu2();

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
            
    /*protected*/ public: void processorInit();

    /*protected*/ public: void setProcessGameProcessorInit();

    /*protected*/ public: void initSpecialPaint();

                //@Throws(Exception.constructor)
            
    private: void init(AllBinaryGameLayerManager* gameLayerManager, bool buffered);

    public: void notifyIntermission(bool enable);

                //@Throws(Exception.constructor)
            
    public: void mediaInit();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: void initConfigurable(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initApp(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initTouch();

                //@Throws(Exception.constructor)
            
    public: void updateCurrentTouchInputFactory(BaseTouchInput* nextTouchInput);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void updateTouch();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void updateTouch2();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void postInitTouch();

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

    /*protected*/ public: void removeAllGameKeyInputListenersOnBuild();

    /*protected*/ public: void removeAllGameKeyInputListeners();

    /*protected*/ public: void removeAllGameKeyInputListeners2();

    public: void removeKeyInputListener(PlayerGameInput* playerGameInput);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void updateEndGameProcessor();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void updateEndGameProcessor2();

                //@Throws(Exception.constructor)
            
    public: void buildGameInit(bool isPortion);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void cleanupGame();

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

    private: DemoPaintableInterface* gameCanvasStartListener;

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

    private: InputProcessor* rawGameInputProcessor;

    private: InputProcessor* rawInputProcessor;

    private: InputProcessor* inputProcessor;

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

                //@Throws(Exception.constructor)
            
    public: void handleRawKey(int32_t keyCode, int32_t deviceId, bool repeated);

    /*protected*/ public: int32_t endProgress(bool isProgress);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processPlayingGame();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void threadInit();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processGame();

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

    /*protected*/ public: TimeDelayHelper* getGameStateTimeHelper();

    /*protected*/ public: void setInitialized(bool initialized);

    public: bool isInitialized();

    public: int32_t getSourceId();

    public: void setProgressPaintable(PaintableInterface* paintable);

    public: IntermissionInterface* getStartIntermissionInterface();

    public: IntermissionInterface* getEndLevelIntermissionInterface();

    /*protected*/ public: void setTouchPaintableP(Paintable* paintable);

    public: Paintable* getTouchPaintableP();

    /*protected*/ public: void setEndGamePaintable(Paintable* endGamePaintable);

    public: Paintable* getEndGamePaintable();

    /*protected*/ public: void setIntermissionPaintable(Paintable* intermissionPaintable);

    public: Paintable* getIntermissionPaintable();

    public: EndGameInfo* getEndGameInfoP();

    public: void setHighScoresPaintable(Paintable* highScoresPaintable);

    public: Paintable* getHighScoresPaintable();

    /*protected*/ public: HighScoresPaintable* getRealHighScoresPaintable();

    /*protected*/ public: void clearPlayerGameInputList();

    /*protected*/ public: void addPlayerGameInput(PlayerGameInput* playerGameInput);

    /*protected*/ public: void setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor);

    /*protected*/ public: BasicMenuInputProcessor* getMenuInputProcessor();

    public: ScrollSelectionForm* getMenuForm();

    public: void setMenuForm(ScrollSelectionForm* menuForm);

    public: int32_t getStartLevel();

    public: void setStartLevel(int32_t startLevel);

    /*protected*/ public: void setTouchButtonsPaintable(Paintable* touchButtonsPaintable);

    /*protected*/ public: Paintable* getTouchButtonsPaintable();

    public: void setGameInputProcessor(Processor* gameInputProcessor);

    /*protected*/ public: Processor* getGameInputProcessor();

    /*protected*/ public: void setEndGameProcessor(Processor* endGameProcessor);

    /*protected*/ public: Processor* getEndGameProcessor();

    /*protected*/ public: void setEndGameStatePaintable(Paintable* endGameStatePaintable);

    /*protected*/ public: Paintable* getEndGameStatePaintable();

    /*protected*/ public: void setNonBotPaintableP(Paintable* nonBotPaintable);

    /*protected*/ public: Paintable* getNonBotPaintableP();

    /*protected*/ public: void setStartIntermissionPaintable(InitUpdatePaintable* startIntermissionPaintable);

    /*protected*/ public: InitUpdatePaintable* getStartIntermissionPaintable();

    public: void setMainStateProcessor(Processor* mainStateProcessor);

    /*protected*/ public: Processor* getMainStateProcessor();

    /*protected*/ public: void setProcessGameProcessor(Processor* processGameProcessor);

    public: Processor* getProcessGameProcessor();

    /*protected*/ public: void setOpenMenuPaintable(Paintable* openMenuPaintable);

    /*protected*/ public: Paintable* getOpenMenuPaintable();

    /*protected*/ public: void setPopupMenuInputProcessor(BasicMenuInputProcessor* popupMenuInputProcessor);

    /*protected*/ public: BasicMenuInputProcessor* getPopupMenuInputProcessor();

    public: SensorGameUpdateProcessor* getSensorGameUpdateProcessor();

    public: InputProcessor* getRawGameInputProcessor();

    public: InputProcessor* getRawInputProcessor();

    public: void setInputProcessor(InputProcessor* inputProcessor);

    /*protected*/ public: InputProcessor* getInputProcessor();

    /*protected*/ public: void setMenuPaintable(Paintable* menuPaintable);

    /*protected*/ public: Paintable* getMenuPaintable();

    private: void setFormPaintable(Paintable* formPaintable);

    /*protected*/ public: Paintable* getFormPaintable();

    public: void setGameSpecificPaintableP(Paintable* gameSpecificPaintable);

    /*protected*/ public: Paintable* getGameSpecificPaintableP();

    public: bool isSingleThread();

    public: bool isRunningInAnotherThread();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/ChoiceGroup.h>)
#include <javax/microedition/lcdui/ChoiceGroup.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCommandListener.h>)
#include <javax/microedition/lcdui/NullCommandListener.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/GameAdStateFactory.h>)
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/BaseGameStatistics.h>)
#include <org/allbinary/canvas/BaseGameStatistics.h>
#endif
#if __has_include(<org/allbinary/canvas/GameStatisticsFactory.h>)
#include <org/allbinary/canvas/GameStatisticsFactory.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/canvas/RunnableCanvas.h>)
#include <org/allbinary/canvas/RunnableCanvas.h>
#endif
#if __has_include(<org/allbinary/debug/DebugFactory.h>)
#include <org/allbinary/debug/DebugFactory.h>
#endif
#if __has_include(<org/allbinary/debug/NoDebug.h>)
#include <org/allbinary/debug/NoDebug.h>
#endif
#if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/GameStrings.h>)
#include <org/allbinary/game/GameStrings.h>
#endif
#if __has_include(<org/allbinary/game/GameTypeFactory.h>)
#include <org/allbinary/game/GameTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/Intermission.h>)
#include <org/allbinary/game/Intermission.h>
#endif
#if __has_include(<org/allbinary/game/IntermissionCompositeInterface.h>)
#include <org/allbinary/game/IntermissionCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/IntermissionEnableListenerInterface.h>)
#include <org/allbinary/game/IntermissionEnableListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/IntermissionInterface.h>)
#include <org/allbinary/game/IntermissionInterface.h>
#endif
#if __has_include(<org/allbinary/game/PlayerTypesFactory.h>)
#include <org/allbinary/game/PlayerTypesFactory.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/InGameFeatures.h>)
#include <org/allbinary/game/configuration/InGameFeatures.h>
#endif
#if __has_include(<org/allbinary/game/configuration/InGameOptionsForm.h>)
#include <org/allbinary/game/configuration/InGameOptionsForm.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>)
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEvent.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEventHandler.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureUtil.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InputFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/SensorFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/TouchFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/TouchFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h>)
#include <org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h>
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
#if __has_include(<org/allbinary/game/input/InputProcessor.h>)
#include <org/allbinary/game/input/InputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/input/NoPlayerGameInput.h>)
#include <org/allbinary/game/input/NoPlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/game/input/PlayerGameInput.h>)
#include <org/allbinary/game/input/PlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/SWTUtil.h>)
#include <org/allbinary/game/layer/SWTUtil.h>
#endif
#if __has_include(<org/allbinary/game/paint/ColorFillBasePaintable.h>)
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>
#endif
#if __has_include(<org/allbinary/game/paint/ColorFillPaintableFactory.h>)
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevel.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScore.h>)
#include <org/allbinary/game/score/HighScore.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresHelperBaseInterface.h>)
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresPaintable.h>)
#include <org/allbinary/game/score/HighScoresPaintable.h>
#endif
#if __has_include(<org/allbinary/game/score/NullHighScoresSingletonFactory.h>)
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoreTextBox.h>)
#include <org/allbinary/game/score/displayable/HighScoreTextBox.h>
#endif
#if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/GraphicsStrings.h>)
#include <org/allbinary/graphics/GraphicsStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/ScreenCapture.h>)
#include <org/allbinary/graphics/ScreenCapture.h>
#endif
#if __has_include(<org/allbinary/graphics/ScreenCaptureFactory.h>)
#include <org/allbinary/graphics/ScreenCaptureFactory.h>
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
#if __has_include(<org/allbinary/graphics/color/BasicColorSetUtil.h>)
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>
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
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>)
#include <org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormPaintable.h>)
#include <org/allbinary/graphics/form/FormPaintable.h>
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
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>)
#include <org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>)
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
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
#if __has_include(<org/allbinary/graphics/paint/NullInitUpdatePaintable.h>)
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>
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
#if __has_include(<org/allbinary/image/opengles/OpenGLImageSpecificFactory.h>)
#include <org/allbinary/image/opengles/OpenGLImageSpecificFactory.h>
#endif
#if __has_include(<org/allbinary/input/gyro/SensorGameUpdateProcessor.h>)
#include <org/allbinary/input/gyro/SensorGameUpdateProcessor.h>
#endif
#if __has_include(<org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h>)
#include <org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/BaseTouchInput.h>)
#include <org/allbinary/input/motion/button/BaseTouchInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h>)
#include <org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchButtonFactory.h>)
#include <org/allbinary/input/motion/button/TouchButtonFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchButtonsPaintableFactory.h>)
#include <org/allbinary/input/motion/button/TouchButtonsPaintableFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchScreenFactory.h>)
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
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
#if __has_include(<org/allbinary/media/audio/PlayerQueue.h>)
#include <org/allbinary/media/audio/PlayerQueue.h>
#endif
#if __has_include(<org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectSound.h>)
#include <org/allbinary/media/audio/SelectSound.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/SecondaryThreadPool.h>)
#include <org/allbinary/thread/SecondaryThreadPool.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
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
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/MenuListener.h")
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PopupMenuInterface.h")
#include "org/allbinary/game/displayable/canvas/PopupMenuInterface.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/FormUtil.h")
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/MyFormUtil.h")
#include "org/allbinary/game/displayable/canvas/MyFormUtil.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/EndGameInfo.h")
#include "org/allbinary/game/displayable/canvas/EndGameInfo.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoGameBehavior.h")
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BaseMenuBehavior.h")
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BaseGameBehavior.h")
#include "org/allbinary/game/displayable/canvas/BaseGameBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicPopupMenuPaintable.h")
#include "org/allbinary/game/displayable/canvas/BasicPopupMenuPaintable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/InGameMenuBehavior.h")
#include "org/allbinary/game/displayable/canvas/InGameMenuBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameLimitedCommandTextItemArrayFactory.h")
#include "org/allbinary/game/displayable/canvas/GameLimitedCommandTextItemArrayFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PopupCommandFormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/PopupCommandFormInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h")
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameProcessor.h")
#include "org/allbinary/game/displayable/canvas/GameProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/CheatGameInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/CheatGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/EndGameProcessor.h")
#include "org/allbinary/game/displayable/canvas/EndGameProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/StartIntermissionProcessor.h")
#include "org/allbinary/game/displayable/canvas/StartIntermissionProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/EndGamePaintable.h")
#include "org/allbinary/game/displayable/canvas/EndGamePaintable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/NullDemoPaintable.h")
#include "org/allbinary/game/displayable/canvas/NullDemoPaintable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoPaintableInterface.h")
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/FormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/FormInputProcessor.h"
#endif

        #endif
    
