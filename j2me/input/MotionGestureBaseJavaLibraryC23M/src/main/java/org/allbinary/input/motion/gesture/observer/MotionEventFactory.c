// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/MotionEventFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif


static int32_t MotionEventFactory_index = 0;



void MotionEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionEventFactory", nullptr);
    java_register_method("MotionEventFactory", "getInstance", (void*) MotionEventFactory_getInstance);
}

static void MotionEventFactory_initFields(MotionEventFactory* this) {
    
    
}


void MotionEventFactory_init(MotionEventFactory* this, void* source, int32_t id) {
    MotionEventFactory_register();
    MotionEventFactory_initFields(this);
        this->source = source;
        this->id = id;
        MotionEventFactory_index = Input_getId(TouchMotionGestureFactory_getInstance()->LAST_MOTION);
}

MotionEventFactory* MotionEventFactory_new(void* source, int32_t id) {
    MotionEventFactory* this = java_object_alloc(sizeof(MotionEventFactory), "MotionEventFactory");
    MotionEventFactory_init(this, source, id);
    return this;
}


AllBinaryEventObject* MotionEventFactory_getInstance(MotionEventFactory* this) {
        InputFactory* inputFactory = InputFactory_getInstance();
        Input* input = InputFactory_getInstanceById(inputFactory, MotionEventFactory_index++);
        if (input == inputFactory->NO_INPUT) {
            return MotionGestureEvent_new(this->source, this->id, ((MotionGestureInput*) TouchMotionGestureFactory_getInstance()->NO_MOTION));
        } else {
            return MotionGestureEvent_new(this->source, this->id, ((MotionGestureInput*) input));
        }
}

