// Generated Code Do Not Modify
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"



void MultipassState_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultipassState_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultipassState", nullptr);
}

static void MultipassState_initFields(MultipassState* this) {
    this->step = 0;
    this->iteration = 0;
    this->iteration2 = 0;
}

void MultipassState_init(MultipassState* this) {
    MultipassState_register();
    MultipassState_initFields(this);
}

MultipassState* MultipassState_new(void) {
    MultipassState* this = java_object_alloc(sizeof(MultipassState), "MultipassState");
    MultipassState_init(this);
    return this;
}

