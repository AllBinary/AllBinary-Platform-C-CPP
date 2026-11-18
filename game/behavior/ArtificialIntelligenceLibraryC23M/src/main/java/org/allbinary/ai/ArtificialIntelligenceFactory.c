// Generated Code Do Not Modify
#include "org/allbinary/ai/ArtificialIntelligenceFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceFactoryInterface.h"
#include "org/allbinary/ai/ArtificialIntelligence.h"




void ArtificialIntelligenceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ArtificialIntelligenceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArtificialIntelligenceFactory", nullptr);
    java_register_method("ArtificialIntelligenceFactory", "getInstance", (void*) ArtificialIntelligenceFactory_getInstance);
}

void ArtificialIntelligenceFactory_init(ArtificialIntelligenceFactory* this) {
    ArtificialIntelligenceFactory_register();
}

ArtificialIntelligenceFactory* ArtificialIntelligenceFactory_new(void) {
    ArtificialIntelligenceFactory* this = java_object_alloc(sizeof(ArtificialIntelligenceFactory), "ArtificialIntelligenceFactory");
    ArtificialIntelligenceFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligence* ArtificialIntelligenceFactory_getInstance(ArtificialIntelligenceFactory* this, void* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

