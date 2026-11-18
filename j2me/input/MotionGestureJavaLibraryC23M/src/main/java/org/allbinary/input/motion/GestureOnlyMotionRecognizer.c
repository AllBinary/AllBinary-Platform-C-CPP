// Generated Code Do Not Modify
#include "org/allbinary/input/motion/GestureOnlyMotionRecognizer.h"
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/graphics/GPointCircularPool.h"
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"


static int32_t GestureOnlyMotionRecognizer_index = 0;
static GPointCircularPool* GestureOnlyMotionRecognizer_pointCircularPool;





void GestureOnlyMotionRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GestureOnlyMotionRecognizer_pointCircularPool = GPointCircularPool_new(40);
}

void GestureOnlyMotionRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GestureOnlyMotionRecognizer", "MotionRecognizer");
    java_register_method("GestureOnlyMotionRecognizer", "processStartMotionEvent", (void*) GestureOnlyMotionRecognizer_processStartMotionEvent);
    java_register_method("GestureOnlyMotionRecognizer", "processEndMotionEvent", (void*) GestureOnlyMotionRecognizer_processEndMotionEvent);
    java_register_method("GestureOnlyMotionRecognizer", "processDraggedMotionEvent", (void*) GestureOnlyMotionRecognizer_processDraggedMotionEvent);
}

static void GestureOnlyMotionRecognizer_initFields(GestureOnlyMotionRecognizer* this) {
    
    
}


void GestureOnlyMotionRecognizer_init(GestureOnlyMotionRecognizer* this) {
    GestureOnlyMotionRecognizer_register();
    MotionRecognizer_init(&this->base);
    GestureOnlyMotionRecognizer_initFields(this);
        this->id = GestureOnlyMotionRecognizer_index++;
        this->motionGestureRecognizer = MotionGestureRecognizer_new(this->id);
}

GestureOnlyMotionRecognizer* GestureOnlyMotionRecognizer_new(void) {
    GestureOnlyMotionRecognizer* this = java_object_alloc(sizeof(GestureOnlyMotionRecognizer), "GestureOnlyMotionRecognizer");
    GestureOnlyMotionRecognizer_init(this);
    return this;
}


// throws Exception
void GestureOnlyMotionRecognizer_processStartMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((GestureOnlyMotionRecognizer_staticInit(), GestureOnlyMotionRecognizer_pointCircularPool)));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processPressedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}


// throws Exception
void GestureOnlyMotionRecognizer_processEndMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((GestureOnlyMotionRecognizer_staticInit(), GestureOnlyMotionRecognizer_pointCircularPool)));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processReleasedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}


// throws Exception
void GestureOnlyMotionRecognizer_processDraggedMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((GestureOnlyMotionRecognizer_staticInit(), GestureOnlyMotionRecognizer_pointCircularPool)));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processDraggedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}

