// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"
#include "org/allbinary/canvas/CustomGameMenuUtil.h"
#include "org/allbinary/canvas/FullScreenUtil.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/init/GameInitializationUtil.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/score/HighScoreCommands.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresHelper.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
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
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/graphics/paint/StatePaintable.h"
#include "org/allbinary/graphics/paint/StatePaintableFactory.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/EarlySoundsFactory.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/thread/NullThread.h"
#include "org/allbinary/thread/ThreadFactoryUtil.h"
#include "org/allbinary/thread/ThreadUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/DemoGameStartupRunnable.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoLimitedCommandTextItemArrayFactory.h"
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvasProgressUtil.h"
#include "org/allbinary/game/displayable/canvas/DemoGameRunnable.h"
#if __has_include("org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h")
#include "org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PersistentInputMapping.h")
#include "org/allbinary/game/displayable/canvas/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/PersistentInputMapping.h")
#include "org/allbinary/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/animation/PersistentInputMapping.h")
#include "org/allbinary/animation/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/animation/PersistentInputMapping.h")
#include "org/allbinary/animation/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/animation/special/PersistentInputMapping.h")
#include "org/allbinary/animation/special/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/business/advertisement/PersistentInputMapping.h")
#include "org/allbinary/business/advertisement/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/canvas/PersistentInputMapping.h")
#include "org/allbinary/canvas/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/canvas/PersistentInputMapping.h")
#include "org/allbinary/canvas/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/canvas/PersistentInputMapping.h")
#include "org/allbinary/canvas/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/canvas/PersistentInputMapping.h")
#include "org/allbinary/canvas/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/canvas/PersistentInputMapping.h")
#include "org/allbinary/canvas/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/PersistentInputMapping.h")
#include "org/allbinary/game/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/PersistentInputMapping.h")
#include "org/allbinary/game/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/PersistentInputMapping.h")
#include "org/allbinary/game/commands/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/init/PersistentInputMapping.h")
#include "org/allbinary/game/init/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/init/PersistentInputMapping.h")
#include "org/allbinary/game/init/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/PersistentInputMapping.h")
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/PersistentInputMapping.h")
#include "org/allbinary/game/layer/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/layer/PersistentInputMapping.h")
#include "org/allbinary/game/layer/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/midlet/PersistentInputMapping.h")
#include "org/allbinary/game/midlet/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/score/PersistentInputMapping.h")
#include "org/allbinary/game/score/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/state/PersistentInputMapping.h")
#include "org/allbinary/game/state/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/state/PersistentInputMapping.h")
#include "org/allbinary/game/state/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/PersistentInputMapping.h")
#include "org/allbinary/graphics/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/PersistentInputMapping.h")
#include "org/allbinary/graphics/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h")
#include "org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h")
#include "org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/PersistentInputMapping.h")
#include "org/allbinary/graphics/color/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/PersistentInputMapping.h")
#include "org/allbinary/graphics/color/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/command/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/screen/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/item/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/item/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PersistentInputMapping.h")
#include "org/allbinary/graphics/opengles/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PersistentInputMapping.h")
#include "org/allbinary/graphics/opengles/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PersistentInputMapping.h")
#include "org/allbinary/graphics/opengles/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PersistentInputMapping.h")
#include "org/allbinary/graphics/opengles/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PersistentInputMapping.h")
#include "org/allbinary/graphics/paint/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PersistentInputMapping.h")
#include "org/allbinary/graphics/paint/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PersistentInputMapping.h")
#include "org/allbinary/graphics/paint/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PersistentInputMapping.h")
#include "org/allbinary/graphics/paint/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PersistentInputMapping.h")
#include "org/allbinary/graphics/paint/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PersistentInputMapping.h")
#include "org/allbinary/graphics/paint/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/PersistentInputMapping.h")
#include "org/allbinary/input/motion/gesture/observer/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PersistentInputMapping.h")
#include "org/allbinary/logic/communication/log/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PersistentInputMapping.h")
#include "org/allbinary/logic/communication/log/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/math/PersistentInputMapping.h")
#include "org/allbinary/logic/math/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/PersistentInputMapping.h")
#include "org/allbinary/logic/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/PersistentInputMapping.h")
#include "org/allbinary/logic/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/os/PersistentInputMapping.h")
#include "org/allbinary/logic/system/os/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PersistentInputMapping.h")
#include "org/allbinary/logic/system/security/licensing/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PersistentInputMapping.h")
#include "org/allbinary/logic/system/security/licensing/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PersistentInputMapping.h")
#include "org/allbinary/logic/system/security/licensing/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PersistentInputMapping.h")
#include "org/allbinary/logic/system/security/licensing/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PersistentInputMapping.h")
#include "org/allbinary/logic/util/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PersistentInputMapping.h")
#include "org/allbinary/logic/util/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/media/audio/PersistentInputMapping.h")
#include "org/allbinary/media/audio/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/media/audio/PersistentInputMapping.h")
#include "org/allbinary/media/audio/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/media/audio/PersistentInputMapping.h")
#include "org/allbinary/media/audio/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/media/audio/PersistentInputMapping.h")
#include "org/allbinary/media/audio/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/string/PersistentInputMapping.h")
#include "org/allbinary/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/thread/PersistentInputMapping.h")
#include "org/allbinary/thread/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/thread/PersistentInputMapping.h")
#include "org/allbinary/thread/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/thread/PersistentInputMapping.h")
#include "org/allbinary/thread/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/time/PersistentInputMapping.h")
#include "org/allbinary/time/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/util/PersistentInputMapping.h")
#include "org/allbinary/util/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/util/PersistentInputMapping.h")
#include "org/allbinary/util/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/util/PersistentInputMapping.h")
#include "org/allbinary/util/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/CurrentDisplayableFactory.h")
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#endif
#if __has_include("org/allbinary/game/init/GameInitializationUtil.h")
#include "org/allbinary/game/init/GameInitializationUtil.h"
#endif
#if __has_include("org/allbinary/graphics/ResizableListenerHandler.h")
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
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
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h")
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoreCommands.h")
#include "org/allbinary/game/score/HighScoreCommands.h"
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
#if __has_include("org/allbinary/GenericOperatingSystem.h")
#include "org/allbinary/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/GenericOperatingSystem.h")
#include "org/allbinary/animation/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/GenericOperatingSystem.h")
#include "org/allbinary/animation/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/special/GenericOperatingSystem.h")
#include "org/allbinary/animation/special/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/canvas/GenericOperatingSystem.h")
#include "org/allbinary/canvas/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/game/input/event/GenericOperatingSystem.h")
#include "org/allbinary/game/input/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/event/GenericOperatingSystem.h")
#include "org/allbinary/game/input/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/event/GenericOperatingSystem.h")
#include "org/allbinary/game/input/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/event/GenericOperatingSystem.h")
#include "org/allbinary/game/input/event/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/GenericOperatingSystem.h")
#include "org/allbinary/game/input/mapping/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/layer/GenericOperatingSystem.h")
#include "org/allbinary/game/layer/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/layer/GenericOperatingSystem.h")
#include "org/allbinary/game/layer/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/midlet/GenericOperatingSystem.h")
#include "org/allbinary/game/midlet/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/score/GenericOperatingSystem.h")
#include "org/allbinary/game/score/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/graphics/displayable/screen/GenericOperatingSystem.h")
#include "org/allbinary/graphics/displayable/screen/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/graphics/paint/GenericOperatingSystem.h")
#include "org/allbinary/graphics/paint/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/gesture/observer/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GenericOperatingSystem.h")
#include "org/allbinary/logic/communication/log/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GenericOperatingSystem.h")
#include "org/allbinary/logic/communication/log/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/math/GenericOperatingSystem.h")
#include "org/allbinary/logic/math/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/logic/system/security/licensing/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/security/licensing/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/security/licensing/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/string/GenericOperatingSystem.h")
#include "org/allbinary/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/thread/GenericOperatingSystem.h")
#include "org/allbinary/thread/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/thread/GenericOperatingSystem.h")
#include "org/allbinary/thread/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/thread/GenericOperatingSystem.h")
#include "org/allbinary/thread/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoreCommands.h")
#include "org/allbinary/game/score/HighScoreCommands.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/CurrentDisplayableFactory.h")
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/graphics/paint/StatePaintable.h")
#include "org/allbinary/graphics/paint/StatePaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/graphics/paint/StatePaintable.h")
#include "org/allbinary/graphics/paint/StatePaintable.h"
#endif
#if __has_include("org/allbinary/animation/special/SpecialAnimation.h")
#include "org/allbinary/animation/special/SpecialAnimation.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresFactoryInterface.h")
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PlayerQueue.h")
#include "org/allbinary/game/displayable/canvas/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/PlayerQueue.h")
#include "org/allbinary/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/PlayerQueue.h")
#include "org/allbinary/animation/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/PlayerQueue.h")
#include "org/allbinary/animation/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/special/PlayerQueue.h")
#include "org/allbinary/animation/special/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/business/advertisement/PlayerQueue.h")
#include "org/allbinary/business/advertisement/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/PlayerQueue.h")
#include "org/allbinary/game/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/PlayerQueue.h")
#include "org/allbinary/game/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/commands/PlayerQueue.h")
#include "org/allbinary/game/commands/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/PlayerQueue.h")
#include "org/allbinary/game/configuration/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/init/PlayerQueue.h")
#include "org/allbinary/game/init/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/init/PlayerQueue.h")
#include "org/allbinary/game/init/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/PlayerQueue.h")
#include "org/allbinary/game/input/mapping/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/midlet/PlayerQueue.h")
#include "org/allbinary/game/midlet/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/state/PlayerQueue.h")
#include "org/allbinary/game/state/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/state/PlayerQueue.h")
#include "org/allbinary/game/state/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h")
#include "org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h")
#include "org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/command/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/screen/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PlayerQueue.h")
#include "org/allbinary/graphics/form/item/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PlayerQueue.h")
#include "org/allbinary/graphics/form/item/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/observer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PlayerQueue.h")
#include "org/allbinary/logic/communication/log/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PlayerQueue.h")
#include "org/allbinary/logic/communication/log/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/math/PlayerQueue.h")
#include "org/allbinary/logic/math/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/os/PlayerQueue.h")
#include "org/allbinary/logic/system/os/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PlayerQueue.h")
#include "org/allbinary/logic/util/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PlayerQueue.h")
#include "org/allbinary/logic/util/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/string/PlayerQueue.h")
#include "org/allbinary/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/time/PlayerQueue.h")
#include "org/allbinary/time/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PlayerQueue.h")
#include "org/allbinary/game/displayable/canvas/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/PlayerQueue.h")
#include "org/allbinary/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/PlayerQueue.h")
#include "org/allbinary/animation/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/PlayerQueue.h")
#include "org/allbinary/animation/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/special/PlayerQueue.h")
#include "org/allbinary/animation/special/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/business/advertisement/PlayerQueue.h")
#include "org/allbinary/business/advertisement/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerQueue.h")
#include "org/allbinary/canvas/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/PlayerQueue.h")
#include "org/allbinary/game/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/PlayerQueue.h")
#include "org/allbinary/game/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/commands/PlayerQueue.h")
#include "org/allbinary/game/commands/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/PlayerQueue.h")
#include "org/allbinary/game/configuration/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/init/PlayerQueue.h")
#include "org/allbinary/game/init/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/init/PlayerQueue.h")
#include "org/allbinary/game/init/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerQueue.h")
#include "org/allbinary/game/input/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/PlayerQueue.h")
#include "org/allbinary/game/input/mapping/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/midlet/PlayerQueue.h")
#include "org/allbinary/game/midlet/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/score/PlayerQueue.h")
#include "org/allbinary/game/score/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/state/PlayerQueue.h")
#include "org/allbinary/game/state/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/state/PlayerQueue.h")
#include "org/allbinary/game/state/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h")
#include "org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h")
#include "org/allbinary/graphics/canvas/transition/progress/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/color/PlayerQueue.h")
#include "org/allbinary/graphics/color/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/command/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/screen/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PlayerQueue.h")
#include "org/allbinary/graphics/form/item/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PlayerQueue.h")
#include "org/allbinary/graphics/form/item/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/paint/PlayerQueue.h")
#include "org/allbinary/graphics/paint/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/observer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PlayerQueue.h")
#include "org/allbinary/logic/communication/log/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PlayerQueue.h")
#include "org/allbinary/logic/communication/log/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/math/PlayerQueue.h")
#include "org/allbinary/logic/math/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/os/PlayerQueue.h")
#include "org/allbinary/logic/system/os/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PlayerQueue.h")
#include "org/allbinary/logic/system/security/licensing/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PlayerQueue.h")
#include "org/allbinary/logic/util/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PlayerQueue.h")
#include "org/allbinary/logic/util/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/string/PlayerQueue.h")
#include "org/allbinary/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/time/PlayerQueue.h")
#include "org/allbinary/time/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/special/SpecialAnimation.h")
#include "org/allbinary/animation/special/SpecialAnimation.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/thread/ThreadUtil.h")
#include "org/allbinary/thread/ThreadUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLThreadUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
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
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#endif


