// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h"
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


static void* UpTouchInputToGameKeyEventAction_instance;



void UpTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    UpTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void UpTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* UpTouchInputToGameKeyEventAction_getInstance(void) {
        if ((UpTouchInputToGameKeyEventAction_staticInit(), UpTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            UpTouchInputToGameKeyEventAction_instance = UpTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (UpTouchInputToGameKeyEventAction_staticInit(), UpTouchInputToGameKeyEventAction_instance));
}


void UpTouchInputToGameKeyEventAction_init(UpTouchInputToGameKeyEventAction* this) {
    UpTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Up Action", TouchMotionGestureFactory_getInstance()->UP, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

UpTouchInputToGameKeyEventAction* UpTouchInputToGameKeyEventAction_new(void) {
    UpTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(UpTouchInputToGameKeyEventAction), "UpTouchInputToGameKeyEventAction");
    UpTouchInputToGameKeyEventAction_init(this);
    return this;
}

