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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/layer/GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.h"
#include "org/allbinary/game/layer/LayerPlacementInterfaceBasicArrayListFactoryInterface.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct OnDemandLoader OnDemandLoader;
struct OnDemandLoader {
    OnDemandResourcesFactory* onDemandResourcesFactory;
    GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
    BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory;
};


OnDemandLoader* OnDemandLoader_new(OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory);

void OnDemandLoader_init(OnDemandLoader* this, OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory);
void OnDemandLoader_init(OnDemandLoader* this, ImageCache* imageCache, int32_t level, const char* loadingString);
static void OnDemandLoader_initAll(OnDemandLoader* this, ImageCache* imageCache, const char* loadingString);
static void OnDemandLoader_initLevel(OnDemandLoader* this, LayerPlacementInterfaceBasicArrayListFactoryInterface* layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache* imageCache, int32_t level, const char* loadingString);

static void OnDemandLoader_initFields(OnDemandLoader* this) {
    
    
    
}


void OnDemandLoader_init(OnDemandLoader* this, OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory) {
    OnDemandLoader_initFields(this);
        this->onDemandResourcesFactory = onDemandResourcesFactory;
        this->gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory = gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
        this->resourceAnimationInterfaceFactoryInterfaceFactory = resourceAnimationInterfaceFactoryInterfaceFactory;
}

OnDemandLoader* OnDemandLoader_new(OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory) {
    OnDemandLoader* this = calloc(1, sizeof(OnDemandLoader));
    OnDemandLoader_init(this, onDemandResourcesFactory, gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, resourceAnimationInterfaceFactoryInterfaceFactory);
    return this;
}


// throws Exception
void OnDemandLoader_init(OnDemandLoader* this, ImageCache* imageCache, int32_t level, const char* loadingString) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (Features_isFeature(Features_getInstance(), MainFeatureFactory_getInstance()->LOAD_ALL)) {
            if (BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(this->resourceAnimationInterfaceFactoryInterfaceFactory)) {
                return;
            }
            OnDemandLoader_initAll(this, imageCache, loadingString);
        } else if (level != JAVA_CALL(resourceLoadingLevelFactory->LOAD_ALL, getLevel)) {
            LayerPlacementInterfaceBasicArrayListFactoryInterface* layerPlacementInterfaceBasicArrayListFactoryInterface = GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory_getInstance(this->gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, level);
            OnDemandLoader_initLevel(this, layerPlacementInterfaceBasicArrayListFactoryInterface, imageCache, level, loadingString);
        }
}


// throws Exception
static void OnDemandLoader_initAll(OnDemandLoader* this, ImageCache* imageCache, const char* loadingString) {
        int32_t index = 0;
        int32_t portion = 120;
        OnDemandResources* onDemandResources = nullptr;
        for (int32_t onDemandIndex = OnDemandResourcesFactory_size(this->onDemandResourcesFactory); --onDemandIndex >= 0; ) {
            onDemandResources = OnDemandResourcesFactory_remove(this->onDemandResourcesFactory, onDemandIndex);
            if (onDemandResources != OnDemandResources_NULL_ON_DEMAND_RESOURCES) {
                index = OnDemandResources_initAt(onDemandResources, imageCache, this->resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
            }
        }
}


// throws Exception
static void OnDemandLoader_initLevel(OnDemandLoader* this, LayerPlacementInterfaceBasicArrayListFactoryInterface* layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache* imageCache, int32_t level, const char* loadingString) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        int32_t portion = 120;
        int32_t index = 0;
        int32_t* onDemandArray = LayerPlacementInterfaceBasicArrayListFactoryInterface_getOnDemandResources(layerPlacementInterfaceBasicArrayListFactoryInterface);
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), commonStrings->START), appendint, java_array_length(onDemandArray)), toString), this, "initLevel");
        OnDemandResources* onDemandResources = nullptr;
        for (int32_t onDemandIndex = java_array_length(onDemandArray); --onDemandIndex >= 0; ) {
            onDemandResources = OnDemandResourcesFactory_remove(this->onDemandResourcesFactory, onDemandArray[onDemandIndex]);
            if (onDemandResources != OnDemandResources_NULL_ON_DEMAND_RESOURCES) {
                index = OnDemandResources_initAt(onDemandResources, imageCache, this->resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
            }
        }
}