static constexpr int32_t DemoCanvas_id = 0;
static const char* DemoCanvas_BOT_GAME_STATS = "Bot Game Statistics: ";




















static void DemoCanvas_addGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated);

static void DemoCanvas_removeGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated);





























































void DemoCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoCanvas", "RunnableCanvas");
    java_register_method("DemoCanvas", "onEvent", (void*) DemoCanvas_onEvent);
    java_register_method("DemoCanvas", "onDisplayChangeEvent", (void*) DemoCanvas_onDisplayChangeEvent);
    java_register_method("DemoCanvas", "getCustomCommands", (void*) DemoCanvas_getCustomCommands);
    java_register_method("DemoCanvas", "initCommands", (void*) DemoCanvas_initCommands);
    java_register_method("DemoCanvas", "initPostPaint", (void*) DemoCanvas_initPostPaint);
    java_register_method("DemoCanvas", "mediaInit", (void*) DemoCanvas_mediaInit);
    java_register_method("DemoCanvas", "itemStateChanged", (void*) DemoCanvas_itemStateChanged);
    java_register_method("DemoCanvas", "initMenu", (void*) DemoCanvas_initMenu);
    java_register_method("DemoCanvas", "open", (void*) DemoCanvas_open);
    java_register_method("DemoCanvas", "close", (void*) DemoCanvas_close);
    java_register_method("DemoCanvas", "getSourceId", (void*) DemoCanvas_getSourceId);
    java_register_method("DemoCanvas", "keyPressed", (void*) DemoCanvas_keyPressed);
    java_register_method("DemoCanvas", "keyReleased", (void*) DemoCanvas_keyReleased);
    java_register_method("DemoCanvas", "keyRepeated", (void*) DemoCanvas_keyRepeated);
    java_register_method("DemoCanvas", "keyPressedByDevice", (void*) DemoCanvas_keyPressedByDevice);
    java_register_method("DemoCanvas", "keyReleasedByDevice", (void*) DemoCanvas_keyReleasedByDevice);
    java_register_method("DemoCanvas", "keyRepeatedByDevice", (void*) DemoCanvas_keyRepeatedByDevice);
    java_register_method("DemoCanvas", "addGameKeyEvent", (void*) DemoCanvas_addGameKeyEvent);
    java_register_method("DemoCanvas", "removeGameKeyEvent", (void*) DemoCanvas_removeGameKeyEvent);
    java_register_method("DemoCanvas", "pause", (void*) DemoCanvas_pause);
    java_register_method("DemoCanvas", "unPause", (void*) DemoCanvas_unPause);
    java_register_method("DemoCanvas", "isPausable", (void*) DemoCanvas_isPausable);
    java_register_method("DemoCanvas", "isGameOver", (void*) DemoCanvas_isGameOver);
    java_register_method("DemoCanvas", "setLoadStateHashtable", (void*) DemoCanvas_setLoadStateHashtable);
    java_register_method("DemoCanvas", "getLoadStateHashtable", (void*) DemoCanvas_getLoadStateHashtable);
    java_register_method("DemoCanvas", "getCurrentStateHashtable", (void*) DemoCanvas_getCurrentStateHashtable);
    java_register_method("DemoCanvas", "setHighScoreSubmitted", (void*) DemoCanvas_setHighScoreSubmitted);
    java_register_method("DemoCanvas", "paint", (void*) DemoCanvas_paint);
    java_register_method("DemoCanvas", "paintThreed", (void*) DemoCanvas_paintThreed);
    java_register_method("DemoCanvas", "processGameOver", (void*) DemoCanvas_processGameOver);
    java_register_method("DemoCanvas", "demoStateChange", (void*) DemoCanvas_demoStateChange);
    java_register_method("DemoCanvas", "updateDemoState", (void*) DemoCanvas_updateDemoState);
    java_register_method("DemoCanvas", "getNextRandom", (void*) DemoCanvas_getNextRandom);
    java_register_method("DemoCanvas", "createGameLayerManager", (void*) DemoCanvas_createGameLayerManager);
    java_register_method("DemoCanvas", "createRunnable", (void*) DemoCanvas_createRunnable);
    java_register_method("DemoCanvas", "create", (void*) DemoCanvas_create);
    java_register_method("DemoCanvas", "start", (void*) DemoCanvas_start);
    java_register_method("DemoCanvas", "preDemoProcess", (void*) DemoCanvas_preDemoProcess);
    java_register_method("DemoCanvas", "process", (void*) DemoCanvas_process);
    java_register_method("DemoCanvas", "startDemoGame", (void*) DemoCanvas_startDemoGame);
    java_register_method("DemoCanvas", "stopGameDemo", (void*) DemoCanvas_stopGameDemo);
    java_register_method("DemoCanvas", "showGamePaintable", (void*) DemoCanvas_showGamePaintable);
    java_register_method("DemoCanvas", "isReadyForStateChange", (void*) DemoCanvas_isReadyForStateChange);
    java_register_method("DemoCanvas", "processGame", (void*) DemoCanvas_processGame);
    java_register_method("DemoCanvas", "run", (void*) DemoCanvas_run);
    java_register_method("DemoCanvas", "run3", (void*) DemoCanvas_run3);
    java_register_method("DemoCanvas", "setRunning", (void*) DemoCanvas_setRunning);
    java_register_method("DemoCanvas", "end", (void*) DemoCanvas_end);
    java_register_method("DemoCanvas", "setGameState", (void*) DemoCanvas_setGameState);
    java_register_method("DemoCanvas", "getGameState", (void*) DemoCanvas_getGameState);
    java_register_method("DemoCanvas", "getGameCanvasRunnableInterface", (void*) DemoCanvas_getGameCanvasRunnableInterface);
    java_register_method("DemoCanvas", "isDemoLoading", (void*) DemoCanvas_isDemoLoading);
    java_register_method("DemoCanvas", "getState", (void*) DemoCanvas_getState);
    java_register_method("DemoCanvas", "setState", (void*) DemoCanvas_setState);
    java_register_method("DemoCanvas", "isHighScoreSubmitted", (void*) DemoCanvas_isHighScoreSubmitted);
    java_register_method("DemoCanvas", "getRealHighScoresPaintable", (void*) DemoCanvas_getRealHighScoresPaintable);
    java_register_method("DemoCanvas", "setSpecialAnimationInterface", (void*) DemoCanvas_setSpecialAnimationInterface);
    java_register_method("DemoCanvas", "getSpecialAnimationInterface", (void*) DemoCanvas_getSpecialAnimationInterface);
    java_register_method("DemoCanvas", "setPaintableInterface", (void*) DemoCanvas_setPaintableInterface);
    java_register_method("DemoCanvas", "getPaintableInterface", (void*) DemoCanvas_getPaintableInterface);
    java_register_method("DemoCanvas", "setDefaultPaintableInterface", (void*) DemoCanvas_setDefaultPaintableInterface);
    java_register_method("DemoCanvas", "getDefaultPaintableInterface", (void*) DemoCanvas_getDefaultPaintableInterface);
    java_register_method("DemoCanvas", "getHighScoresFactoryInterface", (void*) DemoCanvas_getHighScoresFactoryInterface);
    java_register_method("DemoCanvas", "setMenuInputProcessor", (void*) DemoCanvas_setMenuInputProcessor);
    java_register_method("DemoCanvas", "getMenuInputProcessor", (void*) DemoCanvas_getMenuInputProcessor);
    java_register_method("DemoCanvas", "getMenuForm", (void*) DemoCanvas_getMenuForm);
    java_register_method("DemoCanvas", "setMenuForm", (void*) DemoCanvas_setMenuForm);
    java_register_method("DemoCanvas", "isInitialized", (void*) DemoCanvas_isInitialized);
    java_register_method("DemoCanvas", "getOverlayPaintable", (void*) DemoCanvas_getOverlayPaintable);
    java_register_method("DemoCanvas", "setBasicGameDemoPaintable", (void*) DemoCanvas_setBasicGameDemoPaintable);
    java_register_method("DemoCanvas", "getBasicGameDemoPaintable", (void*) DemoCanvas_getBasicGameDemoPaintable);
    java_register_method("DemoCanvas", "setTempWait", (void*) DemoCanvas_setTempWait);
    java_register_method("DemoCanvas", "getTempWait", (void*) DemoCanvas_getTempWait);
    java_register_method("DemoCanvas", "isSingleThread", (void*) DemoCanvas_isSingleThread);
    java_register_method("DemoCanvas", "isRunningInAnotherThread", (void*) DemoCanvas_isRunningInAnotherThread);
    java_register_method("DemoCanvas", "getGameInitializationInterfaceFactoryInterface", (void*) DemoCanvas_getGameInitializationInterfaceFactoryInterface);
    java_register_method("DemoCanvas", "getType", (void*) DemoCanvas_getType);
    java_register_method("DemoCanvas", "getTitle", (void*) DemoCanvas_getTitle);
    java_register_method("DemoCanvas", "isPaused", (void*) DemoCanvas_isPaused);
}

