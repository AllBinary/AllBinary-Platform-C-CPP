// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/LicensedDemoSetupFactory.h"
#include "org/allbinary/game/midlet/DemoSetup.h"




void LicensedDemoSetupFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LicensedDemoSetupFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicensedDemoSetupFactory", nullptr);
    java_register_method("LicensedDemoSetupFactory", "getInstance", (void*) LicensedDemoSetupFactory_getInstance);
}

void LicensedDemoSetupFactory_init(LicensedDemoSetupFactory* this) {
    LicensedDemoSetupFactory_register();
}

LicensedDemoSetupFactory* LicensedDemoSetupFactory_new(void) {
    LicensedDemoSetupFactory* this = java_object_alloc(sizeof(LicensedDemoSetupFactory), "LicensedDemoSetupFactory");
    LicensedDemoSetupFactory_init(this);
    return this;
}


DemoSetup* LicensedDemoSetupFactory_getInstance(LicensedDemoSetupFactory* this) {
        return DemoSetup_new();
}

