// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gyro/action/RightOrientationInputToGameKeyEventAction.h"
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


static void* RightOrientationInputToGameKeyEventAction_instance;



void RightOrientationInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RightOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void RightOrientationInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RightOrientationInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* RightOrientationInputToGameKeyEventAction_getInstance(void) {
        if ((RightOrientationInputToGameKeyEventAction_staticInit(), RightOrientationInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            RightOrientationInputToGameKeyEventAction_instance = RightOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (RightOrientationInputToGameKeyEventAction_staticInit(), RightOrientationInputToGameKeyEventAction_instance));
}


void RightOrientationInputToGameKeyEventAction_init(RightOrientationInputToGameKeyEventAction* this) {
    RightOrientationInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Right Action", OrientationMotionGestureFactory_getInstance()->RIGHT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

RightOrientationInputToGameKeyEventAction* RightOrientationInputToGameKeyEventAction_new(void) {
    RightOrientationInputToGameKeyEventAction* this = java_object_alloc(sizeof(RightOrientationInputToGameKeyEventAction), "RightOrientationInputToGameKeyEventAction");
    RightOrientationInputToGameKeyEventAction_init(this);
    return this;
}

