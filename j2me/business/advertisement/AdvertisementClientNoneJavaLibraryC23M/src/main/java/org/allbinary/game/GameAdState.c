// Generated Code Do Not Modify
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#if __has_include("org/allbinary/input/event/VirtualKeyboardEventHandler.h")
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#endif






void GameAdState_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameAdState_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameAdState", "GameAdStateBase");
    java_register_method("GameAdState", "onVirtualKeyboardEvent", (void*) GameAdState_onVirtualKeyboardEvent);
    java_register_method("GameAdState", "onEvent", (void*) GameAdState_onEvent);
}


void GameAdState_init(GameAdState* this, AdConfiguration* adConfiguration) {
    GameAdState_register();
        GameAdStateBase_init(&this->base, adConfiguration);
        BasicEventHandler_addListenerInterface(VirtualKeyboardEventHandler_getInstance(), this);
}

GameAdState* GameAdState_new(AdConfiguration* adConfiguration) {
    GameAdState* this = java_object_alloc(sizeof(GameAdState), "GameAdState");
    GameAdState_init(this, adConfiguration);
    return this;
}


// throws Exception
void GameAdState_onVirtualKeyboardEvent(GameAdState* this, VirtualKeyboardEvent* virtualKeyboardEvent) {
}


void GameAdState_onEvent(GameAdState* this, AllBinaryEventObject* eventObject) {
        GameAdStateBase_onEvent((&this->base), eventObject);
}

