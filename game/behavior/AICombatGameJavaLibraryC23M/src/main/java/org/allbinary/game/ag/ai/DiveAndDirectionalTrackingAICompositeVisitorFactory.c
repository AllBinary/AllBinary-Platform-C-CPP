// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAICompositeVisitorFactory.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h"




void DiveAndDirectionalTrackingAICompositeVisitorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DiveAndDirectionalTrackingAICompositeVisitorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiveAndDirectionalTrackingAICompositeVisitorFactory", nullptr);
    java_register_method("DiveAndDirectionalTrackingAICompositeVisitorFactory", "getInstance", (void*) DiveAndDirectionalTrackingAICompositeVisitorFactory_getInstance);
}

void DiveAndDirectionalTrackingAICompositeVisitorFactory_init(DiveAndDirectionalTrackingAICompositeVisitorFactory* this) {
    DiveAndDirectionalTrackingAICompositeVisitorFactory_register();
}

DiveAndDirectionalTrackingAICompositeVisitorFactory* DiveAndDirectionalTrackingAICompositeVisitorFactory_new(void) {
    DiveAndDirectionalTrackingAICompositeVisitorFactory* this = java_object_alloc(sizeof(DiveAndDirectionalTrackingAICompositeVisitorFactory), "DiveAndDirectionalTrackingAICompositeVisitorFactory");
    DiveAndDirectionalTrackingAICompositeVisitorFactory_init(this);
    return this;
}


Visitor* DiveAndDirectionalTrackingAICompositeVisitorFactory_getInstance(DiveAndDirectionalTrackingAICompositeVisitorFactory* this, DiveAndDirectionalTrackingAI* diveBombAI) {
        return Visitor_getInstance();
}

