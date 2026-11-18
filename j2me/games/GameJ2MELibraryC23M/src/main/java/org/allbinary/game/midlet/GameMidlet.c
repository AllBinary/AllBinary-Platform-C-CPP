// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/GameMidlet.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "javax/microedition/midlet/MIDletStateChangeException.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/FullScreenUtil.h"
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/DebugInterface.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/game/GameStrings.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/game/configuration/GameOptionsFormFactory.h"
#include "org/allbinary/game/configuration/InGameFeatures.h"
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#include "org/allbinary/game/configuration/InGameOptionsFormFactory.h"
#include "org/allbinary/game/configuration/LoadGameForm.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h"
#include "org/allbinary/game/input/TextNotificationUtil.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#include "org/allbinary/game/score/HighScoreCommands.h"
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "org/allbinary/game/score/displayable/HighScoreUtil.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"
#include "org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/graphics/displayable/screen/WebCommandProcessor.h"
#include "org/allbinary/input/AllBinarySensorManager.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/midlet/MidletStrings.h"
#include "org/allbinary/thread/NullThread.h"
#include "org/allbinary/thread/ThreadFactoryUtil.h"
#include "org/allbinary/thread/ThreadUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/midlet/GameMidletStateFactory.h"
#include "org/allbinary/game/midlet/GameMidletEventHandler.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameFeatureEventHandler.h")
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#endif
#if __has_include("org/allbinary/game/midlet/Advertisements.h")
#include "org/allbinary/game/midlet/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/midlet/Advertisements.h")
#include "javax/microedition/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Advertisements.h")
#include "org/allbinary/business/advertisement/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/commands/Advertisements.h")
#include "org/allbinary/game/commands/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/input/Advertisements.h")
#include "org/allbinary/game/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/Advertisements.h")
#include "org/allbinary/game/layer/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Advertisements.h")
#include "org/allbinary/game/layer/hud/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Advertisements.h")
#include "org/allbinary/game/paint/help/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/state/Advertisements.h")
#include "org/allbinary/game/state/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/Advertisements.h")
#include "org/allbinary/graphics/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Advertisements.h")
#include "org/allbinary/graphics/displayable/command/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/Advertisements.h")
#include "org/allbinary/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/event/Advertisements.h")
#include "org/allbinary/input/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Advertisements.h")
#include "org/allbinary/input/motion/gesture/observer/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/math/Advertisements.h")
#include "org/allbinary/logic/math/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/string/Advertisements.h")
#include "org/allbinary/logic/string/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/media/audio/Advertisements.h")
#include "org/allbinary/media/audio/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/time/Advertisements.h")
#include "org/allbinary/time/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/Advertisements.h")
#include "org/allbinary/logic/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/AllBinarySensorManager.h")
#include "org/allbinary/input/AllBinarySensorManager.h"
#endif
#if __has_include("org/allbinary/game/midlet/Advertisements.h")
#include "org/allbinary/game/midlet/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/midlet/Advertisements.h")
#include "javax/microedition/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Advertisements.h")
#include "org/allbinary/business/advertisement/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/commands/Advertisements.h")
#include "org/allbinary/game/commands/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/input/Advertisements.h")
#include "org/allbinary/game/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/Advertisements.h")
#include "org/allbinary/game/layer/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Advertisements.h")
#include "org/allbinary/game/layer/hud/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Advertisements.h")
#include "org/allbinary/game/paint/help/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/state/Advertisements.h")
#include "org/allbinary/game/state/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/Advertisements.h")
#include "org/allbinary/graphics/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Advertisements.h")
#include "org/allbinary/graphics/displayable/command/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/Advertisements.h")
#include "org/allbinary/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/event/Advertisements.h")
#include "org/allbinary/input/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Advertisements.h")
#include "org/allbinary/input/motion/gesture/observer/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/math/Advertisements.h")
#include "org/allbinary/logic/math/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/string/Advertisements.h")
#include "org/allbinary/logic/string/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/media/audio/Advertisements.h")
#include "org/allbinary/media/audio/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/time/Advertisements.h")
#include "org/allbinary/time/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/Advertisements.h")
#include "org/allbinary/logic/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/AllBinarySensorManager.h")
#include "org/allbinary/input/AllBinarySensorManager.h"
#endif
#if __has_include("org/allbinary/canvas/GameStatisticsFactory.h")
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#endif
#if __has_include("org/allbinary/game/midlet/Advertisements.h")
#include "org/allbinary/game/midlet/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/midlet/Advertisements.h")
#include "javax/microedition/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Advertisements.h")
#include "org/allbinary/business/advertisement/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/commands/Advertisements.h")
#include "org/allbinary/game/commands/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/input/Advertisements.h")
#include "org/allbinary/game/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/Advertisements.h")
#include "org/allbinary/game/layer/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Advertisements.h")
#include "org/allbinary/game/layer/hud/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Advertisements.h")
#include "org/allbinary/game/paint/help/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/state/Advertisements.h")
#include "org/allbinary/game/state/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/Advertisements.h")
#include "org/allbinary/graphics/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Advertisements.h")
#include "org/allbinary/graphics/displayable/command/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/Advertisements.h")
#include "org/allbinary/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/event/Advertisements.h")
#include "org/allbinary/input/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Advertisements.h")
#include "org/allbinary/input/motion/gesture/observer/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/math/Advertisements.h")
#include "org/allbinary/logic/math/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/string/Advertisements.h")
#include "org/allbinary/logic/string/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/media/audio/Advertisements.h")
#include "org/allbinary/media/audio/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/time/Advertisements.h")
#include "org/allbinary/time/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/Advertisements.h")
#include "org/allbinary/logic/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/midlet/Advertisements.h")
#include "org/allbinary/game/midlet/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/lcdui/Advertisements.h")
#include "javax/microedition/lcdui/Advertisements.h"
#endif
#if __has_include("javax/microedition/midlet/Advertisements.h")
#include "javax/microedition/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/Advertisements.h")
#include "org/allbinary/Advertisements.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Advertisements.h")
#include "org/allbinary/business/advertisement/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/canvas/Advertisements.h")
#include "org/allbinary/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/debug/Advertisements.h")
#include "org/allbinary/debug/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/Advertisements.h")
#include "org/allbinary/game/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/commands/Advertisements.h")
#include "org/allbinary/game/commands/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/Advertisements.h")
#include "org/allbinary/game/configuration/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Advertisements.h")
#include "org/allbinary/game/configuration/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Advertisements.h")
#include "org/allbinary/game/configuration/feature/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Advertisements.h")
#include "org/allbinary/game/configuration/persistance/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Advertisements.h")
#include "org/allbinary/game/displayable/canvas/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/input/Advertisements.h")
#include "org/allbinary/game/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/Advertisements.h")
#include "org/allbinary/game/layer/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Advertisements.h")
#include "org/allbinary/game/layer/hud/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Advertisements.h")
#include "org/allbinary/game/paint/help/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/Advertisements.h")
#include "org/allbinary/game/score/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Advertisements.h")
#include "org/allbinary/game/score/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/game/state/Advertisements.h")
#include "org/allbinary/game/state/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/Advertisements.h")
#include "org/allbinary/graphics/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Advertisements.h")
#include "org/allbinary/graphics/canvas/transition/progress/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/color/Advertisements.h")
#include "org/allbinary/graphics/color/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Advertisements.h")
#include "org/allbinary/graphics/displayable/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Advertisements.h")
#include "org/allbinary/graphics/displayable/command/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Advertisements.h")
#include "org/allbinary/graphics/displayable/screen/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/Advertisements.h")
#include "org/allbinary/input/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/event/Advertisements.h")
#include "org/allbinary/input/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Advertisements.h")
#include "org/allbinary/input/motion/gesture/observer/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Advertisements.h")
#include "org/allbinary/logic/communication/log/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/math/Advertisements.h")
#include "org/allbinary/logic/math/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/string/Advertisements.h")
#include "org/allbinary/logic/string/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Advertisements.h")
#include "org/allbinary/logic/system/security/licensing/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Advertisements.h")
#include "org/allbinary/logic/util/event/Advertisements.h"
#endif
#if __has_include("org/allbinary/media/audio/Advertisements.h")
#include "org/allbinary/media/audio/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/midlet/Advertisements.h")
#include "org/allbinary/midlet/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/thread/Advertisements.h")
#include "org/allbinary/thread/Advertisements.h"
#endif
#if __has_include("org/allbinary/time/Advertisements.h")
#include "org/allbinary/time/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
#endif
#if __has_include("org/allbinary/logic/Advertisements.h")
#include "org/allbinary/logic/Advertisements.h"
#endif
#if __has_include("org/allbinary/util/Advertisements.h")
#include "org/allbinary/util/Advertisements.h"
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
#if __has_include("org/allbinary/game/score/HighScoreCommandsFactory.h")
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoreCommands.h")
#include "org/allbinary/game/score/HighScoreCommands.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/CommandForm.h")
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/CommandForm.h")
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#endif
#if __has_include("org/allbinary/graphics/ResizableListenerHandler.h")
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#endif
#if __has_include("org/allbinary/graphics/ResizableListenerHandler.h")
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#endif
#if __has_include("org/allbinary/game/configuration/InGameOptionsFormFactory.h")
#include "org/allbinary/game/configuration/InGameOptionsFormFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFormUtil.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFormUtil.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h")
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/input/TextNotificationUtil.h")
#include "org/allbinary/game/input/TextNotificationUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/midlet/Display.h")
#include "org/allbinary/game/midlet/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/midlet/Display.h")
#include "javax/microedition/midlet/Display.h"
#endif
#if __has_include("org/allbinary/Display.h")
#include "org/allbinary/Display.h"
#endif
#if __has_include("org/allbinary/Display.h")
#include "org/allbinary/Display.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Display.h")
#include "org/allbinary/business/advertisement/Display.h"
#endif
#if __has_include("org/allbinary/canvas/Display.h")
#include "org/allbinary/canvas/Display.h"
#endif
#if __has_include("org/allbinary/canvas/Display.h")
#include "org/allbinary/canvas/Display.h"
#endif
#if __has_include("org/allbinary/debug/Display.h")
#include "org/allbinary/debug/Display.h"
#endif
#if __has_include("org/allbinary/debug/Display.h")
#include "org/allbinary/debug/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/commands/Display.h")
#include "org/allbinary/game/commands/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Display.h")
#include "org/allbinary/game/configuration/event/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Display.h")
#include "org/allbinary/game/configuration/event/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Display.h")
#include "org/allbinary/game/configuration/persistance/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Display.h")
#include "org/allbinary/game/configuration/persistance/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/input/Display.h")
#include "org/allbinary/game/input/Display.h"
#endif
#if __has_include("org/allbinary/game/layer/Display.h")
#include "org/allbinary/game/layer/Display.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Display.h")
#include "org/allbinary/game/layer/hud/event/Display.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Display.h")
#include "org/allbinary/game/paint/help/Display.h"
#endif
#if __has_include("org/allbinary/game/score/Display.h")
#include "org/allbinary/game/score/Display.h"
#endif
#if __has_include("org/allbinary/game/score/Display.h")
#include "org/allbinary/game/score/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/state/Display.h")
#include "org/allbinary/game/state/Display.h"
#endif
#if __has_include("org/allbinary/graphics/Display.h")
#include "org/allbinary/graphics/Display.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Display.h")
#include "org/allbinary/graphics/canvas/transition/progress/Display.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Display.h")
#include "org/allbinary/graphics/canvas/transition/progress/Display.h"
#endif
#if __has_include("org/allbinary/graphics/color/Display.h")
#include "org/allbinary/graphics/color/Display.h"
#endif
#if __has_include("org/allbinary/graphics/color/Display.h")
#include "org/allbinary/graphics/color/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Display.h")
#include "org/allbinary/graphics/displayable/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Display.h")
#include "org/allbinary/graphics/displayable/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Display.h")
#include "org/allbinary/graphics/displayable/command/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/input/Display.h")
#include "org/allbinary/input/Display.h"
#endif
#if __has_include("org/allbinary/input/event/Display.h")
#include "org/allbinary/input/event/Display.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Display.h")
#include "org/allbinary/input/motion/gesture/observer/Display.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Display.h")
#include "org/allbinary/logic/communication/log/Display.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Display.h")
#include "org/allbinary/logic/communication/log/Display.h"
#endif
#if __has_include("org/allbinary/logic/math/Display.h")
#include "org/allbinary/logic/math/Display.h"
#endif
#if __has_include("org/allbinary/logic/string/Display.h")
#include "org/allbinary/logic/string/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Display.h")
#include "org/allbinary/logic/util/event/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Display.h")
#include "org/allbinary/logic/util/event/Display.h"
#endif
#if __has_include("org/allbinary/media/audio/Display.h")
#include "org/allbinary/media/audio/Display.h"
#endif
#if __has_include("org/allbinary/midlet/Display.h")
#include "org/allbinary/midlet/Display.h"
#endif
#if __has_include("org/allbinary/midlet/Display.h")
#include "org/allbinary/midlet/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/time/Display.h")
#include "org/allbinary/time/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/logic/Display.h")
#include "org/allbinary/logic/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/midlet/Display.h")
#include "org/allbinary/game/midlet/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/midlet/Display.h")
#include "javax/microedition/midlet/Display.h"
#endif
#if __has_include("org/allbinary/Display.h")
#include "org/allbinary/Display.h"
#endif
#if __has_include("org/allbinary/Display.h")
#include "org/allbinary/Display.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Display.h")
#include "org/allbinary/business/advertisement/Display.h"
#endif
#if __has_include("org/allbinary/canvas/Display.h")
#include "org/allbinary/canvas/Display.h"
#endif
#if __has_include("org/allbinary/canvas/Display.h")
#include "org/allbinary/canvas/Display.h"
#endif
#if __has_include("org/allbinary/debug/Display.h")
#include "org/allbinary/debug/Display.h"
#endif
#if __has_include("org/allbinary/debug/Display.h")
#include "org/allbinary/debug/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/commands/Display.h")
#include "org/allbinary/game/commands/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Display.h")
#include "org/allbinary/game/configuration/event/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Display.h")
#include "org/allbinary/game/configuration/event/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Display.h")
#include "org/allbinary/game/configuration/persistance/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Display.h")
#include "org/allbinary/game/configuration/persistance/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/input/Display.h")
#include "org/allbinary/game/input/Display.h"
#endif
#if __has_include("org/allbinary/game/layer/Display.h")
#include "org/allbinary/game/layer/Display.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Display.h")
#include "org/allbinary/game/layer/hud/event/Display.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Display.h")
#include "org/allbinary/game/paint/help/Display.h"
#endif
#if __has_include("org/allbinary/game/score/Display.h")
#include "org/allbinary/game/score/Display.h"
#endif
#if __has_include("org/allbinary/game/score/Display.h")
#include "org/allbinary/game/score/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/state/Display.h")
#include "org/allbinary/game/state/Display.h"
#endif
#if __has_include("org/allbinary/graphics/Display.h")
#include "org/allbinary/graphics/Display.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Display.h")
#include "org/allbinary/graphics/canvas/transition/progress/Display.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Display.h")
#include "org/allbinary/graphics/canvas/transition/progress/Display.h"
#endif
#if __has_include("org/allbinary/graphics/color/Display.h")
#include "org/allbinary/graphics/color/Display.h"
#endif
#if __has_include("org/allbinary/graphics/color/Display.h")
#include "org/allbinary/graphics/color/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Display.h")
#include "org/allbinary/graphics/displayable/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Display.h")
#include "org/allbinary/graphics/displayable/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Display.h")
#include "org/allbinary/graphics/displayable/command/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/input/Display.h")
#include "org/allbinary/input/Display.h"
#endif
#if __has_include("org/allbinary/input/event/Display.h")
#include "org/allbinary/input/event/Display.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Display.h")
#include "org/allbinary/input/motion/gesture/observer/Display.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Display.h")
#include "org/allbinary/logic/communication/log/Display.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Display.h")
#include "org/allbinary/logic/communication/log/Display.h"
#endif
#if __has_include("org/allbinary/logic/math/Display.h")
#include "org/allbinary/logic/math/Display.h"
#endif
#if __has_include("org/allbinary/logic/string/Display.h")
#include "org/allbinary/logic/string/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Display.h")
#include "org/allbinary/logic/util/event/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Display.h")
#include "org/allbinary/logic/util/event/Display.h"
#endif
#if __has_include("org/allbinary/media/audio/Display.h")
#include "org/allbinary/media/audio/Display.h"
#endif
#if __has_include("org/allbinary/midlet/Display.h")
#include "org/allbinary/midlet/Display.h"
#endif
#if __has_include("org/allbinary/midlet/Display.h")
#include "org/allbinary/midlet/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/time/Display.h")
#include "org/allbinary/time/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/logic/Display.h")
#include "org/allbinary/logic/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h")
#include "org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#endif
#if __has_include("org/allbinary/graphics/color/ColorChangeEventHandler.h")
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/thread/ThreadUtil.h")
#include "org/allbinary/thread/ThreadUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/GameTypeFactory.h")
#include "org/allbinary/game/GameTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/PlayerTypesFactory.h")
#include "org/allbinary/game/PlayerTypesFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameOptionsFormFactory.h")
#include "org/allbinary/game/configuration/GameOptionsFormFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/game/midlet/Display.h")
#include "org/allbinary/game/midlet/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("javax/microedition/midlet/Display.h")
#include "javax/microedition/midlet/Display.h"
#endif
#if __has_include("org/allbinary/Display.h")
#include "org/allbinary/Display.h"
#endif
#if __has_include("org/allbinary/Display.h")
#include "org/allbinary/Display.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Display.h")
#include "org/allbinary/business/advertisement/Display.h"
#endif
#if __has_include("org/allbinary/canvas/Display.h")
#include "org/allbinary/canvas/Display.h"
#endif
#if __has_include("org/allbinary/canvas/Display.h")
#include "org/allbinary/canvas/Display.h"
#endif
#if __has_include("org/allbinary/debug/Display.h")
#include "org/allbinary/debug/Display.h"
#endif
#if __has_include("org/allbinary/debug/Display.h")
#include "org/allbinary/debug/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/Display.h")
#include "org/allbinary/game/Display.h"
#endif
#if __has_include("org/allbinary/game/commands/Display.h")
#include "org/allbinary/game/commands/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/Display.h")
#include "org/allbinary/game/configuration/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Display.h")
#include "org/allbinary/game/configuration/event/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/Display.h")
#include "org/allbinary/game/configuration/event/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Display.h")
#include "org/allbinary/game/configuration/feature/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Display.h")
#include "org/allbinary/game/configuration/persistance/Display.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/Display.h")
#include "org/allbinary/game/configuration/persistance/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/Display.h")
#include "org/allbinary/game/displayable/canvas/Display.h"
#endif
#if __has_include("org/allbinary/game/input/Display.h")
#include "org/allbinary/game/input/Display.h"
#endif
#if __has_include("org/allbinary/game/layer/Display.h")
#include "org/allbinary/game/layer/Display.h"
#endif
#if __has_include("org/allbinary/game/layer/hud/event/Display.h")
#include "org/allbinary/game/layer/hud/event/Display.h"
#endif
#if __has_include("org/allbinary/game/paint/help/Display.h")
#include "org/allbinary/game/paint/help/Display.h"
#endif
#if __has_include("org/allbinary/game/score/Display.h")
#include "org/allbinary/game/score/Display.h"
#endif
#if __has_include("org/allbinary/game/score/Display.h")
#include "org/allbinary/game/score/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/Display.h")
#include "org/allbinary/game/score/displayable/Display.h"
#endif
#if __has_include("org/allbinary/game/state/Display.h")
#include "org/allbinary/game/state/Display.h"
#endif
#if __has_include("org/allbinary/graphics/Display.h")
#include "org/allbinary/graphics/Display.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Display.h")
#include "org/allbinary/graphics/canvas/transition/progress/Display.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/Display.h")
#include "org/allbinary/graphics/canvas/transition/progress/Display.h"
#endif
#if __has_include("org/allbinary/graphics/color/Display.h")
#include "org/allbinary/graphics/color/Display.h"
#endif
#if __has_include("org/allbinary/graphics/color/Display.h")
#include "org/allbinary/graphics/color/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Display.h")
#include "org/allbinary/graphics/displayable/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/Display.h")
#include "org/allbinary/graphics/displayable/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/Display.h")
#include "org/allbinary/graphics/displayable/command/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/Display.h")
#include "org/allbinary/graphics/displayable/screen/Display.h"
#endif
#if __has_include("org/allbinary/input/Display.h")
#include "org/allbinary/input/Display.h"
#endif
#if __has_include("org/allbinary/input/event/Display.h")
#include "org/allbinary/input/event/Display.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/Display.h")
#include "org/allbinary/input/motion/gesture/observer/Display.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Display.h")
#include "org/allbinary/logic/communication/log/Display.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Display.h")
#include "org/allbinary/logic/communication/log/Display.h"
#endif
#if __has_include("org/allbinary/logic/math/Display.h")
#include "org/allbinary/logic/math/Display.h"
#endif
#if __has_include("org/allbinary/logic/string/Display.h")
#include "org/allbinary/logic/string/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/Display.h")
#include "org/allbinary/logic/system/security/licensing/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Display.h")
#include "org/allbinary/logic/util/event/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/Display.h")
#include "org/allbinary/logic/util/event/Display.h"
#endif
#if __has_include("org/allbinary/media/audio/Display.h")
#include "org/allbinary/media/audio/Display.h"
#endif
#if __has_include("org/allbinary/midlet/Display.h")
#include "org/allbinary/midlet/Display.h"
#endif
#if __has_include("org/allbinary/midlet/Display.h")
#include "org/allbinary/midlet/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/thread/Display.h")
#include "org/allbinary/thread/Display.h"
#endif
#if __has_include("org/allbinary/time/Display.h")
#include "org/allbinary/time/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif
#if __has_include("org/allbinary/logic/Display.h")
#include "org/allbinary/logic/Display.h"
#endif
#if __has_include("org/allbinary/util/Display.h")
#include "org/allbinary/util/Display.h"
#endif

















