// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/LicenseLoadingTypeFactory.h"
#include "org/allbinary/game/midlet/LicenseLoadingType.h"


static LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_instance;


void LicenseLoadingTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseLoadingTypeFactory_instance = LicenseLoadingTypeFactory_new();
}

void LicenseLoadingTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseLoadingTypeFactory", nullptr);
}

static void LicenseLoadingTypeFactory_initFields(LicenseLoadingTypeFactory* this) {
    this->INITIAL_LOADING = LicenseLoadingType_new("Initial Loading");
    this->GAME_START = LicenseLoadingType_new("Game Start");
    this->LOGIN = LicenseLoadingType_new("Login");
    this->OTHER = LicenseLoadingType_new("Other/Usually The First Non Demo Level");
}

void LicenseLoadingTypeFactory_init(LicenseLoadingTypeFactory* this) {
    LicenseLoadingTypeFactory_register();
    LicenseLoadingTypeFactory_initFields(this);
}

LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_new(void) {
    LicenseLoadingTypeFactory* this = java_object_alloc(sizeof(LicenseLoadingTypeFactory), "LicenseLoadingTypeFactory");
    LicenseLoadingTypeFactory_init(this);
    return this;
}


LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_getIntance(void) {
        return (LicenseLoadingTypeFactory_staticInit(), LicenseLoadingTypeFactory_instance);
}

