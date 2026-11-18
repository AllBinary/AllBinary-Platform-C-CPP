// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/OrientationData.h"


static OrientationData* OrientationData_SINGLETON;



void OrientationData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OrientationData_SINGLETON = OrientationData_new();
}

void OrientationData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OrientationData", nullptr);
}

static void OrientationData_initFields(OrientationData* this) {
    this->ORIENTATION_SENSOR_INPUT = "Orientation Sensor Input";
    this->ORIENTATION_TYPE = "Orientation Type";
}


void OrientationData_init(OrientationData* this) {
    OrientationData_register();
    OrientationData_initFields(this);
}

OrientationData* OrientationData_new(void) {
    OrientationData* this = java_object_alloc(sizeof(OrientationData), "OrientationData");
    OrientationData_init(this);
    return this;
}


OrientationData* OrientationData_getInstance(void) {
        return (OrientationData_staticInit(), OrientationData_SINGLETON);
}

