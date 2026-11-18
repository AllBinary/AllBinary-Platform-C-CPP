// Generated Code Do Not Modify
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/PlayerQueue.h"


static PlayerQueue* SecondaryPlayerQueueFactory_SINGLETON;


void SecondaryPlayerQueueFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SecondaryPlayerQueueFactory_SINGLETON = PlayerQueue_new(4);
}

void SecondaryPlayerQueueFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SecondaryPlayerQueueFactory", nullptr);
}

void SecondaryPlayerQueueFactory_init(SecondaryPlayerQueueFactory* this) {
    SecondaryPlayerQueueFactory_register();
}

SecondaryPlayerQueueFactory* SecondaryPlayerQueueFactory_new(void) {
    SecondaryPlayerQueueFactory* this = java_object_alloc(sizeof(SecondaryPlayerQueueFactory), "SecondaryPlayerQueueFactory");
    SecondaryPlayerQueueFactory_init(this);
    return this;
}


PlayerQueue* SecondaryPlayerQueueFactory_getInstance(void) {
        return (SecondaryPlayerQueueFactory_staticInit(), SecondaryPlayerQueueFactory_SINGLETON);
}

