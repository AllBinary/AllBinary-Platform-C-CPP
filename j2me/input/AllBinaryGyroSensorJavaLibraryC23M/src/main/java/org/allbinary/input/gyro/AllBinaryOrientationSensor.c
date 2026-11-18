// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/logic/math/PrimitiveFloatUtil.h"


AllBinaryOrientationSensor* AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR;




void AllBinaryOrientationSensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryOrientationSensor_NULL_ALLBINARY_ORIENTATION_SENSOR = AllBinaryOrientationSensor_new();
}

void AllBinaryOrientationSensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryOrientationSensor", "AllBinarySensor");
    java_register_method("AllBinaryOrientationSensor", "setCompleteMotionGestureInputEventListener", (void*) AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener);
    java_register_method("AllBinaryOrientationSensor", "getOrientation", (void*) AllBinaryOrientationSensor_getOrientation);
}

static void AllBinaryOrientationSensor_initFields(AllBinaryOrientationSensor* this) {
    this->sensorDataFloatArray = PrimitiveFloatUtil_getArrayInstance();
    this->listener = NoCompleteMotionGestureInputEventListener_getInstance();
}


void AllBinaryOrientationSensor_setCompleteMotionGestureInputEventListener(AllBinaryOrientationSensor* this, CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface) {
        this->listener = completeMotionGestureInputEventListenerInterface;
}


void AllBinaryOrientationSensor_init(AllBinaryOrientationSensor* this) {
    AllBinaryOrientationSensor_register();
    AllBinarySensor_init(&this->base);
    AllBinaryOrientationSensor_initFields(this);
}

AllBinaryOrientationSensor* AllBinaryOrientationSensor_new(void) {
    AllBinaryOrientationSensor* this = java_object_alloc(sizeof(AllBinaryOrientationSensor), "AllBinaryOrientationSensor");
    AllBinaryOrientationSensor_init(this);
    return this;
}


// throws Exception
Orientation* AllBinaryOrientationSensor_getOrientation(AllBinaryOrientationSensor* this) {
        java_throw(java_exception_new("Exception", this->base.commonStrings->NOT_IMPLEMENTED));
}

