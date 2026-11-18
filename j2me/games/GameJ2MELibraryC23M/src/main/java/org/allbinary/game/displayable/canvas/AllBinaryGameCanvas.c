// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "javax/microedition/lcdui/ChoiceGroup.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Item.h"
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameStrings.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/Intermission.h"
#include "org/allbinary/game/IntermissionInterface.h"
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/InGameFeatures.h"
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/init/GameInitializationUtil.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/InputProcessor.h"
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/ScreenCapture.h"
#include "org/allbinary/graphics/ScreenCaptureFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "org/allbinary/graphics/form/FormType.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/NullInitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/image/opengles/OpenGLImageSpecificFactory.h"
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#include "org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonsPaintableFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/PlayerQueue.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/thread/SecondaryThreadPool.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
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
#include "org/allbinary/game/displayable/canvas/SaveHighScoreRunnable.h"
#if __has_include("org/allbinary/game/paint/ColorFillPaintableFactory.h")
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/CurrentDisplayableFactory.h")
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/IntermissionInterface.h")
#include "org/allbinary/game/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/game/init/GameInitializationUtil.h")
#include "org/allbinary/game/init/GameInitializationUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/init/GameInitializationUtil.h")
#include "org/allbinary/game/init/GameInitializationUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameInitializedEventHandler.h")
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GenericOperatingSystem.h")
#include "org/allbinary/game/displayable/canvas/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/GenericOperatingSystem.h")
#include "org/allbinary/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/GenericOperatingSystem.h")
#include "org/allbinary/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/business/advertisement/GenericOperatingSystem.h")
#include "org/allbinary/business/advertisement/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/canvas/GenericOperatingSystem.h")
#include "org/allbinary/canvas/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/canvas/GenericOperatingSystem.h")
#include "org/allbinary/canvas/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/canvas/GenericOperatingSystem.h")
#include "org/allbinary/canvas/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/canvas/GenericOperatingSystem.h")
#include "org/allbinary/canvas/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/debug/GenericOperatingSystem.h")
#include "org/allbinary/debug/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/debug/GenericOperatingSystem.h")
#include "org/allbinary/debug/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/GenericOperatingSystem.h")
#include "org/allbinary/game/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/commands/GenericOperatingSystem.h")
#include "org/allbinary/game/commands/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/displayable/GenericOperatingSystem.h")
#include "org/allbinary/game/displayable/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/init/GenericOperatingSystem.h")
#include "org/allbinary/game/init/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/init/GenericOperatingSystem.h")
#include "org/allbinary/game/init/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/GenericOperatingSystem.h")
#include "org/allbinary/game/input/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/GenericOperatingSystem.h")
#include "org/allbinary/game/input/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/GenericOperatingSystem.h")
#include "org/allbinary/game/input/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/GenericOperatingSystem.h")
#include "org/allbinary/game/input/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/event/GenericOperatingSystem.h")
#include "org/allbinary/game/input/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/layer/GenericOperatingSystem.h")
#include "org/allbinary/game/layer/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/layer/GenericOperatingSystem.h")
#include "org/allbinary/game/layer/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/paint/GenericOperatingSystem.h")
#include "org/allbinary/game/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/paint/GenericOperatingSystem.h")
#include "org/allbinary/game/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/resource/GenericOperatingSystem.h")
#include "org/allbinary/game/resource/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/resource/GenericOperatingSystem.h")
#include "org/allbinary/game/resource/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/GenericOperatingSystem.h")
#include "org/allbinary/game/score/displayable/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/state/GenericOperatingSystem.h")
#include "org/allbinary/game/state/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/state/GenericOperatingSystem.h")
#include "org/allbinary/game/state/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/GenericOperatingSystem.h")
#include "org/allbinary/graphics/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/GenericOperatingSystem.h")
#include "org/allbinary/graphics/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/GenericOperatingSystem.h")
#include "org/allbinary/graphics/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/GenericOperatingSystem.h")
#include "org/allbinary/graphics/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h")
#include "org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h")
#include "org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/color/GenericOperatingSystem.h")
#include "org/allbinary/graphics/color/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/color/GenericOperatingSystem.h")
#include "org/allbinary/graphics/color/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/command/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/font/GenericOperatingSystem.h")
#include "org/allbinary/graphics/font/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/font/GenericOperatingSystem.h")
#include "org/allbinary/graphics/font/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/font/GenericOperatingSystem.h")
#include "org/allbinary/graphics/font/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/item/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/item/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/GenericOperatingSystem.h")
#include "org/allbinary/graphics/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/GenericOperatingSystem.h")
#include "org/allbinary/graphics/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/GenericOperatingSystem.h")
#include "org/allbinary/graphics/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/GenericOperatingSystem.h")
#include "org/allbinary/graphics/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/GenericOperatingSystem.h")
#include "org/allbinary/graphics/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/GenericOperatingSystem.h")
#include "org/allbinary/graphics/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/GenericOperatingSystem.h")
#include "org/allbinary/graphics/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/GenericOperatingSystem.h")
#include "org/allbinary/graphics/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/GenericOperatingSystem.h")
#include "org/allbinary/graphics/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/image/opengles/GenericOperatingSystem.h")
#include "org/allbinary/image/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/gyro/GenericOperatingSystem.h")
#include "org/allbinary/input/gyro/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/gyro/GenericOperatingSystem.h")
#include "org/allbinary/input/gyro/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/gesture/observer/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/GenericOperatingSystem.h")
#include "org/allbinary/logic/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GenericOperatingSystem.h")
#include "org/allbinary/logic/communication/log/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GenericOperatingSystem.h")
#include "org/allbinary/logic/communication/log/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GenericOperatingSystem.h")
#include "org/allbinary/logic/communication/log/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/string/GenericOperatingSystem.h")
#include "org/allbinary/logic/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/string/GenericOperatingSystem.h")
#include "org/allbinary/logic/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/security/licensing/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/util/event/GenericOperatingSystem.h")
#include "org/allbinary/logic/util/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/util/event/GenericOperatingSystem.h")
#include "org/allbinary/logic/util/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/audio/GenericOperatingSystem.h")
#include "org/allbinary/media/audio/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/audio/GenericOperatingSystem.h")
#include "org/allbinary/media/audio/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/audio/GenericOperatingSystem.h")
#include "org/allbinary/media/audio/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/audio/GenericOperatingSystem.h")
#include "org/allbinary/media/audio/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/audio/GenericOperatingSystem.h")
#include "org/allbinary/media/audio/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/string/GenericOperatingSystem.h")
#include "org/allbinary/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/string/GenericOperatingSystem.h")
#include "org/allbinary/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/thread/GenericOperatingSystem.h")
#include "org/allbinary/thread/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/time/GenericOperatingSystem.h")
#include "org/allbinary/time/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/time/GenericOperatingSystem.h")
#include "org/allbinary/time/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/time/GenericOperatingSystem.h")
#include "org/allbinary/time/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/GenericOperatingSystem.h")
#include "org/allbinary/util/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/GenericOperatingSystem.h")
#include "org/allbinary/util/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/GenericOperatingSystem.h")
#include "org/allbinary/util/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/GenericOperatingSystem.h")
#include "org/allbinary/util/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchScreenFactory.h")
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h")
#include "org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h"
#endif
#if __has_include("org/allbinary/game/init/GameInitializationUtil.h")
#include "org/allbinary/game/init/GameInitializationUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameInitializedEventHandler.h")
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#endif
#if __has_include("org/allbinary/game/init/GameInitializationUtil.h")
#include "org/allbinary/game/init/GameInitializationUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameInitializedEventHandler.h")
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/paint/InitUpdatePaintable.h")
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinarySensor.h")
#include "org/allbinary/game/displayable/canvas/AllBinarySensor.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinarySensor.h")
#include "javax/microedition/lcdui/AllBinarySensor.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinarySensor.h")
#include "javax/microedition/lcdui/AllBinarySensor.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinarySensor.h")
#include "javax/microedition/lcdui/AllBinarySensor.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinarySensor.h")
#include "javax/microedition/lcdui/AllBinarySensor.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinarySensor.h")
#include "javax/microedition/lcdui/AllBinarySensor.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinarySensor.h")
#include "javax/microedition/lcdui/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/AllBinarySensor.h")
#include "org/allbinary/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/AllBinarySensor.h")
#include "org/allbinary/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/business/advertisement/AllBinarySensor.h")
#include "org/allbinary/business/advertisement/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinarySensor.h")
#include "org/allbinary/canvas/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinarySensor.h")
#include "org/allbinary/canvas/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinarySensor.h")
#include "org/allbinary/canvas/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinarySensor.h")
#include "org/allbinary/canvas/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/debug/AllBinarySensor.h")
#include "org/allbinary/debug/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/debug/AllBinarySensor.h")
#include "org/allbinary/debug/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/AllBinarySensor.h")
#include "org/allbinary/game/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/commands/AllBinarySensor.h")
#include "org/allbinary/game/commands/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/AllBinarySensor.h")
#include "org/allbinary/game/configuration/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/AllBinarySensor.h")
#include "org/allbinary/game/configuration/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/AllBinarySensor.h")
#include "org/allbinary/game/configuration/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/AllBinarySensor.h")
#include "org/allbinary/game/configuration/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/AllBinarySensor.h")
#include "org/allbinary/game/configuration/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinarySensor.h")
#include "org/allbinary/game/configuration/feature/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/displayable/AllBinarySensor.h")
#include "org/allbinary/game/displayable/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/init/AllBinarySensor.h")
#include "org/allbinary/game/init/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/init/AllBinarySensor.h")
#include "org/allbinary/game/init/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/input/AllBinarySensor.h")
#include "org/allbinary/game/input/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/input/AllBinarySensor.h")
#include "org/allbinary/game/input/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/input/AllBinarySensor.h")
#include "org/allbinary/game/input/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/input/AllBinarySensor.h")
#include "org/allbinary/game/input/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/input/event/AllBinarySensor.h")
#include "org/allbinary/game/input/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinarySensor.h")
#include "org/allbinary/game/layer/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinarySensor.h")
#include "org/allbinary/game/layer/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/paint/AllBinarySensor.h")
#include "org/allbinary/game/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/paint/AllBinarySensor.h")
#include "org/allbinary/game/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/resource/AllBinarySensor.h")
#include "org/allbinary/game/resource/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/resource/AllBinarySensor.h")
#include "org/allbinary/game/resource/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/score/AllBinarySensor.h")
#include "org/allbinary/game/score/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/score/AllBinarySensor.h")
#include "org/allbinary/game/score/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/score/AllBinarySensor.h")
#include "org/allbinary/game/score/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/score/AllBinarySensor.h")
#include "org/allbinary/game/score/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/score/AllBinarySensor.h")
#include "org/allbinary/game/score/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/AllBinarySensor.h")
#include "org/allbinary/game/score/displayable/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/state/AllBinarySensor.h")
#include "org/allbinary/game/state/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/game/state/AllBinarySensor.h")
#include "org/allbinary/game/state/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/AllBinarySensor.h")
#include "org/allbinary/graphics/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/AllBinarySensor.h")
#include "org/allbinary/graphics/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/AllBinarySensor.h")
#include "org/allbinary/graphics/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/AllBinarySensor.h")
#include "org/allbinary/graphics/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/AllBinarySensor.h")
#include "org/allbinary/graphics/canvas/transition/progress/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/AllBinarySensor.h")
#include "org/allbinary/graphics/canvas/transition/progress/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/color/AllBinarySensor.h")
#include "org/allbinary/graphics/color/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/color/AllBinarySensor.h")
#include "org/allbinary/graphics/color/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/command/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/AllBinarySensor.h")
#include "org/allbinary/graphics/displayable/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinarySensor.h")
#include "org/allbinary/graphics/font/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinarySensor.h")
#include "org/allbinary/graphics/font/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/font/AllBinarySensor.h")
#include "org/allbinary/graphics/font/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/AllBinarySensor.h")
#include "org/allbinary/graphics/form/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/AllBinarySensor.h")
#include "org/allbinary/graphics/form/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/AllBinarySensor.h")
#include "org/allbinary/graphics/form/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/AllBinarySensor.h")
#include "org/allbinary/graphics/form/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/AllBinarySensor.h")
#include "org/allbinary/graphics/form/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/AllBinarySensor.h")
#include "org/allbinary/graphics/form/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/AllBinarySensor.h")
#include "org/allbinary/graphics/form/item/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/AllBinarySensor.h")
#include "org/allbinary/graphics/form/item/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/AllBinarySensor.h")
#include "org/allbinary/graphics/opengles/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/AllBinarySensor.h")
#include "org/allbinary/graphics/opengles/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/AllBinarySensor.h")
#include "org/allbinary/graphics/opengles/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/AllBinarySensor.h")
#include "org/allbinary/graphics/opengles/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/paint/AllBinarySensor.h")
#include "org/allbinary/graphics/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/paint/AllBinarySensor.h")
#include "org/allbinary/graphics/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/paint/AllBinarySensor.h")
#include "org/allbinary/graphics/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/paint/AllBinarySensor.h")
#include "org/allbinary/graphics/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/paint/AllBinarySensor.h")
#include "org/allbinary/graphics/paint/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/image/opengles/AllBinarySensor.h")
#include "org/allbinary/image/opengles/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/gyro/AllBinarySensor.h")
#include "org/allbinary/input/gyro/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/gyro/AllBinarySensor.h")
#include "org/allbinary/input/gyro/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/motion/button/AllBinarySensor.h")
#include "org/allbinary/input/motion/button/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/motion/button/AllBinarySensor.h")
#include "org/allbinary/input/motion/button/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/motion/button/AllBinarySensor.h")
#include "org/allbinary/input/motion/button/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/motion/button/AllBinarySensor.h")
#include "org/allbinary/input/motion/button/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/motion/button/AllBinarySensor.h")
#include "org/allbinary/input/motion/button/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/AllBinarySensor.h")
#include "org/allbinary/input/motion/gesture/observer/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/AllBinarySensor.h")
#include "org/allbinary/logic/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/AllBinarySensor.h")
#include "org/allbinary/logic/communication/log/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/AllBinarySensor.h")
#include "org/allbinary/logic/communication/log/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/AllBinarySensor.h")
#include "org/allbinary/logic/communication/log/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/string/AllBinarySensor.h")
#include "org/allbinary/logic/string/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/string/AllBinarySensor.h")
#include "org/allbinary/logic/string/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/system/os/AllBinarySensor.h")
#include "org/allbinary/logic/system/os/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AllBinarySensor.h")
#include "org/allbinary/logic/system/security/licensing/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/util/event/AllBinarySensor.h")
#include "org/allbinary/logic/util/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/logic/util/event/AllBinarySensor.h")
#include "org/allbinary/logic/util/event/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/media/audio/AllBinarySensor.h")
#include "org/allbinary/media/audio/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/media/audio/AllBinarySensor.h")
#include "org/allbinary/media/audio/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/media/audio/AllBinarySensor.h")
#include "org/allbinary/media/audio/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/media/audio/AllBinarySensor.h")
#include "org/allbinary/media/audio/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/media/audio/AllBinarySensor.h")
#include "org/allbinary/media/audio/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/string/AllBinarySensor.h")
#include "org/allbinary/string/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/string/AllBinarySensor.h")
#include "org/allbinary/string/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/thread/AllBinarySensor.h")
#include "org/allbinary/thread/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/time/AllBinarySensor.h")
#include "org/allbinary/time/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/time/AllBinarySensor.h")
#include "org/allbinary/time/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/time/AllBinarySensor.h")
#include "org/allbinary/time/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/util/AllBinarySensor.h")
#include "org/allbinary/util/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/util/AllBinarySensor.h")
#include "org/allbinary/util/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/util/AllBinarySensor.h")
#include "org/allbinary/util/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/util/AllBinarySensor.h")
#include "org/allbinary/util/AllBinarySensor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLThreadUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
#endif
#if __has_include("org/allbinary/graphics/GraphicsStrings.h")
#include "org/allbinary/graphics/GraphicsStrings.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLThreadUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
#endif
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h")
#include "org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h"
#endif
#if __has_include("org/allbinary/game/PlayerTypesFactory.h")
#include "org/allbinary/game/PlayerTypesFactory.h"
#endif
#if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("org/allbinary/ThreadPool.h")
#include "org/allbinary/ThreadPool.h"
#endif
#if __has_include("org/allbinary/ThreadPool.h")
#include "org/allbinary/ThreadPool.h"
#endif
#if __has_include("org/allbinary/business/advertisement/ThreadPool.h")
#include "org/allbinary/business/advertisement/ThreadPool.h"
#endif
#if __has_include("org/allbinary/canvas/ThreadPool.h")
#include "org/allbinary/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/canvas/ThreadPool.h")
#include "org/allbinary/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/canvas/ThreadPool.h")
#include "org/allbinary/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/canvas/ThreadPool.h")
#include "org/allbinary/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/debug/ThreadPool.h")
#include "org/allbinary/debug/ThreadPool.h"
#endif
#if __has_include("org/allbinary/debug/ThreadPool.h")
#include "org/allbinary/debug/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/ThreadPool.h")
#include "org/allbinary/game/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/commands/ThreadPool.h")
#include "org/allbinary/game/commands/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/ThreadPool.h")
#include "org/allbinary/game/configuration/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/ThreadPool.h")
#include "org/allbinary/game/configuration/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ThreadPool.h")
#include "org/allbinary/game/configuration/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ThreadPool.h")
#include "org/allbinary/game/configuration/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ThreadPool.h")
#include "org/allbinary/game/configuration/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/displayable/ThreadPool.h")
#include "org/allbinary/game/displayable/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/init/ThreadPool.h")
#include "org/allbinary/game/init/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/init/ThreadPool.h")
#include "org/allbinary/game/init/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/ThreadPool.h")
#include "org/allbinary/game/input/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/ThreadPool.h")
#include "org/allbinary/game/input/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/ThreadPool.h")
#include "org/allbinary/game/input/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/ThreadPool.h")
#include "org/allbinary/game/input/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/event/ThreadPool.h")
#include "org/allbinary/game/input/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/layer/ThreadPool.h")
#include "org/allbinary/game/layer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/layer/ThreadPool.h")
#include "org/allbinary/game/layer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/paint/ThreadPool.h")
#include "org/allbinary/game/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/paint/ThreadPool.h")
#include "org/allbinary/game/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/resource/ThreadPool.h")
#include "org/allbinary/game/resource/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/resource/ThreadPool.h")
#include "org/allbinary/game/resource/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/ThreadPool.h")
#include "org/allbinary/game/score/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/ThreadPool.h")
#include "org/allbinary/game/score/displayable/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/state/ThreadPool.h")
#include "org/allbinary/game/state/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/state/ThreadPool.h")
#include "org/allbinary/game/state/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/ThreadPool.h")
#include "org/allbinary/graphics/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/ThreadPool.h")
#include "org/allbinary/graphics/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/ThreadPool.h")
#include "org/allbinary/graphics/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/ThreadPool.h")
#include "org/allbinary/graphics/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ThreadPool.h")
#include "org/allbinary/graphics/canvas/transition/progress/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ThreadPool.h")
#include "org/allbinary/graphics/canvas/transition/progress/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/color/ThreadPool.h")
#include "org/allbinary/graphics/color/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/color/ThreadPool.h")
#include "org/allbinary/graphics/color/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/ThreadPool.h")
#include "org/allbinary/graphics/displayable/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/ThreadPool.h")
#include "org/allbinary/graphics/displayable/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/ThreadPool.h")
#include "org/allbinary/graphics/displayable/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/ThreadPool.h")
#include "org/allbinary/graphics/displayable/command/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/ThreadPool.h")
#include "org/allbinary/graphics/displayable/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/ThreadPool.h")
#include "org/allbinary/graphics/displayable/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/ThreadPool.h")
#include "org/allbinary/graphics/displayable/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/font/ThreadPool.h")
#include "org/allbinary/graphics/font/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/font/ThreadPool.h")
#include "org/allbinary/graphics/font/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/font/ThreadPool.h")
#include "org/allbinary/graphics/font/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ThreadPool.h")
#include "org/allbinary/graphics/form/item/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ThreadPool.h")
#include "org/allbinary/graphics/form/item/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/ThreadPool.h")
#include "org/allbinary/graphics/opengles/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/ThreadPool.h")
#include "org/allbinary/graphics/opengles/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/ThreadPool.h")
#include "org/allbinary/graphics/opengles/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/ThreadPool.h")
#include "org/allbinary/graphics/opengles/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ThreadPool.h")
#include "org/allbinary/graphics/paint/ThreadPool.h"
#endif
#if __has_include("org/allbinary/image/opengles/ThreadPool.h")
#include "org/allbinary/image/opengles/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/gyro/ThreadPool.h")
#include "org/allbinary/input/gyro/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/gyro/ThreadPool.h")
#include "org/allbinary/input/gyro/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/button/ThreadPool.h")
#include "org/allbinary/input/motion/button/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/button/ThreadPool.h")
#include "org/allbinary/input/motion/button/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/button/ThreadPool.h")
#include "org/allbinary/input/motion/button/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/button/ThreadPool.h")
#include "org/allbinary/input/motion/button/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/button/ThreadPool.h")
#include "org/allbinary/input/motion/button/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/ThreadPool.h")
#include "org/allbinary/input/motion/gesture/observer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/ThreadPool.h")
#include "org/allbinary/logic/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ThreadPool.h")
#include "org/allbinary/logic/communication/log/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ThreadPool.h")
#include "org/allbinary/logic/communication/log/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ThreadPool.h")
#include "org/allbinary/logic/communication/log/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/string/ThreadPool.h")
#include "org/allbinary/logic/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/string/ThreadPool.h")
#include "org/allbinary/logic/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/system/os/ThreadPool.h")
#include "org/allbinary/logic/system/os/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ThreadPool.h")
#include "org/allbinary/logic/system/security/licensing/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/util/event/ThreadPool.h")
#include "org/allbinary/logic/util/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/util/event/ThreadPool.h")
#include "org/allbinary/logic/util/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/string/ThreadPool.h")
#include "org/allbinary/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/string/ThreadPool.h")
#include "org/allbinary/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif
#if __has_include("org/allbinary/time/ThreadPool.h")
#include "org/allbinary/time/ThreadPool.h"
#endif
#if __has_include("org/allbinary/time/ThreadPool.h")
#include "org/allbinary/time/ThreadPool.h"
#endif
#if __has_include("org/allbinary/time/ThreadPool.h")
#include "org/allbinary/time/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#endif


