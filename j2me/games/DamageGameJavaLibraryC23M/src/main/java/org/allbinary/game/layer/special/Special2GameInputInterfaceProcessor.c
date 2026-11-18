// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special2GameInputInterfaceProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"





void Special2GameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special2GameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special2GameInputInterfaceProcessor", "SpecialGameInputInterfaceProcessor");
    java_register_method("Special2GameInputInterfaceProcessor", "processEvent", (void*) Special2GameInputInterfaceProcessor_processEvent);
}


void Special2GameInputInterfaceProcessor_init(Special2GameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special2GameInputInterfaceProcessor_register();
        SpecialGameInputInterfaceProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special2GameInputInterfaceProcessor* Special2GameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    Special2GameInputInterfaceProcessor* this = java_object_alloc(sizeof(Special2GameInputInterfaceProcessor), "Special2GameInputInterfaceProcessor");
    Special2GameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special2GameInputInterfaceProcessor_processEvent(Special2GameInputInterfaceProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        SpecialGameInputInterface_special2(this->base.specialGameInputInterface, allbinaryLayerManager, gameKeyEvent);
}

