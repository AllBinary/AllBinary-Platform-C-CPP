// Generated Code Do Not Modify
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/NullEventListener.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"


static GameNotificationEventHandler* GameNotificationEventHandler_instance;





void GameNotificationEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameNotificationEventHandler_instance = GameNotificationEventHandler_new();
}

void GameNotificationEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameNotificationEventHandler", "BasicEventHandler");
    java_register_method("GameNotificationEventHandler", "removeAllListeners", (void*) GameNotificationEventHandler_removeAllListeners);
    java_register_method("GameNotificationEventHandler", "process", (void*) GameNotificationEventHandler_process);
}

static void GameNotificationEventHandler_initFields(GameNotificationEventHandler* this) {
    this->enabled = true;
}


void GameNotificationEventHandler_init(GameNotificationEventHandler* this) {
    GameNotificationEventHandler_register();
    BasicEventHandler_init(&this->base);
    GameNotificationEventHandler_initFields(this);
}

GameNotificationEventHandler* GameNotificationEventHandler_new(void) {
    GameNotificationEventHandler* this = java_object_alloc(sizeof(GameNotificationEventHandler), "GameNotificationEventHandler");
    GameNotificationEventHandler_init(this);
    return this;
}


// synchronized
void GameNotificationEventHandler_removeAllListeners(GameNotificationEventHandler* this) {
        EventListenerInterface* eventListenerInterface = (NullEventListener_staticInit(), NullEventListener_NULL_EVENT_LISTENER);
        BasicArrayList* list = this->base.eventListenerInterfaceList;
        if (BasicArrayList_size(list) > 0) {
            eventListenerInterface = ((EventListenerInterface*) list->objectArray[0]);
        }
        BasicEventHandler_removeAllListeners((&this->base));
        if (eventListenerInterface != (NullEventListener_staticInit(), NullEventListener_NULL_EVENT_LISTENER)) {
            BasicEventHandler_addListenerInterface(this, eventListenerInterface);
        }
}


GameNotificationEventHandler* GameNotificationEventHandler_getInstance(void) {
        return (GameNotificationEventHandler_staticInit(), GameNotificationEventHandler_instance);
}


// throws Exception
void GameNotificationEventHandler_process(GameNotificationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        if (!this->enabled) {
            return;
        }
        GameNotificationListenerInterface* gameNotificationListenerInterface = ((GameNotificationListenerInterface*) eventListenerInterface);
        GameNotificationListenerInterface_onGameNotificationEvent(gameNotificationListenerInterface, ((GameNotificationEvent*) eventObject));
}

