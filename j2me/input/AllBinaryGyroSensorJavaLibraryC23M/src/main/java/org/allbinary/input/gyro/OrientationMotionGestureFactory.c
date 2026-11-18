// Generated Code Do Not Modify
#include "org/allbinary/input/gyro/OrientationMotionGestureFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif


static void* OrientationMotionGestureFactory_instance;



void OrientationMotionGestureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OrientationMotionGestureFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void OrientationMotionGestureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OrientationMotionGestureFactory", nullptr);
}

static void OrientationMotionGestureFactory_initFields(OrientationMotionGestureFactory* this) {
    
    
    
    
    
    
}


OrientationMotionGestureFactory* OrientationMotionGestureFactory_getInstance(void) {
        if ((OrientationMotionGestureFactory_staticInit(), OrientationMotionGestureFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            OrientationMotionGestureFactory_instance = OrientationMotionGestureFactory_new();
        }
        return ((OrientationMotionGestureFactory*) (OrientationMotionGestureFactory_staticInit(), OrientationMotionGestureFactory_instance));
}


void OrientationMotionGestureFactory_init(OrientationMotionGestureFactory* this) {
    OrientationMotionGestureFactory_register();
    OrientationMotionGestureFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->LEFT = MotionGestureInput_new(MAX - 20, "Left Orient");
        this->RIGHT = MotionGestureInput_new(MAX - 21, "Right Orient");
        this->UP = MotionGestureInput_new(MAX - 22, "Up Orient");
        this->DOWN = MotionGestureInput_new(MAX - 23, "Down Orient");
        this->ROLL_LEFT = MotionGestureInput_new(MAX - 24, "Roll Left");
        this->ROLL_RIGHT = MotionGestureInput_new(MAX - 25, "Roll Right");
}

OrientationMotionGestureFactory* OrientationMotionGestureFactory_new(void) {
    OrientationMotionGestureFactory* this = java_object_alloc(sizeof(OrientationMotionGestureFactory), "OrientationMotionGestureFactory");
    OrientationMotionGestureFactory_init(this);
    return this;
}

