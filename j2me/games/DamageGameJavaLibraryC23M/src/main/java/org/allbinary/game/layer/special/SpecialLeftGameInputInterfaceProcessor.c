// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialLeftGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialLeftGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialLeftGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialLeftGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialLeftGameInputInterfaceProcessor", "processEvent", (void*) SpecialLeftGameInputInterfaceProcessor_processEvent);
}


void SpecialLeftGameInputInterfaceProcessor_init(SpecialLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialLeftGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialLeftGameInputInterfaceProcessor* SpecialLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialLeftGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialLeftGameInputInterfaceProcessor), "SpecialLeftGameInputInterfaceProcessor");
    SpecialLeftGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialLeftGameInputInterfaceProcessor_processEvent(SpecialLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_left(this->base.specialGameInputInterface);
}

