// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialDownGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialDownGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialDownGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialDownGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialDownGameInputInterfaceProcessor", "processEvent", (void*) SpecialDownGameInputInterfaceProcessor_processEvent);
}


void SpecialDownGameInputInterfaceProcessor_init(SpecialDownGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialDownGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialDownGameInputInterfaceProcessor* SpecialDownGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialDownGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialDownGameInputInterfaceProcessor), "SpecialDownGameInputInterfaceProcessor");
    SpecialDownGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialDownGameInputInterfaceProcessor_processEvent(SpecialDownGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_down(this->base.specialGameInputInterface);
}

