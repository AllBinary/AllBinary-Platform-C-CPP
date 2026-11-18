// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/StartCanvas.h"
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
#include "org/allbinary/game/score/HighScoresPaintable.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/form/FormType.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
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
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/EarlySoundsFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
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
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/string/PersistentInputMapping.h")
#include "org/allbinary/string/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/form/GenericOperatingSystem.h")
#include "org/allbinary/graphics/form/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/string/GenericOperatingSystem.h")
#include "org/allbinary/string/GenericOperatingSystem.h"
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
#if __has_include("org/allbinary/animation/special/SpecialAnimation.h")
#include "org/allbinary/animation/special/SpecialAnimation.h"
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


static constexpr int32_t StartCanvas_id = 0;
static const char* StartCanvas_BOT_GAME_STATS = "Bot Game Statistics: ";



















static void StartCanvas_addGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated);

static void StartCanvas_removeGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated);























































void StartCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StartCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StartCanvas", "RunnableCanvas");
    java_register_method("StartCanvas", "onEvent", (void*) StartCanvas_onEvent);
    java_register_method("StartCanvas", "onDisplayChangeEvent", (void*) StartCanvas_onDisplayChangeEvent);
    java_register_method("StartCanvas", "getCustomCommands", (void*) StartCanvas_getCustomCommands);
    java_register_method("StartCanvas", "initCommands", (void*) StartCanvas_initCommands);
    java_register_method("StartCanvas", "initPostPaint", (void*) StartCanvas_initPostPaint);
    java_register_method("StartCanvas", "mediaInit", (void*) StartCanvas_mediaInit);
    java_register_method("StartCanvas", "itemStateChanged", (void*) StartCanvas_itemStateChanged);
    java_register_method("StartCanvas", "initMenu", (void*) StartCanvas_initMenu);
    java_register_method("StartCanvas", "open", (void*) StartCanvas_open);
    java_register_method("StartCanvas", "close", (void*) StartCanvas_close);
    java_register_method("StartCanvas", "getSourceId", (void*) StartCanvas_getSourceId);
    java_register_method("StartCanvas", "keyPressed", (void*) StartCanvas_keyPressed);
    java_register_method("StartCanvas", "keyReleased", (void*) StartCanvas_keyReleased);
    java_register_method("StartCanvas", "keyRepeated", (void*) StartCanvas_keyRepeated);
    java_register_method("StartCanvas", "keyPressedByDevice", (void*) StartCanvas_keyPressedByDevice);
    java_register_method("StartCanvas", "keyReleasedByDevice", (void*) StartCanvas_keyReleasedByDevice);
    java_register_method("StartCanvas", "keyRepeatedByDevice", (void*) StartCanvas_keyRepeatedByDevice);
    java_register_method("StartCanvas", "addGameKeyEvent", (void*) StartCanvas_addGameKeyEvent);
    java_register_method("StartCanvas", "removeGameKeyEvent", (void*) StartCanvas_removeGameKeyEvent);
    java_register_method("StartCanvas", "pause", (void*) StartCanvas_pause);
    java_register_method("StartCanvas", "unPause", (void*) StartCanvas_unPause);
    java_register_method("StartCanvas", "isPausable", (void*) StartCanvas_isPausable);
    java_register_method("StartCanvas", "isGameOver", (void*) StartCanvas_isGameOver);
    java_register_method("StartCanvas", "setLoadStateHashtable", (void*) StartCanvas_setLoadStateHashtable);
    java_register_method("StartCanvas", "getLoadStateHashtable", (void*) StartCanvas_getLoadStateHashtable);
    java_register_method("StartCanvas", "getCurrentStateHashtable", (void*) StartCanvas_getCurrentStateHashtable);
    java_register_method("StartCanvas", "setHighScoreSubmitted", (void*) StartCanvas_setHighScoreSubmitted);
    java_register_method("StartCanvas", "paint", (void*) StartCanvas_paint);
    java_register_method("StartCanvas", "paintThreed", (void*) StartCanvas_paintThreed);
    java_register_method("StartCanvas", "processGameOver", (void*) StartCanvas_processGameOver);
    java_register_method("StartCanvas", "demoStateChange", (void*) StartCanvas_demoStateChange);
    java_register_method("StartCanvas", "updateDemoState", (void*) StartCanvas_updateDemoState);
    java_register_method("StartCanvas", "getNextRandom", (void*) StartCanvas_getNextRandom);
    java_register_method("StartCanvas", "createGameLayerManager", (void*) StartCanvas_createGameLayerManager);
    java_register_method("StartCanvas", "createRunnable", (void*) StartCanvas_createRunnable);
    java_register_method("StartCanvas", "createCanvas", (void*) StartCanvas_createCanvas);
    java_register_method("StartCanvas", "start", (void*) StartCanvas_start);
    java_register_method("StartCanvas", "preDemoProcess", (void*) StartCanvas_preDemoProcess);
    java_register_method("StartCanvas", "process", (void*) StartCanvas_process);
    java_register_method("StartCanvas", "startDemoGame", (void*) StartCanvas_startDemoGame);
    java_register_method("StartCanvas", "processGame", (void*) StartCanvas_processGame);
    java_register_method("StartCanvas", "run", (void*) StartCanvas_run);
    java_register_method("StartCanvas", "setRunning", (void*) StartCanvas_setRunning);
    java_register_method("StartCanvas", "end", (void*) StartCanvas_end);
    java_register_method("StartCanvas", "setGameState", (void*) StartCanvas_setGameState);
    java_register_method("StartCanvas", "getGameState", (void*) StartCanvas_getGameState);
    java_register_method("StartCanvas", "getState", (void*) StartCanvas_getState);
    java_register_method("StartCanvas", "setState", (void*) StartCanvas_setState);
    java_register_method("StartCanvas", "isHighScoreSubmitted", (void*) StartCanvas_isHighScoreSubmitted);
    java_register_method("StartCanvas", "getRealHighScoresPaintable", (void*) StartCanvas_getRealHighScoresPaintable);
    java_register_method("StartCanvas", "setSpecialAnimationInterface", (void*) StartCanvas_setSpecialAnimationInterface);
    java_register_method("StartCanvas", "getSpecialAnimationInterface", (void*) StartCanvas_getSpecialAnimationInterface);
    java_register_method("StartCanvas", "setPaintableInterface", (void*) StartCanvas_setPaintableInterface);
    java_register_method("StartCanvas", "getPaintableInterface", (void*) StartCanvas_getPaintableInterface);
    java_register_method("StartCanvas", "setDefaultPaintableInterface", (void*) StartCanvas_setDefaultPaintableInterface);
    java_register_method("StartCanvas", "getDefaultPaintableInterface", (void*) StartCanvas_getDefaultPaintableInterface);
    java_register_method("StartCanvas", "getHighScoresFactoryInterface", (void*) StartCanvas_getHighScoresFactoryInterface);
    java_register_method("StartCanvas", "setMenuInputProcessor", (void*) StartCanvas_setMenuInputProcessor);
    java_register_method("StartCanvas", "getMenuInputProcessor", (void*) StartCanvas_getMenuInputProcessor);
    java_register_method("StartCanvas", "getMenuForm", (void*) StartCanvas_getMenuForm);
    java_register_method("StartCanvas", "setMenuForm", (void*) StartCanvas_setMenuForm);
    java_register_method("StartCanvas", "isInitialized", (void*) StartCanvas_isInitialized);
    java_register_method("StartCanvas", "getOverlayPaintable", (void*) StartCanvas_getOverlayPaintable);
    java_register_method("StartCanvas", "setBasicGameDemoPaintable", (void*) StartCanvas_setBasicGameDemoPaintable);
    java_register_method("StartCanvas", "getBasicGameDemoPaintable", (void*) StartCanvas_getBasicGameDemoPaintable);
    java_register_method("StartCanvas", "setTempWait", (void*) StartCanvas_setTempWait);
    java_register_method("StartCanvas", "getTempWait", (void*) StartCanvas_getTempWait);
    java_register_method("StartCanvas", "isSingleThread", (void*) StartCanvas_isSingleThread);
    java_register_method("StartCanvas", "isRunningInAnotherThread", (void*) StartCanvas_isRunningInAnotherThread);
    java_register_method("StartCanvas", "getGameInitializationInterfaceFactoryInterface", (void*) StartCanvas_getGameInitializationInterfaceFactoryInterface);
    java_register_method("StartCanvas", "getTitle", (void*) StartCanvas_getTitle);
    java_register_method("StartCanvas", "isPaused", (void*) StartCanvas_isPaused);
    java_register_method("StartCanvas", "getType", (void*) StartCanvas_getType);
}

