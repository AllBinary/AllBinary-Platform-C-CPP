// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/displayable/RepaintBehavior.h"
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
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/PaintableForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/ImmediateCommandFormInputProcessor.h"
#if __has_include("org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h")
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
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
#if __has_include("org/allbinary/canvas/PersistentInputMapping.h")
#include "org/allbinary/canvas/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/commands/PersistentInputMapping.h")
#include "org/allbinary/game/commands/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/displayable/PersistentInputMapping.h")
#include "org/allbinary/game/displayable/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/graphics/PersistentInputMapping.h")
#include "org/allbinary/graphics/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/PersistentInputMapping.h")
#include "org/allbinary/graphics/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/PersistentInputMapping.h")
#include "org/allbinary/graphics/color/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/PersistentInputMapping.h")
#include "org/allbinary/graphics/displayable/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/graphics/font/PersistentInputMapping.h")
#include "org/allbinary/graphics/font/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/font/PersistentInputMapping.h")
#include "org/allbinary/graphics/font/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/font/PersistentInputMapping.h")
#include "org/allbinary/graphics/font/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/graphics/form/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/item/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/item/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/validation/PersistentInputMapping.h")
#include "org/allbinary/graphics/form/item/validation/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/logic/string/PersistentInputMapping.h")
#include "org/allbinary/logic/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/PersistentInputMapping.h")
#include "org/allbinary/logic/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PersistentInputMapping.h")
#include "org/allbinary/logic/util/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/util/event/PersistentInputMapping.h")
#include "org/allbinary/logic/util/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/string/PersistentInputMapping.h")
#include "org/allbinary/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/util/PersistentInputMapping.h")
#include "org/allbinary/util/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
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
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
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
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
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
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventHandler.h")
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
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
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/canvas/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/DownGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/DownGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/DownGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/DownGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/canvas/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/canvas/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/commands/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/commands/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/configuration/feature/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/configuration/feature/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/displayable/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/mapping/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/color/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/color/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/screen/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/font/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/font/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/font/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/font/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/font/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/font/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/item/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/item/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/validation/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/item/validation/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/paint/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/paint/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/paint/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/paint/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/input/motion/gesture/observer/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/util/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/util/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/util/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/util/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/string/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/string/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/util/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/util/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/canvas/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/UpGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/UpGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/UpGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("javax/microedition/lcdui/UpGameKeyEventHandlerBase.h")
#include "javax/microedition/lcdui/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/canvas/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/canvas/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/commands/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/commands/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/configuration/feature/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/configuration/feature/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/displayable/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/displayable/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/mapping/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/color/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/color/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/displayable/screen/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/font/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/font/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/font/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/font/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/font/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/font/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/item/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/item/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/validation/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/form/item/validation/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/paint/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/paint/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/paint/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/paint/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/input/motion/gesture/observer/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/string/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/util/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/util/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/util/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/util/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/string/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/util/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/util/UpGameKeyEventHandlerBase.h"
#endif


static constexpr int32_t GameCommandCanvas_id = 0;



















static void GameCommandCanvas_addGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated);

static void GameCommandCanvas_removeGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated);


static void GameCommandCanvas_setMenuInputProcessor(GameCommandCanvas* this, BasicMenuInputProcessor* menuInputProcessor);


void GameCommandCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameCommandCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCommandCanvas", "MyCanvas");
    java_register_method("GameCommandCanvas", "updateMeasurement", (void*) GameCommandCanvas_updateMeasurement);
    java_register_method("GameCommandCanvas", "onEvent", (void*) GameCommandCanvas_onEvent);
    java_register_method("GameCommandCanvas", "onDisplayChangeEvent", (void*) GameCommandCanvas_onDisplayChangeEvent);
    java_register_method("GameCommandCanvas", "initCommands", (void*) GameCommandCanvas_initCommands);
    java_register_method("GameCommandCanvas", "initMenu", (void*) GameCommandCanvas_initMenu);
    java_register_method("GameCommandCanvas", "createForm", (void*) GameCommandCanvas_createForm);
    java_register_method("GameCommandCanvas", "createRectangle", (void*) GameCommandCanvas_createRectangle);
    java_register_method("GameCommandCanvas", "open", (void*) GameCommandCanvas_open);
    java_register_method("GameCommandCanvas", "close", (void*) GameCommandCanvas_close);
    java_register_method("GameCommandCanvas", "update", (void*) GameCommandCanvas_update);
    java_register_method("GameCommandCanvas", "getSourceId", (void*) GameCommandCanvas_getSourceId);
    java_register_method("GameCommandCanvas", "keyPressed", (void*) GameCommandCanvas_keyPressed);
    java_register_method("GameCommandCanvas", "keyReleased", (void*) GameCommandCanvas_keyReleased);
    java_register_method("GameCommandCanvas", "keyRepeated", (void*) GameCommandCanvas_keyRepeated);
    java_register_method("GameCommandCanvas", "keyPressedByDevice", (void*) GameCommandCanvas_keyPressedByDevice);
    java_register_method("GameCommandCanvas", "keyReleasedByDevice", (void*) GameCommandCanvas_keyReleasedByDevice);
    java_register_method("GameCommandCanvas", "keyRepeatedByDevice", (void*) GameCommandCanvas_keyRepeatedByDevice);
    java_register_method("GameCommandCanvas", "addGameKeyEvent", (void*) GameCommandCanvas_addGameKeyEvent);
    java_register_method("GameCommandCanvas", "removeGameKeyEvent", (void*) GameCommandCanvas_removeGameKeyEvent);
    java_register_method("GameCommandCanvas", "paint", (void*) GameCommandCanvas_paint);
    java_register_method("GameCommandCanvas", "setMenuInputProcessor", (void*) GameCommandCanvas_setMenuInputProcessor);
    java_register_method("GameCommandCanvas", "getMenuInputProcessor", (void*) GameCommandCanvas_getMenuInputProcessor);
}

