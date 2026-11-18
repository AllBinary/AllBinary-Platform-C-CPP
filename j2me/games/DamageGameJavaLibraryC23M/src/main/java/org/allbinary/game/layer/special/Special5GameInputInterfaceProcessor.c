// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special5GameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void Special5GameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special5GameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special5GameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("Special5GameInputInterfaceProcessor", "processEvent", (void*) Special5GameInputInterfaceProcessor_processEvent);
}


void Special5GameInputInterfaceProcessor_init(Special5GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special5GameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special5GameInputInterfaceProcessor* Special5GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special5GameInputInterfaceProcessor* this = java_object_alloc(sizeof(Special5GameInputInterfaceProcessor), "Special5GameInputInterfaceProcessor");
    Special5GameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special5GameInputInterfaceProcessor_processEvent(Special5GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_special5(this->base.specialGameInputInterface, allbinaryLayerManager, gameKeyEvent);
}

