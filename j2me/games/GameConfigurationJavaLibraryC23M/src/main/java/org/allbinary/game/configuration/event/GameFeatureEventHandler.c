// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"


static GameFeatureEventHandler* GameFeatureEventHandler_gameKeyEventHandler;




void GameFeatureEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameFeatureEventHandler_gameKeyEventHandler = GameFeatureEventHandler_new();
}

void GameFeatureEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureEventHandler", "BasicEventHandler");
    java_register_method("GameFeatureEventHandler", "process", (void*) GameFeatureEventHandler_process);
}


void GameFeatureEventHandler_init(GameFeatureEventHandler* this) {
    GameFeatureEventHandler_register();
    BasicEventHandler_init(&this->base);
}

GameFeatureEventHandler* GameFeatureEventHandler_new(void) {
    GameFeatureEventHandler* this = java_object_alloc(sizeof(GameFeatureEventHandler), "GameFeatureEventHandler");
    GameFeatureEventHandler_init(this);
    return this;
}


GameFeatureEventHandler* GameFeatureEventHandler_getInstance(void) {
        return (GameFeatureEventHandler_staticInit(), GameFeatureEventHandler_gameKeyEventHandler);
}


// throws Exception
void GameFeatureEventHandler_process(GameFeatureEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GameFeatureListenerInterface* gameFeatureListenerInterface = (((GameFeatureListenerInterface*) eventListenerInterface));
        GameFeatureListenerInterface_onGameFeatureChange(gameFeatureListenerInterface, ((GameFeatureEvent*) eventObject));
}

