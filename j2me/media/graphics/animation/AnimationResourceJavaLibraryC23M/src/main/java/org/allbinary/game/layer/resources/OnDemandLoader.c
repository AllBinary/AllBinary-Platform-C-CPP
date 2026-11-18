// Generated Code Do Not Modify
#include "org/allbinary/game/layer/resources/OnDemandLoader.h"
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
#include "org/allbinary/game/layer/resources/OnDemandResourcesFactory.h"
#include "org/allbinary/game/layer/resources/OnDemandResources.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif





static void OnDemandLoader_initAll(OnDemandLoader* this, ImageCache* imageCache, const char* loadingString);

static void OnDemandLoader_initLevel(OnDemandLoader* this, LayerPlacementInterfaceBasicArrayListFactoryInterface* layerPlacementInterfaceBasicArrayListFactoryInterface, ImageCache* imageCache, int32_t level, const char* loadingString);

void OnDemandLoader_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OnDemandLoader_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OnDemandLoader", nullptr);
    java_register_method("OnDemandLoader", "init", (void*) OnDemandLoader_initMethod);
    java_register_method("OnDemandLoader", "initAll", (void*) OnDemandLoader_initAll);
    java_register_method("OnDemandLoader", "initLevel", (void*) OnDemandLoader_initLevel);
}

static void OnDemandLoader_initFields(OnDemandLoader* this) {
    
    
    
}


void OnDemandLoader_init(OnDemandLoader* this, OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory) {
    OnDemandLoader_register();
    OnDemandLoader_initFields(this);
        this->onDemandResourcesFactory = onDemandResourcesFactory;
        this->gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory = gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
        this->resourceAnimationInterfaceFactoryInterfaceFactory = resourceAnimationInterfaceFactoryInterfaceFactory;
}

OnDemandLoader* OnDemandLoader_new(OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory) {
    OnDemandLoader* this = java_object_alloc(sizeof(OnDemandLoader), "OnDemandLoader");
    OnDemandLoader_init(this, onDemandResourcesFactory, gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, resourceAnimationInterfaceFactoryInterfaceFactory);
    return this;
}


// throws Exception
void OnDemandLoader_initMethod(OnDemandLoader* this, ImageCache* imageCache, int32_t level, const char* loadingString) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (Features_isFeature(Features_getInstance(), MainFeatureFactory_getInstance()->LOAD_ALL)) {
            if (BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(this->resourceAnimationInterfaceFactoryInterfaceFactory)) {
                return;
            }
            OnDemandLoader_initAll(this, imageCache, loadingString);
        } else if (level != ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_ALL)) {
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
            if (onDemandResources != (OnDemandResources_staticInit(), OnDemandResources_NULL_ON_DEMAND_RESOURCES)) {
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
        PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), commonStrings->START), java_array_length(onDemandArray))), this, "initLevel");
        OnDemandResources* onDemandResources = nullptr;
        for (int32_t onDemandIndex = java_array_length(onDemandArray); --onDemandIndex >= 0; ) {
            onDemandResources = OnDemandResourcesFactory_remove(this->onDemandResourcesFactory, onDemandArray[onDemandIndex]);
            if (onDemandResources != (OnDemandResources_staticInit(), OnDemandResources_NULL_ON_DEMAND_RESOURCES)) {
                index = OnDemandResources_initAt(onDemandResources, imageCache, this->resourceAnimationInterfaceFactoryInterfaceFactory, portion, loadingString, index);
            }
        }
}

