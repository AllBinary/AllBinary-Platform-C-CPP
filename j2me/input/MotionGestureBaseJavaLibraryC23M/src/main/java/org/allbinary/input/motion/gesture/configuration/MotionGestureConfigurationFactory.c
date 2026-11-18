// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"


static MotionGestureConfiguration* MotionGestureConfigurationFactory_config;



void MotionGestureConfigurationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MotionGestureConfigurationFactory_config = MotionGestureConfiguration_new();
}

void MotionGestureConfigurationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureConfigurationFactory", nullptr);
}


void MotionGestureConfigurationFactory_init(MotionGestureConfigurationFactory* this) {
    MotionGestureConfigurationFactory_register();
}

MotionGestureConfigurationFactory* MotionGestureConfigurationFactory_new(void) {
    MotionGestureConfigurationFactory* this = java_object_alloc(sizeof(MotionGestureConfigurationFactory), "MotionGestureConfigurationFactory");
    MotionGestureConfigurationFactory_init(this);
    return this;
}


MotionGestureConfiguration* MotionGestureConfigurationFactory_getInstance(void) {
        return (MotionGestureConfigurationFactory_staticInit(), MotionGestureConfigurationFactory_config);
}

