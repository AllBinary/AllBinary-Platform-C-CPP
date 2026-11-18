// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/GameLevelDisplayChangeEventListenersFactory.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#endif


static GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_instance;




void GameLevelDisplayChangeEventListenersFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameLevelDisplayChangeEventListenersFactory_instance = GameLevelDisplayChangeEventListenersFactory_new();
}

void GameLevelDisplayChangeEventListenersFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameLevelDisplayChangeEventListenersFactory", nullptr);
    java_register_method("GameLevelDisplayChangeEventListenersFactory", "add", (void*) GameLevelDisplayChangeEventListenersFactory_add);
    java_register_method("GameLevelDisplayChangeEventListenersFactory", "clear", (void*) GameLevelDisplayChangeEventListenersFactory_clear);
}

static void GameLevelDisplayChangeEventListenersFactory_initFields(GameLevelDisplayChangeEventListenersFactory* this) {
    this->list = BasicArrayListD_new();
}

void GameLevelDisplayChangeEventListenersFactory_init(GameLevelDisplayChangeEventListenersFactory* this) {
    GameLevelDisplayChangeEventListenersFactory_register();
    GameLevelDisplayChangeEventListenersFactory_initFields(this);
}

GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_new(void) {
    GameLevelDisplayChangeEventListenersFactory* this = java_object_alloc(sizeof(GameLevelDisplayChangeEventListenersFactory), "GameLevelDisplayChangeEventListenersFactory");
    GameLevelDisplayChangeEventListenersFactory_init(this);
    return this;
}


GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_getInstance(void) {
        return (GameLevelDisplayChangeEventListenersFactory_staticInit(), GameLevelDisplayChangeEventListenersFactory_instance);
}


void GameLevelDisplayChangeEventListenersFactory_add(GameLevelDisplayChangeEventListenersFactory* this, DisplayChangeEventListener* displayChangeEventListener) {
        BasicArrayList_add(this->list, displayChangeEventListener);
        BasicEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), displayChangeEventListener);
}


void GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory* this) {
        BasicEventHandler* displayChangeEventHandler = DisplayChangeEventHandler_getInstance();
        DisplayChangeEventListener* displayChangeEventListener = nullptr;
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            displayChangeEventListener = ((DisplayChangeEventListener*) this->list->objectArray[index]);
            BasicEventHandler_removeListener(displayChangeEventHandler, displayChangeEventListener);
        }
        BasicArrayList_clear(this->list);
}

