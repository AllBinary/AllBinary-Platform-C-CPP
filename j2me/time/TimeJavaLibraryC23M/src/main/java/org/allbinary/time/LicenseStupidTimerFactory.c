// Generated Code Do Not Modify
#include "org/allbinary/time/LicenseStupidTimerFactory.h"
#include "org/allbinary/time/StupidTimer.h"


static StupidTimer* LicenseStupidTimerFactory_instance;


void LicenseStupidTimerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseStupidTimerFactory_instance = StupidTimer_new();
}

void LicenseStupidTimerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseStupidTimerFactory", nullptr);
}

void LicenseStupidTimerFactory_init(LicenseStupidTimerFactory* this) {
    LicenseStupidTimerFactory_register();
}

LicenseStupidTimerFactory* LicenseStupidTimerFactory_new(void) {
    LicenseStupidTimerFactory* this = java_object_alloc(sizeof(LicenseStupidTimerFactory), "LicenseStupidTimerFactory");
    LicenseStupidTimerFactory_init(this);
    return this;
}


StupidTimer* LicenseStupidTimerFactory_getInstance(void) {
        return (LicenseStupidTimerFactory_staticInit(), LicenseStupidTimerFactory_instance);
}

