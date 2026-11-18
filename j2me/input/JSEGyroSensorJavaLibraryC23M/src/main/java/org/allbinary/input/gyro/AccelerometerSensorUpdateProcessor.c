// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/AccelerometerSensorUpdateProcessor.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
#include "org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/input/accelerometer/AccelerometerSensorFactory.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinaryOrientationSensor.h")
#include "org/allbinary/canvas/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/accelerometer/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/accelerometer/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinaryOrientationSensor.h")
#include "org/allbinary/canvas/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/accelerometer/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/accelerometer/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/canvas/AllBinaryOrientationSensor.h")
#include "org/allbinary/canvas/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/configuration/feature/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h")
#include "org/allbinary/game/input/motion/action/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/accelerometer/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/accelerometer/AllBinaryOrientationSensor.h"
#endif




void AccelerometerSensorUpdateProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AccelerometerSensorUpdateProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AccelerometerSensorUpdateProcessor", "Processor");
    java_register_method("AccelerometerSensorUpdateProcessor", "process", (void*) AccelerometerSensorUpdateProcessor_process);
}

void AccelerometerSensorUpdateProcessor_init(AccelerometerSensorUpdateProcessor* this) {
    AccelerometerSensorUpdateProcessor_register();
    Processor_init(&this->base);
}

AccelerometerSensorUpdateProcessor* AccelerometerSensorUpdateProcessor_new(void) {
    AccelerometerSensorUpdateProcessor* this = java_object_alloc(sizeof(AccelerometerSensorUpdateProcessor), "AccelerometerSensorUpdateProcessor");
    AccelerometerSensorUpdateProcessor_init(this);
    return this;
}


// throws Exception
void AccelerometerSensorUpdateProcessor_process(AccelerometerSensorUpdateProcessor* this) {
        SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
        if (Features_isFeature(Features_getInstance(), sensorFeatureFactory->ORIENTATION_SENSORS)) {
            AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), SingleKeyPressGameKeyFromMotionGestureEventListener_new());
        } else if (Features_isFeature(Features_getInstance(), sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS)) {
            AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), SingleKeyPressGameKeyFromMotionGestureEventListener_new());
        } else if (Features_isFeature(Features_getInstance(), sensorFeatureFactory->NO_ORIENTATION)) {
            AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AccelerometerSensorFactory_getInstance(), NoCompleteMotionGestureInputEventListener_getInstance());
        } else {
            java_throw(java_exception_new("Exception", "Sensor Feature Not Set"));
        }
}

