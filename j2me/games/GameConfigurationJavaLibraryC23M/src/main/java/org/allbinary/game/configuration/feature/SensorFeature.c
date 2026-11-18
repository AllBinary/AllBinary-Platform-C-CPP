// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/SensorFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"




void SensorFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SensorFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SensorFeature", "Feature");
}


void SensorFeature_init(SensorFeature* this, const char* name) {
    SensorFeature_register();
        Feature_init(&this->base, name);
}

SensorFeature* SensorFeature_new(const char* name) {
    SensorFeature* this = java_object_alloc(sizeof(SensorFeature), "SensorFeature");
    SensorFeature_init(this, name);
    return this;
}

