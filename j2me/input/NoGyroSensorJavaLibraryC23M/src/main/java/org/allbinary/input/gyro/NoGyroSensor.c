// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/NoGyroSensor.h"
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"






void NoGyroSensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoGyroSensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoGyroSensor", "AllBinaryOrientationSensor");
    java_register_method("NoGyroSensor", "getOrientation", (void*) NoGyroSensor_getOrientation);
    java_register_method("NoGyroSensor", "onSensorChange", (void*) NoGyroSensor_onSensorChange);
}


void NoGyroSensor_init(NoGyroSensor* this) {
    NoGyroSensor_register();
    AllBinaryOrientationSensor_init(&this->base);
        LogUtil_putF(this->base.base.logUtil, this->base.base.commonStrings->START, this, this->base.base.commonStrings->CONSTRUCTOR);
}

NoGyroSensor* NoGyroSensor_new(void) {
    NoGyroSensor* this = java_object_alloc(sizeof(NoGyroSensor), "NoGyroSensor");
    NoGyroSensor_init(this);
    return this;
}


// throws Exception
Orientation* NoGyroSensor_getOrientation(NoGyroSensor* this) {
        return (Orientation_staticInit(), Orientation_NONE);
}


void NoGyroSensor_onSensorChange(NoGyroSensor* this) {
}

