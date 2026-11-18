// Generated Code Do Not Modify
#include "org/allbinary/input/motion/AllMotionRecognizer.h"
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/graphics/GPointCircularPool.h"
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"


static int32_t AllMotionRecognizer_index = 0;
static GPointCircularPool* AllMotionRecognizer_pointCircularPool;








void AllMotionRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllMotionRecognizer_pointCircularPool = GPointCircularPool_new(40);
}

void AllMotionRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllMotionRecognizer", "MotionRecognizer");
    java_register_method("AllMotionRecognizer", "processStartMotionEvent", (void*) AllMotionRecognizer_processStartMotionEvent);
    java_register_method("AllMotionRecognizer", "processEndMotionEvent", (void*) AllMotionRecognizer_processEndMotionEvent);
    java_register_method("AllMotionRecognizer", "processDraggedMotionEvent", (void*) AllMotionRecognizer_processDraggedMotionEvent);
    java_register_method("AllMotionRecognizer", "processMovedMotionEvent", (void*) AllMotionRecognizer_processMovedMotionEvent);
    java_register_method("AllMotionRecognizer", "processScrolledMotionEvent", (void*) AllMotionRecognizer_processScrolledMotionEvent);
    java_register_method("AllMotionRecognizer", "getMotionGestureRecognizer", (void*) AllMotionRecognizer_getMotionGestureRecognizer);
}

static void AllMotionRecognizer_initFields(AllMotionRecognizer* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->touchButtonProcessing = false;
    
    
    this->lastX = 0;
    this->lastY = 0;
}


void AllMotionRecognizer_init(AllMotionRecognizer* this) {
    AllMotionRecognizer_register();
    MotionRecognizer_init(&this->base);
    AllMotionRecognizer_initFields(this);
        this->id = AllMotionRecognizer_index++;
        this->motionGestureRecognizer = MotionGestureRecognizer_new(this->id);
        this->touchButtonRecognizer = TouchButtonRecognizer_new();
}

AllMotionRecognizer* AllMotionRecognizer_new(void) {
    AllMotionRecognizer* this = java_object_alloc(sizeof(AllMotionRecognizer), "AllMotionRecognizer");
    AllMotionRecognizer_init(this);
    return this;
}


// throws Exception
void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
            this->touchButtonProcessing = true;
        }
        if (!this->touchButtonProcessing) {
            CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((AllMotionRecognizer_staticInit(), AllMotionRecognizer_pointCircularPool)));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processPressedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
}


// throws Exception
void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (TouchButtonRecognizer_releaseTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
        }
        if (!this->touchButtonProcessing) {
            CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((AllMotionRecognizer_staticInit(), AllMotionRecognizer_pointCircularPool)));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processReleasedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
        if (this->touchButtonProcessing) {
            this->touchButtonProcessing = false;
        }
}


// throws Exception
void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (this->touchButtonProcessing) {
            TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId);
        }
        if (!this->touchButtonProcessing) {
            CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((AllMotionRecognizer_staticInit(), AllMotionRecognizer_pointCircularPool)));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processDraggedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
}


// throws Exception
void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (x != this->lastX || y != this->lastY) {
            this->lastX = x;
            this->lastY = y;
            CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((AllMotionRecognizer_staticInit(), AllMotionRecognizer_pointCircularPool)));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processMovedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
}


// throws Exception
void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) BaseCircularPool_getNextInstance((AllMotionRecognizer_staticInit(), AllMotionRecognizer_pointCircularPool)));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processScrolledMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}


MotionGestureRecognizer* AllMotionRecognizer_getMotionGestureRecognizer(AllMotionRecognizer* this) {
        return this->motionGestureRecognizer;
}

