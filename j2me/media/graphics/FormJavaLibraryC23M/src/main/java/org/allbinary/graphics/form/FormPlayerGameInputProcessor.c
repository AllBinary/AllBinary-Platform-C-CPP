// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/FormPlayerGameInputProcessor.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#if __has_include("org/allbinary/graphics/form/PlayerGameInput.h")
#include "org/allbinary/graphics/form/PlayerGameInput.h"
#endif
#if __has_include("org/allbinary/canvas/PlayerGameInput.h")
#include "org/allbinary/canvas/PlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif





void FormPlayerGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FormPlayerGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FormPlayerGameInputProcessor", "Processor");
    java_register_method("FormPlayerGameInputProcessor", "process", (void*) FormPlayerGameInputProcessor_process);
}

static void FormPlayerGameInputProcessor_initFields(FormPlayerGameInputProcessor* this) {
    
}


void FormPlayerGameInputProcessor_init(FormPlayerGameInputProcessor* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) {
    FormPlayerGameInputProcessor_register();
    Processor_init(&this->base);
    FormPlayerGameInputProcessor_initFields(this);
        this->playerGameInputCompositeInterface = playerGameInputCompositeInterface;
}

FormPlayerGameInputProcessor* FormPlayerGameInputProcessor_new(PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) {
    FormPlayerGameInputProcessor* this = java_object_alloc(sizeof(FormPlayerGameInputProcessor), "FormPlayerGameInputProcessor");
    FormPlayerGameInputProcessor_init(this, playerGameInputCompositeInterface);
    return this;
}


// throws Exception
void FormPlayerGameInputProcessor_process(FormPlayerGameInputProcessor* this) {
        GameInput_update(PlayerGameInputCompositeInterface_getPlayerGameInput(this->playerGameInputCompositeInterface));
}

