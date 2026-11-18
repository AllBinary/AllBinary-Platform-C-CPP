// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialStrafeRightGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialStrafeRightGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialStrafeRightGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialStrafeRightGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialStrafeRightGameInputInterfaceProcessor", "processEvent", (void*) SpecialStrafeRightGameInputInterfaceProcessor_processEvent);
}


void SpecialStrafeRightGameInputInterfaceProcessor_init(SpecialStrafeRightGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialStrafeRightGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialStrafeRightGameInputInterfaceProcessor* SpecialStrafeRightGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialStrafeRightGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialStrafeRightGameInputInterfaceProcessor), "SpecialStrafeRightGameInputInterfaceProcessor");
    SpecialStrafeRightGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialStrafeRightGameInputInterfaceProcessor_processEvent(SpecialStrafeRightGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_strafeRight(this->base.specialGameInputInterface);
}

