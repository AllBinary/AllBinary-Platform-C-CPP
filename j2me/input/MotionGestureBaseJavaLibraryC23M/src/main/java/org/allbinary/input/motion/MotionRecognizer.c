// Generated Code Do Not Modify
#include "org/allbinary/input/motion/MotionRecognizer.h"






void MotionRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionRecognizer", nullptr);
    java_register_method("MotionRecognizer", "processStartMotionEvent", (void*) MotionRecognizer_processStartMotionEvent);
    java_register_method("MotionRecognizer", "processEndMotionEvent", (void*) MotionRecognizer_processEndMotionEvent);
    java_register_method("MotionRecognizer", "processDraggedMotionEvent", (void*) MotionRecognizer_processDraggedMotionEvent);
}

void MotionRecognizer_init(MotionRecognizer* this) {
    MotionRecognizer_register();
}

MotionRecognizer* MotionRecognizer_new(void) {
    MotionRecognizer* this = java_object_alloc(sizeof(MotionRecognizer), "MotionRecognizer");
    MotionRecognizer_init(this);
    return this;
}


// throws Exception
void MotionRecognizer_processStartMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void MotionRecognizer_processEndMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void MotionRecognizer_processDraggedMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}