static constexpr int32_t AllBinaryGameCanvas_id = 0;




























static void AllBinaryGameCanvas_initMethod(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager, bool buffered);

























static void AllBinaryGameCanvas_updateGameKeyEventProcessor(AllBinaryGameCanvas* this);






































































































static void AllBinaryGameCanvas_setFormPaintable(AllBinaryGameCanvas* this, Paintable* formPaintable);









void AllBinaryGameCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryGameCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryGameCanvas", "RunnableCanvas");
    java_register_method("AllBinaryGameCanvas", "updateMeasurement", (void*) AllBinaryGameCanvas_updateMeasurement);
    java_register_method("AllBinaryGameCanvas", "getInGameMenuBehavior", (void*) AllBinaryGameCanvas_getInGameMenuBehavior);
    java_register_method("AllBinaryGameCanvas", "setCurrentThread", (void*) AllBinaryGameCanvas_setCurrentThread);
    java_register_method("AllBinaryGameCanvas", "onEvent", (void*) AllBinaryGameCanvas_onEvent);
    java_register_method("AllBinaryGameCanvas", "onDisplayChangeEvent", (void*) AllBinaryGameCanvas_onDisplayChangeEvent);
    java_register_method("AllBinaryGameCanvas", "updateMenuFromEvent", (void*) AllBinaryGameCanvas_updateMenuFromEvent);
    java_register_method("AllBinaryGameCanvas", "processSleep", (void*) AllBinaryGameCanvas_processSleep);
    java_register_method("AllBinaryGameCanvas", "initPopupMenu", (void*) AllBinaryGameCanvas_initPopupMenu);
    java_register_method("AllBinaryGameCanvas", "initMenu", (void*) AllBinaryGameCanvas_initMenu);
    java_register_method("AllBinaryGameCanvas", "initMenu2", (void*) AllBinaryGameCanvas_initMenu2);
    java_register_method("AllBinaryGameCanvas", "updateMenu", (void*) AllBinaryGameCanvas_updateMenu);
    java_register_method("AllBinaryGameCanvas", "updateMenu2", (void*) AllBinaryGameCanvas_updateMenu2);
    java_register_method("AllBinaryGameCanvas", "pause", (void*) AllBinaryGameCanvas_pause);
    java_register_method("AllBinaryGameCanvas", "unPause", (void*) AllBinaryGameCanvas_unPause);
    java_register_method("AllBinaryGameCanvas", "isPausable", (void*) AllBinaryGameCanvas_isPausable);
    java_register_method("AllBinaryGameCanvas", "popupMenu", (void*) AllBinaryGameCanvas_popupMenu);
    java_register_method("AllBinaryGameCanvas", "popupMenu2", (void*) AllBinaryGameCanvas_popupMenu2);
    java_register_method("AllBinaryGameCanvas", "toggleMenu", (void*) AllBinaryGameCanvas_toggleMenu);
    java_register_method("AllBinaryGameCanvas", "closeMenu", (void*) AllBinaryGameCanvas_closeMenu);
    java_register_method("AllBinaryGameCanvas", "closeMenu2", (void*) AllBinaryGameCanvas_closeMenu2);
    java_register_method("AllBinaryGameCanvas", "open", (void*) AllBinaryGameCanvas_open);
    java_register_method("AllBinaryGameCanvas", "close", (void*) AllBinaryGameCanvas_close);
    java_register_method("AllBinaryGameCanvas", "processorInit", (void*) AllBinaryGameCanvas_processorInit);
    java_register_method("AllBinaryGameCanvas", "setProcessGameProcessorInit", (void*) AllBinaryGameCanvas_setProcessGameProcessorInit);
    java_register_method("AllBinaryGameCanvas", "initSpecialPaint", (void*) AllBinaryGameCanvas_initSpecialPaint);
    java_register_method("AllBinaryGameCanvas", "init", (void*) AllBinaryGameCanvas_initMethod);
    java_register_method("AllBinaryGameCanvas", "notifyIntermission", (void*) AllBinaryGameCanvas_notifyIntermission);
    java_register_method("AllBinaryGameCanvas", "mediaInit", (void*) AllBinaryGameCanvas_mediaInit);
    java_register_method("AllBinaryGameCanvas", "initConfigurable", (void*) AllBinaryGameCanvas_initConfigurable);
    java_register_method("AllBinaryGameCanvas", "initApp", (void*) AllBinaryGameCanvas_initApp);
    java_register_method("AllBinaryGameCanvas", "initTouch", (void*) AllBinaryGameCanvas_initTouch);
    java_register_method("AllBinaryGameCanvas", "updateCurrentTouchInputFactory", (void*) AllBinaryGameCanvas_updateCurrentTouchInputFactory);
    java_register_method("AllBinaryGameCanvas", "updateTouch", (void*) AllBinaryGameCanvas_updateTouch);
    java_register_method("AllBinaryGameCanvas", "updateTouch2", (void*) AllBinaryGameCanvas_updateTouch2);
    java_register_method("AllBinaryGameCanvas", "postInitTouch", (void*) AllBinaryGameCanvas_postInitTouch);
    java_register_method("AllBinaryGameCanvas", "initCommands", (void*) AllBinaryGameCanvas_initCommands);
    java_register_method("AllBinaryGameCanvas", "addCommands", (void*) AllBinaryGameCanvas_addCommands);
    java_register_method("AllBinaryGameCanvas", "itemStateChanged", (void*) AllBinaryGameCanvas_itemStateChanged);
    java_register_method("AllBinaryGameCanvas", "updateScreenButtonPaintable", (void*) AllBinaryGameCanvas_updateScreenButtonPaintable);
    java_register_method("AllBinaryGameCanvas", "updateScreenButtonPaintable2", (void*) AllBinaryGameCanvas_updateScreenButtonPaintable2);
    java_register_method("AllBinaryGameCanvas", "getLayerManager", (void*) AllBinaryGameCanvas_getLayerManager);
    java_register_method("AllBinaryGameCanvas", "setLayerManager", (void*) AllBinaryGameCanvas_setLayerManager);
    java_register_method("AllBinaryGameCanvas", "isGameOver", (void*) AllBinaryGameCanvas_isGameOver);
    java_register_method("AllBinaryGameCanvas", "setGameOver", (void*) AllBinaryGameCanvas_setGameOver);
    java_register_method("AllBinaryGameCanvas", "processGameOver", (void*) AllBinaryGameCanvas_processGameOver);
    java_register_method("AllBinaryGameCanvas", "isHighScoreSubmitted", (void*) AllBinaryGameCanvas_isHighScoreSubmitted);
    java_register_method("AllBinaryGameCanvas", "setHighScoreSubmitted", (void*) AllBinaryGameCanvas_setHighScoreSubmitted);
    java_register_method("AllBinaryGameCanvas", "getGameState", (void*) AllBinaryGameCanvas_getGameState);
    java_register_method("AllBinaryGameCanvas", "setGameState", (void*) AllBinaryGameCanvas_setGameState);
    java_register_method("AllBinaryGameCanvas", "updateGameState", (void*) AllBinaryGameCanvas_updateGameState);
    java_register_method("AllBinaryGameCanvas", "updateGameKeyEventProcessor", (void*) AllBinaryGameCanvas_updateGameKeyEventProcessor);
    java_register_method("AllBinaryGameCanvas", "removeAllGameKeyInputListenersOnBuild", (void*) AllBinaryGameCanvas_removeAllGameKeyInputListenersOnBuild);
    java_register_method("AllBinaryGameCanvas", "removeAllGameKeyInputListeners", (void*) AllBinaryGameCanvas_removeAllGameKeyInputListeners);
    java_register_method("AllBinaryGameCanvas", "removeAllGameKeyInputListeners2", (void*) AllBinaryGameCanvas_removeAllGameKeyInputListeners2);
    java_register_method("AllBinaryGameCanvas", "removeKeyInputListener", (void*) AllBinaryGameCanvas_removeKeyInputListener);
    java_register_method("AllBinaryGameCanvas", "updateEndGameProcessor", (void*) AllBinaryGameCanvas_updateEndGameProcessor);
    java_register_method("AllBinaryGameCanvas", "updateEndGameProcessor2", (void*) AllBinaryGameCanvas_updateEndGameProcessor2);
    java_register_method("AllBinaryGameCanvas", "buildGameInit", (void*) AllBinaryGameCanvas_buildGameInit);
    java_register_method("AllBinaryGameCanvas", "cleanupGame", (void*) AllBinaryGameCanvas_cleanupGame);
    java_register_method("AllBinaryGameCanvas", "loadResourceLoadingLevel", (void*) AllBinaryGameCanvas_loadResourceLoadingLevel);
    java_register_method("AllBinaryGameCanvas", "loadResources", (void*) AllBinaryGameCanvas_loadResources);
    java_register_method("AllBinaryGameCanvas", "updateColor", (void*) AllBinaryGameCanvas_updateColor);
    java_register_method("AllBinaryGameCanvas", "buildGame", (void*) AllBinaryGameCanvas_buildGame);
    java_register_method("AllBinaryGameCanvas", "buildGame2", (void*) AllBinaryGameCanvas_buildGame2);
    java_register_method("AllBinaryGameCanvas", "addKeyInputListener", (void*) AllBinaryGameCanvas_addKeyInputListener);
    java_register_method("AllBinaryGameCanvas", "setGameCanvasStartListener", (void*) AllBinaryGameCanvas_setGameCanvasStartListener);
    java_register_method("AllBinaryGameCanvas", "loadState", (void*) AllBinaryGameCanvas_loadState);
    java_register_method("AllBinaryGameCanvas", "getLoadStateHashtable", (void*) AllBinaryGameCanvas_getLoadStateHashtable);
    java_register_method("AllBinaryGameCanvas", "setLoadStateHashtable", (void*) AllBinaryGameCanvas_setLoadStateHashtable);
    java_register_method("AllBinaryGameCanvas", "getCurrentStateHashtable", (void*) AllBinaryGameCanvas_getCurrentStateHashtable);
    java_register_method("AllBinaryGameCanvas", "paintGameOver", (void*) AllBinaryGameCanvas_paintGameOver);
    java_register_method("AllBinaryGameCanvas", "draw", (void*) AllBinaryGameCanvas_draw);
    java_register_method("AllBinaryGameCanvas", "clear", (void*) AllBinaryGameCanvas_clear);
    java_register_method("AllBinaryGameCanvas", "paint", (void*) AllBinaryGameCanvas_paint);
    java_register_method("AllBinaryGameCanvas", "paintThreed", (void*) AllBinaryGameCanvas_paintThreed);
    java_register_method("AllBinaryGameCanvas", "processEndLevelIntermissionGameState", (void*) AllBinaryGameCanvas_processEndLevelIntermissionGameState);
    java_register_method("AllBinaryGameCanvas", "nonBotPaint", (void*) AllBinaryGameCanvas_nonBotPaint);
    java_register_method("AllBinaryGameCanvas", "paintIntermission", (void*) AllBinaryGameCanvas_paintIntermission);
    java_register_method("AllBinaryGameCanvas", "keyPressed", (void*) AllBinaryGameCanvas_keyPressed);
    java_register_method("AllBinaryGameCanvas", "keyReleased", (void*) AllBinaryGameCanvas_keyReleased);
    java_register_method("AllBinaryGameCanvas", "keyRepeated", (void*) AllBinaryGameCanvas_keyRepeated);
    java_register_method("AllBinaryGameCanvas", "keyPressedByDevice", (void*) AllBinaryGameCanvas_keyPressedByDevice);
    java_register_method("AllBinaryGameCanvas", "keyRepeatedByDevice", (void*) AllBinaryGameCanvas_keyRepeatedByDevice);
    java_register_method("AllBinaryGameCanvas", "keyReleasedByDevice", (void*) AllBinaryGameCanvas_keyReleasedByDevice);
    java_register_method("AllBinaryGameCanvas", "handleRawKey", (void*) AllBinaryGameCanvas_handleRawKey);
    java_register_method("AllBinaryGameCanvas", "endProgress", (void*) AllBinaryGameCanvas_endProgress);
    java_register_method("AllBinaryGameCanvas", "processPlayingGame", (void*) AllBinaryGameCanvas_processPlayingGame);
    java_register_method("AllBinaryGameCanvas", "threadInit", (void*) AllBinaryGameCanvas_threadInit);
    java_register_method("AllBinaryGameCanvas", "processGame", (void*) AllBinaryGameCanvas_processGame);
    java_register_method("AllBinaryGameCanvas", "notifyDonePainting", (void*) AllBinaryGameCanvas_notifyDonePainting);
    java_register_method("AllBinaryGameCanvas", "shouldWait", (void*) AllBinaryGameCanvas_shouldWait);
    java_register_method("AllBinaryGameCanvas", "run", (void*) AllBinaryGameCanvas_run);
    java_register_method("AllBinaryGameCanvas", "run2", (void*) AllBinaryGameCanvas_run2);
    java_register_method("AllBinaryGameCanvas", "run3", (void*) AllBinaryGameCanvas_run3);
    java_register_method("AllBinaryGameCanvas", "setRunning", (void*) AllBinaryGameCanvas_setRunning);
    java_register_method("AllBinaryGameCanvas", "end", (void*) AllBinaryGameCanvas_end);
    java_register_method("AllBinaryGameCanvas", "endGameThread", (void*) AllBinaryGameCanvas_endGameThread);
    java_register_method("AllBinaryGameCanvas", "createHighScore", (void*) AllBinaryGameCanvas_createHighScore);
    java_register_method("AllBinaryGameCanvas", "setHighScore", (void*) AllBinaryGameCanvas_setHighScore);
    java_register_method("AllBinaryGameCanvas", "setHighScore2", (void*) AllBinaryGameCanvas_setHighScore2);
    java_register_method("AllBinaryGameCanvas", "getGameStateTimeHelper", (void*) AllBinaryGameCanvas_getGameStateTimeHelper);
    java_register_method("AllBinaryGameCanvas", "setInitialized", (void*) AllBinaryGameCanvas_setInitialized);
    java_register_method("AllBinaryGameCanvas", "isInitialized", (void*) AllBinaryGameCanvas_isInitialized);
    java_register_method("AllBinaryGameCanvas", "getSourceId", (void*) AllBinaryGameCanvas_getSourceId);
    java_register_method("AllBinaryGameCanvas", "setProgressPaintable", (void*) AllBinaryGameCanvas_setProgressPaintable);
    java_register_method("AllBinaryGameCanvas", "getStartIntermissionInterface", (void*) AllBinaryGameCanvas_getStartIntermissionInterface);
    java_register_method("AllBinaryGameCanvas", "getEndLevelIntermissionInterface", (void*) AllBinaryGameCanvas_getEndLevelIntermissionInterface);
    java_register_method("AllBinaryGameCanvas", "setTouchPaintableP", (void*) AllBinaryGameCanvas_setTouchPaintableP);
    java_register_method("AllBinaryGameCanvas", "getTouchPaintableP", (void*) AllBinaryGameCanvas_getTouchPaintableP);
    java_register_method("AllBinaryGameCanvas", "setEndGamePaintable", (void*) AllBinaryGameCanvas_setEndGamePaintable);
    java_register_method("AllBinaryGameCanvas", "getEndGamePaintable", (void*) AllBinaryGameCanvas_getEndGamePaintable);
    java_register_method("AllBinaryGameCanvas", "setIntermissionPaintable", (void*) AllBinaryGameCanvas_setIntermissionPaintable);
    java_register_method("AllBinaryGameCanvas", "getIntermissionPaintable", (void*) AllBinaryGameCanvas_getIntermissionPaintable);
    java_register_method("AllBinaryGameCanvas", "getEndGameInfoP", (void*) AllBinaryGameCanvas_getEndGameInfoP);
    java_register_method("AllBinaryGameCanvas", "setHighScoresPaintable", (void*) AllBinaryGameCanvas_setHighScoresPaintable);
    java_register_method("AllBinaryGameCanvas", "getHighScoresPaintable", (void*) AllBinaryGameCanvas_getHighScoresPaintable);
    java_register_method("AllBinaryGameCanvas", "getRealHighScoresPaintable", (void*) AllBinaryGameCanvas_getRealHighScoresPaintable);
    java_register_method("AllBinaryGameCanvas", "clearPlayerGameInputList", (void*) AllBinaryGameCanvas_clearPlayerGameInputList);
    java_register_method("AllBinaryGameCanvas", "addPlayerGameInput", (void*) AllBinaryGameCanvas_addPlayerGameInput);
    java_register_method("AllBinaryGameCanvas", "setMenuInputProcessor", (void*) AllBinaryGameCanvas_setMenuInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getMenuInputProcessor", (void*) AllBinaryGameCanvas_getMenuInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getMenuForm", (void*) AllBinaryGameCanvas_getMenuForm);
    java_register_method("AllBinaryGameCanvas", "setMenuForm", (void*) AllBinaryGameCanvas_setMenuForm);
    java_register_method("AllBinaryGameCanvas", "getStartLevel", (void*) AllBinaryGameCanvas_getStartLevel);
    java_register_method("AllBinaryGameCanvas", "setStartLevel", (void*) AllBinaryGameCanvas_setStartLevel);
    java_register_method("AllBinaryGameCanvas", "setTouchButtonsPaintable", (void*) AllBinaryGameCanvas_setTouchButtonsPaintable);
    java_register_method("AllBinaryGameCanvas", "getTouchButtonsPaintable", (void*) AllBinaryGameCanvas_getTouchButtonsPaintable);
    java_register_method("AllBinaryGameCanvas", "setGameInputProcessor", (void*) AllBinaryGameCanvas_setGameInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getGameInputProcessor", (void*) AllBinaryGameCanvas_getGameInputProcessor);
    java_register_method("AllBinaryGameCanvas", "setEndGameProcessor", (void*) AllBinaryGameCanvas_setEndGameProcessor);
    java_register_method("AllBinaryGameCanvas", "getEndGameProcessor", (void*) AllBinaryGameCanvas_getEndGameProcessor);
    java_register_method("AllBinaryGameCanvas", "setEndGameStatePaintable", (void*) AllBinaryGameCanvas_setEndGameStatePaintable);
    java_register_method("AllBinaryGameCanvas", "getEndGameStatePaintable", (void*) AllBinaryGameCanvas_getEndGameStatePaintable);
    java_register_method("AllBinaryGameCanvas", "setNonBotPaintableP", (void*) AllBinaryGameCanvas_setNonBotPaintableP);
    java_register_method("AllBinaryGameCanvas", "getNonBotPaintableP", (void*) AllBinaryGameCanvas_getNonBotPaintableP);
    java_register_method("AllBinaryGameCanvas", "setStartIntermissionPaintable", (void*) AllBinaryGameCanvas_setStartIntermissionPaintable);
    java_register_method("AllBinaryGameCanvas", "getStartIntermissionPaintable", (void*) AllBinaryGameCanvas_getStartIntermissionPaintable);
    java_register_method("AllBinaryGameCanvas", "setMainStateProcessor", (void*) AllBinaryGameCanvas_setMainStateProcessor);
    java_register_method("AllBinaryGameCanvas", "getMainStateProcessor", (void*) AllBinaryGameCanvas_getMainStateProcessor);
    java_register_method("AllBinaryGameCanvas", "setProcessGameProcessor", (void*) AllBinaryGameCanvas_setProcessGameProcessor);
    java_register_method("AllBinaryGameCanvas", "getProcessGameProcessor", (void*) AllBinaryGameCanvas_getProcessGameProcessor);
    java_register_method("AllBinaryGameCanvas", "setOpenMenuPaintable", (void*) AllBinaryGameCanvas_setOpenMenuPaintable);
    java_register_method("AllBinaryGameCanvas", "getOpenMenuPaintable", (void*) AllBinaryGameCanvas_getOpenMenuPaintable);
    java_register_method("AllBinaryGameCanvas", "setPopupMenuInputProcessor", (void*) AllBinaryGameCanvas_setPopupMenuInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getPopupMenuInputProcessor", (void*) AllBinaryGameCanvas_getPopupMenuInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getSensorGameUpdateProcessor", (void*) AllBinaryGameCanvas_getSensorGameUpdateProcessor);
    java_register_method("AllBinaryGameCanvas", "getRawGameInputProcessor", (void*) AllBinaryGameCanvas_getRawGameInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getRawInputProcessor", (void*) AllBinaryGameCanvas_getRawInputProcessor);
    java_register_method("AllBinaryGameCanvas", "setInputProcessor", (void*) AllBinaryGameCanvas_setInputProcessor);
    java_register_method("AllBinaryGameCanvas", "getInputProcessor", (void*) AllBinaryGameCanvas_getInputProcessor);
    java_register_method("AllBinaryGameCanvas", "setMenuPaintable", (void*) AllBinaryGameCanvas_setMenuPaintable);
    java_register_method("AllBinaryGameCanvas", "getMenuPaintable", (void*) AllBinaryGameCanvas_getMenuPaintable);
    java_register_method("AllBinaryGameCanvas", "setFormPaintable", (void*) AllBinaryGameCanvas_setFormPaintable);
    java_register_method("AllBinaryGameCanvas", "getFormPaintable", (void*) AllBinaryGameCanvas_getFormPaintable);
    java_register_method("AllBinaryGameCanvas", "setGameSpecificPaintableP", (void*) AllBinaryGameCanvas_setGameSpecificPaintableP);
    java_register_method("AllBinaryGameCanvas", "getGameSpecificPaintableP", (void*) AllBinaryGameCanvas_getGameSpecificPaintableP);
    java_register_method("AllBinaryGameCanvas", "isSingleThread", (void*) AllBinaryGameCanvas_isSingleThread);
    java_register_method("AllBinaryGameCanvas", "isRunningInAnotherThread", (void*) AllBinaryGameCanvas_isRunningInAnotherThread);
    java_register_method("AllBinaryGameCanvas", "getType", (void*) AllBinaryGameCanvas_getType);
    java_register_method("AllBinaryGameCanvas", "getTitle", (void*) AllBinaryGameCanvas_getTitle);
    java_register_method("AllBinaryGameCanvas", "isPaused", (void*) AllBinaryGameCanvas_isPaused);
}

static void AllBinaryGameCanvas_initFields(AllBinaryGameCanvas* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->touchFeatureFactory = TouchFeatureFactory_getInstance();
    this->openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
    this->touchButtonFactory = TouchButtonFactory_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameStrings = GameStrings_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton_getInstance();
    this->gameRunnable = GameCanvasRunnable_new(this);
    this->gamePauseRunnable = GameCanvasPauseRunnable_new(this);
    this->formUtil = FormUtil_getInstance();
    this->myFormUtil = MyFormUtil_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->gameSpecificPaintable = NullPaintable_getInstance();
    this->sensorGameUpdateProcessor = SingleSensorGameUpdateProcessor_new();
    this->endGameInfo = EndGameInfo_new();
    this->startIntermissionInterface = Intermission_new();
    this->endLevelIntermissionInterface = Intermission_new();
    this->gameLayerManager = AllBinaryGameLayerManager_getNullInstance();
    this->gameState = this->gameStateFactory->NO_GAME_STATE;
    this->gameOver = false;
    this->initialized = false;
    this->gameStateTimeHelper = TimeDelayHelper_new(0);
    
    this->highScoreSubmitted = false;
    this->realHighScoresPaintable = HighScoresPaintable_new();
    this->highScoresPaintable = NullPaintable_getInstance();
    this->localPlayerGameInputList = BasicArrayListD_new();
    this->isCheating = false;
    this->hashtable = this->base.stdUtil->NULL_TABLE;
    this->isSingleKeyRepeatableProcessing = false;
    this->gameInitializationInterfaceFactoryInterface = (BasicBuildGameInitializerFactory_staticInit(), BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY);
    this->touchButtonsPaintable = NullPaintable_getInstance();
    this->touchPaintable = NullPaintable_getInstance();
    this->cheatProcessor = NoPlayerGameInput_getInstance();
    this->gameInputProcessor = Processor_getInstance();
    this->endGameProcessor = Processor_getInstance();
    this->realEndGameProcessor = Processor_getInstance();
    this->startIntermissionProcessor = Processor_getInstance();
    this->realStartIntermissionProcessor = Processor_getInstance();
    this->endGamePaintable = NullPaintable_getInstance();
    this->endGameStatePaintable = NullPaintable_getInstance();
    this->nonBotPaintable = NullPaintable_getInstance();
    this->intermissionPaintable = NullPaintable_getInstance();
    this->startIntermissionPaintable = NullInitUpdatePaintable_getInstance();
    this->mainStateProcessor = Processor_getInstance();
    this->processGameProcessor = Processor_getInstance();
    
    this->startLevel = 0;
    this->mainMenuInputProcessor = NoMenuInputProcessor_getInstance();
    this->popupMenuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuForm = ScrollSelectionForm_getNullScrollSelectionForm();
    this->formPaintable = NullPaintable_getInstance();
    this->openMenuPaintable = NullPaintable_getInstance();
    this->menuPaintable = NullPaintable_getInstance();
    this->currentTouchInputFactory = NoButtonsTouchInputFactory_getInstance();
    this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), this->basicColorFactory->BLACK, true);
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
    this->primaryPlayerQueue = PrimaryPlayerQueueFactory_getInstance();
    this->secondaryPlayerQueue = SecondaryPlayerQueueFactory_getInstance();
    this->BUILD_GAME = "buildGame";
    this->gameTypeFactory = GameTypeFactory_getInstance();
    this->screenCapture = ScreenCaptureFactory_getInstance();
    this->basicMotionGesturesHandler = BasicMotionGesturesHandler_getInstance();
    this->gameKeyEventHandler = GameKeyEventHandler_getInstance();
    this->gameBehavior = nullptr;
    this->menuBehavior = nullptr;
    this->progressPaintable = ProgressCanvasFactory_getLazyInstance();
    this->fontHeightP = 0;
    this->gameCanvasStartListener = (NullDemoPaintable_staticInit(), NullDemoPaintable_NULL_DEMO_PAINTABLE);
    this->rawGameInputProcessor = GameCanvasInputProcessor_new(this);
    this->rawInputProcessor = FormInputProcessor_new(this);
    this->inputProcessor = AllBinaryGameCanvas_getRawGameInputProcessor(this);
    this->YIELD_SLEEP = 100LL;
}


