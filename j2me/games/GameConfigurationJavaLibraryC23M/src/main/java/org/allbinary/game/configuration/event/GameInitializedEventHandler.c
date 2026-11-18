// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"


static GameInitializedEventHandler* GameInitializedEventHandler_gameKeyEventHandler;




void GameInitializedEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInitializedEventHandler_gameKeyEventHandler = GameInitializedEventHandler_new();
}

void GameInitializedEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInitializedEventHandler", "BasicEventHandler");
    java_register_method("GameInitializedEventHandler", "process", (void*) GameInitializedEventHandler_process);
}


void GameInitializedEventHandler_init(GameInitializedEventHandler* this) {
    GameInitializedEventHandler_register();
    BasicEventHandler_init(&this->base);
}

GameInitializedEventHandler* GameInitializedEventHandler_new(void) {
    GameInitializedEventHandler* this = java_object_alloc(sizeof(GameInitializedEventHandler), "GameInitializedEventHandler");
    GameInitializedEventHandler_init(this);
    return this;
}


GameInitializedEventHandler* GameInitializedEventHandler_getInstance(void) {
        return (GameInitializedEventHandler_staticInit(), GameInitializedEventHandler_gameKeyEventHandler);
}


// throws Exception
void GameInitializedEventHandler_process(GameInitializedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GameInitializedListenerInterface* gameInitializedListenerInterface = (((GameInitializedListenerInterface*) eventListenerInterface));
        GameInitializedListenerInterface_onGameInitialized(gameInitializedListenerInterface, ((GameInitializedEvent*) eventObject));
}

