// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special1GameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void Special1GameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special1GameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special1GameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("Special1GameInputInterfaceProcessor", "processEvent", (void*) Special1GameInputInterfaceProcessor_processEvent);
}


void Special1GameInputInterfaceProcessor_init(Special1GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special1GameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special1GameInputInterfaceProcessor* Special1GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special1GameInputInterfaceProcessor* this = java_object_alloc(sizeof(Special1GameInputInterfaceProcessor), "Special1GameInputInterfaceProcessor");
    Special1GameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special1GameInputInterfaceProcessor_processEvent(Special1GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_special1(this->base.specialGameInputInterface, allbinaryLayerManager, gameKeyEvent);
}