static void DemoCanvas_initFields(DemoCanvas* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->myCommandsFactory = MyCommandsFactory_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->threadFactoryUtil = ThreadFactoryUtil_getInstance();
    this->formUtil = FormUtil_getInstance();
    this->fullscreenPaintable = FullScreenPaintableFactory_getInstance()->paintable;
    this->basicGameDemoPaintable = StatePaintableFactory_getInstance();
    this->specialAnimationInterface = SpecialAnimation_getInstance();
    this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
    this->fullScreenUtil = FullScreenUtil_getInstance();
    this->gameCanvas = NullGameCanvas_getInstance();
    this->highScoresHelper = HighScoresHelper_new();
    this->realHighScoresPaintable = HighScoresPaintable_new();
    this->highScoresPaintable = NullPaintable_getInstance();
    this->state = 0;
    this->canvasThread = (NullThread_staticInit(), NullThread_NULL_THREAD);
    this->timeDelayHelper = TimeDelayHelper_new(6000);
    this->basicColor = this->basicColorFactory->RED;
    
    
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuForm = ScrollSelectionForm_getNullScrollSelectionForm();
    
    this->initialized = false;
    
    this->defaultPaintableInterface = NullPaintable_getInstance();
    this->paintableInterface = NullPaintable_getInstance();
    
    this->progressPaintable = ProgressCanvasFactory_getLazyInstance();
    this->tempWait = NullWaitGameRunnable_getInstance()->WAIT;
    this->inputToGameKeyMapping = PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()));
    this->gameRunnable = NullWaitGameRunnable_getInstance();
    this->isSingleKeyRepeatableProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->lastKeyNotMapped = -1;
    this->SET_STATE = "setState";
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
}


