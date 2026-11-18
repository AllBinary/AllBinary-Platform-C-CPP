// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/InputFeature.h"
#include "org/allbinary/game/configuration/feature/Features.h"


static InputFeatureFactory* InputFeatureFactory_instance;




void InputFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InputFeatureFactory_instance = InputFeatureFactory_new();
}

void InputFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputFeatureFactory", nullptr);
    java_register_method("InputFeatureFactory", "isSingleKeyProcessing", (void*) InputFeatureFactory_isSingleKeyProcessing);
}

static void InputFeatureFactory_initFields(InputFeatureFactory* this) {
    this->REMOVE_DUPLICATE_KEY_PRESSES = InputFeature_new("Remove Duplicate Key Presses");
    this->INPUT_MAPPING = InputFeature_new("Input Mapping");
    this->MULTI_KEY_PRESS = InputFeature_new("Multi Key Press");
    this->SINGLE_KEY_REPEAT_PRESS = InputFeature_new("Single Key Repeat Press");
    this->SINGLE_KEY_PRESS = InputFeature_new("Single Key Press");
}


InputFeatureFactory* InputFeatureFactory_getInstance(void) {
        return (InputFeatureFactory_staticInit(), InputFeatureFactory_instance);
}


void InputFeatureFactory_init(InputFeatureFactory* this) {
    InputFeatureFactory_register();
    InputFeatureFactory_initFields(this);
}

InputFeatureFactory* InputFeatureFactory_new(void) {
    InputFeatureFactory* this = java_object_alloc(sizeof(InputFeatureFactory), "InputFeatureFactory");
    InputFeatureFactory_init(this);
    return this;
}


bool InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory* this) {
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->SINGLE_KEY_REPEAT_PRESS) || Features_isFeature(features, this->SINGLE_KEY_PRESS)) {
            return true;
        } else {
            return false;
        }
}

