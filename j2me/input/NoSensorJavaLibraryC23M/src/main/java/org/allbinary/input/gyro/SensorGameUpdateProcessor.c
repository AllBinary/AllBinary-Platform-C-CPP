// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#include "org/allbinary/input/AllBinarySensor.h"
#include "org/allbinary/input/NoAllBinarySensor.h"









void SensorGameUpdateProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SensorGameUpdateProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SensorGameUpdateProcessor", nullptr);
    java_register_method("SensorGameUpdateProcessor", "setInputSensor", (void*) SensorGameUpdateProcessor_setInputSensor);
    java_register_method("SensorGameUpdateProcessor", "getInputSensor", (void*) SensorGameUpdateProcessor_getInputSensor);
    java_register_method("SensorGameUpdateProcessor", "process", (void*) SensorGameUpdateProcessor_process);
    java_register_method("SensorGameUpdateProcessor", "sendNotifications", (void*) SensorGameUpdateProcessor_sendNotifications);
    java_register_method("SensorGameUpdateProcessor", "isAnySensor", (void*) SensorGameUpdateProcessor_isAnySensor);
    java_register_method("SensorGameUpdateProcessor", "setNoSensors", (void*) SensorGameUpdateProcessor_setNoSensors);
}

static void SensorGameUpdateProcessor_initFields(SensorGameUpdateProcessor* this) {
    this->inputSensor = NoAllBinarySensor_getInstance();
}

void SensorGameUpdateProcessor_init(SensorGameUpdateProcessor* this) {
    SensorGameUpdateProcessor_register();
    SensorGameUpdateProcessor_initFields(this);
}

SensorGameUpdateProcessor* SensorGameUpdateProcessor_new(void) {
    SensorGameUpdateProcessor* this = java_object_alloc(sizeof(SensorGameUpdateProcessor), "SensorGameUpdateProcessor");
    SensorGameUpdateProcessor_init(this);
    return this;
}


void SensorGameUpdateProcessor_setInputSensor(SensorGameUpdateProcessor* this, AllBinarySensor* inputSensor) {
        this->inputSensor = inputSensor;
}


AllBinarySensor* SensorGameUpdateProcessor_getInputSensor(SensorGameUpdateProcessor* this) {
        return this->inputSensor;
}


// throws Exception
void SensorGameUpdateProcessor_process(SensorGameUpdateProcessor* this, void* anyType) {
}


// throws Exception
void SensorGameUpdateProcessor_sendNotifications(SensorGameUpdateProcessor* this, void* anyType) {
}


bool SensorGameUpdateProcessor_isAnySensor(SensorGameUpdateProcessor* this) {
        if (this->inputSensor == NoAllBinarySensor_getInstance()) {
            return false;
        } else {
            return true;
        }
}


void SensorGameUpdateProcessor_setNoSensors(SensorGameUpdateProcessor* this) {
        SensorGameUpdateProcessor_setInputSensor(this, NoAllBinarySensor_getInstance());
}