void DemoCanvas_init(DemoCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
    DemoCanvas_register();
        RunnableCanvas_init(&this->base, commandListener, CurrentDisplayableFactory_getInstance()->DEFAULT_CHILD_NAME_LIST, true);
        DemoCanvas_initFields(this);
        this->abeClientInformation = abeClientInformation;
        RunnableCanvas_setWait(this, NullWaitGameRunnable_getInstance()->WAIT);
        this->gameInitializationInterfaceFactoryInterface = gameInitializationInterfaceFactoryInterface;
        GameInitializationUtil_initDemo(GameInitializationUtil_getInstance(), abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
        ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), false);
        this->overlayPaintable = overlayPaintable;
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        DemoCanvas_setDefaultPaintableInterface(this, paintable);
        DemoCanvas_setPaintableInterface(this, DemoCanvas_getDefaultPaintableInterface(this));
        if (isContinue) {
            MyCanvas_addCommand(this, GameCommandsFactory_getInstance()->CONTINUE_COMMAND);
        }
        if (BaseChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            DemoCanvas_mediaInit(this);
        }
        this->demoGameRunnable = DemoGameStartupRunnable_new(this);
        BasicEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}

DemoCanvas* DemoCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
    DemoCanvas* this = java_object_alloc(sizeof(DemoCanvas), "DemoCanvas");
    DemoCanvas_init(this, abeClientInformation, commandListener, highScoresFactoryInterface, paintable, overlayPaintable, gameInitializationInterfaceFactoryInterface, isContinue);
    return this;
}


void DemoCanvas_onEvent(DemoCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void DemoCanvas_onDisplayChangeEvent(DemoCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonLabels->START_LABEL), java_string_of(this->base.base.displayInfo))), this, this->base.base.canvasStrings->ON_DISPLAY_CHANGE_EVENT);
            ScrollSelectionForm* scrollSelectionForm = DemoCanvas_getMenuForm(this);
            if (scrollSelectionForm != nullptr) {
                FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
                Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
                ScrollSelectionForm_initMethod(scrollSelectionForm, rectangle, formType);
            }
            InitUpdatePaintable_initMethod(this->overlayPaintable);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
}


