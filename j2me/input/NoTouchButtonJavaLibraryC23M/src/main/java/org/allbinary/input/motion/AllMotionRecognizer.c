// Generated Code Do Not Modify
#include "org/allbinary/input/motion/AllMotionRecognizer.h"


static int32_t AllMotionRecognizer_index = 0;








void AllMotionRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllMotionRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllMotionRecognizer", nullptr);
    java_register_method("AllMotionRecognizer", "processStartMotionEvent", (void*) AllMotionRecognizer_processStartMotionEvent);
    java_register_method("AllMotionRecognizer", "processEndMotionEvent", (void*) AllMotionRecognizer_processEndMotionEvent);
    java_register_method("AllMotionRecognizer", "processDraggedMotionEvent", (void*) AllMotionRecognizer_processDraggedMotionEvent);
    java_register_method("AllMotionRecognizer", "processMovedMotionEvent", (void*) AllMotionRecognizer_processMovedMotionEvent);
    java_register_method("AllMotionRecognizer", "processScrolledMotionEvent", (void*) AllMotionRecognizer_processScrolledMotionEvent);
    java_register_method("AllMotionRecognizer", "getId", (void*) AllMotionRecognizer_getId);
}

static void AllMotionRecognizer_initFields(AllMotionRecognizer* this) {
    
}


void AllMotionRecognizer_init(AllMotionRecognizer* this) {
    AllMotionRecognizer_register();
    AllMotionRecognizer_initFields(this);
        this->id = AllMotionRecognizer_index++;
}

AllMotionRecognizer* AllMotionRecognizer_new(void) {
    AllMotionRecognizer* this = java_object_alloc(sizeof(AllMotionRecognizer), "AllMotionRecognizer");
    AllMotionRecognizer_init(this);
    return this;
}


// throws Exception
void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


int32_t AllMotionRecognizer_getId(AllMotionRecognizer* this) {
        return this->id;
}

