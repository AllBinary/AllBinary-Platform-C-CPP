// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/AnalogControllerConfigurationFactory.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h"
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#if __has_include("org/allbinary/logic/math/ScaleFactorFactory.h")
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/ScaleFactorFactory.h")
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#endif
#if __has_include("org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h")
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h"
#endif


static AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_instance;





void AnalogControllerConfigurationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnalogControllerConfigurationFactory_instance = AnalogControllerConfigurationFactory_new();
}

void AnalogControllerConfigurationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogControllerConfigurationFactory", nullptr);
    java_register_method("AnalogControllerConfigurationFactory", "isAvailable", (void*) AnalogControllerConfigurationFactory_isAvailable);
    java_register_method("AnalogControllerConfigurationFactory", "setAvailable", (void*) AnalogControllerConfigurationFactory_setAvailable);
}

static void AnalogControllerConfigurationFactory_initFields(AnalogControllerConfigurationFactory* this) {
    this->SCALE_FACTOR = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_FACTOR;
    this->SCALE_VALUE = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_VALUE;
    this->available = false;
    this->analogControllerConfigurationEvent = AnalogControllerConfigurationEvent_new(this);
}


AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_getInstance(void) {
        return (AnalogControllerConfigurationFactory_staticInit(), AnalogControllerConfigurationFactory_instance);
}


void AnalogControllerConfigurationFactory_init(AnalogControllerConfigurationFactory* this) {
    AnalogControllerConfigurationFactory_register();
    AnalogControllerConfigurationFactory_initFields(this);
}

AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_new(void) {
    AnalogControllerConfigurationFactory* this = java_object_alloc(sizeof(AnalogControllerConfigurationFactory), "AnalogControllerConfigurationFactory");
    AnalogControllerConfigurationFactory_init(this);
    return this;
}


bool AnalogControllerConfigurationFactory_isAvailable(AnalogControllerConfigurationFactory* this) {
        return this->available;
}


// throws Exception
void AnalogControllerConfigurationFactory_setAvailable(AnalogControllerConfigurationFactory* this, bool available) {
        this->available = available;
        AnalogControllerConfigurationEventHandler_fireEvent(AnalogControllerConfigurationEventHandler_getInstance(), this->analogControllerConfigurationEvent);
}

