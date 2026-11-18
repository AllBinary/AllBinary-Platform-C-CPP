// Generated Code Do Not Modify
#include "org/allbinary/media/audio/EarlySoundsFactory.h"
#include "org/allbinary/media/audio/BaseSoundsFactory.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/media/audio/ErrorSound.h"


static EarlySoundsFactory* EarlySoundsFactory_instance;



void EarlySoundsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    EarlySoundsFactory_instance = EarlySoundsFactory_new();
}

void EarlySoundsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EarlySoundsFactory", "BaseSoundsFactory");
    java_register_method("EarlySoundsFactory", "getSoundInterfaceArray", (void*) EarlySoundsFactory_getSoundInterfaceArray);
}

void EarlySoundsFactory_init(EarlySoundsFactory* this) {
    EarlySoundsFactory_register();
    BaseSoundsFactory_init(&this->base);
}

EarlySoundsFactory* EarlySoundsFactory_new(void) {
    EarlySoundsFactory* this = java_object_alloc(sizeof(EarlySoundsFactory), "EarlySoundsFactory");
    EarlySoundsFactory_init(this);
    return this;
}


// throws Exception
Sound** EarlySoundsFactory_getSoundInterfaceArray(EarlySoundsFactory* this) {
        Sound** soundInterfaceArray = ((Sound**) java_array_new(sizeof(Sound*), 2));
        int32_t index = 0;
        soundInterfaceArray[index++] = SelectSound_getInstance();
        soundInterfaceArray[index++] = ErrorSound_getInstance();
        return soundInterfaceArray;
}


EarlySoundsFactory* EarlySoundsFactory_getInstance(void) {
        return (EarlySoundsFactory_staticInit(), EarlySoundsFactory_instance);
}