static void StartCanvas_initFields(StartCanvas* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->features = Features_getInstance();
    this->openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
    this->myCommandsFactory = MyCommandsFactory_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->formUtil = FormUtil_getInstance();
    this->basicGameDemoPaintable = StatePaintableFactory_getInstance();
    this->specialAnimationInterface = SpecialAnimation_getInstance();
    this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
    this->fullScreenUtil = FullScreenUtil_getInstance();
    this->highScoresHelper = HighScoresHelper_new();
    this->realHighScoresPaintable = HighScoresPaintable_new();
    this->highScoresPaintable = NullPaintable_getInstance();
    this->state = 0;
    this->timeDelayHelper = TimeDelayHelper_new(6000);
    
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuForm = ScrollSelectionForm_getNullScrollSelectionForm();
    
    this->initialized = false;
    this->defaultPaintableInterface = NullPaintable_getInstance();
    this->paintableInterface = NullPaintable_getInstance();
    
    this->tempWait = NullWaitGameRunnable_getInstance()->WAIT;
    this->inputToGameKeyMapping = PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()));
    this->gameRunnable = NullWaitGameRunnable_getInstance();
    this->progressPaintable = ProgressCanvasFactory_getLazyInstance();
    this->isSingleKeyRepeatableProcessing = Features_isFeature(this->features, InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->SET_STATE = "setState";
    this->baseGameStatistics = GameStatisticsFactory_getInstance();
}


