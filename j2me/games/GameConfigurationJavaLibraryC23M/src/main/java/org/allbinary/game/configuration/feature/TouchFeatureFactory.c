// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/TouchFeature.h"


static TouchFeatureFactory* TouchFeatureFactory_instance;



void TouchFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchFeatureFactory_instance = TouchFeatureFactory_new();
}

void TouchFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchFeatureFactory", nullptr);
}

static void TouchFeatureFactory_initFields(TouchFeatureFactory* this) {
    this->TOUCH_ENABLED = TouchFeature_new("Touch Enabled");
    this->SHOW_SCREEN_BUTTONS = TouchFeature_new("Show");
    this->AUTO_HIDE_SHOW_SCREEN_BUTTONS = TouchFeature_new("Auto Hide (One Level)");
    this->HIDE_SCREEN_BUTTONS = TouchFeature_new("Hide");
}


TouchFeatureFactory* TouchFeatureFactory_getInstance(void) {
        return (TouchFeatureFactory_staticInit(), TouchFeatureFactory_instance);
}


void TouchFeatureFactory_init(TouchFeatureFactory* this) {
    TouchFeatureFactory_register();
    TouchFeatureFactory_initFields(this);
}

TouchFeatureFactory* TouchFeatureFactory_new(void) {
    TouchFeatureFactory* this = java_object_alloc(sizeof(TouchFeatureFactory), "TouchFeatureFactory");
    TouchFeatureFactory_init(this);
    return this;
}

