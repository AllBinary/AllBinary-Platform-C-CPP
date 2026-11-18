// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/event/DestroyEventFactory.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"





void DestroyEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DestroyEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyEventFactory", nullptr);
    java_register_method("DestroyEventFactory", "getInstance", (void*) DestroyEventFactory_getInstance);
}

static void DestroyEventFactory_initFields(DestroyEventFactory* this) {
    
}


void DestroyEventFactory_init(DestroyEventFactory* this, AllBinaryGameCanvas* combatGameCanvas) {
    DestroyEventFactory_register();
    DestroyEventFactory_initFields(this);
        this->combatGameCanvas = combatGameCanvas;
}

DestroyEventFactory* DestroyEventFactory_new(AllBinaryGameCanvas* combatGameCanvas) {
    DestroyEventFactory* this = java_object_alloc(sizeof(DestroyEventFactory), "DestroyEventFactory");
    DestroyEventFactory_init(this, combatGameCanvas);
    return this;
}


AllBinaryEventObject* DestroyEventFactory_getInstance(DestroyEventFactory* this) {
        return DestroyedEvent_new(this->combatGameCanvas);
}