void StartCanvas_init(StartCanvas* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
    StartCanvas_register();
        RunnableCanvas_init(&this->base, commandListener, CurrentDisplayableFactory_getInstance()->DEFAULT_CHILD_NAME_LIST, true);
        StartCanvas_initFields(this);
        RunnableCanvas_setWait(this, NullWaitGameRunnable_getInstance()->WAIT);
        this->gameInitializationInterfaceFactoryInterface = gameInitializationInterfaceFactoryInterface;
        GameInitializationUtil_initDemo(GameInitializationUtil_getInstance(), abeClientInformation, this, gameInitializationInterfaceFactoryInterface);
        ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), false);
        this->overlayPaintable = overlayPaintable;
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        StartCanvas_setDefaultPaintableInterface(this, paintable);
        StartCanvas_setPaintableInterface(this, StartCanvas_getDefaultPaintableInterface(this));
        if (isContinue) {
            MyCanvas_addCommand(this, GameCommandsFactory_getInstance()->CONTINUE_COMMAND);
        }
        if (BaseChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            StartCanvas_mediaInit(this);
        }
        BasicEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}

StartCanvas* StartCanvas_new(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, HighScoresFactoryInterface* highScoresFactoryInterface, Paintable* paintable, InitUpdatePaintable* overlayPaintable, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool isContinue) {
    StartCanvas* this = java_object_alloc(sizeof(StartCanvas), "StartCanvas");
    StartCanvas_init(this, abeClientInformation, commandListener, highScoresFactoryInterface, paintable, overlayPaintable, gameInitializationInterfaceFactoryInterface, isContinue);
    return this;
}


void StartCanvas_onEvent(StartCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void StartCanvas_onDisplayChangeEvent(StartCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        JAVA_TRY {
            ScrollSelectionForm* scrollSelectionForm = StartCanvas_getMenuForm(this);
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


void** StartCanvas_getCustomCommands(StartCanvas* this) {
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


void StartCanvas_initCommands(StartCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        void** commandArray = StartCanvas_getCustomCommands(this);
        int32_t size = java_array_length(commandArray);
        for (int32_t index = 0; index < size; index++) {
            MyCanvas_addCommand(this, ((Command*) commandArray[index]));
        }
        CustomGameMenuUtil_add(this);
        MyCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void StartCanvas_initPostPaint(StartCanvas* this) {
}


// throws Exception
void StartCanvas_mediaInit(StartCanvas* this) {
        AllBinaryMediaManager_initMethod(EarlySoundsFactory_getInstance());
}


void StartCanvas_itemStateChanged(StartCanvas* this, Item* item) {
        ForcedLogUtil_log(this->base.base.commonStrings->NOT_IMPLEMENTED, this);
}


// throws Exception
void StartCanvas_initMenu(StartCanvas* this) {
        StartCanvas_close(this);
        StartCanvas_open(this);
}


void StartCanvas_open(StartCanvas* this) {
        BasicEventHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
}


void StartCanvas_close(StartCanvas* this) {
        BasicEventHandler_removeListener(BasicMotionGesturesHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), StartCanvas_getMenuInputProcessor(this));
}


int32_t StartCanvas_getSourceId(StartCanvas* this) {
        return StartCanvas_id;
}


void StartCanvas_keyPressed(StartCanvas* this, int32_t keyCode) {
        StartCanvas_keyPressedByDevice(this, keyCode, 0);
}


void StartCanvas_keyReleased(StartCanvas* this, int32_t keyCode) {
        StartCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void StartCanvas_keyRepeated(StartCanvas* this, int32_t keyCode) {
        StartCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void StartCanvas_keyPressedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId) {
        StartCanvas_addGameKeyEvent(this, keyCode, false);
}


void StartCanvas_keyReleasedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId) {
        StartCanvas_removeGameKeyEvent(this, keyCode, false);
}


void StartCanvas_keyRepeatedByDevice(StartCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            StartCanvas_addGameKeyEvent(this, keyCode, true);
        }
}


static void StartCanvas_addGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandler_getInstance(), gameKeyEvent);
            } else {
                LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), keyCode)), this, this->gameInputStrings->ADD_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


