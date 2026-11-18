// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gyro/action/RollLeftOrientationInputToGameKeyEventAction.h"
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


static void* RollLeftOrientationInputToGameKeyEventAction_instance;



void RollLeftOrientationInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RollLeftOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void RollLeftOrientationInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RollLeftOrientationInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* RollLeftOrientationInputToGameKeyEventAction_getInstance(void) {
        if ((RollLeftOrientationInputToGameKeyEventAction_staticInit(), RollLeftOrientationInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            RollLeftOrientationInputToGameKeyEventAction_instance = RollLeftOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (RollLeftOrientationInputToGameKeyEventAction_staticInit(), RollLeftOrientationInputToGameKeyEventAction_instance));
}


void RollLeftOrientationInputToGameKeyEventAction_init(RollLeftOrientationInputToGameKeyEventAction* this) {
    RollLeftOrientationInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Roll Left Action", OrientationMotionGestureFactory_getInstance()->ROLL_LEFT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

RollLeftOrientationInputToGameKeyEventAction* RollLeftOrientationInputToGameKeyEventAction_new(void) {
    RollLeftOrientationInputToGameKeyEventAction* this = java_object_alloc(sizeof(RollLeftOrientationInputToGameKeyEventAction), "RollLeftOrientationInputToGameKeyEventAction");
    RollLeftOrientationInputToGameKeyEventAction_init(this);
    return this;
}

