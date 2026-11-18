// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/touch/action/PersistentInputMapping.h")
#include "org/allbinary/input/motion/touch/action/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/PersistentInputMapping.h")
#include "org/allbinary/game/input/motion/action/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PersistentInputMapping.h")
#include "org/allbinary/input/motion/gesture/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/PersistentInputMapping.h")
#include "org/allbinary/logic/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif


static void* LeftTouchInputToGameKeyEventAction_instance;



void LeftTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LeftTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void LeftTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LeftTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* LeftTouchInputToGameKeyEventAction_getInstance(void) {
        if ((LeftTouchInputToGameKeyEventAction_staticInit(), LeftTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            LeftTouchInputToGameKeyEventAction_instance = LeftTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (LeftTouchInputToGameKeyEventAction_staticInit(), LeftTouchInputToGameKeyEventAction_instance));
}


void LeftTouchInputToGameKeyEventAction_init(LeftTouchInputToGameKeyEventAction* this) {
    LeftTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Left Action", TouchMotionGestureFactory_getInstance()->LEFT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

LeftTouchInputToGameKeyEventAction* LeftTouchInputToGameKeyEventAction_new(void) {
    LeftTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(LeftTouchInputToGameKeyEventAction), "LeftTouchInputToGameKeyEventAction");
    LeftTouchInputToGameKeyEventAction_init(this);
    return this;
}

