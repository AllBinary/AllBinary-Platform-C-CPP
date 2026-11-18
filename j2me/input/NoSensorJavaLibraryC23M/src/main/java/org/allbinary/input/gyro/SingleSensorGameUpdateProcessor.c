// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h"
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"





void SingleSensorGameUpdateProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SingleSensorGameUpdateProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SingleSensorGameUpdateProcessor", "SensorGameUpdateProcessor");
    java_register_method("SingleSensorGameUpdateProcessor", "process", (void*) SingleSensorGameUpdateProcessor_process);
    java_register_method("SingleSensorGameUpdateProcessor", "sendNotifications", (void*) SingleSensorGameUpdateProcessor_sendNotifications);
}

void SingleSensorGameUpdateProcessor_init(SingleSensorGameUpdateProcessor* this) {
    SingleSensorGameUpdateProcessor_register();
    SensorGameUpdateProcessor_init(&this->base);
}

SingleSensorGameUpdateProcessor* SingleSensorGameUpdateProcessor_new(void) {
    SingleSensorGameUpdateProcessor* this = java_object_alloc(sizeof(SingleSensorGameUpdateProcessor), "SingleSensorGameUpdateProcessor");
    SingleSensorGameUpdateProcessor_init(this);
    return this;
}


// throws Exception
void SingleSensorGameUpdateProcessor_process(SingleSensorGameUpdateProcessor* this, void* anyType) {
}


// throws Exception
void SingleSensorGameUpdateProcessor_sendNotifications(SingleSensorGameUpdateProcessor* this, void* anyType) {
}

