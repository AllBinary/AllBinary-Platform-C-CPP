// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special3GameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void Special3GameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special3GameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special3GameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("Special3GameInputInterfaceProcessor", "processEvent", (void*) Special3GameInputInterfaceProcessor_processEvent);
}


void Special3GameInputInterfaceProcessor_init(Special3GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special3GameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special3GameInputInterfaceProcessor* Special3GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special3GameInputInterfaceProcessor* this = java_object_alloc(sizeof(Special3GameInputInterfaceProcessor), "Special3GameInputInterfaceProcessor");
    Special3GameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special3GameInputInterfaceProcessor_processEvent(Special3GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_special3(this->base.specialGameInputInterface, allbinaryLayerManager, gameKeyEvent);
}

