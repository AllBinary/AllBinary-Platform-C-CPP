// Generated Code Do Not Modify
#include "org/allbinary/input/magnetic/field/AllBinaryMagneticFieldSensor.h"




void AllBinaryMagneticFieldSensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryMagneticFieldSensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryMagneticFieldSensor", "AllBinarySensor");
}


void AllBinaryMagneticFieldSensor_init(AllBinaryMagneticFieldSensor* this) {
    AllBinaryMagneticFieldSensor_register();
    AllBinarySensor_init(&this->base);
}

AllBinaryMagneticFieldSensor* AllBinaryMagneticFieldSensor_new(void) {
    AllBinaryMagneticFieldSensor* this = java_object_alloc(sizeof(AllBinaryMagneticFieldSensor), "AllBinaryMagneticFieldSensor");
    AllBinaryMagneticFieldSensor_init(this);
    return this;
}