static void GameMidlet_updateFullScreen(GameMidlet* this);




















void GameMidlet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameMidlet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameMidlet", "ProgressMidlet");
    java_register_method("GameMidlet", "init", (void*) GameMidlet_initMethod);
    java_register_method("GameMidlet", "setDemo", (void*) GameMidlet_setDemo);
    java_register_method("GameMidlet", "createGame", (void*) GameMidlet_createGame);
    java_register_method("GameMidlet", "mediaShutdown", (void*) GameMidlet_mediaShutdown);
    java_register_method("GameMidlet", "stopAll", (void*) GameMidlet_stopAll);
    java_register_method("GameMidlet", "pauseApp", (void*) GameMidlet_pauseApp);
    java_register_method("GameMidlet", "pauseAppBackground", (void*) GameMidlet_pauseAppBackground);
    java_register_method("GameMidlet", "unPauseApp", (void*) GameMidlet_unPauseApp);
    java_register_method("GameMidlet", "unPauseAppBackground", (void*) GameMidlet_unPauseAppBackground);
    java_register_method("GameMidlet", "destroyAppInRunnable", (void*) GameMidlet_destroyAppInRunnable);
    java_register_method("GameMidlet", "destroyApp", (void*) GameMidlet_destroyApp);
    java_register_method("GameMidlet", "startApp", (void*) GameMidlet_startApp);
    java_register_method("GameMidlet", "commandAction", (void*) GameMidlet_commandAction);
    java_register_method("GameMidlet", "updateFullScreen", (void*) GameMidlet_updateFullScreen);
    java_register_method("GameMidlet", "onEvent", (void*) GameMidlet_onEvent);
    java_register_method("GameMidlet", "getInputMappingInstructionsCanvas", (void*) GameMidlet_getInputMappingInstructionsCanvas);
    java_register_method("GameMidlet", "getInputMappingCanvas", (void*) GameMidlet_getInputMappingCanvas);
    java_register_method("GameMidlet", "getAboutCanvas", (void*) GameMidlet_getAboutCanvas);
    java_register_method("GameMidlet", "getHelpPaintable", (void*) GameMidlet_getHelpPaintable);
    java_register_method("GameMidlet", "createHighScoresCanvas", (void*) GameMidlet_createHighScoresCanvas);
    java_register_method("GameMidlet", "startGameCanvasRunnableInterface", (void*) GameMidlet_startGameCanvasRunnableInterface);
    java_register_method("GameMidlet", "stopGameCanvasRunnableInterface", (void*) GameMidlet_stopGameCanvasRunnableInterface);
    java_register_method("GameMidlet", "getGameCanvasRunnableInterface", (void*) GameMidlet_getGameCanvasRunnableInterface);
    java_register_method("GameMidlet", "setGameCanvasRunnableInterface", (void*) GameMidlet_setGameCanvasRunnableInterface);
    java_register_method("GameMidlet", "createGameLayerManager", (void*) GameMidlet_createGameLayerManager);
    java_register_method("GameMidlet", "getGameOptionsForm", (void*) GameMidlet_getGameOptionsForm);
    java_register_method("GameMidlet", "save", (void*) GameMidlet_save);
    java_register_method("GameMidlet", "getCurrentStateHashtable", (void*) GameMidlet_getCurrentStateHashtable);
    java_register_method("GameMidlet", "setLoadGameForm", (void*) GameMidlet_setLoadGameForm);
    java_register_method("GameMidlet", "getLoadGameForm", (void*) GameMidlet_getLoadGameForm);
    java_register_method("GameMidlet", "setResized", (void*) GameMidlet_setResized);
    java_register_method("GameMidlet", "isResized", (void*) GameMidlet_isResized);
    java_register_method("GameMidlet", "isDemoLoading", (void*) GameMidlet_isDemoLoading);
}

