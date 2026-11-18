// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialRightGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialRightGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialRightGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialRightGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialRightGameInputInterfaceProcessor", "processEvent", (void*) SpecialRightGameInputInterfaceProcessor_processEvent);
}


void SpecialRightGameInputInterfaceProcessor_init(SpecialRightGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialRightGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialRightGameInputInterfaceProcessor* SpecialRightGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialRightGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialRightGameInputInterfaceProcessor), "SpecialRightGameInputInterfaceProcessor");
    SpecialRightGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialRightGameInputInterfaceProcessor_processEvent(SpecialRightGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_right(this->base.specialGameInputInterface);
}

