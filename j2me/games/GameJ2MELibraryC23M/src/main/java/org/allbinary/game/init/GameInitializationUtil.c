// Generated Code Do Not Modify
#include "org/allbinary/game/init/GameInitializationUtil.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/init/GameInitializationInterface.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameInitializedEventHandler.h")
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameInitializedEventHandler.h")
#include "org/allbinary/game/configuration/event/GameInitializedEventHandler.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/MainFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#endif


static GameInitializationUtil* GameInitializationUtil_instance;




void GameInitializationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInitializationUtil_instance = GameInitializationUtil_new();
}

void GameInitializationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInitializationUtil", nullptr);
    java_register_method("GameInitializationUtil", "initDemo", (void*) GameInitializationUtil_initDemo);
    java_register_method("GameInitializationUtil", "initGame", (void*) GameInitializationUtil_initGame);
}

static void GameInitializationUtil_initFields(GameInitializationUtil* this) {
    this->EVENT = GameInitializedEvent_new(this);
}

void GameInitializationUtil_init(GameInitializationUtil* this) {
    GameInitializationUtil_register();
    GameInitializationUtil_initFields(this);
}

GameInitializationUtil* GameInitializationUtil_new(void) {
    GameInitializationUtil* this = java_object_alloc(sizeof(GameInitializationUtil), "GameInitializationUtil");
    GameInitializationUtil_init(this);
    return this;
}


// throws Exception
void GameInitializationUtil_initDemo(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        if (BaseChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), mainFeatureFactory->STATIC)) {
            GameInitializationInterface* gameInitializationInterface = BasicBuildGameInitializerFactory_getInstance(gameInitializationInterfaceFactoryInterface);
            Features* features = Features_getInstance();
            if (Features_isFeature(features, mainFeatureFactory->LOAD_ALL)) {
                GameInitializationUtil_initGame(this, abeClientInformation, canvas, gameInitializationInterfaceFactoryInterface);
            } else if (Features_isFeature(features, mainFeatureFactory->LOAD_ONDEMAND)) {
                ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
                GameInitializationInterface_initMethod(gameInitializationInterface, abeClientInformation, MyCanvas_getCustomCommandListener(canvas), ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_EARLY));
                GameInitializedEvent_setResourceLoadingLevel(this->EVENT, resourceLoadingLevelFactory->LOAD_EARLY);
            } else {
                java_throw(java_exception_new("Exception", "No Loading Feature Available"));
            }
            BasicEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), this->EVENT);
        }
}


// throws Exception
void GameInitializationUtil_initGame(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface) {
        if (BaseChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC)) {
            GameInitializationInterface* gameInitializationInterface = BasicBuildGameInitializerFactory_getInstance(gameInitializationInterfaceFactoryInterface);
            ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
            GameInitializationInterface_initMethod(gameInitializationInterface, abeClientInformation, MyCanvas_getCustomCommandListener(canvas), ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_ALL));
            GameInitializedEvent_setResourceLoadingLevel(this->EVENT, resourceLoadingLevelFactory->LOAD_ALL);
            BasicEventHandler_fireEvent(GameInitializedEventHandler_getInstance(), this->EVENT);
            BaseChangedGameFeatureListener_remove(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC);
        }
}


GameInitializationUtil* GameInitializationUtil_getInstance(void) {
        return (GameInitializationUtil_staticInit(), GameInitializationUtil_instance);
}

