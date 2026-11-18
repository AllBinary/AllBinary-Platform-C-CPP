// Generated Code Do Not Modify
#include "org/allbinary/input/accelerometer/NoAccelerometerSensor.h"
#include "org/allbinary/logic/math/Orientation.h"






void NoAccelerometerSensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoAccelerometerSensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoAccelerometerSensor", "AllBinaryOrientationSensor");
    java_register_method("NoAccelerometerSensor", "getOrientation", (void*) NoAccelerometerSensor_getOrientation);
    java_register_method("NoAccelerometerSensor", "onSensorChange", (void*) NoAccelerometerSensor_onSensorChange);
}


void NoAccelerometerSensor_init(NoAccelerometerSensor* this) {
    NoAccelerometerSensor_register();
    AllBinaryOrientationSensor_init(&this->base);
}

NoAccelerometerSensor* NoAccelerometerSensor_new(void) {
    NoAccelerometerSensor* this = java_object_alloc(sizeof(NoAccelerometerSensor), "NoAccelerometerSensor");
    NoAccelerometerSensor_init(this);
    return this;
}


// throws Exception
Orientation* NoAccelerometerSensor_getOrientation(NoAccelerometerSensor* this) {
        return (Orientation_staticInit(), Orientation_NONE);
}


void NoAccelerometerSensor_onSensorChange(NoAccelerometerSensor* this) {
}

