// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif




void GameEventHandlerUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameEventHandlerUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameEventHandlerUtil", nullptr);
}

void GameEventHandlerUtil_init(GameEventHandlerUtil* this) {
    GameEventHandlerUtil_register();
}

GameEventHandlerUtil* GameEventHandlerUtil_new(void) {
    GameEventHandlerUtil* this = java_object_alloc(sizeof(GameEventHandlerUtil), "GameEventHandlerUtil");
    GameEventHandlerUtil_init(this);
    return this;
}


void GameEventHandlerUtil_removeAllListeners(void) {
        UpGameKeyEventHandler_removeAllListeners(UpGameKeyEventHandler_getInstance());
        DownGameKeyEventHandler_removeAllListeners(DownGameKeyEventHandler_getInstance());
}

