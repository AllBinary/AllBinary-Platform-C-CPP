// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ThrustAIVisitorFactory.h"
#include "org/allbinary/game/ag/ai/ThrustAIVisitor.h"


static ThrustAIVisitor* ThrustAIVisitorFactory_instance;


void ThrustAIVisitorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThrustAIVisitorFactory_instance = ThrustAIVisitor_new();
}

void ThrustAIVisitorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThrustAIVisitorFactory", nullptr);
}

void ThrustAIVisitorFactory_init(ThrustAIVisitorFactory* this) {
    ThrustAIVisitorFactory_register();
}

ThrustAIVisitorFactory* ThrustAIVisitorFactory_new(void) {
    ThrustAIVisitorFactory* this = java_object_alloc(sizeof(ThrustAIVisitorFactory), "ThrustAIVisitorFactory");
    ThrustAIVisitorFactory_init(this);
    return this;
}


ThrustAIVisitor* ThrustAIVisitorFactory_getInstance(void) {
        return (ThrustAIVisitorFactory_staticInit(), ThrustAIVisitorFactory_instance);
}

