// Generated Code Do Not Modify
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/PlayerQueue.h"


static PlayerQueue* PrimaryPlayerQueueFactory_SINGLETON;


void PrimaryPlayerQueueFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PrimaryPlayerQueueFactory_SINGLETON = PlayerQueue_new(4);
}

void PrimaryPlayerQueueFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimaryPlayerQueueFactory", nullptr);
}

void PrimaryPlayerQueueFactory_init(PrimaryPlayerQueueFactory* this) {
    PrimaryPlayerQueueFactory_register();
}

PrimaryPlayerQueueFactory* PrimaryPlayerQueueFactory_new(void) {
    PrimaryPlayerQueueFactory* this = java_object_alloc(sizeof(PrimaryPlayerQueueFactory), "PrimaryPlayerQueueFactory");
    PrimaryPlayerQueueFactory_init(this);
    return this;
}


PlayerQueue* PrimaryPlayerQueueFactory_getInstance(void) {
        return (PrimaryPlayerQueueFactory_staticInit(), PrimaryPlayerQueueFactory_SINGLETON);
}

