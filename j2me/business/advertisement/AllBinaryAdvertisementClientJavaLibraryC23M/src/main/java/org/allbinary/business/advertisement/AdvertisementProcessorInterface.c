// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/AdvertisementProcessorInterface.h"






void AdvertisementProcessorInterface_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdvertisementProcessorInterface_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdvertisementProcessorInterface", nullptr);
    java_register_method("AdvertisementProcessorInterface", "process", (void*) AdvertisementProcessorInterface_process);
    java_register_method("AdvertisementProcessorInterface", "start", (void*) AdvertisementProcessorInterface_start);
    java_register_method("AdvertisementProcessorInterface", "stop", (void*) AdvertisementProcessorInterface_stop);
}

void AdvertisementProcessorInterface_init(AdvertisementProcessorInterface* this) {
    AdvertisementProcessorInterface_register();
}

AdvertisementProcessorInterface* AdvertisementProcessorInterface_new(void) {
    AdvertisementProcessorInterface* this = java_object_alloc(sizeof(AdvertisementProcessorInterface), "AdvertisementProcessorInterface");
    AdvertisementProcessorInterface_init(this);
    return this;
}


void AdvertisementProcessorInterface_process(AdvertisementProcessorInterface* this) {
}


void AdvertisementProcessorInterface_start(AdvertisementProcessorInterface* this) {
}


void AdvertisementProcessorInterface_stop(AdvertisementProcessorInterface* this) {
}

