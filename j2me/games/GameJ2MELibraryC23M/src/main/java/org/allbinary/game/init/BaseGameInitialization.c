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
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"
#include "org/allbinary/game/resource/ResourceInitialization.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/init/GameInitializationInterface.h"

typedef struct BaseGameInitialization BaseGameInitialization;
struct BaseGameInitialization {
    GameInitializationInterface GameInitializationInterface_interface;
    ResourceInitialization** resourceInitializationArray;
    int32_t portion;
    bool initialized;
    int32_t EARLY_RESOURCES;
    int32_t GAME_RESOURCES;
    int32_t EARLY_CHANGABLE_RESOURCES;
    int32_t GAME_CHANGABLE_RESOURCES;
    bool gameInitialized;
    bool allLoaded;
};

BaseGameInitialization* BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION;

BaseGameInitialization* BaseGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion);

void BaseGameInitialization_init(BaseGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion);
void BaseGameInitialization_initKey(BaseGameInitialization* this, int32_t portion);
void BaseGameInitialization_initKeyMapping(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, int32_t portion);
void BaseGameInitialization_init(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level);
void BaseGameInitialization_resourceInitialization(BaseGameInitialization* this, int32_t level);
bool BaseGameInitialization_resourceAnimationChange(BaseGameInitialization* this);
static void BaseGameInitialization_clearResources(BaseGameInitialization* this);
void BaseGameInitialization_setGameInitialized(BaseGameInitialization* this, bool gameInitialized);
bool BaseGameInitialization_isGameInitialized(BaseGameInitialization* this);
int32_t BaseGameInitialization_getPortion(BaseGameInitialization* this);
void BaseGameInitialization_setInitialized(BaseGameInitialization* this, bool initialized);
bool BaseGameInitialization_isInitialized(BaseGameInitialization* this);

// Static fields with runtime initializers: call this once at startup
void BaseGameInitialization_staticInit(void) {
    BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION = BaseGameInitialization_new(((ResourceInitialization**) java_array_new(sizeof(ResourceInitialization*), 0)), 0);
}

static void BaseGameInitialization_initFields(BaseGameInitialization* this) {
    
    
    this->initialized = false;
    this->EARLY_RESOURCES = 0;
    this->GAME_RESOURCES = 1;
    this->EARLY_CHANGABLE_RESOURCES = 2;
    this->GAME_CHANGABLE_RESOURCES = 3;
    this->gameInitialized = false;
    this->allLoaded = false;
}


void BaseGameInitialization_init(BaseGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion) {
    BaseGameInitialization_initFields(this);
        this->resourceInitializationArray = resourceInitializationArray;
        this->portion = portion;
}

BaseGameInitialization* BaseGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion) {
    BaseGameInitialization* this = calloc(1, sizeof(BaseGameInitialization));
    BaseGameInitialization_init(this, resourceInitializationArray, portion);
    return this;
}


// throws Exception
void BaseGameInitialization_initKey(BaseGameInitialization* this, int32_t portion) {
}


// throws Exception
void BaseGameInitialization_initKeyMapping(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, int32_t portion) {
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), InputFeatureFactory_getInstance()->INPUT_MAPPING)) {
            JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), init, abeClientInformation);
            ProgressCanvasFactory_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Game Keys");
            ChangedGameFeatureListener_remove(ChangedGameFeatureListener_getInstance(), InputFeatureFactory_getInstance()->INPUT_MAPPING);
        }
}


// throws Exception
void BaseGameInitialization_init(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (!BaseGameInitialization_isInitialized(this) && (level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_ALL, getLevel) || level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_EARLY, getLevel))) {
            int32_t localPortion = 40;
            if (level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_EARLY, getLevel)) {
                localPortion = 8;
            }
            BaseGameInitialization_setInitialized(this, true);
            BaseGameInitialization_initKey(this, BaseGameInitialization_getPortion(this));
            BaseGameInitialization_initKeyMapping(this, abeClientInformation, BaseGameInitialization_getPortion(this));
            GameKeyEventFactory_init(GameKeyEventFactory_getInstance());
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Game Key Events");
            BasicTouchInputFactory_init(BasicTouchInputFactory_getInstance(), JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
            CancelTouchButtonInputFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Touch Input");
            CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput_getInstance());
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Motion Input");
            GameFeatureImageCacheFactory_init();
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Image Cache");
            JAVA_CALL(this->resourceInitializationArray[this->EARLY_RESOURCES], init);
        }
}


// throws Exception
void BaseGameInitialization_resourceInitialization(BaseGameInitialization* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (BaseGameInitialization_resourceAnimationChange(this) && level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_EARLY, getLevel)) {
            BaseGameInitialization_clearResources(this);
            JAVA_CALL(this->resourceInitializationArray[this->EARLY_CHANGABLE_RESOURCES], init);
        }
        if (BaseGameInitialization_resourceAnimationChange(this) && level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_ALL, getLevel)) {
            if (this->allLoaded) {
                BaseGameInitialization_clearResources(this);
            }
            if (JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_getList(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance()), size) == 0) {
                JAVA_CALL(this->resourceInitializationArray[this->EARLY_CHANGABLE_RESOURCES], init);
            }
            JAVA_CALL(this->resourceInitializationArray[this->GAME_CHANGABLE_RESOURCES], init);
            this->allLoaded = true;
        }
}


bool BaseGameInitialization_resourceAnimationChange(BaseGameInitialization* this) {
        ChangedGameFeatureListener* changedGameFeatureListener = ChangedGameFeatureListener_getInstance();
        GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral_getInstance();
        if (ChangedGameFeatureListener_isChangedGameConfiguration(changedGameFeatureListener, gameConfigurationCentral->SCALE)) {
            return true;
        }
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC)) {
            return true;
        }
        return false;
}


static void BaseGameInitialization_clearResources(BaseGameInitialization* this) {
        this->allLoaded = false;
        GameFeatureImageCacheFactory_releaseAll();
        FeaturedAnimationInterfaceFactoryInterfaceFactory* featuredAnimationInterfaceFactoryInterfaceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance();
        FeaturedAnimationInterfaceFactoryInterfaceFactory_clear(featuredAnimationInterfaceFactoryInterfaceFactory);
        FeaturedResourceRelativeRelationshipFactory_clear(FeaturedResourceRelativeRelationshipFactory_getInstance());
}


void BaseGameInitialization_setGameInitialized(BaseGameInitialization* this, bool gameInitialized) {
        this->gameInitialized = gameInitialized;
}


bool BaseGameInitialization_isGameInitialized(BaseGameInitialization* this) {
        return this->gameInitialized;
}


int32_t BaseGameInitialization_getPortion(BaseGameInitialization* this) {
        return this->portion;
}


void BaseGameInitialization_setInitialized(BaseGameInitialization* this, bool initialized) {
        this->initialized = initialized;
}


bool BaseGameInitialization_isInitialized(BaseGameInitialization* this) {
        return this->initialized;
}