void AllBinaryGameCanvas_init(AllBinaryGameCanvas* this, CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
    AllBinaryGameCanvas_register();
        RunnableCanvas_init(&this->base, commandListener, CanvasStrings_getInstance()->EMPTY_CHILD_NAME_LIST, true);
        AllBinaryGameCanvas_initFields(this);
        this->highScoresHelper = HighScoresFactoryInterface_createHighScoresHelper(highScoresFactoryInterface);
        this->gameInitializationInterfaceFactoryInterface = gameInitializationInterfaceFactoryInterface;
        AllBinaryGameCanvas_initMethod(this, gameLayerManager, buffered);
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        if (GameInfo_getGameType(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager)) == this->gameTypeFactory->BOT || GameInfo_getGameType(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager)) == this->gameTypeFactory->NONE) {
            this->gameBehavior = DemoGameBehavior_getInstance();
            this->menuBehavior = BaseMenuBehavior_getInstance();
        } else {
            this->gameBehavior = BaseGameBehavior_getInstance();
            this->menuBehavior = AllBinaryGameCanvas_getInGameMenuBehavior(this);
        }
        AllBinaryGameCanvas_initPopupMenu(this);
        AllBinaryGameCanvas_initMenu(this);
        AllBinaryGameCanvas_initSpecialPaint(this);
        BasicEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}

