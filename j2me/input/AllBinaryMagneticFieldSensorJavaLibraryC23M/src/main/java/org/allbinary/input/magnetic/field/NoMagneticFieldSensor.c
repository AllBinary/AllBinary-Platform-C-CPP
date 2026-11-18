// Generated Code Do Not Modify
#include "org/allbinary/input/magnetic/field/NoMagneticFieldSensor.h"
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/input/magnetic/field/AllBinaryMagneticFieldSensor.h"





void NoMagneticFieldSensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoMagneticFieldSensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoMagneticFieldSensor", "AllBinaryMagneticFieldSensor");
    java_register_method("NoMagneticFieldSensor", "getOrientation", (void*) NoMagneticFieldSensor_getOrientation);
    java_register_method("NoMagneticFieldSensor", "onSensorChange", (void*) NoMagneticFieldSensor_onSensorChange);
}

void NoMagneticFieldSensor_init(NoMagneticFieldSensor* this) {
    NoMagneticFieldSensor_register();
    AllBinaryMagneticFieldSensor_init(&this->base);
}

NoMagneticFieldSensor* NoMagneticFieldSensor_new(void) {
    NoMagneticFieldSensor* this = java_object_alloc(sizeof(NoMagneticFieldSensor), "NoMagneticFieldSensor");
    NoMagneticFieldSensor_init(this);
    return this;
}


// throws Exception
Orientation* NoMagneticFieldSensor_getOrientation(NoMagneticFieldSensor* this) {
        return (Orientation_staticInit(), Orientation_NONE);
}


void NoMagneticFieldSensor_onSensorChange(NoMagneticFieldSensor* this) {
}

