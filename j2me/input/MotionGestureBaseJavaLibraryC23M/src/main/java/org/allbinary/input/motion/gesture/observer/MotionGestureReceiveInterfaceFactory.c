// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/input/motion/gesture/observer/ResolveCompleteMotionGestureListener.h"
#include "org/allbinary/input/motion/gesture/observer/NullCompleteMotionGestureReceiver.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"




void MotionGestureReceiveInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionGestureReceiveInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureReceiveInterfaceFactory", nullptr);
}

void MotionGestureReceiveInterfaceFactory_init(MotionGestureReceiveInterfaceFactory* this) {
    MotionGestureReceiveInterfaceFactory_register();
}

MotionGestureReceiveInterfaceFactory* MotionGestureReceiveInterfaceFactory_new(void) {
    MotionGestureReceiveInterfaceFactory* this = java_object_alloc(sizeof(MotionGestureReceiveInterfaceFactory), "MotionGestureReceiveInterfaceFactory");
    MotionGestureReceiveInterfaceFactory_init(this);
    return this;
}


CompleteMotionGestureListenerInterface* MotionGestureReceiveInterfaceFactory_getInstance(void) {
        MotionGestureConfiguration* configuration = MotionGestureConfigurationFactory_getInstance();
        if (!MotionGestureConfiguration_isExecutingActionsAllowed(configuration)) {
            return NullCompleteMotionGestureReceiver_new();
        } else {
            return ResolveCompleteMotionGestureListener_new();
        }
}