AllBinaryGameCanvas* AllBinaryGameCanvas_new(CommandListener* commandListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
    AllBinaryGameCanvas* this = java_object_alloc(sizeof(AllBinaryGameCanvas), "AllBinaryGameCanvas");
    AllBinaryGameCanvas_init(this, commandListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
    return this;
}


void AllBinaryGameCanvas_updateMeasurement(AllBinaryGameCanvas* this, Graphics* graphics) {
        JAVA_TRY {
            Font* font = Graphics_getFont(graphics);
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->START), this->base.base.canvasStrings->FD_WIDTH), MyFontProcessor_defaultCharWidth(font)), this->base.base.canvasStrings->FD_HEIGHT), Font_getHeight(font))), this, this->base.base.canvasStrings->UPDATE_MEASUREMENT);
            this->fontHeightP = Font_getHeight(font);
            MyFormUtil_updateMeasurement(this->myFormUtil, graphics);
            Rectangle* popupMenuRectangle = MyFormUtil_getPopupMenuRectangle(this->myFormUtil);
            BasicPopupMenuPaintable* basicPopupMenuPaintable = (((BasicPopupMenuPaintable*) AllBinaryGameCanvas_getOpenMenuPaintable(this)));
            BasicPopupMenuPaintable_initMethod(basicPopupMenuPaintable, popupMenuRectangle);
            if (AllBinaryGameCanvas_getPopupMenuInputProcessor(this) != NoMenuInputProcessor_getInstance()) {
                PopupMenuInputProcessor* popupMenuInputProcessor = (((PopupMenuInputProcessor*) AllBinaryGameCanvas_getPopupMenuInputProcessor(this)));
                PopupMenuInputProcessor_initMethod(popupMenuInputProcessor, popupMenuRectangle);
            }
            this->myFontProcessor = MyFontProcessor_getInstance();
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
}


BaseMenuBehavior* AllBinaryGameCanvas_getInGameMenuBehavior(AllBinaryGameCanvas* this) {
        return InGameMenuBehavior_getInstance();
}


void AllBinaryGameCanvas_setCurrentThread(AllBinaryGameCanvas* this) {
        if (J2MEUtil_isHTML()) {
            RunnableCanvas_setCurrentThreadFake((&this->base));
        } else {
            RunnableCanvas_setCurrentThread((&this->base));
        }
}


