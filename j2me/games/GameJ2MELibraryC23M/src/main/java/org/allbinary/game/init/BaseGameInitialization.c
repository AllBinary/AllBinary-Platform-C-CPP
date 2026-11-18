// Generated Code Do Not Modify
#include "org/allbinary/game/init/BaseGameInitialization.h"
#include "javax/microedition/lcdui/CommandListener.h"
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
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/init/PersistentInputMapping.h")
#include "org/allbinary/game/init/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/animation/PersistentInputMapping.h")
#include "org/allbinary/animation/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/resource/PersistentInputMapping.h")
#include "org/allbinary/game/resource/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/resource/PersistentInputMapping.h")
#include "org/allbinary/game/resource/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/resource/PersistentInputMapping.h")
#include "org/allbinary/game/resource/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h")
#include "org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h")
#include "org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/image/PersistentInputMapping.h")
#include "org/allbinary/image/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/PersistentInputMapping.h")
#include "org/allbinary/input/motion/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/button/PersistentInputMapping.h")
#include "org/allbinary/input/motion/button/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/button/PersistentInputMapping.h")
#include "org/allbinary/input/motion/button/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PersistentInputMapping.h")
#include "org/allbinary/logic/system/security/licensing/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BasicTouchInputFactory.h")
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#endif
#if __has_include("org/allbinary/game/init/PersistentInputMapping.h")
#include "org/allbinary/game/init/PersistentInputMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/PersistentInputMapping.h")
#include "javax/microedition/lcdui/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/animation/PersistentInputMapping.h")
#include "org/allbinary/animation/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PersistentInputMapping.h")
#include "org/allbinary/game/configuration/feature/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/resource/PersistentInputMapping.h")
#include "org/allbinary/game/resource/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/resource/PersistentInputMapping.h")
#include "org/allbinary/game/resource/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/resource/PersistentInputMapping.h")
#include "org/allbinary/game/resource/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h")
#include "org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h")
#include "org/allbinary/graphics/canvas/transition/progress/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/image/PersistentInputMapping.h")
#include "org/allbinary/image/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/PersistentInputMapping.h")
#include "org/allbinary/input/motion/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/button/PersistentInputMapping.h")
#include "org/allbinary/input/motion/button/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/button/PersistentInputMapping.h")
#include "org/allbinary/input/motion/button/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PersistentInputMapping.h")
#include "org/allbinary/logic/system/security/licensing/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h")
#include "org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h"
#endif
#if __has_include("org/allbinary/game/resource/ResourceInitialization.h")
#include "org/allbinary/game/resource/ResourceInitialization.h"
#endif
#if __has_include("org/allbinary/game/resource/ResourceInitialization.h")
#include "org/allbinary/game/resource/ResourceInitialization.h"
#endif
#if __has_include("org/allbinary/game/init/BasicArrayList.h")
#include "org/allbinary/game/init/BasicArrayList.h"
#endif
#if __has_include("javax/microedition/lcdui/BasicArrayList.h")
#include "javax/microedition/lcdui/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/animation/BasicArrayList.h")
#include "org/allbinary/animation/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/configuration/BasicArrayList.h")
#include "org/allbinary/game/configuration/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/BasicArrayList.h")
#include "org/allbinary/game/configuration/event/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/BasicArrayList.h")
#include "org/allbinary/game/configuration/feature/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/BasicArrayList.h")
#include "org/allbinary/game/configuration/feature/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/input/BasicArrayList.h")
#include "org/allbinary/game/input/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/input/event/BasicArrayList.h")
#include "org/allbinary/game/input/event/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/resource/BasicArrayList.h")
#include "org/allbinary/game/resource/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/resource/BasicArrayList.h")
#include "org/allbinary/game/resource/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/resource/BasicArrayList.h")
#include "org/allbinary/game/resource/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/BasicArrayList.h")
#include "org/allbinary/graphics/canvas/transition/progress/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/BasicArrayList.h")
#include "org/allbinary/graphics/canvas/transition/progress/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/image/BasicArrayList.h")
#include "org/allbinary/image/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/input/motion/BasicArrayList.h")
#include "org/allbinary/input/motion/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BasicArrayList.h")
#include "org/allbinary/input/motion/button/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BasicArrayList.h")
#include "org/allbinary/input/motion/button/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/BasicArrayList.h")
#include "org/allbinary/logic/system/security/licensing/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/resource/ResourceInitialization.h")
#include "org/allbinary/game/resource/ResourceInitialization.h"
#endif
#if __has_include("org/allbinary/game/resource/ResourceInitialization.h")
#include "org/allbinary/game/resource/ResourceInitialization.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h")
#include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"
#endif


BaseGameInitialization* BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION;







static void BaseGameInitialization_clearResources(BaseGameInitialization* this);






void BaseGameInitialization_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION = BaseGameInitialization_new(((ResourceInitialization**) java_array_new(sizeof(ResourceInitialization*), 0)), 0);
}

