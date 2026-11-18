// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/GyroSensorFactory.h"
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/input/gyro/NoGyroSensor.h"


static AllBinaryOrientationSensor* GyroSensorFactory_allBinaryGyroSensor;



void GyroSensorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GyroSensorFactory_allBinaryGyroSensor = (AllBinaryOrientationSensor_staticInit(), AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR);
}

void GyroSensorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GyroSensorFactory", nullptr);
}

void GyroSensorFactory_init(GyroSensorFactory* this) {
    GyroSensorFactory_register();
}

GyroSensorFactory* GyroSensorFactory_new(void) {
    GyroSensorFactory* this = java_object_alloc(sizeof(GyroSensorFactory), "GyroSensorFactory");
    GyroSensorFactory_init(this);
    return this;
}


// throws Exception
void GyroSensorFactory_initMethod(void) {
        GyroSensorFactory_allBinaryGyroSensor = NoGyroSensor_new();
}


AllBinaryOrientationSensor* GyroSensorFactory_getInstance(void) {
        return (GyroSensorFactory_staticInit(), GyroSensorFactory_allBinaryGyroSensor);
}

