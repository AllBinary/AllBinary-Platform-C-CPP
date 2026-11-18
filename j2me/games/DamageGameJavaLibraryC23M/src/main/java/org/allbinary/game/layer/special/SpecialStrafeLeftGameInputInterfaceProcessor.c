// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialStrafeLeftGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialStrafeLeftGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialStrafeLeftGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialStrafeLeftGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialStrafeLeftGameInputInterfaceProcessor", "processEvent", (void*) SpecialStrafeLeftGameInputInterfaceProcessor_processEvent);
}


void SpecialStrafeLeftGameInputInterfaceProcessor_init(SpecialStrafeLeftGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialStrafeLeftGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialStrafeLeftGameInputInterfaceProcessor* SpecialStrafeLeftGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialStrafeLeftGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialStrafeLeftGameInputInterfaceProcessor), "SpecialStrafeLeftGameInputInterfaceProcessor");
    SpecialStrafeLeftGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialStrafeLeftGameInputInterfaceProcessor_processEvent(SpecialStrafeLeftGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_strafeLeft(this->base.specialGameInputInterface);
}