static void StartCanvas_removeGameKeyEvent(StartCanvas* this, int32_t keyCode, bool repeated) {
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
void StartCanvas_pause(StartCanvas* this) {
        StartCanvas_close(this);
        MyCanvas_setPaused(this, true);
}


// synchronized
void StartCanvas_unPause(StartCanvas* this) {
        StartCanvas_open(this);
        MyCanvas_setPaused(this, false);
}


bool StartCanvas_isPausable(StartCanvas* this) {
        if (CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory_getInstance()) == NullWaitGameRunnable_getInstance()) {
            return true;
        } else {
            return false;
        }
}


bool StartCanvas_isGameOver(StartCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->NOT_IMPLEMENTED), " since not a game")), this, "isGameOver");
        return false;
}


// throws Exception
void StartCanvas_setLoadStateHashtable(StartCanvas* this, ABHashtable* hashtable) {
        LogUtil_putF(this->base.base.logUtil, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "setLoadStateHashtable");
}


// throws Exception
ABHashtable* StartCanvas_getLoadStateHashtable(StartCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Trying to continue a demo lol - only continue a game canvas not the demo", this, "getLoadStateHashtable");
        return this->base.stdUtil->NULL_TABLE;
}


// throws Exception
ABHashtable* StartCanvas_getCurrentStateHashtable(StartCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Trying to save the AI lol", this, "getCurrentStateHashtable");
        return this->base.stdUtil->NULL_TABLE;
}


void StartCanvas_setHighScoreSubmitted(StartCanvas* this, bool isNotUsed) {
}


void StartCanvas_paint(StartCanvas* this, Graphics* graphics) {
        PaintableInterface_paint(this->paintableInterface, graphics);
        Animation_paintXY(this->paintedSpecialAnimationInterface, graphics, 0, 0);
        Paintable_paint(this->highScoresPaintable, graphics);
        Paintable_paint(StartCanvas_getBasicGameDemoPaintable(this), graphics);
        Paintable_paint(this->overlayPaintable, graphics);
        PaintableInterface_paint(this->progressPaintable, graphics);
}


void StartCanvas_paintThreed(StartCanvas* this, Graphics* graphics) {
        PaintableInterface_paintThreed(this->paintableInterface, graphics);
        Animation_paintThreedXYZ(this->paintedSpecialAnimationInterface, graphics, 0, 0, 0);
}


// synchronized
void StartCanvas_processGameOver(StartCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Not Implemented since not a game", this, "setGameOver");
}


void StartCanvas_demoStateChange(StartCanvas* this) {
        int32_t newState = this->state + 1;
        if (newState > 2) {
            newState = 0;
        } else if (newState == 2) {
            if (!HighScoresHelper_isAnyHighScores(this->highScoresHelper)) {
                newState = 0;
            } else {
                HighScores* highScores = HighScoresHelper_getNextHighScores(this->highScoresHelper);
                if (highScores == NullHighScoresSingletonFactory_getInstance()) {
                    newState = 0;
                } else {
                    HighScoresPaintable_setHighScores(StartCanvas_getRealHighScoresPaintable(this), highScores);
                }
            }
        }
        StartCanvas_setState(this, newState);
        StartCanvas_updateDemoState(this);
}


