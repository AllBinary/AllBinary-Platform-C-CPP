// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/MirrorMotionGestureEventUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif


static MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_instance;





void MirrorMotionGestureEventUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MirrorMotionGestureEventUtil_instance = MirrorMotionGestureEventUtil_new();
}

void MirrorMotionGestureEventUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MirrorMotionGestureEventUtil", nullptr);
    java_register_method("MirrorMotionGestureEventUtil", "mirrorVerticle", (void*) MirrorMotionGestureEventUtil_mirrorVerticle);
    java_register_method("MirrorMotionGestureEventUtil", "getNewX", (void*) MirrorMotionGestureEventUtil_getNewX);
}

static void MirrorMotionGestureEventUtil_initFields(MirrorMotionGestureEventUtil* this) {
    
}


void MirrorMotionGestureEventUtil_init(MirrorMotionGestureEventUtil* this) {
    MirrorMotionGestureEventUtil_register();
    MirrorMotionGestureEventUtil_initFields(this);
        this->motionEventCircularPool = MotionEventCircularPool_createPool((Integer_staticInit(), Integer_MAX_VALUE));
}

MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_new(void) {
    MirrorMotionGestureEventUtil* this = java_object_alloc(sizeof(MirrorMotionGestureEventUtil), "MirrorMotionGestureEventUtil");
    MirrorMotionGestureEventUtil_init(this);
    return this;
}


// throws Exception
MotionGestureEvent* MirrorMotionGestureEventUtil_mirrorVerticle(MirrorMotionGestureEventUtil* this, MotionGestureEvent* motionGestureEvent, int32_t halfWidth) {
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, MotionGestureEvent_getMotionGesture(motionGestureEvent));
        int32_t previousNewX = MirrorMotionGestureEventUtil_getNewX(this, GPoint_getX(MotionGestureEvent_getPreviousPoint(motionGestureEvent)), halfWidth);
        int32_t currentNewX = MirrorMotionGestureEventUtil_getNewX(this, GPoint_getX(MotionGestureEvent_getCurrentPoint(motionGestureEvent)), halfWidth);
        PointFactory* pointFactory = PointFactory_getInstance();
        GPoint* mirroredPreviousPoint = PointFactory_createXY(pointFactory, previousNewX, GPoint_getY(MotionGestureEvent_getPreviousPoint(motionGestureEvent)));
        GPoint* mirroredCurrentPoint = PointFactory_createXY(pointFactory, currentNewX, GPoint_getY(MotionGestureEvent_getCurrentPoint(motionGestureEvent)));
        MotionGestureEvent_setPreviousPoint(event, mirroredPreviousPoint);
        MotionGestureEvent_setCurrentPoint(event, mirroredCurrentPoint);
        return event;
}


int32_t MirrorMotionGestureEventUtil_getNewX(MirrorMotionGestureEventUtil* this, int32_t x, int32_t halfWidth) {
        int32_t newX = 0;
        if (x > halfWidth) {
            newX = halfWidth - (x - halfWidth);
        } else {
            newX = halfWidth + (halfWidth - x);
        }
        return newX;
}


MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_getInstance(void) {
        return (MirrorMotionGestureEventUtil_staticInit(), MirrorMotionGestureEventUtil_instance);
}