void BaseGameInitialization_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseGameInitialization", nullptr);
    java_register_method("BaseGameInitialization", "initKey", (void*) BaseGameInitialization_initKey);
    java_register_method("BaseGameInitialization", "initKeyMapping", (void*) BaseGameInitialization_initKeyMapping);
    java_register_method("BaseGameInitialization", "init", (void*) BaseGameInitialization_initMethod);
    java_register_method("BaseGameInitialization", "resourceInitialization", (void*) BaseGameInitialization_resourceInitialization);
    java_register_method("BaseGameInitialization", "resourceAnimationChange", (void*) BaseGameInitialization_resourceAnimationChange);
    java_register_method("BaseGameInitialization", "clearResources", (void*) BaseGameInitialization_clearResources);
    java_register_method("BaseGameInitialization", "setGameInitialized", (void*) BaseGameInitialization_setGameInitialized);
    java_register_method("BaseGameInitialization", "isGameInitialized", (void*) BaseGameInitialization_isGameInitialized);
    java_register_method("BaseGameInitialization", "getPortion", (void*) BaseGameInitialization_getPortion);
    java_register_method("BaseGameInitialization", "setInitialized", (void*) BaseGameInitialization_setInitialized);
    java_register_method("BaseGameInitialization", "isInitialized", (void*) BaseGameInitialization_isInitialized);
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
    BaseGameInitialization_register();
    BaseGameInitialization_initFields(this);
        this->resourceInitializationArray = resourceInitializationArray;
        this->portion = portion;
}

BaseGameInitialization* BaseGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion) {
    BaseGameInitialization* this = java_object_alloc(sizeof(BaseGameInitialization), "BaseGameInitialization");
    BaseGameInitialization_init(this, resourceInitializationArray, portion);
    return this;
}


// throws Exception
void BaseGameInitialization_initKey(BaseGameInitialization* this, int32_t portion) {
}


// throws Exception
void BaseGameInitialization_initKeyMapping(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, int32_t portion) {
        if (BaseChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), InputFeatureFactory_getInstance()->INPUT_MAPPING)) {
            PersistentInputMapping_initMethod(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), abeClientInformation);
            ProgressCanvas_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Game Keys");
            BaseChangedGameFeatureListener_remove(ChangedGameFeatureListener_getInstance(), InputFeatureFactory_getInstance()->INPUT_MAPPING);
        }
}


// throws Exception
void BaseGameInitialization_initMethod(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (!BaseGameInitialization_isInitialized(this) && (level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_ALL) || level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_EARLY))) {
            int32_t localPortion = 40;
            if (level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_EARLY)) {
                localPortion = 8;
            }
            BaseGameInitialization_setInitialized(this, true);
            BaseGameInitialization_initKey(this, BaseGameInitialization_getPortion(this));
            BaseGameInitialization_initKeyMapping(this, abeClientInformation, BaseGameInitialization_getPortion(this));
            GameKeyEventFactory_initMethod(GameKeyEventFactory_getInstance());
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Game Key Events");
            BasicTouchInputFactory_initMethod(BasicTouchInputFactory_getInstance(), PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
            CancelTouchButtonInputFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Touch Input");
            CompleteMotionGestureInputToGameMotionGestureInput_initMethod(CompleteMotionGestureInputToGameMotionGestureInput_getInstance());
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Motion Input");
            GameFeatureImageCacheFactory_initMethod();
            ProgressCanvas_addNormalPortion(progressCanvas, localPortion, "Image Cache");
            Init_initMethod(this->resourceInitializationArray[this->EARLY_RESOURCES]);
        }
}


// throws Exception
void BaseGameInitialization_resourceInitialization(BaseGameInitialization* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (BaseGameInitialization_resourceAnimationChange(this) && level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_EARLY)) {
            BaseGameInitialization_clearResources(this);
            Init_initMethod(this->resourceInitializationArray[this->EARLY_CHANGABLE_RESOURCES]);
        }
        if (BaseGameInitialization_resourceAnimationChange(this) && level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_ALL)) {
            if (this->allLoaded) {
                BaseGameInitialization_clearResources(this);
            }
            if (BasicArrayList_size(FeaturedResourceFactory_getList(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance())) == 0) {
                Init_initMethod(this->resourceInitializationArray[this->EARLY_CHANGABLE_RESOURCES]);
            }
            Init_initMethod(this->resourceInitializationArray[this->GAME_CHANGABLE_RESOURCES]);
            this->allLoaded = true;
        }
}


bool BaseGameInitialization_resourceAnimationChange(BaseGameInitialization* this) {
        ChangedGameFeatureListener* changedGameFeatureListener = ChangedGameFeatureListener_getInstance();
        GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral_getInstance();
        if (ChangedGameFeatureListener_isChangedGameConfiguration(changedGameFeatureListener, gameConfigurationCentral->SCALE)) {
            return true;
        }
        if (BaseChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC)) {
            return true;
        }
        return false;
}


static void BaseGameInitialization_clearResources(BaseGameInitialization* this) {
        this->allLoaded = false;
        GameFeatureImageCacheFactory_releaseAll();
        FeaturedAnimationInterfaceFactoryInterfaceFactory* featuredAnimationInterfaceFactoryInterfaceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance();
        FeaturedResourceFactory_clear(featuredAnimationInterfaceFactoryInterfaceFactory);
        FeaturedResourceFactory_clear(FeaturedResourceRelativeRelationshipFactory_getInstance());
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

