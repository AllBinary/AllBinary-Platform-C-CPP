// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gyro/action/LeftOrientationInputToGameKeyEventAction.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/input/gyro/OrientationMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/input/gyro/OrientationMotionGestureFactory.h")
#include "org/allbinary/input/gyro/OrientationMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gyro/action/PersistentInputMapping.h")
#include "org/allbinary/input/motion/gyro/action/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/motion/action/PersistentInputMapping.h")
#include "org/allbinary/game/input/motion/action/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/input/gyro/PersistentInputMapping.h")
#include "org/allbinary/input/gyro/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/PersistentInputMapping.h")
#include "org/allbinary/logic/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif


static void* LeftOrientationInputToGameKeyEventAction_instance;



void LeftOrientationInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LeftOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void LeftOrientationInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LeftOrientationInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* LeftOrientationInputToGameKeyEventAction_getInstance(void) {
        if ((LeftOrientationInputToGameKeyEventAction_staticInit(), LeftOrientationInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            LeftOrientationInputToGameKeyEventAction_instance = LeftOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (LeftOrientationInputToGameKeyEventAction_staticInit(), LeftOrientationInputToGameKeyEventAction_instance));
}


void LeftOrientationInputToGameKeyEventAction_init(LeftOrientationInputToGameKeyEventAction* this) {
    LeftOrientationInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Left Action", OrientationMotionGestureFactory_getInstance()->LEFT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

LeftOrientationInputToGameKeyEventAction* LeftOrientationInputToGameKeyEventAction_new(void) {
    LeftOrientationInputToGameKeyEventAction* this = java_object_alloc(sizeof(LeftOrientationInputToGameKeyEventAction), "LeftOrientationInputToGameKeyEventAction");
    LeftOrientationInputToGameKeyEventAction_init(this);
    return this;
}