void** DemoCanvas_getCustomCommands(DemoCanvas* this) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (J2MEUtil_isHTML()) {
            void** commandArray = ((void**) java_array_from(sizeof(void*), sizeof((void*[]){ gameCommandsFactory->START_COMMAND, HighScoreCommands_getInstance()->DISPLAY, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DISPLAY), gameCommandsFactory->DISPLAY_ABOUT }) / sizeof(void*), (void*[]){ gameCommandsFactory->START_COMMAND, HighScoreCommands_getInstance()->DISPLAY, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DISPLAY), gameCommandsFactory->DISPLAY_ABOUT }));
            return commandArray;
        } else {
            BasicArrayList* commandList = BasicArrayListD_new();
            BasicArrayList_add(commandList, gameCommandsFactory->START_COMMAND);
            InApplicationPurchaseFactory* inApplicationPurchaseFactory = InApplicationPurchaseFactory_getInstance();
            if (InApplicationPurchaseFactory_isEnabled(inApplicationPurchaseFactory)) {
                BasicArrayList* list = LockableFeatureFactory_getList(LockableFeatureFactory_getInstance());
                if (BasicArrayList_size(list) > 0 && !InApplicationPurchaseFactory_isPurchased(inApplicationPurchaseFactory, ((LockableFeature*) BasicArrayList_get(list, 0)))) {
                    BasicArrayList_add(commandList, gameCommandsFactory->BUY_COMMAND);
                }
            }
            BasicArrayList_add(commandList, HighScoreCommands_getInstance()->DISPLAY);
            JAVA_TRY {
                bool isOverScan = GenericOperatingSystem_isOverScan(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()));
                if ((SWTUtil_staticInit(), SWTUtil_isSWT)) {
                    BasicArrayList_add(commandList, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DISPLAY));
                } else if (!isOverScan) {
                    BasicArrayList_add(commandList, gameCommandsFactory->DISPLAY_OPTIONS);
                    BasicArrayList_add(commandList, gameCommandsFactory->DISPLAY_LOAD_FORM);
                    BasicArrayList_add(commandList, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DISPLAY));
                }
            } JAVA_CATCH(Exception, e) {
            } JAVA_END_TRY;
            BasicArrayList_add(commandList, gameCommandsFactory->DISPLAY_ABOUT);
            void** commandArray = BasicArrayList_toArray(commandList);
            return commandArray;
        }
}


void DemoCanvas_initCommands(DemoCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        void** commandArray = DemoCanvas_getCustomCommands(this);
        int32_t size = java_array_length(commandArray);
        for (int32_t index = 0; index < size; index++) {
            MyCanvas_addCommand(this, ((Command*) commandArray[index]));
        }
        CustomGameMenuUtil_add(this);
        MyCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void DemoCanvas_initPostPaint(DemoCanvas* this) {
}


// throws Exception
void DemoCanvas_mediaInit(DemoCanvas* this) {
        AllBinaryMediaManager_initMethod(EarlySoundsFactory_getInstance());
}


void DemoCanvas_itemStateChanged(DemoCanvas* this, Item* item) {
        ForcedLogUtil_log(this->base.base.commonStrings->NOT_IMPLEMENTED, this);
}


// throws Exception
void DemoCanvas_initMenu(DemoCanvas* this) {
        DemoCanvas_close(this);
        CommandTextItemArrayFactory* commandTextItemArrayFactory = DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(DemoLimitedCommandTextItemArrayFactory_getInstance());
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(commandTextItemArrayFactory, MyCanvas_getCommandStack(this), this->basicColorFactory->BLACK, this->basicColorFactory->WHITE);
        FormType* formType = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle = FormUtil_createFormRectangle(this->formUtil);
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonLabels->START_LABEL), java_string_of(this->base.base.displayInfo))), this, "initMenu");
        ScrollSelectionForm* scrollSelectionForm = CommandCurrentSelectionFormFactory_getInstance(StringUtil_getInstance()->EMPTY_STRING, items, rectangle, formType, 15, true, this->basicColorFactory->BLACK, this->basicColorFactory->WHITE);
        DemoCanvas_setMenuForm(this, scrollSelectionForm);
        FormType* formType2 = FormTypeFactory_getFormType(FormTypeFactory_getInstance());
        Rectangle* rectangle2 = FormUtil_createFormRectangle(this->formUtil);
        ScrollSelectionForm_initMethod(scrollSelectionForm, rectangle2, formType2);
        if (DemoCanvas_getMenuForm(this) != ScrollSelectionFormNoneFactory_getInstance()) {
            DemoCanvas_setMenuInputProcessor(this, CommandFormInputProcessor_new(BasicArrayListD_new(), -1, this, DemoCanvas_getMenuForm(this)));
        }
        DemoCanvas_open(this);
}


void DemoCanvas_open(DemoCanvas* this) {
        BasicEventHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
}


void DemoCanvas_close(DemoCanvas* this) {
        BasicEventHandler_removeListener(BasicMotionGesturesHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), DemoCanvas_getMenuInputProcessor(this));
}


int32_t DemoCanvas_getSourceId(DemoCanvas* this) {
        return DemoCanvas_id;
}


void DemoCanvas_keyPressed(DemoCanvas* this, int32_t keyCode) {
        DemoCanvas_keyPressedByDevice(this, keyCode, 0);
}


void DemoCanvas_keyReleased(DemoCanvas* this, int32_t keyCode) {
        DemoCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void DemoCanvas_keyRepeated(DemoCanvas* this, int32_t keyCode) {
        DemoCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void DemoCanvas_keyPressedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId) {
        DemoCanvas_addGameKeyEvent(this, keyCode, false);
}


void DemoCanvas_keyReleasedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId) {
        DemoCanvas_removeGameKeyEvent(this, keyCode, false);
}


void DemoCanvas_keyRepeatedByDevice(DemoCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            DemoCanvas_addGameKeyEvent(this, keyCode, true);
        }
}


static void DemoCanvas_addGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandler_getInstance(), gameKeyEvent);
            } else {
                if (this->lastKeyNotMapped != keyCode) {
                    this->lastKeyNotMapped = keyCode;
                    LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), keyCode)), this, this->gameInputStrings->ADD_KEY_EVENT);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


static void DemoCanvas_removeGameKeyEvent(DemoCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstance(), gameKeyEvent);
            } else {
                LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), keyCode)), this, this->gameInputStrings->REMOVE_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, "Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, e);
        } JAVA_END_TRY;
}