void StartCanvas_updateDemoState(StartCanvas* this) {
        PreLogUtil_put(java_string_of(SmallIntegerSingletonFactory_createInstance(SmallIntegerSingletonFactory_getInstance(), this->state)), this, this->SET_STATE);
        StatePaintable_setState(StartCanvas_getBasicGameDemoPaintable(this), this->state);
        if (this->state == 0) {
            this->highScoresPaintable = NullPaintable_getInstance();
            this->paintedSpecialAnimationInterface = StartCanvas_getSpecialAnimationInterface(this);
            IndexedAnimation_reset(StartCanvas_getSpecialAnimationInterface(this));
        } else if (this->state == 1) {
            this->paintedSpecialAnimationInterface = SpecialAnimation_getInstance();
        } else if (this->state == 2) {
            this->highScoresPaintable = StartCanvas_getRealHighScoresPaintable(this);
        }
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        GameAdStateBase_processPageAdState(gameAdState);
}


// throws Exception
int32_t StartCanvas_getNextRandom(StartCanvas* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
AllBinaryGameLayerManager* StartCanvas_createGameLayerManager(StartCanvas* this, int32_t randomValue) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
GameCanvasRunnableInterface* StartCanvas_createRunnable(StartCanvas* this, int32_t randomLevel) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void StartCanvas_createCanvas(StartCanvas* this) {
        this->highScoresPaintable = NullPaintable_getInstance();
        int32_t randomLevel = StartCanvas_getNextRandom(this);
}


// throws Exception
void StartCanvas_start(StartCanvas* this) {
}


void StartCanvas_preDemoProcess(StartCanvas* this) {
        InitUpdatePaintable_update(this->overlayPaintable);
}


// throws Exception
void StartCanvas_process(StartCanvas* this) {
        BasicMenuInputProcessor_processInputList(StartCanvas_getMenuInputProcessor(this));
        StartCanvas_preDemoProcess(this);
        if (this->state == 0) {
            IndexedAnimationBehavior* indexedAnimationBehavior = ((IndexedAnimationBehavior*) IndexedAnimation_getAnimationBehavior(StartCanvas_getSpecialAnimationInterface(this)));
            if (indexedAnimationBehavior->loopIndex < 1) {
                TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
            }
            DemoGameMidlet* demoGameMidlet = ((DemoGameMidlet*) MyCanvas_getCustomCommandListener(this));
        }
}


// throws Exception
void StartCanvas_startDemoGame(StartCanvas* this) {
}


// throws Exception
void StartCanvas_processGame(StartCanvas* this) {
        GameRunnable_run(this->gameRunnable);
        SpecialAnimation_nextFrame(this->specialAnimationInterface);
        StartCanvas_process(this);
}


void StartCanvas_run(StartCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START_RUNNABLE, this, this->base.base.commonStrings->RUN);
        JAVA_TRY {
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread");
            RunnableCanvas_setCurrentThread(this);
            StartCanvas_setRunning(this, true);
            if (Features_isFeature(this->features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
                ProgressCanvas_end(progressCanvas);
            } else {
                ProgressCanvas_addNormalPortion(progressCanvas, 50, "Demo Thread Running");
            }
            FullScreenUtil_initOnRun(this->fullScreenUtil, this, MyCanvas_getCustomCommandListener(this));
            StartCanvas_initMenu(this);
            StartCanvas_initPostPaint(this);
            StartCanvas_updateDemoState(this);
            if (Features_isDefault(this->features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
                OpenGLThreadUtil_onResume(OpenGLThreadUtil_getInstance());
            }
            if (Features_isDefault(this->features, this->openGLFeatureFactory->OPENGL_AS_GAME_THREAD) || J2MEUtil_isHTML()) {
            } else {
                while (RunnableCanvas_isRunning(this)) {
                    TimeDelayHelper_setStartTimeTNT(this->base.loopTimeHelper);
                    StartCanvas_processGame(this);
                    RunnableCanvas_processLoopSleep(this);
                }
                StartCanvas_end(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->RUN, e);
        } JAVA_END_TRY;
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->END_RUNNABLE, this, this->base.base.commonStrings->RUN);
}


void StartCanvas_setRunning(StartCanvas* this, bool running) {
        RunnableCanvas_setRunning((&this->base), running);
        JAVA_TRY {
            if ((Features_isDefault(this->features, this->openGLFeatureFactory->OPENGL) || J2MEUtil_isHTML()) && !running) {
                CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
                CurrentDisplayableFactory_clearRunnable(currentDisplayableFactory);
                StartCanvas_end(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.SET_RUNNING, e);
        } JAVA_END_TRY;
}


// throws Exception
void StartCanvas_end(StartCanvas* this) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        BaseGameStatistics_add(this->baseGameStatistics, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), StartCanvas_BOT_GAME_STATS), java_string_of(this->baseGameStatistics)), CommonSeps_getInstance()->NEW_LINE)));
        BaseGameStatistics_initMethod(this->baseGameStatistics);
        if (Features_isFeature(this->features, MainFeatureFactory_getInstance()->LOAD_ONDEMAND)) {
            ProgressCanvas_start(progressCanvas);
        }
        LogUtil_putF(this->base.base.logUtil, "Demo End", this, this->base.base.commonStrings->RUN);
        StartCanvas_close(this);
        BasicEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
}