static void GameMidlet_initFields(GameMidlet* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->features = Features_getInstance();
    this->midletStrings = MidletStrings_getInstance();
    this->myCommandsFactory = MyCommandsFactory_getInstance();
    this->gameStrings = GameStrings_getInstance();
    this->gameAdStateFactory = GameAdStateFactory_getInstance();
    this->gameStateFactory = GameStateFactory_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->DISPLAYABLE = " Displayable: ";
    this->COMMAND_NAME = "command Name/Label: ";
    this->NO_COMMAND = "No Command";
    this->NO_DISPLAYABLE = "No Displayable";
    this->COMMAND_ACTION = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "GameMidlet::"), this->midletStrings->COMMAND_ACTION));
    this->PAUSE_APP_BACKGROUND = "pauseAppBackground";
    this->UN_PAUSE_APP_BACKGROUND = "unPauseAppBackground";
    this->aboutCommandProcessor = AboutCommandProcessor_getInstance();
    this->webCommandProcessor = WebCommandProcessor_getInstance();
    this->gameMidletStateFactory = GameMidletStateFactory_getInstance();
    this->gameStartTimeHelper = TimeDelayHelper_new(240);
    this->fullScreenUtil = FullScreenUtil_getInstance();
    
    this->allbinaryGameCanvasRunnableInterface = (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE);
    this->thread = (NullThread_staticInit(), NullThread_NULL_THREAD);
    
    this->isFullScreen = false;
    this->resized = false;
    this->startedBefore = false;
}


