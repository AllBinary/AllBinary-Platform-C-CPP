// Generated Code Do Not Modify
#include "org/allbinary/input/motion/OnlyTouchButtonRecognizer.h"
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"







void OnlyTouchButtonRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OnlyTouchButtonRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OnlyTouchButtonRecognizer", "MotionRecognizer");
    java_register_method("OnlyTouchButtonRecognizer", "processStartMotionEvent", (void*) OnlyTouchButtonRecognizer_processStartMotionEvent);
    java_register_method("OnlyTouchButtonRecognizer", "processEndMotionEvent", (void*) OnlyTouchButtonRecognizer_processEndMotionEvent);
    java_register_method("OnlyTouchButtonRecognizer", "processDraggedMotionEvent", (void*) OnlyTouchButtonRecognizer_processDraggedMotionEvent);
}

static void OnlyTouchButtonRecognizer_initFields(OnlyTouchButtonRecognizer* this) {
    
    this->touchButtonProcessing = false;
}


void OnlyTouchButtonRecognizer_init(OnlyTouchButtonRecognizer* this) {
    OnlyTouchButtonRecognizer_register();
    MotionRecognizer_init(&this->base);
    OnlyTouchButtonRecognizer_initFields(this);
        this->touchButtonRecognizer = TouchButtonRecognizer_new();
}

OnlyTouchButtonRecognizer* OnlyTouchButtonRecognizer_new(void) {
    OnlyTouchButtonRecognizer* this = java_object_alloc(sizeof(OnlyTouchButtonRecognizer), "OnlyTouchButtonRecognizer");
    OnlyTouchButtonRecognizer_init(this);
    return this;
}


// throws Exception
void OnlyTouchButtonRecognizer_processStartMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
            this->touchButtonProcessing = true;
        }
}


// throws Exception
void OnlyTouchButtonRecognizer_processEndMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (this->touchButtonProcessing) {
            this->touchButtonProcessing = false;
        }
        if (TouchButtonRecognizer_releaseTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
            return;
        }
}


// throws Exception
void OnlyTouchButtonRecognizer_processDraggedMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (this->touchButtonProcessing) {
            TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId);
        }
}

