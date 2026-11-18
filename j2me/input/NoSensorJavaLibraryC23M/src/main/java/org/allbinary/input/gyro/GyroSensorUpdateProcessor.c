// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/GyroSensorUpdateProcessor.h"




void GyroSensorUpdateProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GyroSensorUpdateProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GyroSensorUpdateProcessor", "Processor");
    java_register_method("GyroSensorUpdateProcessor", "process", (void*) GyroSensorUpdateProcessor_process);
}

void GyroSensorUpdateProcessor_init(GyroSensorUpdateProcessor* this) {
    GyroSensorUpdateProcessor_register();
    Processor_init(&this->base);
}

GyroSensorUpdateProcessor* GyroSensorUpdateProcessor_new(void) {
    GyroSensorUpdateProcessor* this = java_object_alloc(sizeof(GyroSensorUpdateProcessor), "GyroSensorUpdateProcessor");
    GyroSensorUpdateProcessor_init(this);
    return this;
}


// throws Exception
void GyroSensorUpdateProcessor_process(GyroSensorUpdateProcessor* this) {
}