void GameMidlet_init(GameMidlet* this, ClientInformationFactory* clientInformationFactory) {
    GameMidlet_register();
        ProgressMidlet_init(&this->base, clientInformationFactory);
        GameMidlet_initFields(this);
        SmallIntegerSingletonFactory_initWithRange(SmallIntegerSingletonFactory_getInstance(), 0x291, 6);
        this->loadGameForm = CommandForm_getNullCommandForm();
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_initMethod(progressCanvas, this);
        BasicEventHandler_addListenerInterface(GameFeatureEventHandler_getInstance(), ChangedGameFeatureListener_getInstance());
        BasicPersitance_clear(GamePersistanceSingleton_getInstance());
        this->debugInterface = DebugFactory_getInstance();
        GameMidlet_initMethod(this);
}

GameMidlet* GameMidlet_new(ClientInformationFactory* clientInformationFactory) {
    GameMidlet* this = java_object_alloc(sizeof(GameMidlet), "GameMidlet");
    GameMidlet_init(this, clientInformationFactory);
    return this;
}


void GameMidlet_initMethod(GameMidlet* this) {
}


// throws Exception
void GameMidlet_setDemo(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void GameMidlet_createGame(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void GameMidlet_mediaShutdown(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


void GameMidlet_stopAll(GameMidlet* this) {
}


void GameMidlet_pauseApp(GameMidlet* this) {
        GameMidlet_pauseAppBackground(this, true);
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        Advertisements_stopAll(GameAdStateBase_getAdvertisements(gameAdState));
}


void GameMidlet_pauseAppBackground(GameMidlet* this, bool background) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->PAUSE_APP_BACKGROUND);
        if (this->allbinaryGameCanvasRunnableInterface != (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE)) {
            GameCanvasRunnableInterface_pause(this->allbinaryGameCanvasRunnableInterface);
        } else {
            LogUtil_putF(this->base.base.logUtil, "<<<<<< Null", this, this->PAUSE_APP_BACKGROUND);
        }
        AllBinarySensorManager_shutdown(AllBinarySensorManager_getInstance());
}


void GameMidlet_unPauseApp(GameMidlet* this) {
        GameMidlet_unPauseAppBackground(this, true);
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
        Advertisements_startAll(GameAdStateBase_getAdvertisements(gameAdState));
}


void GameMidlet_unPauseAppBackground(GameMidlet* this, bool background) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->UN_PAUSE_APP_BACKGROUND);
        AllBinarySensorManager_initMethod(AllBinarySensorManager_getInstance());
        GameCanvasRunnableInterface* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
        if (gameCanvasRunnableInterface != (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE)) {
            GameCanvasRunnableInterface_unPause(gameCanvasRunnableInterface);
        } else {
            LogUtil_putF(this->base.base.logUtil, "<<<<<< Null", this, this->UN_PAUSE_APP_BACKGROUND);
        }
}


