/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct GameInitializationUtil GameInitializationUtil;
struct GameInitializationUtil {
    GameInitializedEvent* EVENT;
};

static GameInitializationUtil* GameInitializationUtil_instance;

GameInitializationUtil* GameInitializationUtil_new(void);
void GameInitializationUtil_initDemo(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);
void GameInitializationUtil_initGame(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);
GameInitializationUtil* GameInitializationUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameInitializationUtil_staticInit(void) {
    GameInitializationUtil_instance = GameInitializationUtil_new();
}

static void GameInitializationUtil_initFields(GameInitializationUtil* this) {
    this->EVENT = GameInitializedEvent_new(this);
}

void GameInitializationUtil_init(GameInitializationUtil* this) {
    GameInitializationUtil_initFields(this);
}

GameInitializationUtil* GameInitializationUtil_new(void) {
    GameInitializationUtil* this = calloc(1, sizeof(GameInitializationUtil));
    GameInitializationUtil_init(this);
    return this;
}


// throws Exception
void GameInitializationUtil_initDemo(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), mainFeatureFactory->STATIC)) {
            GameInitializationInterface* gameInitializationInterface = BasicBuildGameInitializerFactory_getInstance(gameInitializationInterfaceFactoryInterface);
            Features* features = Features_getInstance();
            if (Features_isFeature(features, mainFeatureFactory->LOAD_ALL)) {
                GameInitializationUtil_initGame(this, abeClientInformation, canvas, gameInitializationInterfaceFactoryInterface);
            } else if (Features_isFeature(features, mainFeatureFactory->LOAD_ONDEMAND)) {
                ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
                GameInitializationInterface_init(gameInitializationInterface, abeClientInformation, MyCanvas_getCustomCommandListener(canvas), JAVA_CALL(resourceLoadingLevelFactory->LOAD_EARLY, getLevel));
                GameInitializedEvent_setResourceLoadingLevel(this->EVENT, resourceLoadingLevelFactory->LOAD_EARLY);
            } else {
                java_throw(java_exception_new("Exception", "No Loading Feature Available"));
            }
            GameInitializedEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), this->EVENT);
        }
}


// throws Exception
void GameInitializationUtil_initGame(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface) {
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC)) {
            GameInitializationInterface* gameInitializationInterface = BasicBuildGameInitializerFactory_getInstance(gameInitializationInterfaceFactoryInterface);
            ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
            GameInitializationInterface_init(gameInitializationInterface, abeClientInformation, MyCanvas_getCustomCommandListener(canvas), JAVA_CALL(resourceLoadingLevelFactory->LOAD_ALL, getLevel));
            GameInitializedEvent_setResourceLoadingLevel(this->EVENT, resourceLoadingLevelFactory->LOAD_ALL);
            GameInitializedEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), this->EVENT);
            ChangedGameFeatureListener_remove(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC);
        }
}


GameInitializationUtil* GameInitializationUtil_getInstance(void) {
        return GameInitializationUtil_instance;
}

