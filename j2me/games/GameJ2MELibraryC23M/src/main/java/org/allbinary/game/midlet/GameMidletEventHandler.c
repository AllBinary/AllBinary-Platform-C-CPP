// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/GameMidletEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/midlet/GameMidletEventListener.h"


static GameMidletEventHandler* GameMidletEventHandler_gameKeyEventHandler;




void GameMidletEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameMidletEventHandler_gameKeyEventHandler = GameMidletEventHandler_new();
}

void GameMidletEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameMidletEventHandler", "BasicEventHandler");
    java_register_method("GameMidletEventHandler", "process", (void*) GameMidletEventHandler_process);
}


void GameMidletEventHandler_init(GameMidletEventHandler* this) {
    GameMidletEventHandler_register();
    BasicEventHandler_init(&this->base);
}

GameMidletEventHandler* GameMidletEventHandler_new(void) {
    GameMidletEventHandler* this = java_object_alloc(sizeof(GameMidletEventHandler), "GameMidletEventHandler");
    GameMidletEventHandler_init(this);
    return this;
}


GameMidletEventHandler* GameMidletEventHandler_getInstance(void) {
        return (GameMidletEventHandler_staticInit(), GameMidletEventHandler_gameKeyEventHandler);
}


// throws Exception
void GameMidletEventHandler_process(GameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GameMidletEventListener* gameMidletEventListener = ((GameMidletEventListener*) eventListenerInterface);
        GameMidletEventListener_onGameEnd(gameMidletEventListener, eventObject);
}

