// Generated Code Do Not Modify
#include "org/allbinary/input/accelerometer/AccelerometerSensorFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/input/accelerometer/NoAccelerometerSensor.h"


static AllBinaryOrientationSensor* AccelerometerSensorFactory_allBinaryAccelerometerSensor;



void AccelerometerSensorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AccelerometerSensorFactory_allBinaryAccelerometerSensor = (AllBinaryOrientationSensor_staticInit(), AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR);
}

void AccelerometerSensorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AccelerometerSensorFactory", nullptr);
}

void AccelerometerSensorFactory_init(AccelerometerSensorFactory* this) {
    AccelerometerSensorFactory_register();
}

AccelerometerSensorFactory* AccelerometerSensorFactory_new(void) {
    AccelerometerSensorFactory* this = java_object_alloc(sizeof(AccelerometerSensorFactory), "AccelerometerSensorFactory");
    AccelerometerSensorFactory_init(this);
    return this;
}


// throws Exception
void AccelerometerSensorFactory_initMethod(void) {
        Features* features = Features_getInstance();
        SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
        if (Features_isFeature(features, sensorFeatureFactory->ORIENTATION_SENSORS)) {
            java_throw(java_exception_new("Exception", "No Orientation Sensors"));
        } else if (Features_isFeature(features, sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS)) {
            java_throw(java_exception_new("Exception", "No Simulation Sensors"));
        } else if (Features_isFeature(features, sensorFeatureFactory->NO_ORIENTATION)) {
            AccelerometerSensorFactory_allBinaryAccelerometerSensor = NoAccelerometerSensor_new();
        } else {
            java_throw(java_exception_new("Exception", "Not Such SensorFeature"));
        }
}


AllBinaryOrientationSensor* AccelerometerSensorFactory_getInstance(void) {
        return (AccelerometerSensorFactory_staticInit(), AccelerometerSensorFactory_allBinaryAccelerometerSensor);
}

