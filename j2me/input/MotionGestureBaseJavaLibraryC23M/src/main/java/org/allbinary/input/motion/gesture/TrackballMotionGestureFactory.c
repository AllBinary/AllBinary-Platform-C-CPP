// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif


static void* TrackballMotionGestureFactory_instance;



void TrackballMotionGestureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TrackballMotionGestureFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void TrackballMotionGestureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrackballMotionGestureFactory", nullptr);
}

static void TrackballMotionGestureFactory_initFields(TrackballMotionGestureFactory* this) {
    
    
    
    
}


TrackballMotionGestureFactory* TrackballMotionGestureFactory_getInstance(void) {
        if ((TrackballMotionGestureFactory_staticInit(), TrackballMotionGestureFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            TrackballMotionGestureFactory_instance = TrackballMotionGestureFactory_new();
        }
        return ((TrackballMotionGestureFactory*) (TrackballMotionGestureFactory_staticInit(), TrackballMotionGestureFactory_instance));
}


void TrackballMotionGestureFactory_init(TrackballMotionGestureFactory* this) {
    TrackballMotionGestureFactory_register();
    TrackballMotionGestureFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->LEFT = MotionGestureInput_new(MAX - 26, "L Trackball");
        this->RIGHT = MotionGestureInput_new(MAX - 27, "R Trackball");
        this->UP = MotionGestureInput_new(MAX - 28, "Up Trackball");
        this->DOWN = MotionGestureInput_new(MAX - 29, "D Trackball");
}

TrackballMotionGestureFactory* TrackballMotionGestureFactory_new(void) {
    TrackballMotionGestureFactory* this = java_object_alloc(sizeof(TrackballMotionGestureFactory), "TrackballMotionGestureFactory");
    TrackballMotionGestureFactory_init(this);
    return this;
}