void AllBinaryGameCanvas_onEvent(AllBinaryGameCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AllBinaryGameCanvas_onDisplayChangeEvent(AllBinaryGameCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->START), java_string_of(DisplayInfoSingleton_getInstance()))), this, this->base.base.canvasStrings->UPDATE_MEASUREMENT);
            this->myFontProcessor = this->updateMyFontProcessor;
            BaseMenuBehavior_onDisplayChangeEvent(this->menuBehavior, this, displayChangeEvent);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_updateMenuFromEvent(AllBinaryGameCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        ScrollSelectionForm_initMethod(this->menuForm, rectangle, formType);
        if (this->currentTouchInputFactory != NoButtonsTouchInputFactory_getInstance()) {
            TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BaseTouchInput_getList(this->currentTouchInputFactory));
        }
        this->myFontProcessor = this->updateMyFontProcessor;
}


// throws Exception
void AllBinaryGameCanvas_processSleep(AllBinaryGameCanvas* this) {
        RunnableCanvas_processSleep((&this->base));
        if (AllBinaryMediaManager_update()) {
            if (!PlayerQueue_process(this->primaryPlayerQueue)) {
                PlayerQueue_process(this->secondaryPlayerQueue);
            }
        }
        if (BasicMenuInputProcessor_processInputList(this->menuInputProcessor) != -1) {
            Processor_process(this->base.runnableCanvasRefreshHelper);
        }
}


// throws Exception
void AllBinaryGameCanvas_initPopupMenu(AllBinaryGameCanvas* this) {
        if (this->popupMenuInputProcessor == NoMenuInputProcessor_getInstance()) {
            Features* features = Features_getInstance();
            Rectangle* popupMenuRectangle = MyFormUtil_getPopupMenuRectangle(this->myFormUtil);
            if (Features_isFeature(features, this->touchFeatureFactory->TOUCH_ENABLED)) {
                AllBinaryGameCanvas_setOpenMenuPaintable(this, BasicPopupMenuPaintable_new(popupMenuRectangle, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager)));
                AllBinaryGameCanvas_setPopupMenuInputProcessor(this, PopupMenuInputProcessor_new(BasicArrayListD_new(), -1, this, popupMenuRectangle));
            }
        } else {
        }
}


void AllBinaryGameCanvas_initMenu(AllBinaryGameCanvas* this) {
        JAVA_TRY {
            BaseMenuBehavior_initMenu(this->menuBehavior, this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, "initMenu", e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_initMenu2(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_closeMenu(this);
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        GameLimitedCommandTextItemArrayFactory* gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getInstance();
        CommandTextItemArrayFactory* commandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(gameLimitedCommandTextItemArrayFactory);
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(commandTextItemArrayFactory, MyCanvas_getCommandStack(this), AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        AllBinaryGameCanvas_setMenuForm(this, CommandCurrentSelectionFormFactory_getInstance(StringUtil_getInstance()->EMPTY_STRING, items, rectangle, formType, 25, false, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager)));
        ScrollSelectionForm* scrollSelectionForm = AllBinaryGameCanvas_getMenuForm(this);
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->touchFeatureFactory->TOUCH_ENABLED)) {
            this->mainMenuInputProcessor = PopupCommandFormInputProcessor_new(BasicArrayListD_new(), -1, this, scrollSelectionForm, ((PopupMenuInputProcessor*) AllBinaryGameCanvas_getPopupMenuInputProcessor(this)));
        } else {
        }
        AllBinaryGameCanvas_setMenuInputProcessor(this, AllBinaryGameCanvas_getPopupMenuInputProcessor(this));
        if (scrollSelectionForm != ScrollSelectionFormNoneFactory_getInstance()) {
            AllBinaryGameCanvas_setFormPaintable(this, FormPaintable_new(scrollSelectionForm));
        } else {
        }
        AllBinaryGameCanvas_closeMenu(this);
}


void AllBinaryGameCanvas_updateMenu(AllBinaryGameCanvas* this) {
        JAVA_TRY {
            BaseMenuBehavior_updateMenu(this->menuBehavior, this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, "initMenu", e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_updateMenu2(AllBinaryGameCanvas* this) {
        ScrollSelectionForm* scrollSelectionForm = AllBinaryGameCanvas_getMenuForm(this);
        ABCustomForm_deleteAll(scrollSelectionForm);
        GameLimitedCommandTextItemArrayFactory* gameLimitedCommandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getInstance();
        CommandTextItemArrayFactory* commandTextItemArrayFactory = GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(gameLimitedCommandTextItemArrayFactory);
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(commandTextItemArrayFactory, MyCanvas_getCommandStack(this), AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        int32_t size = java_array_length(items);
        for (int32_t index = 0; index < size; index++) {
            ScrollSelectionForm_append(scrollSelectionForm, items[index]);
        }
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        ScrollSelectionForm_initMethod(scrollSelectionForm, rectangle, formType);
}


// synchronized
void AllBinaryGameCanvas_pause(AllBinaryGameCanvas* this) {
        DemoGameBehavior_pause(this->gameBehavior, this);
        AllBinaryGameCanvas_closeMenu(this);
        MyCanvas_pause((&this->base));
        TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
        TsUtil_gc(this->base.tsUtil);
}


// synchronized
void AllBinaryGameCanvas_unPause(AllBinaryGameCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->gameStrings->UNPAUSE);
        AllBinaryGameCanvas_closeMenu(this);
        TsUtil_gc(this->base.tsUtil);
        MyCanvas_unPause((&this->base));
        TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
        DemoGameBehavior_unPause(this->gameBehavior, this);
}


bool AllBinaryGameCanvas_isPausable(AllBinaryGameCanvas* this) {
        if (CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory_getInstance()) == NullWaitGameRunnable_getInstance()) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void AllBinaryGameCanvas_popupMenu(AllBinaryGameCanvas* this) {
        BaseMenuBehavior_popupMenu(this->menuBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_popupMenu2(AllBinaryGameCanvas* this) {
        PlayerQueue_add(this->primaryPlayerQueue, SelectSound_getInstance());
        AllBinaryGameCanvas_setMenuPaintable(this, AllBinaryGameCanvas_getFormPaintable(this));
        AllBinaryGameCanvas_setMenuInputProcessor(this, this->mainMenuInputProcessor);
        BasicEventHandler_addListenerInterface(this->basicMotionGesturesHandler, this->mainMenuInputProcessor);
        GameKeyEventHandler_addListener(this->gameKeyEventHandler, this->mainMenuInputProcessor);
}


// throws Exception
void AllBinaryGameCanvas_toggleMenu(AllBinaryGameCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->gameStrings->TOGGLE_MENU);
        if (AllBinaryGameCanvas_getMenuPaintable(this) == AllBinaryGameCanvas_getOpenMenuPaintable(this)) {
            AllBinaryGameCanvas_pause(this);
            AllBinaryGameCanvas_updateMenu(this);
            AllBinaryGameCanvas_popupMenu(this);
        } else if (AllBinaryGameCanvas_getMenuPaintable(this) == AllBinaryGameCanvas_getFormPaintable(this)) {
            PlayerQueue_add(this->primaryPlayerQueue, SelectSound_getInstance());
            AllBinaryGameCanvas_unPause(this);
        }
}


void AllBinaryGameCanvas_closeMenu(AllBinaryGameCanvas* this) {
        BaseMenuBehavior_closeMenu(this->menuBehavior, this);
}


void AllBinaryGameCanvas_closeMenu2(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setMenuPaintable(this, AllBinaryGameCanvas_getOpenMenuPaintable(this));
        BasicEventHandler_removeListener(this->basicMotionGesturesHandler, this->mainMenuInputProcessor);
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, this->mainMenuInputProcessor);
        AllBinaryGameCanvas_setMenuInputProcessor(this, AllBinaryGameCanvas_getPopupMenuInputProcessor(this));
}


void AllBinaryGameCanvas_open(AllBinaryGameCanvas* this) {
        BasicEventHandler_addListenerInterface(this->basicMotionGesturesHandler, this->menuInputProcessor);
        GameKeyEventHandler_addListener(this->gameKeyEventHandler, this->menuInputProcessor);
}


void AllBinaryGameCanvas_close(AllBinaryGameCanvas* this) {
        BasicEventHandler_removeListener(this->basicMotionGesturesHandler, this->menuInputProcessor);
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, this->menuInputProcessor);
        PlayerQueue_clear(this->primaryPlayerQueue);
        PlayerQueue_clear(this->secondaryPlayerQueue);
}


// throws Exception
void AllBinaryGameCanvas_processorInit(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setMainStateProcessor(this, Processor_getInstance());
        AllBinaryGameCanvas_setProcessGameProcessorInit(this);
}


void AllBinaryGameCanvas_setProcessGameProcessorInit(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setProcessGameProcessor(this, GameProcessor_new(this));
}


void AllBinaryGameCanvas_initSpecialPaint(AllBinaryGameCanvas* this) {
        BaseMenuBehavior_initSpecialPaint(this->menuBehavior, this);
}


// throws Exception
static void AllBinaryGameCanvas_initMethod(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager, bool buffered) {
        TimeDelayHelper_setStartTimeTNT(this->gameStateTimeHelper);
        AllBinaryGameCanvas_setHighScoreSubmitted(this, false);
        AllBinaryGameCanvas_setLayerManager(this, gameLayerManager);
        if (!buffered) {
            const char* BUFF_MESSAGE = "XXX Not Buffering Causes Concurrency Issues XXX";
            LogUtil_putF(this->base.base.logUtil, BUFF_MESSAGE, this, this->base.base.commonStrings->CONSTRUCTOR);
        } else {
            java_throw(java_exception_new("Exception", "Buffering is disabled"));
        }
        AllBinaryGameCanvas_setGameInputProcessor(this, Processor_getInstance());
        Features* features = Features_getInstance();
        if (Features_isFeature(features, GameFeatureFactory_getInstance()->CHEATING)) {
            this->isCheating = true;
            this->cheatProcessor = CheatGameInputProcessor_new(this);
            GameKeyEventHandler_addListener(this->gameKeyEventHandler, this->cheatProcessor);
        } else {
            this->isCheating = false;
            this->cheatProcessor = NoPlayerGameInput_getInstance();
        }
        this->realEndGameProcessor = EndGameProcessor_new(this);
        AllBinaryGameCanvas_setEndGameProcessor(this, Processor_getInstance());
        this->realStartIntermissionProcessor = StartIntermissionProcessor_new(this);
        this->startIntermissionProcessor = Processor_getInstance();
        AllBinaryGameCanvas_setEndGameStatePaintable(this, EndGamePaintable_new(this));
        AllBinaryGameCanvas_setEndGamePaintable(this, NullPaintable_getInstance());
        AllBinaryGameCanvas_setIntermissionPaintable(this, NullPaintable_getInstance());
        IntermissionInterface_setListener(AllBinaryGameCanvas_getStartIntermissionInterface(this), this);
}


void AllBinaryGameCanvas_notifyIntermission(AllBinaryGameCanvas* this, bool enable) {
        if (enable) {
            this->startIntermissionProcessor = this->realStartIntermissionProcessor;
        } else {
            this->startIntermissionProcessor = Processor_getInstance();
        }
        if (enable) {
            AllBinaryGameCanvas_setIntermissionPaintable(this, AllBinaryGameCanvas_getStartIntermissionPaintable(this));
        } else {
            AllBinaryGameCanvas_setIntermissionPaintable(this, NullPaintable_getInstance());
        }
}


// throws Exception
void AllBinaryGameCanvas_mediaInit(AllBinaryGameCanvas* this) {
        ForcedLogUtil_log(this->base.base.commonStrings->NOT_IMPLEMENTED, this);
}


// throws Exception
// synchronized
void AllBinaryGameCanvas_initConfigurable(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_addNormalPortion(progressCanvas, 50, "Setting Configurables");
        GameInitializationUtil_initGame(GameInitializationUtil_getInstance(), abeClientInformation, this, this->gameInitializationInterfaceFactoryInterface);
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        ChangedGameFeatureListener* changedGameFeatureListener = ChangedGameFeatureListener_getInstance();
        if (BaseChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, gameFeatureFactory->SOUND)) {
            Features* features = Features_getInstance();
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendboolean(StringMaker_append(StringMaker_new(), "Sound Changing To: "), Features_isFeature(features, gameFeatureFactory->SOUND))), this, "initConfigurable");
            AllBinaryGameCanvas_mediaInit(this);
            BaseChangedGameFeatureListener_remove(changedGameFeatureListener, gameFeatureFactory->SOUND);
        }
        SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
        if (BaseChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, sensorFeatureFactory->ORIENTATION_SENSORS) || BaseChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, sensorFeatureFactory->NO_ORIENTATION) || BaseChangedGameFeatureListener_isChangedFeature(changedGameFeatureListener, sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS)) {
            BaseChangedGameFeatureListener_remove(changedGameFeatureListener, sensorFeatureFactory->NO_ORIENTATION);
            BaseChangedGameFeatureListener_remove(changedGameFeatureListener, sensorFeatureFactory->ORIENTATION_SENSORS);
            BaseChangedGameFeatureListener_remove(changedGameFeatureListener, sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS);
        }
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        AllBinaryGameCanvas_loadResourceLoadingLevel(this, resourceLoadingLevelFactory->LOAD_GAME);
}