void GameMidlet_destroyAppInRunnable(GameMidlet* this, bool unconditional, bool isProgress) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        if (isProgress) {
            ProgressCanvas_start(progressCanvas);
            GameMidlet_commandAction(this, this->myCommandsFactory->SET_DISPLAYABLE, progressCanvas);
        }
        GameMidlet_destroyApp(this, unconditional);
        if (isProgress) {
            ProgressCanvas_end(progressCanvas);
        }
}


void GameMidlet_destroyApp(GameMidlet* this, bool unconditional) {
        const char* METHOD_NAME = "GameMidlet::destroyApp";
        JAVA_TRY {
            PreLogUtil_put(java_string_of(GameStatisticsFactory_getInstance()), this, METHOD_NAME);
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
            Advertisements_stopAll(GameAdStateBase_getAdvertisements(gameAdState));
            if (!AllBinaryMidlet_isDestroyed(this)) {
                GameMidlet_stopGameCanvasRunnableInterface(this);
                GameMidlet_setGameCanvasRunnableInterface(this, (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE));
                GameMidlet_mediaShutdown(this);
            } else {
                LogUtil_putF(this->base.base.logUtil, "Midlet Managment Error: Midlet Should Only Be Destroyed Once", this, METHOD_NAME);
            }
            AllBinaryMidlet_destroyApp((&this->base), true);
            PreLogUtil_put(this->base.base.commonStrings->END, this, METHOD_NAME);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, METHOD_NAME, e);
        } JAVA_END_TRY;
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->END, this, METHOD_NAME);
}


// throws MIDletStateChangeException
void GameMidlet_startApp(GameMidlet* this) {
        JAVA_TRY {
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(this->gameAdStateFactory);
            Advertisements_startAll(GameAdStateBase_getAdvertisements(gameAdState));
            const char* START_APP = "startApp";
            LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, START_APP);
            void* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
            if (gameCanvasRunnableInterface == (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE)) {
                GameMidletStateFactory_setCurrentGameState(this->gameMidletStateFactory, this->gameStateFactory->NO_GAME_STATE);
                GameMidlet_setDemo(this);
            } else {
                LogUtil_putF(this->base.base.logUtil, "GameCanvasRunnableInterface is available", this, START_APP);
                if (gameCanvasRunnableInterface == AllBinaryMidlet_getCurrentDisplayable(this)) {
                    GameMidlet_unPauseAppBackground(this, false);
                } else {
                    LogUtil_putF(this->base.base.logUtil, "GameCanvasRunnableInterface is not current displayable", this, START_APP);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, "startApp", e);
            GameMidlet_destroyApp(this, false);
            MIDlet_notifyDestroyed(this);
        } JAVA_END_TRY;
}


