// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoCanvasBasicStartInputProcessor.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/CommandListener.h")
#include "org/allbinary/game/displayable/canvas/CommandListener.h"
#endif
#if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#if __has_include("org/allbinary/canvas/CommandListener.h")
#include "org/allbinary/canvas/CommandListener.h"
#endif
#if __has_include("org/allbinary/game/commands/CommandListener.h")
#include "org/allbinary/game/commands/CommandListener.h"
#endif
#if __has_include("org/allbinary/game/input/CommandListener.h")
#include "org/allbinary/game/input/CommandListener.h"
#endif
#if __has_include("org/allbinary/game/input/event/CommandListener.h")
#include "org/allbinary/game/input/event/CommandListener.h"
#endif
#if __has_include("org/allbinary/logic/string/CommandListener.h")
#include "org/allbinary/logic/string/CommandListener.h"
#endif
#if __has_include("org/allbinary/logic/string/CommandListener.h")
#include "org/allbinary/logic/string/CommandListener.h"
#endif
#if __has_include("org/allbinary/util/CommandListener.h")
#include "org/allbinary/util/CommandListener.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/MyCanvas.h")
#include "org/allbinary/game/displayable/canvas/MyCanvas.h"
#endif
#if __has_include("javax/microedition/lcdui/MyCanvas.h")
#include "javax/microedition/lcdui/MyCanvas.h"
#endif
#if __has_include("org/allbinary/canvas/MyCanvas.h")
#include "org/allbinary/canvas/MyCanvas.h"
#endif
#if __has_include("org/allbinary/game/commands/MyCanvas.h")
#include "org/allbinary/game/commands/MyCanvas.h"
#endif
#if __has_include("org/allbinary/game/input/MyCanvas.h")
#include "org/allbinary/game/input/MyCanvas.h"
#endif
#if __has_include("org/allbinary/game/input/event/MyCanvas.h")
#include "org/allbinary/game/input/event/MyCanvas.h"
#endif
#if __has_include("org/allbinary/logic/string/MyCanvas.h")
#include "org/allbinary/logic/string/MyCanvas.h"
#endif
#if __has_include("org/allbinary/logic/string/MyCanvas.h")
#include "org/allbinary/logic/string/MyCanvas.h"
#endif
#if __has_include("org/allbinary/util/MyCanvas.h")
#include "org/allbinary/util/MyCanvas.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif





void DemoCanvasBasicStartInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoCanvasBasicStartInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoCanvasBasicStartInputProcessor", "BasicMenuInputProcessor");
    java_register_method("DemoCanvasBasicStartInputProcessor", "processInputList", (void*) DemoCanvasBasicStartInputProcessor_processInputList);
}


void DemoCanvasBasicStartInputProcessor_init(DemoCanvasBasicStartInputProcessor* this, BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas) {
    DemoCanvasBasicStartInputProcessor_register();
        BasicMenuInputProcessor_init(&this->base, gameKeyEventList, -1, gameCanvas);
}

DemoCanvasBasicStartInputProcessor* DemoCanvasBasicStartInputProcessor_new(BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas) {
    DemoCanvasBasicStartInputProcessor* this = java_object_alloc(sizeof(DemoCanvasBasicStartInputProcessor), "DemoCanvasBasicStartInputProcessor");
    DemoCanvasBasicStartInputProcessor_init(this, gameKeyEventList, gameCanvas);
    return this;
}


// throws Exception
int32_t DemoCanvasBasicStartInputProcessor_processInputList(DemoCanvasBasicStartInputProcessor* this) {
        BasicArrayList* list = GameInput_getGameKeyEventList(this);
        int32_t size = BasicArrayList_size(list);
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
            LogUtil_putF(this->base.base.base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Start GameKey: "), StringUtil_toString(StringUtil_getInstance(), gameKeyEvent))), this, GameInputStrings_getInstance()->PROCESS_INPUT);
        }
        CommandListener_commandAction(MyCanvas_getCustomCommandListener(BasicMenuInputProcessor_getCanvas(this)), GameCommandsFactory_getInstance()->START_COMMAND, (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
        return size;
}

