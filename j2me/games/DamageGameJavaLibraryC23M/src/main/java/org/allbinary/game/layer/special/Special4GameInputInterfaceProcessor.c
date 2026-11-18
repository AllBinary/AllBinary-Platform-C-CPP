// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special4GameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void Special4GameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special4GameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special4GameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("Special4GameInputInterfaceProcessor", "processEvent", (void*) Special4GameInputInterfaceProcessor_processEvent);
}


void Special4GameInputInterfaceProcessor_init(Special4GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special4GameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special4GameInputInterfaceProcessor* Special4GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special4GameInputInterfaceProcessor* this = java_object_alloc(sizeof(Special4GameInputInterfaceProcessor), "Special4GameInputInterfaceProcessor");
    Special4GameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special4GameInputInterfaceProcessor_processEvent(Special4GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_special4(this->base.specialGameInputInterface, allbinaryLayerManager, gameKeyEvent);
}

