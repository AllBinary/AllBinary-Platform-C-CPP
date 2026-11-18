// Generated Code Do Not Modify
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/PlayerGameInput.h"


static NoPlayerGameInput* NoPlayerGameInput_SINGLETON;





void NoPlayerGameInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoPlayerGameInput_SINGLETON = NoPlayerGameInput_new();
}

void NoPlayerGameInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoPlayerGameInput", "PlayerGameInput");
    java_register_method("NoPlayerGameInput", "onDownGameKeyEvent", (void*) NoPlayerGameInput_onDownGameKeyEvent);
    java_register_method("NoPlayerGameInput", "onUpGameKeyEvent", (void*) NoPlayerGameInput_onUpGameKeyEvent);
}


NoPlayerGameInput* NoPlayerGameInput_getInstance(void) {
        return (NoPlayerGameInput_staticInit(), NoPlayerGameInput_SINGLETON);
}


void NoPlayerGameInput_init(NoPlayerGameInput* this) {
    NoPlayerGameInput_register();
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
}

NoPlayerGameInput* NoPlayerGameInput_new(void) {
    NoPlayerGameInput* this = java_object_alloc(sizeof(NoPlayerGameInput), "NoPlayerGameInput");
    NoPlayerGameInput_init(this);
    return this;
}


// synchronized
void NoPlayerGameInput_onDownGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
}


// synchronized
void NoPlayerGameInput_onUpGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
}

