// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/NextUnremoveableProcessor.h"
#include "org/allbinary/game/ag/layer/hud/basic/PlayerGameNotificationHud.h"





void NextUnremoveableProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NextUnremoveableProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NextUnremoveableProcessor", "Processor");
    java_register_method("NextUnremoveableProcessor", "process", (void*) NextUnremoveableProcessor_process);
}

static void NextUnremoveableProcessor_initFields(NextUnremoveableProcessor* this) {
    
}


void NextUnremoveableProcessor_init(NextUnremoveableProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor) {
    NextUnremoveableProcessor_register();
    Processor_init(&this->base);
    NextUnremoveableProcessor_initFields(this);
        this->updateMeasurementProcessor = updateMeasurementProcessor;
}

NextUnremoveableProcessor* NextUnremoveableProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor) {
    NextUnremoveableProcessor* this = java_object_alloc(sizeof(NextUnremoveableProcessor), "NextUnremoveableProcessor");
    NextUnremoveableProcessor_init(this, updateMeasurementProcessor);
    return this;
}


// throws Exception
void NextUnremoveableProcessor_process(NextUnremoveableProcessor* this) {
        PlayerGameNotificationHud_setNextUnremoveableProcess(this->updateMeasurementProcessor);
}

