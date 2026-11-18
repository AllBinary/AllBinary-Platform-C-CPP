// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"


static GameInputProcessor* GameInputProcessor_instance;








void GameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInputProcessor_instance = GameInputProcessor_new();
}

void GameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputProcessor", nullptr);
    java_register_method("GameInputProcessor", "processEvent", (void*) GameInputProcessor_processEvent);
    java_register_method("GameInputProcessor", "processReleasedEvent", (void*) GameInputProcessor_processReleasedEvent);
    java_register_method("GameInputProcessor", "processAnalog", (void*) GameInputProcessor_processAnalog);
    java_register_method("GameInputProcessor", "process", (void*) GameInputProcessor_process);
    java_register_method("GameInputProcessor", "processReleased", (void*) GameInputProcessor_processReleased);
}


GameInputProcessor* GameInputProcessor_getInstance(void) {
        return (GameInputProcessor_staticInit(), GameInputProcessor_instance);
}


void GameInputProcessor_init(GameInputProcessor* this) {
    GameInputProcessor_register();
}

GameInputProcessor* GameInputProcessor_new(void) {
    GameInputProcessor* this = java_object_alloc(sizeof(GameInputProcessor), "GameInputProcessor");
    GameInputProcessor_init(this);
    return this;
}


// throws Exception
void GameInputProcessor_processEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void GameInputProcessor_processReleasedEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void GameInputProcessor_processAnalog(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t analogValue) {
}


// throws Exception
void GameInputProcessor_process(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger) {
}


// throws Exception
void GameInputProcessor_processReleased(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger) {
}