// throws Exception
void AllBinaryGameCanvas_initApp(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation) {
        AllBinaryGameCanvas_initConfigurable(this, abeClientInformation);
        AllBinaryGameCanvas_processorInit(this);
        SensorGameUpdateProcessor_process(this->sensorGameUpdateProcessor, this->gameLayerManager);
        SensorGameUpdateProcessor_sendNotifications(this->sensorGameUpdateProcessor, this->gameLayerManager);
        AllBinaryGameCanvas_initTouch(this);
}


// throws Exception
void AllBinaryGameCanvas_initTouch(AllBinaryGameCanvas* this) {
        GameInitializedEvent* gameInitializedEvent = GameInitializationUtil_getInstance()->EVENT;
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        GameInitializedEvent_setResourceLoadingLevel(gameInitializedEvent, resourceLoadingLevelFactory->LOAD_TOUCH);
        BasicEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), gameInitializedEvent);
        TouchButtonFactory_defaultList(this->touchButtonFactory);
        AllBinaryGameCanvas_updateTouch(this);
        AllBinaryGameCanvas_postInitTouch(this);
}


// throws Exception
void AllBinaryGameCanvas_updateCurrentTouchInputFactory(AllBinaryGameCanvas* this, BaseTouchInput* nextTouchInput) {
        if (nextTouchInput != this->currentTouchInputFactory) {
            this->currentTouchInputFactory = nextTouchInput;
            PreLogUtil_put(java_string_of(this->currentTouchInputFactory), this, this->gameInputStrings->UDPATE_CURRENT_TOUCH_INPUT_FACTORY);
            TouchButtonFactory_toggle(this->touchButtonFactory, AllBinaryGameCanvas_isPaused(this), BaseTouchInput_getList(this->currentTouchInputFactory));
        }
}


// throws Exception
void AllBinaryGameCanvas_updateTouch(AllBinaryGameCanvas* this) {
        DemoGameBehavior_updateTouch(this->gameBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_updateTouch2(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS)) {
            if (GameInfo_getCurrentLevel(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager)) - AllBinaryGameCanvas_getStartLevel(this) == 1) {
                AllBinaryGameCanvas_setTouchPaintableP(this, NullPaintable_getInstance());
            }
        }
}


// throws Exception
void AllBinaryGameCanvas_postInitTouch(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_setTouchButtonsPaintable(this, TouchButtonsPaintableFactory_getInstance(AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager)));
        AllBinaryGameCanvas_updateScreenButtonPaintable(this);
}


void AllBinaryGameCanvas_initCommands(AllBinaryGameCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        AllBinaryGameCanvas_addCommands(this);
        MyCanvas_setCommandListener(this, cmdListener);
}


void AllBinaryGameCanvas_addCommands(AllBinaryGameCanvas* this) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        MyCommandsFactory* myCommandsFactory = MyCommandsFactory_getInstance();
        if (DebugFactory_getInstance() != NoDebug_getInstance()) {
            MyCanvas_addCommand(this, gameCommandsFactory->START_TRACE);
        }
        MyCanvas_addCommand(this, gameCommandsFactory->RESTART_COMMAND);
        MyCanvas_addCommand(this, myCommandsFactory->PAUSE_COMMAND);
        MyCanvas_addCommand(this, gameCommandsFactory->QUIT_COMMAND);
        bool isOverScan = GenericOperatingSystem_isOverScan(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()));
        if (J2MEUtil_isHTML()) {
        } else if ((SWTUtil_staticInit(), SWTUtil_isSWT)) {
        } else if (!isOverScan) {
            if (TouchScreenFactory_isTouch(TouchScreenFactory_getInstance()) && InGameFeatures_isAny(InGameFeatures_new())) {
                MyCanvas_addCommand(this, (InGameOptionsForm_staticInit(), InGameOptionsForm_DISPLAY));
            }
            MyCanvas_addCommand(this, gameCommandsFactory->SAVE);
            MyCanvas_addCommand(this, gameCommandsFactory->DISPLAY_LOAD_FORM);
        }
}


void AllBinaryGameCanvas_itemStateChanged(AllBinaryGameCanvas* this, Item* item) {
        JAVA_TRY {
            const char* itemLabel = Item_getLabel(item);
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonLabels->ITEM_LABEL), itemLabel)), this, "itemStateChanged");
            if (java_instanceof(item, "ChoiceGroup")) {
                GameFeatureUtil* gameFeatureUtil = GameFeatureUtil_getInstance();
                if (GameFeatureUtil_isExclusive(gameFeatureUtil, itemLabel)) {
                    GameFeatureUtil_updateExclusiveForChoiceGroup(gameFeatureUtil, ((ChoiceGroup*) item));
                } else {
                    GameFeatureUtil_updateMultiple(gameFeatureUtil, ((ChoiceGroup*) item));
                }
            }
            SensorGameUpdateProcessor_process(this->sensorGameUpdateProcessor, this->gameLayerManager);
            AllBinaryGameCanvas_updateTouch(this);
            AllBinaryGameCanvas_updateScreenButtonPaintable(this);
            SensorGameUpdateProcessor_sendNotifications(this->sensorGameUpdateProcessor, this->gameLayerManager);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, "itemStateChanged", e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_updateScreenButtonPaintable(AllBinaryGameCanvas* this) {
        DemoGameBehavior_updateScreenButtonPaintable(this->gameBehavior, this);
}


void AllBinaryGameCanvas_updateScreenButtonPaintable2(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS)) {
            AllBinaryGameCanvas_setTouchPaintableP(this, AllBinaryGameCanvas_getTouchButtonsPaintable(this));
            AllBinaryGameCanvas_setStartLevel(this, GameInfo_getCurrentLevel(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager)));
        } else if (Features_isFeature(features, this->touchFeatureFactory->SHOW_SCREEN_BUTTONS)) {
            AllBinaryGameCanvas_setTouchPaintableP(this, AllBinaryGameCanvas_getTouchButtonsPaintable(this));
        } else if (Features_isFeature(features, this->touchFeatureFactory->HIDE_SCREEN_BUTTONS)) {
            AllBinaryGameCanvas_setTouchPaintableP(this, NullPaintable_getInstance());
        } else {
            AllBinaryGameCanvas_setTouchPaintableP(this, NullPaintable_getInstance());
        }
}


AllBinaryGameLayerManager* AllBinaryGameCanvas_getLayerManager(AllBinaryGameCanvas* this) {
        return this->gameLayerManager;
}


void AllBinaryGameCanvas_setLayerManager(AllBinaryGameCanvas* this, AllBinaryGameLayerManager* layerManager) {
        this->gameLayerManager = layerManager;
}


// synchronized
bool AllBinaryGameCanvas_isGameOver(AllBinaryGameCanvas* this) {
        return this->gameOver;
}


// synchronized
void AllBinaryGameCanvas_setGameOver(AllBinaryGameCanvas* this, bool gameOver) {
        this->gameOver = gameOver;
}


// throws Exception
void AllBinaryGameCanvas_processGameOver(AllBinaryGameCanvas* this) {
        PreLogUtil_put(this->base.base.commonStrings->START, this, this->gameStrings->SET_GAME_OVER);
        AllBinaryGameCanvas_setGameOver(this, true);
        MyCanvas_removePauseCommand(this);
        AllBinaryGameCanvas_setGameState(this, this->gameStateFactory->SHOW_END_RESULT_GAME_STATE);
        AllBinaryGameCanvas_setEndGamePaintable(this, AllBinaryGameCanvas_getEndGameStatePaintable(this));
}


bool AllBinaryGameCanvas_isHighScoreSubmitted(AllBinaryGameCanvas* this) {
        return this->highScoreSubmitted;
}


// throws Exception
void AllBinaryGameCanvas_setHighScoreSubmitted(AllBinaryGameCanvas* this, bool highScoreSubmitted) {
        this->highScoreSubmitted = highScoreSubmitted;
        if (highScoreSubmitted) {
            HighScoresHelperBaseInterface_setSelectedHighScores(this->highScoresHelper, NullHighScoresSingletonFactory_getInstance());
        }
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendboolean(StringMaker_append(StringMaker_new(), "isHighScoreSubmitted: "), highScoreSubmitted)), this, "setHighScoreSubmitted");
}


GameState* AllBinaryGameCanvas_getGameState(AllBinaryGameCanvas* this) {
        return this->gameState;
}


// throws Exception
void AllBinaryGameCanvas_setGameState(AllBinaryGameCanvas* this, GameState* gameState) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->gameStrings->GAME_STATE), StringUtil_toString(this->base.base.stringUtil, gameState))), this, this->gameStrings->SET_GAME_STATE);
        this->gameState = gameState;
        TimeDelayHelper_setStartTimeTNT(this->gameStateTimeHelper);
        AllBinaryGameCanvas_updateEndGameProcessor(this);
        AllBinaryGameCanvas_updateGameKeyEventProcessor(this);
        DemoGameBehavior_setGameState(this->gameBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_updateGameState(AllBinaryGameCanvas* this) {
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdStateBase_processAdState(gameAdState, this->gameState, GameInfo_getGameType(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager)));
        if (this->gameState != this->gameStateFactory->PLAYING_GAME_STATE) {
            GameAdStateBase_processPageAdState(gameAdState);
        }
}


static void AllBinaryGameCanvas_updateGameKeyEventProcessor(AllBinaryGameCanvas* this) {
        if (AllBinaryGameCanvas_getGameState(this) != this->gameStateFactory->PLAYING_GAME_STATE || this->isCheating) {
        } else {
        }
}


void AllBinaryGameCanvas_removeAllGameKeyInputListenersOnBuild(AllBinaryGameCanvas* this) {
        AllBinaryGameCanvas_removeAllGameKeyInputListeners(this);
}


void AllBinaryGameCanvas_removeAllGameKeyInputListeners(AllBinaryGameCanvas* this) {
        DemoGameBehavior_removeAllGameKeyInputListeners(this->gameBehavior, this);
}


void AllBinaryGameCanvas_removeAllGameKeyInputListeners2(AllBinaryGameCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Remove PlayerInput Listeners", this, "removeAllGameKeyInputListeners");
        for (int32_t index = BasicArrayList_size(this->localPlayerGameInputList) - 1; index >= 0; index--) {
            PlayerGameInput* playerGameInput = ((PlayerGameInput*) BasicArrayList_get(this->localPlayerGameInputList, index));
            AllBinaryGameCanvas_removeKeyInputListener(this, playerGameInput);
            GameInput_removeNonAIInputGameKeyEvents(playerGameInput);
        }
}


void AllBinaryGameCanvas_removeKeyInputListener(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput) {
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, playerGameInput);
}


// throws Exception
void AllBinaryGameCanvas_updateEndGameProcessor(AllBinaryGameCanvas* this) {
        DemoGameBehavior_updateEndGameProcessor(this->gameBehavior, this);
}


// throws Exception
void AllBinaryGameCanvas_updateEndGameProcessor2(AllBinaryGameCanvas* this) {
        if (AllBinaryGameCanvas_getGameState(this) == this->gameStateFactory->SHOW_END_RESULT_GAME_STATE || AllBinaryGameCanvas_getGameState(this) == this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE) {
            AllBinaryGameCanvas_setEndGameProcessor(this, this->realEndGameProcessor);
        } else {
            AllBinaryGameCanvas_setEndGameProcessor(this, Processor_getInstance());
        }
}


// throws Exception
void AllBinaryGameCanvas_buildGameInit(AllBinaryGameCanvas* this, bool isPortion) {
}


// throws Exception
void AllBinaryGameCanvas_cleanupGame(AllBinaryGameCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->CLEANUP);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_addNormalPortion(progressCanvas, 10, "Cleaning Up");
        PlayerQueue_clear(this->primaryPlayerQueue);
        PlayerQueue_clear(this->secondaryPlayerQueue);
        GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory_getInstance());
}


// throws Exception
void AllBinaryGameCanvas_loadResourceLoadingLevel(AllBinaryGameCanvas* this, ResourceLoadingLevel* resourceLoadingLevel) {
        GameInitializedEvent* gameInitializedEvent = GameInitializationUtil_getInstance()->EVENT;
        GameInitializedEvent_setResourceLoadingLevel(gameInitializedEvent, resourceLoadingLevel);
        BasicEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), gameInitializedEvent);
}


// throws Exception
void AllBinaryGameCanvas_loadResources(AllBinaryGameCanvas* this, int32_t level) {
        GameInitializedEvent* gameInitializedEvent = GameInitializationUtil_getInstance()->EVENT;
        GameInitializedEvent_setLevel(gameInitializedEvent, level);
        BasicEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), gameInitializedEvent);
}


// throws Exception
void AllBinaryGameCanvas_updateColor(AllBinaryGameCanvas* this) {
}


