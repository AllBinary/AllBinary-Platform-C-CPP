// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/SensorFeature.h"


static SensorFeatureFactory* SensorFeatureFactory_instance;



void SensorFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SensorFeatureFactory_instance = SensorFeatureFactory_new();
}

void SensorFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SensorFeatureFactory", nullptr);
}

static void SensorFeatureFactory_initFields(SensorFeatureFactory* this) {
    this->NO_ORIENTATION = SensorFeature_new("No Orientation");
    this->ORIENTATION_SENSORS = SensorFeature_new("Orientation Sensors");
    this->SIMULATED_ORIENTATION_SENSORS = SensorFeature_new("Simulated Orientation Sensors");
    this->YAW = SensorFeature_new("Yaw");
    this->YAW_MINUS_RIGHT_PLUS_LEFT = SensorFeature_new("Yaw -Right +Left");
    this->YAW_MINUS_LEFT_PLUS_RIGHT = SensorFeature_new("Yaw -Left +Right ");
    this->PITCH = SensorFeature_new("Pitch");
    this->ROLL = SensorFeature_new("Roll");
}


SensorFeatureFactory* SensorFeatureFactory_getInstance(void) {
        return (SensorFeatureFactory_staticInit(), SensorFeatureFactory_instance);
}


void SensorFeatureFactory_init(SensorFeatureFactory* this) {
    SensorFeatureFactory_register();
    SensorFeatureFactory_initFields(this);
}

SensorFeatureFactory* SensorFeatureFactory_new(void) {
    SensorFeatureFactory* this = java_object_alloc(sizeof(SensorFeatureFactory), "SensorFeatureFactory");
    SensorFeatureFactory_init(this);
    return this;
}

