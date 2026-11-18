// Generated Code Do Not Modify
#include "org/allbinary/media/audio/BaseSoundsFactory.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/Sound.h"







void BaseSoundsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseSoundsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseSoundsFactory", nullptr);
    java_register_method("BaseSoundsFactory", "init", (void*) BaseSoundsFactory_initMethod);
    java_register_method("BaseSoundsFactory", "getSoundInterfaceArray", (void*) BaseSoundsFactory_getSoundInterfaceArray);
    java_register_method("BaseSoundsFactory", "setInitialized", (void*) BaseSoundsFactory_setInitialized);
    java_register_method("BaseSoundsFactory", "isInitialized", (void*) BaseSoundsFactory_isInitialized);
}

static void BaseSoundsFactory_initFields(BaseSoundsFactory* this) {
    this->initialized = false;
}

void BaseSoundsFactory_init(BaseSoundsFactory* this) {
    BaseSoundsFactory_register();
    BaseSoundsFactory_initFields(this);
}

BaseSoundsFactory* BaseSoundsFactory_new(void) {
    BaseSoundsFactory* this = java_object_alloc(sizeof(BaseSoundsFactory), "BaseSoundsFactory");
    BaseSoundsFactory_init(this);
    return this;
}


void BaseSoundsFactory_initMethod(BaseSoundsFactory* this) {
}


// throws Exception
Sound** BaseSoundsFactory_getSoundInterfaceArray(BaseSoundsFactory* this) {
        return ((Sound**) java_array_new(sizeof(Sound*), 0));
}


void BaseSoundsFactory_setInitialized(BaseSoundsFactory* this, bool initialized) {
        this->initialized = initialized;
}


bool BaseSoundsFactory_isInitialized(BaseSoundsFactory* this) {
        return this->initialized;
}

