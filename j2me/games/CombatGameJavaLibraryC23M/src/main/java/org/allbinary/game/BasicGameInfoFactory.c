// Generated Code Do Not Modify
#include "org/allbinary/game/BasicGameInfoFactory.h"


static BasicGameInfoFactory* BasicGameInfoFactory_SINGLETON;






void BasicGameInfoFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicGameInfoFactory_SINGLETON = BasicGameInfoFactory_new();
}

void BasicGameInfoFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicGameInfoFactory", nullptr);
    java_register_method("BasicGameInfoFactory", "init", (void*) BasicGameInfoFactory_initMethod);
    java_register_method("BasicGameInfoFactory", "isPeaked", (void*) BasicGameInfoFactory_isPeaked);
    java_register_method("BasicGameInfoFactory", "howManyLeft", (void*) BasicGameInfoFactory_howManyLeft);
}

static void BasicGameInfoFactory_initFields(BasicGameInfoFactory* this) {
    this->currentReleaseIndex = 0;
    this->currentDestroyIndex = 0;
    this->total = 0;
}


BasicGameInfoFactory* BasicGameInfoFactory_getInstance(void) {
        return (BasicGameInfoFactory_staticInit(), BasicGameInfoFactory_SINGLETON);
}


void BasicGameInfoFactory_init(BasicGameInfoFactory* this) {
    BasicGameInfoFactory_register();
    BasicGameInfoFactory_initFields(this);
}

BasicGameInfoFactory* BasicGameInfoFactory_new(void) {
    BasicGameInfoFactory* this = java_object_alloc(sizeof(BasicGameInfoFactory), "BasicGameInfoFactory");
    BasicGameInfoFactory_init(this);
    return this;
}


void BasicGameInfoFactory_initMethod(BasicGameInfoFactory* this, int32_t total) {
        this->currentReleaseIndex = 0;
        this->currentDestroyIndex = 0;
        this->total = total;
}


bool BasicGameInfoFactory_isPeaked(BasicGameInfoFactory* this) {
        if (this->currentDestroyIndex >= this->total) {
            return true;
        } else {
            return false;
        }
}


int32_t BasicGameInfoFactory_howManyLeft(BasicGameInfoFactory* this) {
        return this->total - this->currentDestroyIndex;
}

