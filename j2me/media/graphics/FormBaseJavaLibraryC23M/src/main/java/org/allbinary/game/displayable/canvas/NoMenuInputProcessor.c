// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static NoMenuInputProcessor* NoMenuInputProcessor_SINGLETON;






void NoMenuInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoMenuInputProcessor_SINGLETON = NoMenuInputProcessor_new();
}

void NoMenuInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoMenuInputProcessor", "BasicMenuInputProcessor");
    java_register_method("NoMenuInputProcessor", "onDownGameKeyEvent", (void*) NoMenuInputProcessor_onDownGameKeyEvent);
    java_register_method("NoMenuInputProcessor", "onUpGameKeyEvent", (void*) NoMenuInputProcessor_onUpGameKeyEvent);
    java_register_method("NoMenuInputProcessor", "onMotionGestureEvent", (void*) NoMenuInputProcessor_onMotionGestureEvent);
}


NoMenuInputProcessor* NoMenuInputProcessor_getInstance(void) {
        return (NoMenuInputProcessor_staticInit(), NoMenuInputProcessor_SINGLETON);
}


void NoMenuInputProcessor_init(NoMenuInputProcessor* this) {
    NoMenuInputProcessor_register();
        BasicMenuInputProcessor_init(&this->base, BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()), -1, (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
}

NoMenuInputProcessor* NoMenuInputProcessor_new(void) {
    NoMenuInputProcessor* this = java_object_alloc(sizeof(NoMenuInputProcessor), "NoMenuInputProcessor");
    NoMenuInputProcessor_init(this);
    return this;
}


// synchronized
void NoMenuInputProcessor_onDownGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent) {
}


// synchronized
void NoMenuInputProcessor_onUpGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent) {
}


void NoMenuInputProcessor_onMotionGestureEvent(NoMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
}

