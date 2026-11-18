// Generated Code Do Not Modify
#include "org/allbinary/game/tick/NullTickable.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/tick/TickableInterface.h"


static NullTickable* NullTickable_SINGLETON;




void NullTickable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullTickable_SINGLETON = NullTickable_new();
}

void NullTickable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullTickable", nullptr);
    java_register_method("NullTickable", "processTick", (void*) NullTickable_processTick);
    java_register_method("NullTickable", "getName", (void*) NullTickable_getName);
}

static void NullTickable_initFields(NullTickable* this) {
    this->NAME = "NulLTickable";
}

void NullTickable_init(NullTickable* this) {
    NullTickable_register();
    NullTickable_initFields(this);
}

NullTickable* NullTickable_new(void) {
    NullTickable* this = java_object_alloc(sizeof(NullTickable), "NullTickable");
    NullTickable_init(this);
    return this;
}


NullTickable* NullTickable_getInstance(void) {
        return (NullTickable_staticInit(), NullTickable_SINGLETON);
}


// throws Exception
void NullTickable_processTick(NullTickable* this, AllBinaryLayerManager* allBinaryLayerManager) {
}


const char* NullTickable_getName(NullTickable* this) {
        return this->NAME;
}

