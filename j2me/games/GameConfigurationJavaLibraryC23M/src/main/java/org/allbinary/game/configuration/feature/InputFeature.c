// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/InputFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"




void InputFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InputFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputFeature", "Feature");
}


void InputFeature_init(InputFeature* this, const char* name) {
    InputFeature_register();
        Feature_init(&this->base, name);
}

InputFeature* InputFeature_new(const char* name) {
    InputFeature* this = java_object_alloc(sizeof(InputFeature), "InputFeature");
    InputFeature_init(this, name);
    return this;
}