void StartCanvas_setGameState(StartCanvas* this, GameState* gameState) {
}


GameState* StartCanvas_getGameState(StartCanvas* this) {
        return this->gameStateFactory->PLAYING_GAME_STATE;
}


int32_t StartCanvas_getState(StartCanvas* this) {
        return this->state;
}


void StartCanvas_setState(StartCanvas* this, int32_t state) {
        this->state = state;
}


bool StartCanvas_isHighScoreSubmitted(StartCanvas* this) {
        LogUtil_putF(this->base.base.logUtil, "Wow the AI got a high score!", this, "isHighScoreSubmitted");
        return false;
}


HighScoresPaintable* StartCanvas_getRealHighScoresPaintable(StartCanvas* this) {
        return this->realHighScoresPaintable;
}


void StartCanvas_setSpecialAnimationInterface(StartCanvas* this, SpecialAnimation* specialAnimationInterface) {
        IndexedAnimation_setFrame(specialAnimationInterface, 0);
        this->specialAnimationInterface = specialAnimationInterface;
}


SpecialAnimation* StartCanvas_getSpecialAnimationInterface(StartCanvas* this) {
        return this->specialAnimationInterface;
}


void StartCanvas_setPaintableInterface(StartCanvas* this, PaintableInterface* paintableInterface) {
        this->paintableInterface = paintableInterface;
}


PaintableInterface* StartCanvas_getPaintableInterface(StartCanvas* this) {
        return this->paintableInterface;
}


void StartCanvas_setDefaultPaintableInterface(StartCanvas* this, Paintable* defaultPaintableInterface) {
        this->defaultPaintableInterface = defaultPaintableInterface;
}


Paintable* StartCanvas_getDefaultPaintableInterface(StartCanvas* this) {
        return this->defaultPaintableInterface;
}


HighScoresFactoryInterface* StartCanvas_getHighScoresFactoryInterface(StartCanvas* this) {
        return this->highScoresFactoryInterface;
}


void StartCanvas_setMenuInputProcessor(StartCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* StartCanvas_getMenuInputProcessor(StartCanvas* this) {
        return this->menuInputProcessor;
}


ScrollSelectionForm* StartCanvas_getMenuForm(StartCanvas* this) {
        return this->menuForm;
}


void StartCanvas_setMenuForm(StartCanvas* this, ScrollSelectionForm* menuForm) {
        this->menuForm = menuForm;
}


bool StartCanvas_isInitialized(StartCanvas* this) {
        return this->initialized;
}


Paintable* StartCanvas_getOverlayPaintable(StartCanvas* this) {
        return this->overlayPaintable;
}


void StartCanvas_setBasicGameDemoPaintable(StartCanvas* this, StatePaintable* basicGameDemoPaintable) {
        this->basicGameDemoPaintable = basicGameDemoPaintable;
}


StatePaintable* StartCanvas_getBasicGameDemoPaintable(StartCanvas* this) {
        return this->basicGameDemoPaintable;
}


void StartCanvas_setTempWait(StartCanvas* this, int32_t tempWait) {
        this->tempWait = tempWait;
}


int32_t StartCanvas_getTempWait(StartCanvas* this) {
        return this->tempWait;
}


bool StartCanvas_isSingleThread(StartCanvas* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) || (SWTUtil_staticInit(), SWTUtil_isSWT);
}


bool StartCanvas_isRunningInAnotherThread(StartCanvas* this) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AS_GAME_THREAD)) {
            return true;
        } else {
            return RunnableCanvas_isRunning(this);
        }
}


BasicBuildGameInitializerFactory* StartCanvas_getGameInitializationInterfaceFactoryInterface(StartCanvas* this) {
        return this->gameInitializationInterfaceFactoryInterface;
}


const char* StartCanvas_getTitle(StartCanvas* this) {
        return Displayable_getTitle((&this->base));
}


bool StartCanvas_isPaused(StartCanvas* this) {
        return MyCanvas_isPaused((&this->base));
}


int32_t StartCanvas_getType(StartCanvas* this) {
        return RunnableCanvas_getType((&this->base));
}

