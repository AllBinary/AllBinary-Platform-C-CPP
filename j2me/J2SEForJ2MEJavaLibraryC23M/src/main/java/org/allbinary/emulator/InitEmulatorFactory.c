// Generated Code Do Not Modify
#include "org/allbinary/emulator/InitEmulatorFactory.h"


static InitEmulatorFactory* InitEmulatorFactory_instance;




void InitEmulatorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InitEmulatorFactory_instance = InitEmulatorFactory_new();
}

void InitEmulatorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InitEmulatorFactory", nullptr);
    java_register_method("InitEmulatorFactory", "setInitEmulator", (void*) InitEmulatorFactory_setInitEmulator);
    java_register_method("InitEmulatorFactory", "isInitEmulator", (void*) InitEmulatorFactory_isInitEmulator);
}

static void InitEmulatorFactory_initFields(InitEmulatorFactory* this) {
    this->initEmulator = false;
}

void InitEmulatorFactory_init(InitEmulatorFactory* this) {
    InitEmulatorFactory_register();
    InitEmulatorFactory_initFields(this);
}

InitEmulatorFactory* InitEmulatorFactory_new(void) {
    InitEmulatorFactory* this = java_object_alloc(sizeof(InitEmulatorFactory), "InitEmulatorFactory");
    InitEmulatorFactory_init(this);
    return this;
}


InitEmulatorFactory* InitEmulatorFactory_getInstance(void) {
        return (InitEmulatorFactory_staticInit(), InitEmulatorFactory_instance);
}


void InitEmulatorFactory_setInitEmulator(InitEmulatorFactory* this, bool initEmulator) {
        this->initEmulator = initEmulator;
}


bool InitEmulatorFactory_isInitEmulator(InitEmulatorFactory* this) {
        return this->initEmulator;
}

