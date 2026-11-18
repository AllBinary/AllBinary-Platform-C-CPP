// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/LicenseCheckRunnableFactory.h"
#include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/NullABRunnable.h"
#include "org/allbinary/game/midlet/SpecialDemoGameMidlet.h"




void LicenseCheckRunnableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LicenseCheckRunnableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseCheckRunnableFactory", nullptr);
    java_register_method("LicenseCheckRunnableFactory", "getInstance", (void*) LicenseCheckRunnableFactory_getInstance);
}

void LicenseCheckRunnableFactory_init(LicenseCheckRunnableFactory* this) {
    LicenseCheckRunnableFactory_register();
}

LicenseCheckRunnableFactory* LicenseCheckRunnableFactory_new(void) {
    LicenseCheckRunnableFactory* this = java_object_alloc(sizeof(LicenseCheckRunnableFactory), "LicenseCheckRunnableFactory");
    LicenseCheckRunnableFactory_init(this);
    return this;
}


ABRunnable* LicenseCheckRunnableFactory_getInstance(LicenseCheckRunnableFactory* this, SpecialDemoGameMidlet* specialDemoGameMidlet) {
        return NullABRunnable_getInstance();
}

