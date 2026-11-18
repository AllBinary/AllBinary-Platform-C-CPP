// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/OrientationToGameKeyEvent.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/input/gyro/NoGyroSensor.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/SensorFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#endif







static void OrientationToGameKeyEvent_updateGameKeyEvents(OrientationToGameKeyEvent* this, Orientation* orientation, int32_t yaw, int32_t pitch, int32_t roll);

void OrientationToGameKeyEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OrientationToGameKeyEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OrientationToGameKeyEvent", nullptr);
    java_register_method("OrientationToGameKeyEvent", "setAllBinaryGyroSensor", (void*) OrientationToGameKeyEvent_setAllBinaryGyroSensor);
    java_register_method("OrientationToGameKeyEvent", "getAllBinaryGyroSensor", (void*) OrientationToGameKeyEvent_getAllBinaryGyroSensor);
    java_register_method("OrientationToGameKeyEvent", "process", (void*) OrientationToGameKeyEvent_process);
    java_register_method("OrientationToGameKeyEvent", "updateGameKeyEvents", (void*) OrientationToGameKeyEvent_updateGameKeyEvents);
}

static void OrientationToGameKeyEvent_initFields(OrientationToGameKeyEvent* this) {
    this->allBinaryGyroSensor = nullptr;
    this->MIN = 15;
}


void OrientationToGameKeyEvent_init(OrientationToGameKeyEvent* this) {
    OrientationToGameKeyEvent_register();
    OrientationToGameKeyEvent_initFields(this);
        if (Features_isFeature(Features_getInstance(), SensorFeatureFactory_getInstance()->NO_ORIENTATION)) {
            this->allBinaryGyroSensor = NoGyroSensor_new();
        } else {
            java_throw(java_exception_new("Exception", "Not Such Feature"));
        }
}

OrientationToGameKeyEvent* OrientationToGameKeyEvent_new(void) {
    OrientationToGameKeyEvent* this = java_object_alloc(sizeof(OrientationToGameKeyEvent), "OrientationToGameKeyEvent");
    OrientationToGameKeyEvent_init(this);
    return this;
}


void OrientationToGameKeyEvent_setAllBinaryGyroSensor(OrientationToGameKeyEvent* this, AllBinaryOrientationSensor* allBinaryGyroSensor) {
        this->allBinaryGyroSensor = allBinaryGyroSensor;
}


AllBinaryOrientationSensor* OrientationToGameKeyEvent_getAllBinaryGyroSensor(OrientationToGameKeyEvent* this) {
        return this->allBinaryGyroSensor;
}


// throws Exception
void OrientationToGameKeyEvent_process(OrientationToGameKeyEvent* this) {
}


// throws Exception
static void OrientationToGameKeyEvent_updateGameKeyEvents(OrientationToGameKeyEvent* this, Orientation* orientation, int32_t yaw, int32_t pitch, int32_t roll) {
}

