// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#include "org/allbinary/input/motion/gesture/observer/MotionEventFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif






void MotionEventCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionEventCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionEventCircularPool", nullptr);
    java_register_method("MotionEventCircularPool", "getInstance", (void*) MotionEventCircularPool_getInstance);
}

static void MotionEventCircularPool_initFields(MotionEventCircularPool* this) {
    this->MIN = Input_getId(TouchMotionGestureFactory_getInstance()->LAST_MOTION);
    this->eventPool = AllBinaryEventCircularPool_new((InputFactory_getInstance()->MAX - 1) - this->MIN);
}


MotionEventCircularPool* MotionEventCircularPool_createPool(int32_t id) {
        return MotionEventCircularPool_new(id);
}


void MotionEventCircularPool_init(MotionEventCircularPool* this, int32_t id) {
    MotionEventCircularPool_register();
    MotionEventCircularPool_initFields(this);
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->eventPool, MotionEventFactory_new(this->eventPool, id));
}

MotionEventCircularPool* MotionEventCircularPool_new(int32_t id) {
    MotionEventCircularPool* this = java_object_alloc(sizeof(MotionEventCircularPool), "MotionEventCircularPool");
    MotionEventCircularPool_init(this, id);
    return this;
}


// throws Exception
// synchronized
MotionGestureEvent* MotionEventCircularPool_getInstance(MotionEventCircularPool* this, MotionGestureInput* motionGestureInput) {
        return ((MotionGestureEvent*) BaseCircularPool_getInstance(this->eventPool, Input_getId(motionGestureInput) - this->MIN));
}

