// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/SetAndRemoveProcessor.h"
#include "org/allbinary/game/ag/layer/hud/basic/PlayerGameNotificationHud.h"





void SetAndRemoveProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SetAndRemoveProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SetAndRemoveProcessor", "Processor");
    java_register_method("SetAndRemoveProcessor", "process", (void*) SetAndRemoveProcessor_process);
}

static void SetAndRemoveProcessor_initFields(SetAndRemoveProcessor* this) {
    
}


void SetAndRemoveProcessor_init(SetAndRemoveProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor) {
    SetAndRemoveProcessor_register();
    Processor_init(&this->base);
    SetAndRemoveProcessor_initFields(this);
        this->updateMeasurementProcessor = updateMeasurementProcessor;
}

SetAndRemoveProcessor* SetAndRemoveProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor) {
    SetAndRemoveProcessor* this = java_object_alloc(sizeof(SetAndRemoveProcessor), "SetAndRemoveProcessor");
    SetAndRemoveProcessor_init(this, updateMeasurementProcessor);
    return this;
}


// throws Exception
void SetAndRemoveProcessor_process(SetAndRemoveProcessor* this) {
        PlayerGameNotificationHud_setAndRemoveProcess(this->updateMeasurementProcessor);
}

