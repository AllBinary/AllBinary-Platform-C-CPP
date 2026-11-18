// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gyro/action/RollRightOrientationInputToGameKeyEventAction.h"
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


static void* RollRightOrientationInputToGameKeyEventAction_instance;



void RollRightOrientationInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RollRightOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void RollRightOrientationInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RollRightOrientationInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* RollRightOrientationInputToGameKeyEventAction_getInstance(void) {
        if ((RollRightOrientationInputToGameKeyEventAction_staticInit(), RollRightOrientationInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            RollRightOrientationInputToGameKeyEventAction_instance = RollRightOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (RollRightOrientationInputToGameKeyEventAction_staticInit(), RollRightOrientationInputToGameKeyEventAction_instance));
}


void RollRightOrientationInputToGameKeyEventAction_init(RollRightOrientationInputToGameKeyEventAction* this) {
    RollRightOrientationInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Roll Right Action", OrientationMotionGestureFactory_getInstance()->ROLL_RIGHT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

RollRightOrientationInputToGameKeyEventAction* RollRightOrientationInputToGameKeyEventAction_new(void) {
    RollRightOrientationInputToGameKeyEventAction* this = java_object_alloc(sizeof(RollRightOrientationInputToGameKeyEventAction), "RollRightOrientationInputToGameKeyEventAction");
    RollRightOrientationInputToGameKeyEventAction_init(this);
    return this;
}

