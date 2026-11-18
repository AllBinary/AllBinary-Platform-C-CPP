// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialFireGameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void SpecialFireGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialFireGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialFireGameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("SpecialFireGameInputInterfaceProcessor", "processEvent", (void*) SpecialFireGameInputInterfaceProcessor_processEvent);
}


void SpecialFireGameInputInterfaceProcessor_init(SpecialFireGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialFireGameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialFireGameInputInterfaceProcessor* SpecialFireGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialFireGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialFireGameInputInterfaceProcessor), "SpecialFireGameInputInterfaceProcessor");
    SpecialFireGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialFireGameInputInterfaceProcessor_processEvent(SpecialFireGameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_fire(this->base.specialGameInputInterface, allbinaryLayerManager, gameKeyEvent);
}

