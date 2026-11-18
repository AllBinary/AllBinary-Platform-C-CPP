// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/util/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/util/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/string/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/string/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/util/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/util/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/string/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/string/DownGameKeyEventHandlerBase.h"
#endif


static GameKeyEventHandler* GameKeyEventHandler_instance;






void GameKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyEventHandler_instance = GameKeyEventHandler_new();
}

void GameKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyEventHandler", nullptr);
    java_register_method("GameKeyEventHandler", "removeAllListeners", (void*) GameKeyEventHandler_removeAllListeners);
    java_register_method("GameKeyEventHandler", "addListenerForPlayer", (void*) GameKeyEventHandler_addListenerForPlayer);
    java_register_method("GameKeyEventHandler", "addListener", (void*) GameKeyEventHandler_addListener);
    java_register_method("GameKeyEventHandler", "removeListener", (void*) GameKeyEventHandler_removeListener);
}

static void GameKeyEventHandler_initFields(GameKeyEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->pressGameKeyEventHandler = PressGameKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
}

void GameKeyEventHandler_init(GameKeyEventHandler* this) {
    GameKeyEventHandler_register();
    GameKeyEventHandler_initFields(this);
}

GameKeyEventHandler* GameKeyEventHandler_new(void) {
    GameKeyEventHandler* this = java_object_alloc(sizeof(GameKeyEventHandler), "GameKeyEventHandler");
    GameKeyEventHandler_init(this);
    return this;
}


GameKeyEventHandler* GameKeyEventHandler_getInstance(void) {
        return (GameKeyEventHandler_staticInit(), GameKeyEventHandler_instance);
}


// synchronized
void GameKeyEventHandler_removeAllListeners(GameKeyEventHandler* this) {
        PressGameKeyEventHandler_removeAllListeners(this->pressGameKeyEventHandler);
        UpGameKeyEventHandler_removeAllListeners(this->upGameKeyEventHandler);
        DownGameKeyEventHandler_removeAllListeners(this->downGameKeyEventHandler);
}


void GameKeyEventHandler_addListenerForPlayer(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface, int32_t playerInputId) {
        LogUtil_putF(this->logUtil, java_string_of(eventListenerInterface), this, this->commonStrings->ADD_LISTENER);
        BasicEventHandler_addListenerSingleThreaded(this->pressGameKeyEventHandler, eventListenerInterface);
        BasicEventHandler_addListenerSingleThreaded(UpGameKeyEventHandler_getInstanceForPlayer(this->upGameKeyEventHandler, playerInputId), eventListenerInterface);
        BasicEventHandler_addListenerSingleThreaded(DownGameKeyEventHandler_getInstanceForPlayer(this->downGameKeyEventHandler, playerInputId), eventListenerInterface);
}


void GameKeyEventHandler_addListener(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        LogUtil_putF(this->logUtil, java_string_of(eventListenerInterface), this, this->commonStrings->ADD_LISTENER);
        BasicEventHandler_addListenerSingleThreaded(this->pressGameKeyEventHandler, eventListenerInterface);
        BasicEventHandler_addListenerSingleThreaded(this->upGameKeyEventHandler, eventListenerInterface);
        BasicEventHandler_addListenerSingleThreaded(this->downGameKeyEventHandler, eventListenerInterface);
}


void GameKeyEventHandler_removeListener(GameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        LogUtil_putF(this->logUtil, java_string_of(eventListenerInterface), this, this->commonStrings->REMOVE_LISTENER);
        BasicEventHandler_removeListenerSingleThreaded(this->pressGameKeyEventHandler, eventListenerInterface);
        UpGameKeyEventHandler_removeListenerSingleThreaded(this->upGameKeyEventHandler, eventListenerInterface);
        DownGameKeyEventHandler_removeListenerSingleThreaded(this->downGameKeyEventHandler, eventListenerInterface);
}