// synchronized
void GameMidlet_commandAction(GameMidlet* this, Command* command, Displayable* displayable) {
        JAVA_TRY {
            const char* displayableAsString = this->NO_DISPLAYABLE;
            if (displayable != nullptr) {
                displayableAsString = java_string_of(displayable);
            }
            const char* label = this->NO_COMMAND;
            if (command != nullptr) {
                label = Command_getLabel(command);
            }
            PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), this->COMMAND_NAME), label), this->DISPLAYABLE), displayableAsString)), this, this->COMMAND_ACTION);
            GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
            GameCanvasRunnableInterface* allbinaryGameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
            void* gameCanvasRunnableInterface = allbinaryGameCanvasRunnableInterface;
            if (command == gameCommandsFactory->SHOW_GAME_CANVAS) {
                if (Display_getCurrent(AllBinaryMidlet_getDisplay(this)) != gameCanvasRunnableInterface && GameCanvasRunnableInterface_getType(allbinaryGameCanvasRunnableInterface) != NullGameCanvasRunnable_getType((NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE))) {
                    AllBinaryMidlet_setDisplay(this, ((Displayable*) gameCanvasRunnableInterface));
                }
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS) {
                MenuListener* menuListener = ((MenuListener*) displayable);
                MenuListener_close(menuListener);
                AllBinaryMidlet_setDisplay(this, ((Displayable*) gameCanvasRunnableInterface));
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == gameCommandsFactory->EXIT_COMMAND) {
                if (BasicArrayList_size(BasicEventHandler_getEventListenerInterfaceListP(GameMidletEventHandler_getInstance())) == 0) {
                    ProgressMidlet_exitProgress(this, true);
                }
                BasicEventHandler_fireEvent(GameMidletEventHandler_getInstance(), DemoGameMidletEvent_new(this, DemoGameMidletStateFactory_getInstance()->NONE));
            } else if (command == gameCommandsFactory->EXIT_WITHOUT_PROGRESS_COMMAND) {
                ProgressMidlet_exitProgress(this, false);
            } else if (command == gameCommandsFactory->START_COMMAND || command == gameCommandsFactory->RESTART_COMMAND || command == gameCommandsFactory->CONTINUE_COMMAND) {
                if (GameMidletStateFactory_getCurrentGameState(this->gameMidletStateFactory) != this->gameStateFactory->PLAYING_GAME_STATE || command == gameCommandsFactory->RESTART_COMMAND) {
                    if (TimeDelayHelper_isTimeTNT(this->gameStartTimeHelper)) {
                        if (command == gameCommandsFactory->START_COMMAND && GameMidlet_isDemoLoading(this)) {
                            LogUtil_putF(this->base.base.logUtil, "Trying to Start Game Before Loading Complete", this, this->midletStrings->COMMAND_ACTION);
                        } else {
                            this->startedBefore = true;
                            GameMidlet_createGame(this);
                            GameMidletStateFactory_setCurrentGameState(this->gameMidletStateFactory, this->gameStateFactory->PLAYING_GAME_STATE);
                        }
                    } else {
                        LogUtil_putF(this->base.base.logUtil, "Starting Game Too Often", this, this->midletStrings->COMMAND_ACTION);
                    }
                } else {
                    LogUtil_putF(this->base.base.logUtil, "Already in playing state", this, this->COMMAND_ACTION);
                }
            } else if (command == gameCommandsFactory->BUY_COMMAND) {
                InApplicationPurchaseFactory* inApplicationPurchaseFactory = InApplicationPurchaseFactory_getInstance();
                BasicArrayList* list = LockableFeatureFactory_getList(LockableFeatureFactory_getInstance());
                LockableFeature* lockableFeature = ((LockableFeature*) BasicArrayList_get(list, 0));
                if (BasicArrayList_size(list) > 0 && !InApplicationPurchaseFactory_isPurchased(inApplicationPurchaseFactory, lockableFeature)) {
                    InApplicationPurchaseFactory_purchase(inApplicationPurchaseFactory, lockableFeature);
                } else {
                    TextNotificationUtil_fireSuccess(TextNotificationUtil_getInstance(), "Already Purchased");
                }
            } else if (command == gameCommandsFactory->QUIT_COMMAND) {
                if (TimeDelayHelper_isTimeTNT(this->gameStartTimeHelper)) {
                    if (java_instanceof(displayable, "HighScoreTextBox")) {
                        MenuListener* menuListener = ((MenuListener*) displayable);
                        MenuListener_close(menuListener);
                    }
                    GameMidlet_stopGameCanvasRunnableInterface(this);
                    GameMidletStateFactory_setCurrentGameState(this->gameMidletStateFactory, this->gameStateFactory->NO_GAME_STATE);
                    GameMidlet_setDemo(this);
                }
            } else if (command == this->myCommandsFactory->RESUME_COMMAND) {
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == this->myCommandsFactory->PAUSE_COMMAND) {
                GameMidlet_pauseAppBackground(this, false);
            } else if (command == this->myCommandsFactory->SET_DISPLAYABLE) {
                GameMidlet_pauseAppBackground(this, false);
                AllBinaryMidlet_setDisplay(this, displayable);
            } else if (command == gameCommandsFactory->SET_MENU_DISPLAYABLE) {
                GameMidlet_pauseAppBackground(this, false);
                MenuListener* menuListener = ((MenuListener*) displayable);
                MenuListener_open(menuListener);
                AllBinaryMidlet_setDisplay(this, displayable);
            } else if (command == gameCommandsFactory->START_TRACE) {
                DebugInterface_start(this->debugInterface);
                AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) allbinaryGameCanvasRunnableInterface);
                MyCanvas_addCommand(gameCanvas, gameCommandsFactory->STOP_TRACE);
                MyCanvas_removeCommand(gameCanvas, gameCommandsFactory->START_TRACE);
            } else if (command == gameCommandsFactory->STOP_TRACE) {
                GameMidlet_pauseAppBackground(this, false);
                DebugInterface_stop(this->debugInterface);
                GameMidlet_unPauseAppBackground(this, false);
                AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) allbinaryGameCanvasRunnableInterface);
                MyCanvas_addCommand(gameCanvas, gameCommandsFactory->START_TRACE);
                MyCanvas_removeCommand(gameCanvas, gameCommandsFactory->STOP_TRACE);
            } else if (command == gameCommandsFactory->DEFAULT_OPTIONS) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "GameOptionsForm")) {
                    GameFeatureFormUtil_setDefault(GameFeatureFormUtil_getInstance(), ((CommandForm*) tempDisplayable));
                }
            } else if (command == (GameInputMappingInstructionsCanvas_staticInit(), GameInputMappingInstructionsCanvas_DISPLAY)) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "GameInputMappingCanvas")) {
                    GameInputMappingCanvas* gameInputMappingCanvas = ((GameInputMappingCanvas*) tempDisplayable);
                    GameInputMappingCanvas_update(gameInputMappingCanvas);
                }
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getInputMappingInstructionsCanvas(this));
            } else if (HighScoreCommandsBaseFactory_isHighScoreCommand(HighScoreCommandsFactory_getInstance(), command)) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "HighScoresCanvas")) {
                    HighScoresCanvas* highScoresCanvas = ((HighScoresCanvas*) tempDisplayable);
                    HighScoresCanvas_updateCommand(highScoresCanvas, command);
                }
            } else if (command == HighScoreCommands_getInstance()->DISPLAY) {
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_createHighScoresCanvas(this));
            } else if (command == (GameInputMappingInstructionsCanvas_staticInit(), GameInputMappingInstructionsCanvas_CLOSE)) {
                MenuListener* menuListener = ((MenuListener*) displayable);
                MenuListener_close(menuListener);
                GameMidlet_commandAction(this, (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DISPLAY), (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
            } else if (command == (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DISPLAY)) {
                if (J2MEUtil_isHTML()) {
                    GameMidlet_pauseAppBackground(this, false);
                }
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getInputMappingCanvas(this));
            } else if (command == (GameInputMappingCanvas_staticInit(), GameInputMappingCanvas_DEFAULT)) {
                Displayable* tempDisplayable = displayable;
                if (java_instanceof(tempDisplayable, "GameInputMappingCanvas")) {
                    GameInputMappingCanvas* gameInputMappingCanvas = ((GameInputMappingCanvas*) tempDisplayable);
                    GameInputMappingCanvas_setDefault(gameInputMappingCanvas);
                }
            } else if (command == (InGameOptionsForm_staticInit(), InGameOptionsForm_DISPLAY)) {
                GameMidlet_pauseAppBackground(this, false);
                ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
                ProgressCanvas_addNormalPortion(progressCanvas, 50, "In Game Options");
                AllBinaryGameLayerManager* layerManager = GameMidlet_createGameLayerManager(this);
                InGameOptionsFormFactory* inGameOptionsFormFactory = InGameOptionsFormFactory_getInstance();
                InGameOptionsFormFactory_initMethod(inGameOptionsFormFactory, this, InGameFeatures_new(), "Options In Game", AllBinaryGameLayerManager_getBackgroundBasicColor(layerManager), AllBinaryGameLayerManager_getForegroundBasicColor(layerManager));
                CommandForm* inGameOptionsForm = InGameOptionsFormFactory_get(inGameOptionsFormFactory);
                Form_setItemStateListener(inGameOptionsForm, allbinaryGameCanvasRunnableInterface);
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, inGameOptionsForm);
            } else if (command == (InGameOptionsForm_staticInit(), InGameOptionsForm_DEFAULT)) {
                InGameOptionsForm* inGameOptionsForm = ((InGameOptionsForm*) InGameOptionsFormFactory_get(InGameOptionsFormFactory_getInstance()));
                GameFeatureFormUtil_setDefault(GameFeatureFormUtil_getInstance(), inGameOptionsForm);
            } else if (command == gameCommandsFactory->DISPLAY_OPTIONS) {
                AllBinaryMediaManager_setMuted(true);
                GameMidlet_stopAll(this);
                MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
                this->isFullScreen = Features_isFeature(this->features, mainFeatureFactory->FULL_SCREEN);
                ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), true);
                GameMidlet_setResized(this, false);
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getGameOptionsForm(this));
            } else if (command == gameCommandsFactory->CLOSE_OPTIONS) {
                ResizableListenerHandler_fireEvent(ResizableListenerHandler_getInstance(), false);
                GameMidlet_commandAction(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS, displayable);
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Close isFullScreen/change: ");
                StringMaker_appendboolean(stringBuffer, this->isFullScreen);
                StringMaker_appendboolean(stringBuffer, FullScreenUtil_isScreenChange(this->fullScreenUtil, this->isFullScreen));
                StringMaker_append(stringBuffer, " isResized: ");
                StringMaker_appendboolean(stringBuffer, GameMidlet_isResized(this));
                PreLogUtil_put(java_string_of(stringBuffer), this, this->COMMAND_ACTION);
                if (GameMidlet_isResized(this) || FullScreenUtil_isScreenChange(this->fullScreenUtil, this->isFullScreen)) {
                    GameMidlet_updateFullScreen(this);
                }
                AllBinaryMediaManager_setMuted(false);
            } else if (command == gameCommandsFactory->DISPLAY_LOAD_FORM) {
                GameMidlet_pauseAppBackground(this, false);
                KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                BasicPersitance_clear(keyValuePersistance);
                KeyValuePersistance_loadAll(keyValuePersistance, this->base.abeClientInformation);
                if (GameMidlet_getLoadGameForm(this) == CommandForm_getNullCommandForm()) {
                    AllBinaryGameLayerManager* layerManager = GameMidlet_createGameLayerManager(this);
                    GameMidlet_setLoadGameForm(this, LoadGameForm_new(this, "Load Game", AllBinaryGameLayerManager_getBackgroundBasicColor(layerManager), AllBinaryGameLayerManager_getForegroundBasicColor(layerManager)));
                } else {
                    CommandForm_update(GameMidlet_getLoadGameForm(this));
                }
                GameMidlet_commandAction(this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getLoadGameForm(this));
            } else if (command == gameCommandsFactory->LOAD_FILE) {
                LoadGameForm* loadGameForm = ((LoadGameForm*) GameMidlet_getLoadGameForm(this));
                int32_t index = LoadGameForm_getSelectedId(loadGameForm);
                if (index != -1) {
                    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                    AllBinaryMidlet_setStartStateHashtable(this, KeyValuePersistance_get(keyValuePersistance, index));
                    MenuListener* menuListener = GameMidlet_getLoadGameForm(this);
                    MenuListener_close(menuListener);
                    PreLogUtil_put(java_string_of(BasicMotionGesturesHandler_getInstance()), this, this->COMMAND_ACTION);
                    GameMidlet_commandAction(this, gameCommandsFactory->START_COMMAND, (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
                    PreLogUtil_put(java_string_of(BasicMotionGesturesHandler_getInstance()), this, this->COMMAND_ACTION);
                }
            } else if (command == gameCommandsFactory->DELETE_FILE) {
                LoadGameForm* loadGameForm = ((LoadGameForm*) GameMidlet_getLoadGameForm(this));
                int32_t index = LoadGameForm_getSelectedText(loadGameForm);
                if (index != -1) {
                    KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                    BasicPersitance_delete(keyValuePersistance, this->base.abeClientInformation, index);
                    BasicPersitance_clear(keyValuePersistance);
                    KeyValuePersistance_loadAllSize(keyValuePersistance, this->base.abeClientInformation, 1);
                    CommandForm_update(GameMidlet_getLoadGameForm(this));
                }
            } else if (command == gameCommandsFactory->SAVE) {
                KeyValuePersistance* keyValuePersistance = GamePersistanceSingleton_getInstance();
                GameMidlet_pauseAppBackground(this, false);
                KeyValuePersistance_save(keyValuePersistance, this->base.abeClientInformation, GameMidlet_getCurrentStateHashtable(this));
                GameMidlet_unPauseAppBackground(this, false);
            } else if (command == (HighScoreUtil_staticInit(), HighScoreUtil_SUBMIT_TEXTBOX_COMMAND)) {
                LogUtil_putF(this->base.base.logUtil, "Submitted Score", this, this->COMMAND_ACTION);
                if (java_instanceof(displayable, "HighScoreTextBox")) {
                    HighScoreTextBox* highScoreTextBox = ((HighScoreTextBox*) displayable);
                    highScoreTextBox->submitted = true;
                }
                GameCanvasRunnableInterface_setHighScoreSubmitted(allbinaryGameCanvasRunnableInterface, true);
                GameMidlet_commandAction(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS, displayable);
            } else if (command == gameCommandsFactory->DISPLAY_ABOUT) {
                AboutCommandProcessor_process(this->aboutCommandProcessor, this, gameCommandsFactory->SET_MENU_DISPLAYABLE, GameMidlet_getAboutCanvas(this));
            } else if (command == gameCommandsFactory->OPEN_WEB_URL) {
                WebCommandProcessor_process(this->webCommandProcessor, this, gameCommandsFactory->OPEN_WEB_URL, (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
            } else if (command == gameCommandsFactory->TOGGLE_KEYBOARD) {
                VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
                BasicEventHandler_fireEvent(virtualKeyboardEventHandler, virtualKeyboardEventHandler->SHOW_EVENT);
            } else if (TsUtil_compareTo(this->tsUtil, Command_getLabel(command), Command_getLabel(gameCommandsFactory->TOGGLE_FULLSCREEN)) == 0) {
                MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
                bool isFullScreen = Features_isFeature(this->features, mainFeatureFactory->FULL_SCREEN);
                if (isFullScreen) {
                    Features_removeDefault(this->features, mainFeatureFactory->FULL_SCREEN);
                } else {
                    Features_addDefault(this->features, mainFeatureFactory->FULL_SCREEN);
                }
                GameMidlet_updateFullScreen(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->EXCEPTION_LABEL), Command_getLabel(command))), this, this->midletStrings->COMMAND_ACTION, e);
            if (command != GameCommandsFactory_getInstance()->EXIT_COMMAND) {
                ProgressMidlet_exitProgress(this, false);
            }
        } JAVA_END_TRY;
}


