// Generated Code Do Not Modify
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/Scoreable.h"


static NoScoreable* NoScoreable_SINGLETON;





void NoScoreable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoScoreable_SINGLETON = NoScoreable_new();
}

void NoScoreable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoScoreable", "Scoreable");
    java_register_method("NoScoreable", "addPoints", (void*) NoScoreable_addPoints);
    java_register_method("NoScoreable", "removePoints", (void*) NoScoreable_removePoints);
}


NoScoreable* NoScoreable_getInstance(void) {
        return (NoScoreable_staticInit(), NoScoreable_SINGLETON);
}


void NoScoreable_init(NoScoreable* this) {
    NoScoreable_register();
        Scoreable_init(&this->base, 0);
}

NoScoreable* NoScoreable_new(void) {
    NoScoreable* this = java_object_alloc(sizeof(NoScoreable), "NoScoreable");
    NoScoreable_init(this);
    return this;
}


void NoScoreable_addPoints(NoScoreable* this, int32_t points) {
}


void NoScoreable_removePoints(NoScoreable* this, int32_t points) {
}

