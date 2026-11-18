#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
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
typedef struct GameAdStateFactoryInterface GameAdStateFactoryInterface;
typedef struct AppNameLicensingAdConfiguration AppNameLicensingAdConfiguration;
typedef struct GameAdStateBase GameAdStateBase;
typedef struct GameAdState GameAdState;
typedef struct SoftwareInformation SoftwareInformation;
#if __has_include("org/allbinary/game/GameAdState.h")
#include "org/allbinary/game/GameAdState.h"
#endif
#include "org/allbinary/business/advertisement/GameAdStateFactoryInterface.h"

typedef struct GameAdStateFactory GameAdStateFactory;
struct GameAdStateFactory {
    GameAdStateFactoryInterface GameAdStateFactoryInterface_interface;
    GameAdState** gameAdStateArray;
    GameAdState* gameAdState;
};


GameAdStateFactory* GameAdStateFactory_new(void);
void GameAdStateFactory_init(GameAdStateFactory* this);

GameAdStateFactory* GameAdStateFactory_getInstance(void);

GameAdState* GameAdStateFactory_getCurrentInstance(GameAdStateFactory* this);

GameAdStateBase* GameAdStateFactory_getInstanceForApp(GameAdStateFactory* this, SoftwareInformation* softwareInformation);

bool GameAdStateFactory_isEnabled(GameAdStateFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameAdStateFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameAdStateFactory_register(void);

#if __has_include("org/allbinary/game/GameAdState.h")
#include "org/allbinary/game/GameAdState.h"
#endif

#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORY_H