// synchronized
void DemoCanvas_pause(DemoCanvas* this) {
        DemoCanvas_close(this);
        MyCanvas_setPaused(this, true);
        this->gameRunnable = NullWaitGameRunnable_getInstance();
        AllBinaryGameCanvas_pause(this->gameCanvas);
}


// synchronized
void DemoCanvas_unPause(DemoCanvas* this) {
        DemoCanvas_open(this);
        AllBinaryGameCanvas_unPause(this->gameCanvas);
        this->gameRunnable = this->gameCanvas->gameRunnable;
        MyCanvas_setPaused(this, false);
}


bool DemoCanvas_isPausable(DemoCanvas* this) {
        if (CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory_getInstance()) == NullWaitGameRunnable_getInstance()) {
            return true;
        } else {
            return false;
        }
}


bool DemoCanvas_isGameOver(DemoCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->NOT_IMPLEMENTED), " since not a game")), this, "isGameOver");
        return false;
}


// throws Exception
void DemoCanvas_setLoadStateHashtable(DemoCanvas* this, ABHashtable* hashtable) {
        LogUtil_putF(this->base.base.logUtil, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
}


// throws Exception
ABHashtable* DemoCanvas_getLoadStateHashtable(DemoCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
        return this->base.stdUtil->NULL_TABLE;
}


// throws Exception
ABHashtable* DemoCanvas_getCurrentStateHashtable(DemoCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Trying to save the AI lol", this, "getCurrentStateHashtable");
        return this->base.stdUtil->NULL_TABLE;
}


void DemoCanvas_setHighScoreSubmitted(DemoCanvas* this, bool isNotUsed) {
}


void DemoCanvas_paint(DemoCanvas* this, Graphics* graphics) {
        PaintableInterface_paint(this->paintableInterface, graphics);
        Animation_paintXY(this->paintedSpecialAnimationInterface, graphics, 0, 0);
        Paintable_paint(this->highScoresPaintable, graphics);
        Paintable_paint(DemoCanvas_getBasicGameDemoPaintable(this), graphics);
        Paintable_paint(this->overlayPaintable, graphics);
        Paintable_paint(this->fullscreenPaintable, graphics);
        PaintableInterface_paint(this->progressPaintable, graphics);
}


void DemoCanvas_paintThreed(DemoCanvas* this, Graphics* graphics) {
        PaintableInterface_paintThreed(this->paintableInterface, graphics);
        Animation_paintThreedXYZ(this->paintedSpecialAnimationInterface, graphics, 0, 0, 0);
}


// synchronized
void DemoCanvas_processGameOver(DemoCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Not Implemented since not a game", this, "setGameOver");
}


void DemoCanvas_demoStateChange(DemoCanvas* this) {
        int32_t newState = this->state + 1;
        if (newState > 2) {
            newState = 0;
        } else if (newState == 2) {
            if (!HighScoresHelperBase_isAnyHighScores(this->highScoresHelper)) {
                newState = 0;
            } else {
                HighScores* highScores = HighScoresHelperBase_getNextHighScores(this->highScoresHelper);
                if (highScores == NullHighScoresSingletonFactory_getInstance()) {
                    newState = 0;
                } else {
                    HighScoresPaintable_setHighScores(DemoCanvas_getRealHighScoresPaintable(this), highScores);
                }
            }
        }
        DemoCanvas_setState(this, newState);
        DemoCanvas_updateDemoState(this);
}


void DemoCanvas_updateDemoState(DemoCanvas* this) {
        PreLogUtil_put(java_string_of(SmallIntegerSingletonFactory_createInstance(SmallIntegerSingletonFactory_getInstance(), this->state)), this, this->SET_STATE);
        StatePaintable_setState(DemoCanvas_getBasicGameDemoPaintable(this), this->state);
        if (this->state == 0) {
            this->highScoresPaintable = NullPaintable_getInstance();
            this->paintedSpecialAnimationInterface = DemoCanvas_getSpecialAnimationInterface(this);
            if (!ABRunnable_isRunning(this->demoGameRunnable) && AllBinaryGameCanvas_isInitialized(this->gameCanvas)) {
                IndexedAnimation_reset(DemoCanvas_getSpecialAnimationInterface(this));
            }
        } else if (this->state == 1) {
            this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
        } else if (this->state == 2) {
            this->highScoresPaintable = DemoCanvas_getRealHighScoresPaintable(this);
        }
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdStateBase_processPageAdState(gameAdState);
}


// throws Exception
int32_t DemoCanvas_getNextRandom(DemoCanvas* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
AllBinaryGameLayerManager* DemoCanvas_createGameLayerManager(DemoCanvas* this, int32_t randomValue) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
GameCanvasRunnableInterface* DemoCanvas_createRunnable(DemoCanvas* this, int32_t randomLevel) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void DemoCanvas_create(DemoCanvas* this) {
        PreLogUtil_put(this->base.base.commonStrings->START, this, "create");
        this->highScoresPaintable = NullPaintable_getInstance();
        int32_t randomLevel = DemoCanvas_getNextRandom(this);
        this->gameCanvas = ((AllBinaryGameCanvas*) DemoCanvas_createRunnable(this, randomLevel));
        this->basicColor = AllBinaryGameLayerManager_getForegroundBasicColor(AllBinaryGameCanvas_getLayerManager(this->gameCanvas));
        HighScoresPaintable_setBasicColorP(DemoCanvas_getRealHighScoresPaintable(this), this->basicColor);
        AllBinaryGameCanvas_setGameCanvasStartListener(this->gameCanvas, this);
        GameInfo* gameInfo = AllBinaryGameLayerManager_getGameInfo(AllBinaryGameCanvas_getLayerManager(this->gameCanvas));
        HighScoresFactoryInterface_fetchHighScores(DemoCanvas_getHighScoresFactoryInterface(this), gameInfo, this->highScoresHelper);
}


// throws Exception
void DemoCanvas_start(DemoCanvas* this) {
        AllBinaryGameCanvas* gameCanvas = this->gameCanvas;
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Game Thread in DemoCanvas: "), StringUtil_toString(this->base.base.stringUtil, gameCanvas))), this, this->base.base.commonStrings->START);
        this->canvasThread = ThreadFactoryUtil_getInstanceGameCanvasRunnable(this->threadFactoryUtil, gameCanvas);
        RunnableCanvas_setThread(this->gameCanvas, this->canvasThread);
        ThreadFactoryUtil_start(this->threadFactoryUtil, this->canvasThread);
        if (RunnableCanvas_getWait(this) == NullWaitGameRunnable_getInstance()->WAIT) {
            RunnableCanvas_setWait(this, DemoCanvas_getTempWait(this));
        }
}


void DemoCanvas_preDemoProcess(DemoCanvas* this) {
        if (!AllBinaryGameCanvas_isInitialized(this->gameCanvas) || AllBinaryGameCanvas_getTitle(this->gameCanvas) == (NullGameCanvas_staticInit(), NullGameCanvas_NO_GAME)) {
            if (AllBinaryMediaManager_update()) {
                if (!PlayerQueue_process(PrimaryPlayerQueueFactory_getInstance())) {
                    PlayerQueue_process(SecondaryPlayerQueueFactory_getInstance());
                }
            }
        }
        InitUpdatePaintable_update(this->overlayPaintable);
}


// throws Exception
void DemoCanvas_process(DemoCanvas* this) {
        MyCanvas_process((&this->base));
        BasicMenuInputProcessor_processInputList(DemoCanvas_getMenuInputProcessor(this));
        DemoCanvas_preDemoProcess(this);
        if (this->state == 0) {
            IndexedAnimationBehavior* indexedAnimationBehavior = (((IndexedAnimationBehavior*) IndexedAnimation_getAnimationBehavior(DemoCanvas_getSpecialAnimationInterface(this))));
            if (indexedAnimationBehavior->loopIndex < 1) {
                TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
            }
            DemoGameMidlet* demoGameMidlet = ((DemoGameMidlet*) MyCanvas_getCustomCommandListener(this));
            if (this->gameCanvas != NullGameCanvas_getInstance() && AllBinaryGameCanvas_isGameOver(this->gameCanvas)) {
                DemoCanvas_stopGameDemo(this);
                int32_t randomLevel = DemoCanvas_getNextRandom(this);
                GameInfo* gameInfo = AllBinaryGameLayerManager_getGameInfo(AllBinaryGameCanvas_getLayerManager(this->gameCanvas));
                GameInfo_setCurrentLevel(gameInfo, randomLevel);
                AllBinaryGameCanvas_setGameOver(this->gameCanvas, false);
                DemoCanvas_start(this);
            } else if (this->gameCanvas == NullGameCanvas_getInstance() && DemoGameMidlet_isReady(demoGameMidlet)) {
                if (!ABRunnable_isRunning(this->demoGameRunnable)) {
                    DemoCanvas_startDemoGame(this);
                    ABRunnable_setRunning(this->demoGameRunnable, true);
                    Thread* thread = ThreadFactoryUtil_getInstanceForRunnable(this->threadFactoryUtil, this->demoGameRunnable);
                    ABRunnable_setThread(this->demoGameRunnable, thread);
                    ThreadFactoryUtil_start(this->threadFactoryUtil, thread);
                }
            }
        }
}


// throws Exception
void DemoCanvas_startDemoGame(DemoCanvas* this) {
        DemoCanvasProgressUtil_showProgress(this);
}


// throws Exception
void DemoCanvas_stopGameDemo(DemoCanvas* this) {
        if (this->gameCanvas != NullGameCanvas_getInstance()) {
            LogUtil_putF(this->base.base.logUtil, "Set Running False", this, "stopGameDemo");
            AllBinaryGameCanvas_setRunning(this->gameCanvas, false);
        }
        ThreadUtil_join(ThreadUtil_getInstance(), this->canvasThread);
}


void DemoCanvas_showGamePaintable(DemoCanvas* this) {
        const char* METHOD_NAME = "showGamePaintable";
        PreLogUtil_put(this->base.base.commonStrings->START, this, METHOD_NAME);
        bool isDefault = J2MEUtil_isHTML();
        if (this->gameCanvas != NullGameCanvas_getInstance() && (RunnableCanvas_isRunning(this->gameCanvas) || isDefault || (SWTUtil_staticInit(), SWTUtil_isSWT)) && !(AllBinaryGameCanvas_getType(this->gameCanvas) == (NullGameCanvas_staticInit(), NullGameCanvas_TYPE))) {
            this->gameRunnable = this->gameCanvas->gameRunnable;
            PreLogUtil_put("Showing Game", this, METHOD_NAME);
            DemoCanvas_setPaintableInterface(this, this->gameCanvas);
        } else {
            this->gameRunnable = NullWaitGameRunnable_getInstance();
            PreLogUtil_put("Not Showing Game", this, METHOD_NAME);
            DemoCanvas_setPaintableInterface(this, DemoCanvas_getDefaultPaintableInterface(this));
        }
}


bool DemoCanvas_isReadyForStateChange(DemoCanvas* this) {
        return !ABRunnable_isRunning(this->demoGameRunnable) && AllBinaryGameCanvas_isInitialized(this->gameCanvas);
}


// throws Exception
void DemoCanvas_processGame(DemoCanvas* this) {
        GameRunnable_run(this->gameRunnable);
        if (!SpecialAnimation_isComplete(this->specialAnimationInterface) && DemoCanvas_isReadyForStateChange(this)) {
            SpecialAnimation_nextFrame(this->specialAnimationInterface);
        }
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper) && DemoCanvas_isReadyForStateChange(this)) {
            DemoCanvas_demoStateChange(this);
        } else {
            DemoCanvas_process(this);
        }
}