static void GameMidlet_updateFullScreen(GameMidlet* this) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        bool isFullScreen = Features_isFeature(this->features, mainFeatureFactory->FULL_SCREEN);
        Displayable* displayable = Display_getCurrent(AllBinaryMidlet_getDisplay(this));
        if (java_instanceof(displayable, "Canvas")) {
            Canvas* canvas = ((Canvas*) displayable);
            Canvas_setFullScreenMode(canvas, isFullScreen);
        }
}


void GameMidlet_onEvent(GameMidlet* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
MyCanvas* GameMidlet_getInputMappingInstructionsCanvas(GameMidlet* this) {
        return GameInputMappingInstructionsCanvas_new(this, GameMidlet_createGameLayerManager(this));
}


// throws Exception
MyCanvas* GameMidlet_getInputMappingCanvas(GameMidlet* this) {
        return GameInputMappingCanvas_new(this->base.abeClientInformation, this, GameMidlet_createGameLayerManager(this), GameMidlet_getHelpPaintable(this));
}


// throws Exception
MyCanvas* GameMidlet_getAboutCanvas(GameMidlet* this) {
        return BasicPaintablesCanvas_new(this, CanvasStrings_getInstance()->ABOUT, GameMidlet_createGameLayerManager(this), AboutPaintableFactory_getInstance()->paintableArray);
}


// throws Exception
HelpPaintable* GameMidlet_getHelpPaintable(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
HighScoresCanvas* GameMidlet_createHighScoresCanvas(GameMidlet* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void GameMidlet_startGameCanvasRunnableInterface(GameMidlet* this) {
        ThreadFactoryUtil* threadFactoryUtil = ThreadFactoryUtil_getInstance();
        this->thread = ThreadFactoryUtil_getInstanceGameCanvasRunnable(threadFactoryUtil, this->allbinaryGameCanvasRunnableInterface);
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Thread Priority: "), Thread_getPriority(this->thread))), this, "startGameCanvasRunnableInterface");
        RunnableInterface_setThread(this->allbinaryGameCanvasRunnableInterface, this->thread);
        ThreadFactoryUtil_start(threadFactoryUtil, this->thread);
}


// throws Exception
void GameMidlet_stopGameCanvasRunnableInterface(GameMidlet* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
        GameNotificationEventHandler_removeAllListeners(GameNotificationEventHandler_getInstance());
        BasicEventHandler_removeAllListeners(ColorChangeEventHandler_getInstance());
        GameEventHandlerUtil_removeAllListeners();
        GameCanvasRunnableInterface* gameCanvasRunnableInterface = this->allbinaryGameCanvasRunnableInterface;
        if (gameCanvasRunnableInterface != (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE)) {
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Set Running False: "), java_string_of(gameCanvasRunnableInterface))), this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
            RunnableInterface_setRunning(gameCanvasRunnableInterface, false);
        } else {
            LogUtil_putF(this->base.base.logUtil, "StopGame - Could Not Stop", this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
        }
        ThreadUtil_join(ThreadUtil_getInstance(), this->thread);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        if (Features_isFeature(this->features, MainFeatureFactory_getInstance()->LOAD_ALL)) {
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Stopped Game Runnable");
        } else {
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Stopped Main Runnable");
        }
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->END, this, this->gameStrings->STOP_GAME_CANVAS_RUNNABLE_INTERFACE);
}


GameCanvasRunnableInterface* GameMidlet_getGameCanvasRunnableInterface(GameMidlet* this) {
        return this->allbinaryGameCanvasRunnableInterface;
}


void GameMidlet_setGameCanvasRunnableInterface(GameMidlet* this, GameCanvasRunnableInterface* gameCanvasRunnableInterface) {
        this->allbinaryGameCanvasRunnableInterface = gameCanvasRunnableInterface;
}


AllBinaryGameLayerManager* GameMidlet_createGameLayerManager(GameMidlet* this) {
        GameInfo* gameInfo = GameInfo_new(GameTypeFactory_getInstance()->SINGLE_PLAYER, (GameMode_staticInit(), GameMode_SERVER), PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 1, 1);
        return AllBinaryGameLayerManager_new(this->basicColorFactory->BLACK, this->basicColorFactory->WHITE, gameInfo);
}


CommandForm* GameMidlet_getGameOptionsForm(GameMidlet* this) {
        AllBinaryGameLayerManager* layerManager = GameMidlet_createGameLayerManager(this);
        return GameOptionsFormFactory_initMethod(GameOptionsFormFactory_getInstance(), this, "Game Options", AllBinaryGameLayerManager_getBackgroundBasicColor(layerManager), AllBinaryGameLayerManager_getForegroundBasicColor(layerManager));
}


// throws Exception
void GameMidlet_save(GameMidlet* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->SAVE);
        ABHashtable* hashtable = GameMidlet_getCurrentStateHashtable(this);
        KeyValuePersistance_save(GamePersistanceSingleton_getInstance(), this->base.abeClientInformation, hashtable);
}


// throws Exception
ABHashtable* GameMidlet_getCurrentStateHashtable(GameMidlet* this) {
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, "getCurrentStateHashtable");
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        if (this->allbinaryGameCanvasRunnableInterface != (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE)) {
            ABHashtable* currentHashtable = GameCanvasRunnableInterface_getCurrentStateHashtable(this->allbinaryGameCanvasRunnableInterface);
            Enumeration* enumeration = Hashtable_keys(currentHashtable);
            void* key = nullptr;
            while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
                key = EnumerationUtil_nextElement(this->enumerationUtil, enumeration);
                Hashtable_put(hashtable, key, Hashtable_get(currentHashtable, key));
            }
        }
        return hashtable;
}


void GameMidlet_setLoadGameForm(GameMidlet* this, LoadGameForm* loadGameForm) {
        this->loadGameForm = loadGameForm;
}


CommandForm* GameMidlet_getLoadGameForm(GameMidlet* this) {
        return this->loadGameForm;
}


void GameMidlet_setResized(GameMidlet* this, bool resized) {
        this->resized = resized;
}


bool GameMidlet_isResized(GameMidlet* this) {
        return this->resized;
}


bool GameMidlet_isDemoLoading(GameMidlet* this) {
        if (this->startedBefore) {
            return false;
        }
        Displayable* displayable = Display_getCurrent(AllBinaryMidlet_getDisplay(this));
        if (java_instanceof(displayable, "DemoCanvas")) {
            DemoCanvas* demoCanvas = ((DemoCanvas*) displayable);
            if (DemoCanvas_isDemoLoading(demoCanvas)) {
                return true;
            }
        }
        return false;
}

