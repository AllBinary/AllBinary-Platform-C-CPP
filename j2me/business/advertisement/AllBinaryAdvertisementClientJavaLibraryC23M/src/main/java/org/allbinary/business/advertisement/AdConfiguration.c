// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/game/state/GameState.h"










void AdConfiguration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdConfiguration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdConfiguration", nullptr);
    java_register_method("AdConfiguration", "getValidAdSpots", (void*) AdConfiguration_getValidAdSpots);
    java_register_method("AdConfiguration", "process", (void*) AdConfiguration_process);
    java_register_method("AdConfiguration", "processDemo", (void*) AdConfiguration_processDemo);
    java_register_method("AdConfiguration", "setShowAds", (void*) AdConfiguration_setShowAds);
    java_register_method("AdConfiguration", "setToggleAds", (void*) AdConfiguration_setToggleAds);
    java_register_method("AdConfiguration", "isShowAds", (void*) AdConfiguration_isShowAds);
}

static void AdConfiguration_initFields(AdConfiguration* this) {
    
    
    
}


void AdConfiguration_init(AdConfiguration* this, void** advertIdArray) {
    AdConfiguration_register();
    AdConfiguration_initFields(this);
        this->INNERACTIVE = ((const char*) advertIdArray[0]);
        this->ADMOB = ((const char*) advertIdArray[1]);
        this->LEADBOLT = ((const char*) advertIdArray[2]);
}

AdConfiguration* AdConfiguration_new(void** advertIdArray) {
    AdConfiguration* this = java_object_alloc(sizeof(AdConfiguration), "AdConfiguration");
    AdConfiguration_init(this, advertIdArray);
    return this;
}


Direction** AdConfiguration_getValidAdSpots(AdConfiguration* this) {
        return ((Direction**) java_array_new(sizeof(Direction*), 0));
}


void AdConfiguration_process(AdConfiguration* this, GameState* gameState) {
}


void AdConfiguration_processDemo(AdConfiguration* this, int32_t state) {
}


void AdConfiguration_setShowAds(AdConfiguration* this) {
}


void AdConfiguration_setToggleAds(AdConfiguration* this, bool showAds) {
}


bool AdConfiguration_isShowAds(AdConfiguration* this) {
        return true;
}