void DemoCanvas_run(DemoCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START_RUNNABLE, this, this->base.base.commonStrings->RUN);
        JAVA_TRY {
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            Features* features = Features_getInstance();
            OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread");
            RunnableCanvas_setCurrentThread(this);
            DemoCanvas_setRunning(this, true);
            if (Features_isFeature(features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
                ProgressCanvas_end(progressCanvas);
            } else {
                ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread Running");
            }
            FullScreenUtil_initOnRun(this->fullScreenUtil, this, MyCanvas_getCustomCommandListener(this));
            DemoCanvas_initMenu(this);
            DemoCanvas_initPostPaint(this);
            DemoCanvas_updateDemoState(this);
            if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
                while (this->gameCanvas == NullGameCanvas_getInstance() || !AllBinaryGameCanvas_isInitialized(this->gameCanvas)) {
                    TimeDelayHelper_setStartTimeTNT(this->base.loopTimeHelper);
                    DemoCanvas_processGame(this);
                    RunnableCanvas_processLoopSleep(this);
                }
                DemoGameRunnable* demoGameRunnable = DemoGameRunnable_new(this);
                CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, demoGameRunnable);
                CurrentDisplayableFactory_setMyCanvas(currentDisplayableFactory, this);
                OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
            }
            if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil_isHTML()) {
                DemoGameRunnable* demoGameRunnable = DemoGameRunnable_new(this);
                CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, demoGameRunnable);
                CurrentDisplayableFactory_setMyCanvas(currentDisplayableFactory, this);
            } else {
                while (RunnableCanvas_isRunning(this)) {
                    DemoCanvas_run3(this);
                }
                DemoCanvas_end(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->RUN, e);
        } JAVA_END_TRY;
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->END_RUNNABLE, this, this->base.base.commonStrings->RUN);
}