// throws Exception
void AllBinaryGameCanvas_buildGame(AllBinaryGameCanvas* this, int32_t portion) {
        ScreenCapture_endRecording(this->screenCapture);
        ScreenCapture_startRecording(this->screenCapture);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Features* features = Features_getInstance();
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Generic Build");
        AllBinaryGameCanvas_removeAllGameKeyInputListenersOnBuild(this);
        AllBinaryGameCanvas_updateTouch(this);
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "High Scores");
        HighScoresFactoryInterface_fetchHighScores(this->highScoresFactoryInterface, AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), this->highScoresHelper);
        AllBinaryGameCanvas_setHighScoresPaintable(this, NullPaintable_getInstance());
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Finishing.");
        EndGameInfo_update(AllBinaryGameCanvas_getEndGameInfoP(this), AllBinaryGameLayerManager_getGameInfo(AllBinaryGameCanvas_getLayerManager(this)), this);
        this->isSingleKeyRepeatableProcessing = Features_isFeature(features, InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
        AllBinaryGameCanvas_setGameOver(this, false);
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Finishing..");
        AllBinaryGameCanvas_updateColor(this);
        InitUpdatePaintable_update(AllBinaryGameCanvas_getStartIntermissionPaintable(this));
        if (!AllBinaryGameCanvas_isRunningInAnotherThread(this)) {
            return;
        }
        ProgressCanvas_addNormalPortion(progressCanvas, portion, "Finishing...");
        if (RunnableCanvas_isMainCanvas(this) || !AllBinaryGameCanvas_isInitialized(this)) {
            if (Features_isFeature(features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
                if (MyCanvas_getCustomCommandListener(this) != nullptr) {
                    ProgressCanvas_end(progressCanvas);
                }
            } else {
                ProgressCanvas_end(progressCanvas);
            }
            AllBinaryGameCanvas_setInitialized(this, true);
        }
        if (MyCanvas_getCustomCommandListener(this) == (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER)) {
            LogUtil_putF(this->base.base.logUtil, "Show Game Paintable in DemoCanvas Thread", this, this->BUILD_GAME);
            DemoPaintableInterface_showGamePaintable(this->gameCanvasStartListener);
        } else {
            LogUtil_putF(this->base.base.logUtil, "No GameCanvasStartListener", this, this->BUILD_GAME);
        }
        ColorFillBasePaintable_setBasicColorP(this->colorFillPaintable, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager));
        DemoGameBehavior_buildGame(this->gameBehavior, this);
}


void AllBinaryGameCanvas_buildGame2(AllBinaryGameCanvas* this) {
        PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->gameInputStrings->ENABLE_PLAYER_GAME_INPUTS), BasicArrayList_size(this->localPlayerGameInputList))), this, this->BUILD_GAME);
        PlayerGameInput* playerGameInput = nullptr;
        for (int32_t index = BasicArrayList_size(this->localPlayerGameInputList) - 1; index >= 0; index--) {
            playerGameInput = ((PlayerGameInput*) BasicArrayList_get(this->localPlayerGameInputList, index));
            PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->gameInputStrings->ENABLE_PLAYER_GAME_INPUT), java_string_of(playerGameInput))), this, this->BUILD_GAME);
            GameInput_removeNonAIInputGameKeyEvents(playerGameInput);
            AllBinaryGameCanvas_addKeyInputListener(this, playerGameInput);
        }
}


void AllBinaryGameCanvas_addKeyInputListener(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput) {
        GameKeyEventHandler_addListenerForPlayer(GameKeyEventHandler_getInstance(), playerGameInput, PlayerGameInput_getPlayerInputId(playerGameInput));
}


void AllBinaryGameCanvas_setGameCanvasStartListener(AllBinaryGameCanvas* this, DemoPaintableInterface* gameCanvasStartListener) {
        this->gameCanvasStartListener = gameCanvasStartListener;
}


// throws Exception
void AllBinaryGameCanvas_loadState(AllBinaryGameCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->LOAD);
        ABHashtable* hashtable = AllBinaryGameCanvas_getLoadStateHashtable(this);
        if (hashtable != nullptr && Hashtable_size(hashtable) > 0) {
            const char* levelAsString = ((const char*) Hashtable_get(hashtable, ((void*) (GameInfo_staticInit(), GameInfo_LEVEL_NAME))));
            int32_t level = ((int32_t) (((int32_t) strtoll(levelAsString, nullptr, 10))));
            GameInfo* gameInfo = AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager);
            GameInfo_setCurrentLevel(gameInfo, level);
        }
}


// throws Exception
ABHashtable* AllBinaryGameCanvas_getLoadStateHashtable(AllBinaryGameCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonLabels->START_LABEL), StringUtil_toString(this->base.base.stringUtil, this->hashtable))), this, "getLoadStateHashtable");
        return this->hashtable;
}


void AllBinaryGameCanvas_setLoadStateHashtable(AllBinaryGameCanvas* this, ABHashtable* hashtable) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonLabels->START_LABEL), StringUtil_toString(this->base.base.stringUtil, hashtable))), this, "setLoadStateHashtable");
        this->hashtable = hashtable;
}


ABHashtable* AllBinaryGameCanvas_getCurrentStateHashtable(AllBinaryGameCanvas* this) {
        ABHashtable* hashtable = StdUtil_createHashtable(this->base.stdUtil);
        int32_t level = GameInfo_getCurrentLevel(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager));
        Hashtable_put(hashtable, (GameInfo_staticInit(), GameInfo_LEVEL_NAME), java_string_of(level));
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "End: "), StringUtil_toString(this->base.base.stringUtil, hashtable))), this, "getCurrentStateHashtable");
        return hashtable;
}


void AllBinaryGameCanvas_paintGameOver(AllBinaryGameCanvas* this, Graphics* graphics) {
        ForcedLogUtil_log(this->base.base.commonStrings->NOT_IMPLEMENTED, this);
}


void AllBinaryGameCanvas_draw(AllBinaryGameCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        Paintable_paint(this->gameSpecificPaintable, graphics);
}


void AllBinaryGameCanvas_clear(AllBinaryGameCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
}


void AllBinaryGameCanvas_paint(AllBinaryGameCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BaseGameStatistics_nextRefresh(this->baseGameStatistics);
        AllBinaryGameCanvas_draw(this, graphics);
        Paintable_paint(this->menuPaintable, graphics);
        PaintableInterface_paint(this->progressPaintable, graphics);
}


void AllBinaryGameCanvas_paintThreed(AllBinaryGameCanvas* this, Graphics* graphics) {
}


// throws Exception
void AllBinaryGameCanvas_processEndLevelIntermissionGameState(AllBinaryGameCanvas* this) {
}


void AllBinaryGameCanvas_nonBotPaint(AllBinaryGameCanvas* this, Graphics* graphics) {
        Paintable_paint(this->endGamePaintable, graphics);
        Paintable_paint(this->intermissionPaintable, graphics);
        AllBinaryGameCanvas_paintIntermission(this, graphics);
        Paintable_paint(this->touchPaintable, graphics);
}


void AllBinaryGameCanvas_paintIntermission(AllBinaryGameCanvas* this, Graphics* graphics) {
}


void AllBinaryGameCanvas_keyPressed(AllBinaryGameCanvas* this, int32_t keyCode) {
        AllBinaryGameCanvas_keyPressedByDevice(this, keyCode, 0);
}


void AllBinaryGameCanvas_keyReleased(AllBinaryGameCanvas* this, int32_t keyCode) {
        AllBinaryGameCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void AllBinaryGameCanvas_keyRepeated(AllBinaryGameCanvas* this, int32_t keyCode) {
        AllBinaryGameCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void AllBinaryGameCanvas_keyPressedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId) {
        InputProcessor_keyPressedByDevice(this->inputProcessor, keyCode, deviceId);
}


void AllBinaryGameCanvas_keyRepeatedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            InputProcessor_keyPressedByDevice(this->inputProcessor, keyCode, deviceId);
        }
}


void AllBinaryGameCanvas_keyReleasedByDevice(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId) {
        InputProcessor_keyReleasedByDevice(this->inputProcessor, this, keyCode, deviceId);
}


// throws Exception
void AllBinaryGameCanvas_handleRawKey(AllBinaryGameCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated) {
}


int32_t AllBinaryGameCanvas_endProgress(AllBinaryGameCanvas* this, bool isProgress) {
        int32_t portion = 30;
        if (isProgress && RunnableCanvas_isMainCanvas(this)) {
            MyCommandsFactory* myCommandsFactory = MyCommandsFactory_getInstance();
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_start(progressCanvas);
            CommandListener_commandAction(MyCanvas_getCustomCommandListener(this), myCommandsFactory->SET_DISPLAYABLE, progressCanvas);
            portion = 4;
        }
        return portion;
}


// throws Exception
void AllBinaryGameCanvas_processPlayingGame(AllBinaryGameCanvas* this) {
        GameInput_update(this->cheatProcessor);
        AllBinarySensor_update(SensorGameUpdateProcessor_getInputSensor(this->sensorGameUpdateProcessor));
        Processor_process(this->gameInputProcessor);
        AllBinaryLayerManager_process(this->gameLayerManager);
        Processor_process(this->startIntermissionProcessor);
}


// throws Exception
void AllBinaryGameCanvas_threadInit(AllBinaryGameCanvas* this) {
}


// throws Exception
void AllBinaryGameCanvas_processGame(AllBinaryGameCanvas* this) {
        MyCanvas_process((&this->base));
        if (AllBinaryMediaManager_update()) {
            if (!PlayerQueue_process(this->primaryPlayerQueue)) {
                PlayerQueue_process(this->secondaryPlayerQueue);
            }
        }
        Processor_process(this->mainStateProcessor);
        BasicMenuInputProcessor_processInputList(this->menuInputProcessor);
        Processor_process(this->endGameProcessor);
        BaseGameStatistics_nextFrame(this->baseGameStatistics);
}


void AllBinaryGameCanvas_notifyDonePainting(AllBinaryGameCanvas* this) {
        java_monitor_enter(this);
        {
            ThreadObjectUtil_notifyObject(this->base.threadObjectUtil, this);
        }
        java_monitor_exit(this);
}


// throws Exception
void AllBinaryGameCanvas_shouldWait(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (AndroidUtil_isAndroid()) {
        } else if (Features_isFeature(features, this->openGLFeatureFactory->OPENGL_2D)) {
        } else {
            if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL)) {
                OpenGLImageSpecificFactory* openGLImageSpecificFactory = OpenGLImageSpecificFactory_getInstance();
                while (openGLImageSpecificFactory->updating) {
                    java_sleep(this->YIELD_SLEEP);
                }
            }
        }
}


void AllBinaryGameCanvas_run(AllBinaryGameCanvas* this) {
        JAVA_TRY {
            LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START_RUNNABLE, this, this->base.base.commonStrings->RUN);
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Game Thread");
            AllBinaryGameCanvas_setCurrentThread(this);
            AllBinaryGameCanvas_setRunning(this, true);
            if (MyCanvas_getCustomCommandListener(this) == (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER)) {
                java_sleep(this->YIELD_SLEEP);
            }
            AllBinaryGameCanvas_shouldWait(this);
            AllBinaryGameCanvas_threadInit(this);
            if (MyCanvas_getCustomCommandListener(this) == (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER)) {
                java_sleep(this->YIELD_SLEEP);
            }
            AllBinaryGameCanvas_open(this);
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
            GameAdStateBase_initMethod(gameAdState);
            GameAdStateBase_setGameIsReady(gameAdState, true);
            DemoGameBehavior_run(this->gameBehavior, this);
            LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->END_RUNNABLE, this, this->base.base.commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_run2(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil_isHTML()) {
            if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
                LogUtil_putF(this->base.base.logUtil, Feature_getName(this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD), this, this->base.base.commonStrings->RUN);
            }
            if (J2MEUtil_isHTML()) {
                LogUtil_putF(this->base.base.logUtil, GraphicsStrings_getInstance()->HTML, this, this->base.base.commonStrings->RUN);
            }
            CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
            CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, this->gameRunnable);
            CurrentDisplayableFactory_setDisplayable(currentDisplayableFactory, this);
            OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
        } else if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS)) {
            LogUtil_putF(this->base.base.logUtil, Feature_getName(this->openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS), this, this->base.base.commonStrings->RUN);
            OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
            while (RunnableCanvas_isRunning(this)) {
                AllBinaryGameCanvas_run3(this);
            }
            AllBinaryGameCanvas_end(this);
        } else {
            LogUtil_putF(this->base.base.logUtil, "this thread", this, this->base.base.commonStrings->RUN);
            while (RunnableCanvas_isRunning(this)) {
                AllBinaryGameCanvas_run3(this);
            }
            AllBinaryGameCanvas_end(this);
        }
}


// throws Exception
void AllBinaryGameCanvas_run3(AllBinaryGameCanvas* this) {
        TimeDelayHelper_setStartTime(this->base.loopTimeHelper, GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
        GameTickDisplayInfoSingleton_update(this->gameTickDisplayInfoSingleton);
        AllBinaryGameCanvas_processGame(this);
        RunnableCanvas_processLoopSleep(this);
}


void AllBinaryGameCanvas_setRunning(AllBinaryGameCanvas* this, bool running) {
        RunnableCanvas_setRunning((&this->base), running);
        JAVA_TRY {
            Features* features = Features_getInstance();
            if (running) {
            } else {
                if (Features_isDefault(features, this->openGLFeatureFactory->OPENGL) || (SWTUtil_staticInit(), SWTUtil_isSWT)) {
                    if (GameInfo_getGameType(AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager)) != this->gameTypeFactory->BOT) {
                        CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                        CurrentDisplayableFactory_clearRunnable(currentDisplayableFactory);
                    }
                    AllBinaryGameCanvas_end(this);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.SET_RUNNING, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryGameCanvas_end(AllBinaryGameCanvas* this) {
        ScreenCapture_endRecording(this->screenCapture);
        BaseGameStatistics_add(this->baseGameStatistics, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), java_string_of(this->baseGameStatistics)), CommonSeps_getInstance()->NEW_LINE)));
        BaseGameStatistics_initMethod(this->baseGameStatistics);
        GameKeyEventHandler_removeListener(this->gameKeyEventHandler, this->cheatProcessor);
        AllBinaryGameCanvas_close(this);
        AllBinaryGameCanvas_removeAllGameKeyInputListeners(this);
        AllBinaryGameCanvas_endGameThread(this);
}


