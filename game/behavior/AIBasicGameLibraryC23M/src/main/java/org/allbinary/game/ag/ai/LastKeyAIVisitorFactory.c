// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/LastKeyAIVisitorFactory.h"
#include "org/allbinary/game/ag/ai/LastKeyAIVisitor.h"


static LastKeyAIVisitor* LastKeyAIVisitorFactory_instance;


void LastKeyAIVisitorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LastKeyAIVisitorFactory_instance = LastKeyAIVisitor_new();
}

void LastKeyAIVisitorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LastKeyAIVisitorFactory", nullptr);
}

void LastKeyAIVisitorFactory_init(LastKeyAIVisitorFactory* this) {
    LastKeyAIVisitorFactory_register();
}

LastKeyAIVisitorFactory* LastKeyAIVisitorFactory_new(void) {
    LastKeyAIVisitorFactory* this = java_object_alloc(sizeof(LastKeyAIVisitorFactory), "LastKeyAIVisitorFactory");
    LastKeyAIVisitorFactory_init(this);
    return this;
}


LastKeyAIVisitor* LastKeyAIVisitorFactory_getInstance(void) {
        return (LastKeyAIVisitorFactory_staticInit(), LastKeyAIVisitorFactory_instance);
}

