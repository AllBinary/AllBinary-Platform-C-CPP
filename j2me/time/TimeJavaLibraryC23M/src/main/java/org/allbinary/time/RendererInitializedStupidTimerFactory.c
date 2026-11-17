// Generated Code Do Not Modify
#include "org/allbinary/time/RendererInitializedStupidTimerFactory.h"
#include "org/allbinary/time/StupidTimer.h"


static StupidTimer* RendererInitializedStupidTimerFactory_instance;


void RendererInitializedStupidTimerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RendererInitializedStupidTimerFactory_instance = StupidTimer_new();
}

void RendererInitializedStupidTimerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RendererInitializedStupidTimerFactory", nullptr);
}

void RendererInitializedStupidTimerFactory_init(RendererInitializedStupidTimerFactory* this) {
    RendererInitializedStupidTimerFactory_register();
}

RendererInitializedStupidTimerFactory* RendererInitializedStupidTimerFactory_new(void) {
    RendererInitializedStupidTimerFactory* this = java_object_alloc(sizeof(RendererInitializedStupidTimerFactory), "RendererInitializedStupidTimerFactory");
    RendererInitializedStupidTimerFactory_init(this);
    return this;
}


StupidTimer* RendererInitializedStupidTimerFactory_getInstance(void) {
        return (RendererInitializedStupidTimerFactory_staticInit(), RendererInitializedStupidTimerFactory_instance);
}