static void GameCommandCanvas_initFields(GameCommandCanvas* this) {
    this->repaintProcessor = ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory_getInstance(), this);
    this->gameInputStrings = GameInputStrings_getInstance();
    
    
    this->inputToGameKeyMapping = PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()));
    this->gameKeyFactory = GameKeyFactory_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    
    
    this->menuInputProcessor = NoMenuInputProcessor_getInstance();
    this->menuPaintable = NullPaintable_getInstance();
    this->menuForm = PaintableForm_getNullPaintableForm();
    this->isSingleKeyRepeatableProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS);
    this->fontHeight = 0;
}


void GameCommandCanvas_init(GameCommandCanvas* this, CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    GameCommandCanvas_register();
        MyCanvas_init(&this->base, name, CanvasStrings_getInstance()->EMPTY_CHILD_NAME_LIST);
        GameCommandCanvas_initFields(this);
        this->repaintBehavior = RepaintBehavior_getInstance();
        this->foregroundBasicColor = foregroundBasicColor;
        this->backgroundBasicColor = backgroundBasicColor;
        this->foregroundColor = BasicColor_intValue(this->foregroundBasicColor);
        this->backgroundColor = BasicColor_intValue(this->backgroundBasicColor);
        GameCommandCanvas_initCommands(this, cmdListener);
        if (cmdListener != (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER)) {
            JAVA_TRY {
                GameCommandCanvas_initMenu(this);
                Processor_process(this->repaintProcessor);
            } JAVA_CATCH(Exception, e) {
                java_throw(java_exception_new("RuntimeException", ""));
            } JAVA_END_TRY;
        }
}

GameCommandCanvas* GameCommandCanvas_new(CommandListener* cmdListener, const char* name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    GameCommandCanvas* this = java_object_alloc(sizeof(GameCommandCanvas), "GameCommandCanvas");
    GameCommandCanvas_init(this, cmdListener, name, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void GameCommandCanvas_updateMeasurement(GameCommandCanvas* this, Graphics* graphics) {
        JAVA_TRY {
            Font* font = Graphics_getFont(graphics);
            LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonStrings->START), this->base.canvasStrings->FD_WIDTH), MyFontProcessor_defaultCharWidth(font)), this->base.canvasStrings->FD_HEIGHT), Font_getHeight(font))), this, this->base.canvasStrings->UPDATE_MEASUREMENT);
            this->fontHeight = Font_getHeight(font);
            Rectangle* rectangle = GameCommandCanvas_createRectangle(this, ABCustomForm_size(this->menuForm));
            PaintableForm_initMethod(this->menuForm, rectangle, FormTypeFactory_getInstance()->VERTICAL_CENTER_FORM);
            GameCommandCanvas_update(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void GameCommandCanvas_onEvent(GameCommandCanvas* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void GameCommandCanvas_onDisplayChangeEvent(GameCommandCanvas* this, DisplayChangeEvent* displayChangeEvent) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.commonStrings->START), java_string_of(DisplayInfoSingleton_getInstance()))), this, this->base.canvasStrings->ON_DISPLAY_CHANGE_EVENT);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void GameCommandCanvas_initCommands(GameCommandCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        MyCanvas_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        MyCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void GameCommandCanvas_initMenu(GameCommandCanvas* this) {
        ScrollSelectionForm* form = GameCommandCanvas_createForm(this);
        this->menuForm = form;
        if (form != ScrollSelectionFormNoneFactory_getInstance()) {
            GameCommandCanvas_setMenuInputProcessor(this, ImmediateCommandFormInputProcessor_new(BasicArrayListD_new(), -1, this, form));
            this->menuPaintable = FormPaintable_new(form);
        }
        RepaintBehavior_onChangeRepaint(this->repaintBehavior, this);
}


// throws Exception
ScrollSelectionForm* GameCommandCanvas_createForm(GameCommandCanvas* this) {
        ABCustomItem** items = CommandTextItemArrayFactory_getInstance(CommandTextItemArrayFactory_new(AllCommandsVisitor_new()), MyCanvas_getCommandStack(this), this->backgroundBasicColor, this->foregroundBasicColor);
        Rectangle* rectangle = GameCommandCanvas_createRectangle(this, java_array_length(items));
        return CommandCurrentSelectionFormFactory_getInstance(StringUtil_getInstance()->EMPTY_STRING, items, rectangle, FormTypeFactory_getInstance()->VERTICAL_CENTER_FORM, 15, false, this->backgroundBasicColor, this->foregroundBasicColor);
}


Rectangle* GameCommandCanvas_createRectangle(GameCommandCanvas* this, int32_t size) {
        int32_t height = size * this->fontHeight;
        int32_t startY = (DisplayInfoSingleton_getLastHeight(this->base.displayInfo) * 2 / 3) - height;
        PointFactory* pointFactory = PointFactory_getInstance();
        Rectangle* rectangle = Rectangle_new(PointFactory_createXY(pointFactory, 30, startY), DisplayInfoSingleton_getLastWidth(this->base.displayInfo) - 30, startY);
        return rectangle;
}


void GameCommandCanvas_open(GameCommandCanvas* this) {
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, "open");
        BasicEventHandler_addListenerInterface(BasicMotionGesturesHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_addListener(GameKeyEventHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        BasicEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), this);
}


