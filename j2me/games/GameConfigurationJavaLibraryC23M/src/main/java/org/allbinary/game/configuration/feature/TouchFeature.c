// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/TouchFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"




void TouchFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchFeature", "Feature");
}


void TouchFeature_init(TouchFeature* this, const char* name) {
    TouchFeature_register();
        Feature_init(&this->base, name);
}

TouchFeature* TouchFeature_new(const char* name) {
    TouchFeature* this = java_object_alloc(sizeof(TouchFeature), "TouchFeature");
    TouchFeature_init(this, name);
    return this;
}

