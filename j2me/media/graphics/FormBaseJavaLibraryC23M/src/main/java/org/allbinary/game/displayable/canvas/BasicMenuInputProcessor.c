// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"






static void BasicMenuInputProcessor_setCanvas(BasicMenuInputProcessor* this, MyCanvas* canvas);



void BasicMenuInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicMenuInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicMenuInputProcessor", "PlayerGameInput");
    java_register_method("BasicMenuInputProcessor", "onMotionGestureEvent", (void*) BasicMenuInputProcessor_onMotionGestureEvent);
    java_register_method("BasicMenuInputProcessor", "onScrolledMotionGestureEvent", (void*) BasicMenuInputProcessor_onScrolledMotionGestureEvent);
    java_register_method("BasicMenuInputProcessor", "setCanvas", (void*) BasicMenuInputProcessor_setCanvas);
    java_register_method("BasicMenuInputProcessor", "getCanvas", (void*) BasicMenuInputProcessor_getCanvas);
    java_register_method("BasicMenuInputProcessor", "processInputList", (void*) BasicMenuInputProcessor_processInputList);
}

static void BasicMenuInputProcessor_initFields(BasicMenuInputProcessor* this) {
    this->motionGestureEventList = BasicArrayListD_new();
    this->canvas = (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS);
}


void BasicMenuInputProcessor_init(BasicMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas) {
    BasicMenuInputProcessor_register();
        PlayerGameInput_init(&this->base, gameKeyEventList, BasicArrayListD_new(), playerInputId);
        BasicMenuInputProcessor_initFields(this);
        this->canvas = gameCanvas;
}

BasicMenuInputProcessor* BasicMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas) {
    BasicMenuInputProcessor* this = java_object_alloc(sizeof(BasicMenuInputProcessor), "BasicMenuInputProcessor");
    BasicMenuInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas);
    return this;
}


void BasicMenuInputProcessor_onMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        BasicArrayList_add(this->motionGestureEventList, motionGestureEvent);
}


void BasicMenuInputProcessor_onScrolledMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
}


static void BasicMenuInputProcessor_setCanvas(BasicMenuInputProcessor* this, MyCanvas* canvas) {
        this->canvas = canvas;
}


MyCanvas* BasicMenuInputProcessor_getCanvas(BasicMenuInputProcessor* this) {
        return ((MyCanvas*) this->canvas);
}


// throws Exception
int32_t BasicMenuInputProcessor_processInputList(BasicMenuInputProcessor* this) {
        return -1;
}