// throws Exception
void GameCommandCanvas_close(GameCommandCanvas* this) {
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CLOSE);
        BasicEventHandler_removeListener(BasicMotionGesturesHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), GameCommandCanvas_getMenuInputProcessor(this));
        BasicEventHandler_removeListener(DisplayChangeEventHandler_getInstance(), this);
}


// throws Exception
void GameCommandCanvas_update(GameCommandCanvas* this) {
        Processor_process(this->repaintProcessor);
}


int32_t GameCommandCanvas_getSourceId(GameCommandCanvas* this) {
        return GameCommandCanvas_id;
}


void GameCommandCanvas_keyPressed(GameCommandCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyPressedByDevice(this, keyCode, 0);
}


void GameCommandCanvas_keyReleased(GameCommandCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyReleasedByDevice(this, keyCode, 0);
}


void GameCommandCanvas_keyRepeated(GameCommandCanvas* this, int32_t keyCode) {
        GameCommandCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void GameCommandCanvas_keyPressedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), keyCode)), this, this->gameInputStrings->KEY_PRESSED);
        GameCommandCanvas_addGameKeyEvent(this, keyCode, 0, false);
}


void GameCommandCanvas_keyReleasedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId) {
        GameCommandCanvas_removeGameKeyEvent(this, keyCode, deviceId, false);
}


void GameCommandCanvas_keyRepeatedByDevice(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId) {
        if (this->isSingleKeyRepeatableProcessing) {
            GameCommandCanvas_addGameKeyEvent(this, keyCode, deviceId, true);
        }
}


static void GameCommandCanvas_addGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->gameKeyFactory->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                DownGameKeyEventHandlerBase_fireEvent(this->downGameKeyEventHandler, gameKeyEvent);
                DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandler_getInstanceForDevice(this->downGameKeyEventHandler, deviceId), gameKeyEvent);
            } else {
                LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), keyCode)), this, this->gameInputStrings->ADD_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


static void GameCommandCanvas_removeGameKeyEvent(GameCommandCanvas* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this, keyCode);
            if (gameKey != this->gameKeyFactory->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
                UpGameKeyEventHandlerBase_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
                UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), gameKeyEvent);
            } else {
                LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), keyCode)), this, this->gameInputStrings->REMOVE_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, "Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, e);
        } JAVA_END_TRY;
}


void GameCommandCanvas_paint(GameCommandCanvas* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Paintable_paint(this->menuPaintable, graphics);
        RepaintBehavior_repaint(this->repaintBehavior, this);
}


static void GameCommandCanvas_setMenuInputProcessor(GameCommandCanvas* this, BasicMenuInputProcessor* menuInputProcessor) {
        this->menuInputProcessor = menuInputProcessor;
}


BasicMenuInputProcessor* GameCommandCanvas_getMenuInputProcessor(GameCommandCanvas* this) {
        return this->menuInputProcessor;
}

