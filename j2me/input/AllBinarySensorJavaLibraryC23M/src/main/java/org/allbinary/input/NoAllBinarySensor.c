// Generated Code Do Not Modify
#include "org/allbinary/input/NoAllBinarySensor.h"
#include "org/allbinary/input/AllBinarySensor.h"


static NoAllBinarySensor* NoAllBinarySensor_instance;



void NoAllBinarySensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoAllBinarySensor_instance = NoAllBinarySensor_new();
}

void NoAllBinarySensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoAllBinarySensor", "AllBinarySensor");
}


NoAllBinarySensor* NoAllBinarySensor_getInstance(void) {
        return (NoAllBinarySensor_staticInit(), NoAllBinarySensor_instance);
}


void NoAllBinarySensor_init(NoAllBinarySensor* this) {
    NoAllBinarySensor_register();
    AllBinarySensor_init(&this->base);
}

NoAllBinarySensor* NoAllBinarySensor_new(void) {
    NoAllBinarySensor* this = java_object_alloc(sizeof(NoAllBinarySensor), "NoAllBinarySensor");
    NoAllBinarySensor_init(this);
    return this;
}

