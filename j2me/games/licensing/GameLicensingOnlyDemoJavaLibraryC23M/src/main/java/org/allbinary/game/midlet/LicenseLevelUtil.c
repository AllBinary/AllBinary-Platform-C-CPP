// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/LicenseLevelUtil.h"


static LicenseLevelUtil* LicenseLevelUtil_instance;



void LicenseLevelUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseLevelUtil_instance = LicenseLevelUtil_new();
}

void LicenseLevelUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseLevelUtil", nullptr);
    java_register_method("LicenseLevelUtil", "getMaxLevel", (void*) LicenseLevelUtil_getMaxLevel);
}

void LicenseLevelUtil_init(LicenseLevelUtil* this) {
    LicenseLevelUtil_register();
}

LicenseLevelUtil* LicenseLevelUtil_new(void) {
    LicenseLevelUtil* this = java_object_alloc(sizeof(LicenseLevelUtil), "LicenseLevelUtil");
    LicenseLevelUtil_init(this);
    return this;
}


LicenseLevelUtil* LicenseLevelUtil_getInstance(void) {
        return (LicenseLevelUtil_staticInit(), LicenseLevelUtil_instance);
}


int32_t LicenseLevelUtil_getMaxLevel(LicenseLevelUtil* this, int32_t maxLevel, int32_t demoLevel) {
        return demoLevel;
}