// throws Exception
void AllBinaryGameCanvas_endGameThread(AllBinaryGameCanvas* this) {
        BasicEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
        GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory_getInstance());
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdStateBase_notPlayingAdState(gameAdState);
}


HighScore* AllBinaryGameCanvas_createHighScore(AllBinaryGameCanvas* this, int64_t score) {
        GameInfo* gameInfo = AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager);
        return HighScore_new(0, "NONE", GameInfo_new(GameInfo_getGameType(gameInfo), GameInfo_getGameMode(gameInfo), PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 0, 0), score);
}


// throws Exception
void AllBinaryGameCanvas_setHighScore(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation, const char* name, int64_t score, bool autoSubmit, bool isLast) {
        DemoGameBehavior_setHighScore(this->gameBehavior, abeClientInformation, this, name, score, autoSubmit, isLast);
}


// throws Exception
void AllBinaryGameCanvas_setHighScore2(AllBinaryGameCanvas* this, AbeClientInformationInterface* abeClientInformation, const char* name, int64_t score, bool autoSubmit, bool isLast) {
        HighScore* highScore = AllBinaryGameCanvas_createHighScore(this, score);
        HighScoreTextBox* textBox = HighScoreTextBox_new(this->highScoresFactoryInterface, this->highScoresHelper, abeClientInformation, AllBinaryGameLayerManager_getGameInfo(this->gameLayerManager), MyCanvas_getCustomCommandListener(this), name, highScore, AllBinaryGameLayerManager_getBackgroundBasicColor(this->gameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(this->gameLayerManager));
        if (isLast) {
            CommandListener_commandAction(MyCanvas_getCustomCommandListener(this), GameCommandsFactory_getInstance()->SET_MENU_DISPLAYABLE, textBox);
        }
        if (autoSubmit) {
            ThreadPool_runTask(SecondaryThreadPool_getInstance(), SaveHighScoreRunnable_new(isLast, textBox));
        }
}


TimeDelayHelper* AllBinaryGameCanvas_getGameStateTimeHelper(AllBinaryGameCanvas* this) {
        return this->gameStateTimeHelper;
}


void AllBinaryGameCanvas_setInitialized(AllBinaryGameCanvas* this, bool initialized) {
        this->initialized = initialized;
}


bool AllBinaryGameCanvas_isInitialized(AllBinaryGameCanvas* this) {
        return this->initialized;
}


int32_t AllBinaryGameCanvas_getSourceId(AllBinaryGameCanvas* this) {
        return AllBinaryGameCanvas_id;
}


void AllBinaryGameCanvas_setProgressPaintable(AllBinaryGameCanvas* this, PaintableInterface* paintable) {
        this->progressPaintable = paintable;
}


IntermissionInterface* AllBinaryGameCanvas_getStartIntermissionInterface(AllBinaryGameCanvas* this) {
        return this->startIntermissionInterface;
}


IntermissionInterface* AllBinaryGameCanvas_getEndLevelIntermissionInterface(AllBinaryGameCanvas* this) {
        return this->endLevelIntermissionInterface;
}


void AllBinaryGameCanvas_setTouchPaintableP(AllBinaryGameCanvas* this, Paintable* paintable) {
        this->touchPaintable = paintable;
}


Paintable* AllBinaryGameCanvas_getTouchPaintableP(AllBinaryGameCanvas* this) {
        return this->touchPaintable;
}


void AllBinaryGameCanvas_setEndGamePaintable(AllBinaryGameCanvas* this, Paintable* endGamePaintable) {
        this->endGamePaintable = endGamePaintable;
}


Paintable* AllBinaryGameCanvas_getEndGamePaintable(AllBinaryGameCanvas* this) {
        return this->endGamePaintable;
}


void AllBinaryGameCanvas_setIntermissionPaintable(AllBinaryGameCanvas* this, Paintable* intermissionPaintable) {
        this->intermissionPaintable = intermissionPaintable;
}


Paintable* AllBinaryGameCanvas_getIntermissionPaintable(AllBinaryGameCanvas* this) {
        return this->intermissionPaintable;
}


EndGameInfo* AllBinaryGameCanvas_getEndGameInfoP(AllBinaryGameCanvas* this) {
        return this->endGameInfo;
}


void AllBinaryGameCanvas_setHighScoresPaintable(AllBinaryGameCanvas* this, Paintable* highScoresPaintable) {
        this->highScoresPaintable = highScoresPaintable;
}


Paintable* AllBinaryGameCanvas_getHighScoresPaintable(AllBinaryGameCanvas* this) {
        return this->highScoresPaintable;
}


HighScoresPaintable* AllBinaryGameCanvas_getRealHighScoresPaintable(AllBinaryGameCanvas* this) {
        return this->realHighScoresPaintable;
}


void AllBinaryGameCanvas_clearPlayerGameInputList(AllBinaryGameCanvas* this) {
        PlayerGameInput* playerGameInput = nullptr;
        for (int32_t index = BasicArrayList_size(this->localPlayerGameInputList) - 1; index >= 0; index--) {
            playerGameInput = ((PlayerGameInput*) BasicArrayList_get(this->localPlayerGameInputList, index));
            GameKeyEventHandler_removeListener(this->gameKeyEventHandler, playerGameInput);
        }
        BasicArrayList_clear(this->localPlayerGameInputList);
}


void AllBinaryGameCanvas_addPlayerGameInput(AllBinaryGameCanvas* this, PlayerGameInput* playerGameInput) {
        BasicArrayList_add(this->localPlayerGameInputList, playerGameInput);
}


void AllBinaryGameCanvas_setMenuInputProcessor(AllBinaryGameCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* AllBinaryGameCanvas_getMenuInputProcessor(AllBinaryGameCanvas* this) {
        return this->menuInputProcessor;
}


ScrollSelectionForm* AllBinaryGameCanvas_getMenuForm(AllBinaryGameCanvas* this) {
        return this->menuForm;
}


void AllBinaryGameCanvas_setMenuForm(AllBinaryGameCanvas* this, ScrollSelectionForm* menuForm) {
        this->menuForm = menuForm;
}


int32_t AllBinaryGameCanvas_getStartLevel(AllBinaryGameCanvas* this) {
        return this->startLevel;
}


void AllBinaryGameCanvas_setStartLevel(AllBinaryGameCanvas* this, int32_t startLevel) {
        this->startLevel = startLevel;
}


void AllBinaryGameCanvas_setTouchButtonsPaintable(AllBinaryGameCanvas* this, Paintable* touchButtonsPaintable) {
        this->touchButtonsPaintable = touchButtonsPaintable;
}


Paintable* AllBinaryGameCanvas_getTouchButtonsPaintable(AllBinaryGameCanvas* this) {
        return this->touchButtonsPaintable;
}


void AllBinaryGameCanvas_setGameInputProcessor(AllBinaryGameCanvas* this, Processor* gameInputProcessor) {
        this->gameInputProcessor = gameInputProcessor;
}


Processor* AllBinaryGameCanvas_getGameInputProcessor(AllBinaryGameCanvas* this) {
        return this->gameInputProcessor;
}


void AllBinaryGameCanvas_setEndGameProcessor(AllBinaryGameCanvas* this, Processor* endGameProcessor) {
        this->endGameProcessor = endGameProcessor;
}


Processor* AllBinaryGameCanvas_getEndGameProcessor(AllBinaryGameCanvas* this) {
        return this->endGameProcessor;
}


void AllBinaryGameCanvas_setEndGameStatePaintable(AllBinaryGameCanvas* this, Paintable* endGameStatePaintable) {
        this->endGameStatePaintable = endGameStatePaintable;
}


Paintable* AllBinaryGameCanvas_getEndGameStatePaintable(AllBinaryGameCanvas* this) {
        return this->endGameStatePaintable;
}


void AllBinaryGameCanvas_setNonBotPaintableP(AllBinaryGameCanvas* this, Paintable* nonBotPaintable) {
        this->nonBotPaintable = nonBotPaintable;
}


Paintable* AllBinaryGameCanvas_getNonBotPaintableP(AllBinaryGameCanvas* this) {
        return this->nonBotPaintable;
}


void AllBinaryGameCanvas_setStartIntermissionPaintable(AllBinaryGameCanvas* this, InitUpdatePaintable* startIntermissionPaintable) {
        this->startIntermissionPaintable = startIntermissionPaintable;
}


InitUpdatePaintable* AllBinaryGameCanvas_getStartIntermissionPaintable(AllBinaryGameCanvas* this) {
        return this->startIntermissionPaintable;
}


void AllBinaryGameCanvas_setMainStateProcessor(AllBinaryGameCanvas* this, Processor* mainStateProcessor) {
        this->mainStateProcessor = mainStateProcessor;
}


Processor* AllBinaryGameCanvas_getMainStateProcessor(AllBinaryGameCanvas* this) {
        return this->mainStateProcessor;
}


void AllBinaryGameCanvas_setProcessGameProcessor(AllBinaryGameCanvas* this, Processor* processGameProcessor) {
        this->processGameProcessor = processGameProcessor;
}


Processor* AllBinaryGameCanvas_getProcessGameProcessor(AllBinaryGameCanvas* this) {
        return this->processGameProcessor;
}


void AllBinaryGameCanvas_setOpenMenuPaintable(AllBinaryGameCanvas* this, Paintable* openMenuPaintable) {
        this->openMenuPaintable = openMenuPaintable;
}


Paintable* AllBinaryGameCanvas_getOpenMenuPaintable(AllBinaryGameCanvas* this) {
        return this->openMenuPaintable;
}


void AllBinaryGameCanvas_setPopupMenuInputProcessor(AllBinaryGameCanvas* this, BasicMenuInputProcessor* popupMenuInputProcessor) {
        this->popupMenuInputProcessor = popupMenuInputProcessor;
}


BasicMenuInputProcessor* AllBinaryGameCanvas_getPopupMenuInputProcessor(AllBinaryGameCanvas* this) {
        return this->popupMenuInputProcessor;
}


SensorGameUpdateProcessor* AllBinaryGameCanvas_getSensorGameUpdateProcessor(AllBinaryGameCanvas* this) {
        return this->sensorGameUpdateProcessor;
}


InputProcessor* AllBinaryGameCanvas_getRawGameInputProcessor(AllBinaryGameCanvas* this) {
        return this->rawGameInputProcessor;
}


InputProcessor* AllBinaryGameCanvas_getRawInputProcessor(AllBinaryGameCanvas* this) {
        return this->rawInputProcessor;
}


void AllBinaryGameCanvas_setInputProcessor(AllBinaryGameCanvas* this, InputProcessor* inputProcessor) {
        this->inputProcessor = inputProcessor;
}


InputProcessor* AllBinaryGameCanvas_getInputProcessor(AllBinaryGameCanvas* this) {
        return this->inputProcessor;
}


void AllBinaryGameCanvas_setMenuPaintable(AllBinaryGameCanvas* this, Paintable* menuPaintable) {
        this->menuPaintable = menuPaintable;
}


Paintable* AllBinaryGameCanvas_getMenuPaintable(AllBinaryGameCanvas* this) {
        return this->menuPaintable;
}


static void AllBinaryGameCanvas_setFormPaintable(AllBinaryGameCanvas* this, Paintable* formPaintable) {
        this->formPaintable = formPaintable;
}


Paintable* AllBinaryGameCanvas_getFormPaintable(AllBinaryGameCanvas* this) {
        return this->formPaintable;
}


void AllBinaryGameCanvas_setGameSpecificPaintableP(AllBinaryGameCanvas* this, Paintable* gameSpecificPaintable) {
        this->gameSpecificPaintable = gameSpecificPaintable;
}


Paintable* AllBinaryGameCanvas_getGameSpecificPaintableP(AllBinaryGameCanvas* this) {
        return this->gameSpecificPaintable;
}


bool AllBinaryGameCanvas_isSingleThread(AllBinaryGameCanvas* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) || (SWTUtil_staticInit(), SWTUtil_isSWT);
}


bool AllBinaryGameCanvas_isRunningInAnotherThread(AllBinaryGameCanvas* this) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
            return true;
        } else {
            return RunnableCanvas_isRunning(this);
        }
}


int32_t AllBinaryGameCanvas_getType(AllBinaryGameCanvas* this) {
        return AllBinaryGameCanvas_TYPE;
}


const char* AllBinaryGameCanvas_getTitle(AllBinaryGameCanvas* this) {
        return Displayable_getTitle((&this->base));
}


bool AllBinaryGameCanvas_isPaused(AllBinaryGameCanvas* this) {
        return MyCanvas_isPaused((&this->base));
}

