// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/Feature.h"


static MainFeatureFactory* MainFeatureFactory_instance;


void MainFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MainFeatureFactory_instance = MainFeatureFactory_new();
}

void MainFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MainFeatureFactory", nullptr);
}

static void MainFeatureFactory_initFields(MainFeatureFactory* this) {
    this->FULL_SCREEN = Feature_new("Full Screen");
    this->TITLE_BAR = Feature_new("Title Bar");
    this->STATIC = Feature_new("Static Dependent Feature");
    this->LOAD_ONDEMAND = Feature_new("Load OnDemand");
    this->LOAD_ALL = Feature_new("Load All");
}

void MainFeatureFactory_init(MainFeatureFactory* this) {
    MainFeatureFactory_register();
    MainFeatureFactory_initFields(this);
}

MainFeatureFactory* MainFeatureFactory_new(void) {
    MainFeatureFactory* this = java_object_alloc(sizeof(MainFeatureFactory), "MainFeatureFactory");
    MainFeatureFactory_init(this);
    return this;
}


MainFeatureFactory* MainFeatureFactory_getInstance(void) {
        return (MainFeatureFactory_staticInit(), MainFeatureFactory_instance);
}

