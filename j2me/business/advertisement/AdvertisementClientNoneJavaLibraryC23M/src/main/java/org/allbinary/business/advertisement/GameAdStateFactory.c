// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/business/advertisement/GameAdStateFactoryInterface.h"
#include "org/allbinary/business/advertisement/AppNameLicensingAdConfiguration.h"
#include "org/allbinary/business/advertisement/GameAdStateBase.h"


static GameAdStateFactory* GameAdStateFactory_instance;





void GameAdStateFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameAdStateFactory_instance = GameAdStateFactory_new();
}

void GameAdStateFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameAdStateFactory", nullptr);
    java_register_method("GameAdStateFactory", "getCurrentInstance", (void*) GameAdStateFactory_getCurrentInstance);
    java_register_method("GameAdStateFactory", "getInstanceForApp", (void*) GameAdStateFactory_getInstanceForApp);
    java_register_method("GameAdStateFactory", "isEnabled", (void*) GameAdStateFactory_isEnabled);
}

static void GameAdStateFactory_initFields(GameAdStateFactory* this) {
    this->gameAdStateArray = ((GameAdState**) java_array_from(sizeof(GameAdState*), sizeof((GameAdState*[]){ GameAdState_new(AppNameLicensingAdConfiguration_new()) }) / sizeof(GameAdState*), (GameAdState*[]){ GameAdState_new(AppNameLicensingAdConfiguration_new()) }));
    this->gameAdState = this->gameAdStateArray[0];
}

void GameAdStateFactory_init(GameAdStateFactory* this) {
    GameAdStateFactory_register();
    GameAdStateFactory_initFields(this);
}

GameAdStateFactory* GameAdStateFactory_new(void) {
    GameAdStateFactory* this = java_object_alloc(sizeof(GameAdStateFactory), "GameAdStateFactory");
    GameAdStateFactory_init(this);
    return this;
}


GameAdStateFactory* GameAdStateFactory_getInstance(void) {
        return (GameAdStateFactory_staticInit(), GameAdStateFactory_instance);
}


GameAdState* GameAdStateFactory_getCurrentInstance(GameAdStateFactory* this) {
        return this->gameAdState;
}


// throws Exception
GameAdStateBase* GameAdStateFactory_getInstanceForApp(GameAdStateFactory* this, SoftwareInformation* softwareInformation) {
        this->gameAdState = this->gameAdStateArray[0];
        return this->gameAdStateArray[0];
}


bool GameAdStateFactory_isEnabled(GameAdStateFactory* this) {
        return false;
}

