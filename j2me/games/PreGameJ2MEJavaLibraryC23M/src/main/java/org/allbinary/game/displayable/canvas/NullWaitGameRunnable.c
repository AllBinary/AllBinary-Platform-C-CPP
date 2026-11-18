// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"


static GameRunnable* NullWaitGameRunnable_instance;


void NullWaitGameRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullWaitGameRunnable_instance = NullWaitGameRunnable_new();
}

void NullWaitGameRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullWaitGameRunnable", "GameRunnable");
}

void NullWaitGameRunnable_init(NullWaitGameRunnable* this) {
    NullWaitGameRunnable_register();
    GameRunnable_init(&this->base);
}

NullWaitGameRunnable* NullWaitGameRunnable_new(void) {
    NullWaitGameRunnable* this = java_object_alloc(sizeof(NullWaitGameRunnable), "NullWaitGameRunnable");
    NullWaitGameRunnable_init(this);
    return this;
}


GameRunnable* NullWaitGameRunnable_getInstance(void) {
        return (NullWaitGameRunnable_staticInit(), NullWaitGameRunnable_instance);
}