// throws Exception
void DemoCanvas_run3(DemoCanvas* this) {
        TimeDelayHelper_setStartTimeTNT(this->base.loopTimeHelper);
        DemoCanvas_processGame(this);
        RunnableCanvas_processLoopSleep(this);
}


void DemoCanvas_setRunning(DemoCanvas* this, bool running) {
        RunnableCanvas_setRunning((&this->base), running);
        JAVA_TRY {
            Features* features = Features_getInstance();
            OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
            if (running) {
            } else {
                if ((Features_isDefault(features, openGLFeatureFactory->OPENGL) || J2MEUtil_isHTML()) || (SWTUtil_staticInit(), SWTUtil_isSWT)) {
                    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                    CurrentDisplayableFactory_clearRunnable(currentDisplayableFactory);
                    DemoCanvas_end(this);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.SET_RUNNING, e);
        } JAVA_END_TRY;
}


// throws Exception
void DemoCanvas_end(DemoCanvas* this) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Features* features = Features_getInstance();
        BaseGameStatistics_add(this->baseGameStatistics, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), DemoCanvas_BOT_GAME_STATS), java_string_of(this->baseGameStatistics)), CommonSeps_getInstance()->NEW_LINE)));
        BaseGameStatistics_initMethod(this->baseGameStatistics);
        if (Features_isFeature(features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
            ProgressCanvas_start(progressCanvas);
        }
        LogUtil_putF(this->base.base.logUtil, "Demo End", this, this->base.base.commonStrings->RUN);
        DemoCanvas_close(this);
        BasicEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
        DemoCanvas_stopGameDemo(this);
}


void DemoCanvas_setGameState(DemoCanvas* this, GameState* gameState) {
}


GameState* DemoCanvas_getGameState(DemoCanvas* this) {
        return this->gameStateFactory->PLAYING_GAME_STATE;
}


AllBinaryGameCanvas* DemoCanvas_getGameCanvasRunnableInterface(DemoCanvas* this) {
        return this->gameCanvas;
}


bool DemoCanvas_isDemoLoading(DemoCanvas* this) {
        AllBinaryGameCanvas* gameCanvas = this->gameCanvas;
        if (gameCanvas == NullGameCanvas_getInstance()) {
            return true;
        } else if (AllBinaryGameCanvas_isInitialized(gameCanvas)) {
            return false;
        }
        return true;
}


int32_t DemoCanvas_getState(DemoCanvas* this) {
        return this->state;
}


void DemoCanvas_setState(DemoCanvas* this, int32_t state) {
        this->state = state;
}


bool DemoCanvas_isHighScoreSubmitted(DemoCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Wow the AI got a high score!", this, "isHighScoreSubmitted");
        return false;
}


HighScoresPaintable* DemoCanvas_getRealHighScoresPaintable(DemoCanvas* this) {
        return this->realHighScoresPaintable;
}


void DemoCanvas_setSpecialAnimationInterface(DemoCanvas* this, SpecialAnimation* specialAnimationInterface) {
        IndexedAnimation_setFrame(specialAnimationInterface, 0);
        this->specialAnimationInterface = specialAnimationInterface;
}


SpecialAnimation* DemoCanvas_getSpecialAnimationInterface(DemoCanvas* this) {
        return this->specialAnimationInterface;
}


void DemoCanvas_setPaintableInterface(DemoCanvas* this, PaintableInterface* paintableInterface) {
        this->paintableInterface = paintableInterface;
}


PaintableInterface* DemoCanvas_getPaintableInterface(DemoCanvas* this) {
        return this->paintableInterface;
}


void DemoCanvas_setDefaultPaintableInterface(DemoCanvas* this, Paintable* defaultPaintableInterface) {
        this->defaultPaintableInterface = defaultPaintableInterface;
}


Paintable* DemoCanvas_getDefaultPaintableInterface(DemoCanvas* this) {
        return this->defaultPaintableInterface;
}


HighScoresFactoryInterface* DemoCanvas_getHighScoresFactoryInterface(DemoCanvas* this) {
        return this->highScoresFactoryInterface;
}


void DemoCanvas_setMenuInputProcessor(DemoCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* DemoCanvas_getMenuInputProcessor(DemoCanvas* this) {
        return this->menuInputProcessor;
}


ScrollSelectionForm* DemoCanvas_getMenuForm(DemoCanvas* this) {
        return this->menuForm;
}


void DemoCanvas_setMenuForm(DemoCanvas* this, ScrollSelectionForm* menuForm) {
        this->menuForm = menuForm;
}


bool DemoCanvas_isInitialized(DemoCanvas* this) {
        return this->initialized;
}


Paintable* DemoCanvas_getOverlayPaintable(DemoCanvas* this) {
        return this->overlayPaintable;
}


void DemoCanvas_setBasicGameDemoPaintable(DemoCanvas* this, StatePaintable* basicGameDemoPaintable) {
        this->basicGameDemoPaintable = basicGameDemoPaintable;
}


StatePaintable* DemoCanvas_getBasicGameDemoPaintable(DemoCanvas* this) {
        return this->basicGameDemoPaintable;
}


void DemoCanvas_setTempWait(DemoCanvas* this, int32_t tempWait) {
        this->tempWait = tempWait;
}


int32_t DemoCanvas_getTempWait(DemoCanvas* this) {
        return this->tempWait;
}


bool DemoCanvas_isSingleThread(DemoCanvas* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) || (SWTUtil_staticInit(), SWTUtil_isSWT);
}


bool DemoCanvas_isRunningInAnotherThread(DemoCanvas* this) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
            return true;
        } else {
            return RunnableCanvas_isRunning(this);
        }
}


BasicBuildGameInitializerFactory* DemoCanvas_getGameInitializationInterfaceFactoryInterface(DemoCanvas* this) {
        return this->gameInitializationInterfaceFactoryInterface;
}


int32_t DemoCanvas_getType(DemoCanvas* this) {
        return DemoCanvas_TYPE;
}


const char* DemoCanvas_getTitle(DemoCanvas* this) {
        return Displayable_getTitle((&this->base));
}


bool DemoCanvas_isPaused(DemoCanvas* this) {
        return MyCanvas_isPaused((&this->base));
}

