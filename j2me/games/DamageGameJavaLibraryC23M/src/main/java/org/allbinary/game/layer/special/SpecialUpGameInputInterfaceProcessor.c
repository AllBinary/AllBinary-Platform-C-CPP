// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialUpGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialUpGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialUpGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialUpGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialUpGameInputInterfaceProcessor", "processEvent", (void*) SpecialUpGameInputInterfaceProcessor_processEvent);
}


void SpecialUpGameInputInterfaceProcessor_init(SpecialUpGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialUpGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialUpGameInputInterfaceProcessor* SpecialUpGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialUpGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialUpGameInputInterfaceProcessor), "SpecialUpGameInputInterfaceProcessor");
    SpecialUpGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialUpGameInputInterfaceProcessor_processEvent(SpecialUpGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_up(this->base.specialGameInputInterface);
}

