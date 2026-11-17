// Generated Code Do Not Modify
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/business/advertisement/GameAdStateFactoryInterface.h"

typedef struct GameAdStateFactory GameAdStateFactory;
struct GameAdStateFactory {
    GameAdStateFactoryInterface GameAdStateFactoryInterface_interface;
    GameAdState** gameAdStateArray;
    GameAdState* gameAdState;
};

static GameAdStateFactory* GameAdStateFactory_instance;

GameAdStateFactory* GameAdStateFactory_new(void);
GameAdStateFactory* GameAdStateFactory_getInstance(void);
GameAdState* GameAdStateFactory_getCurrentInstance(GameAdStateFactory* this);
GameAdStateBase* GameAdStateFactory_getInstanceForApp(GameAdStateFactory* this, SoftwareInformation* softwareInformation);
bool GameAdStateFactory_isEnabled(GameAdStateFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameAdStateFactory_staticInit(void) {
    GameAdStateFactory_instance = GameAdStateFactory_new();
}

static void GameAdStateFactory_initFields(GameAdStateFactory* this) {
    this->gameAdStateArray = ((GameAdState**) java_array_from(sizeof(GameAdState*), sizeof((GameAdState*[]){ GameAdState_new(AppNameLicensingAdConfiguration_new()) }) / sizeof(GameAdState*), (GameAdState*[]){ GameAdState_new(AppNameLicensingAdConfiguration_new()) }));
    this->gameAdState = this->gameAdStateArray[0];
}

void GameAdStateFactory_init(GameAdStateFactory* this) {
    GameAdStateFactory_initFields(this);
}

GameAdStateFactory* GameAdStateFactory_new(void) {
    GameAdStateFactory* this = calloc(1, sizeof(GameAdStateFactory));
    GameAdStateFactory_init(this);
    return this;
}


GameAdStateFactory* GameAdStateFactory_getInstance(void) {
        return GameAdStateFactory_instance;
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

