// Generated Code Do Not Modify
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/init/GameInitializationInterfaceFactoryInterface.h"
#include "org/allbinary/game/init/BaseGameInitialization.h"
#include "org/allbinary/game/init/GameInitializationInterface.h"


BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;


void BasicBuildGameInitializerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY = BasicBuildGameInitializerFactory_new();
}

void BasicBuildGameInitializerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicBuildGameInitializerFactory", nullptr);
    java_register_method("BasicBuildGameInitializerFactory", "getInstance", (void*) BasicBuildGameInitializerFactory_getInstance);
}

void BasicBuildGameInitializerFactory_init(BasicBuildGameInitializerFactory* this) {
    BasicBuildGameInitializerFactory_register();
}

BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_new(void) {
    BasicBuildGameInitializerFactory* this = java_object_alloc(sizeof(BasicBuildGameInitializerFactory), "BasicBuildGameInitializerFactory");
    BasicBuildGameInitializerFactory_init(this);
    return this;
}


GameInitializationInterface* BasicBuildGameInitializerFactory_getInstance(BasicBuildGameInitializerFactory* this) {
        return (BaseGameInitialization_staticInit(), BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION);
}

