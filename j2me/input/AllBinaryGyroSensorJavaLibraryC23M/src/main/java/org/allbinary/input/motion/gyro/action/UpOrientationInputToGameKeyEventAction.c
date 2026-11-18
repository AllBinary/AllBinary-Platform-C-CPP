// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gyro/action/UpOrientationInputToGameKeyEventAction.h"
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


static void* UpOrientationInputToGameKeyEventAction_instance;



void UpOrientationInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    UpOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void UpOrientationInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpOrientationInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* UpOrientationInputToGameKeyEventAction_getInstance(void) {
        if ((UpOrientationInputToGameKeyEventAction_staticInit(), UpOrientationInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            UpOrientationInputToGameKeyEventAction_instance = UpOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (UpOrientationInputToGameKeyEventAction_staticInit(), UpOrientationInputToGameKeyEventAction_instance));
}


void UpOrientationInputToGameKeyEventAction_init(UpOrientationInputToGameKeyEventAction* this) {
    UpOrientationInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Up Action", OrientationMotionGestureFactory_getInstance()->UP, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

UpOrientationInputToGameKeyEventAction* UpOrientationInputToGameKeyEventAction_new(void) {
    UpOrientationInputToGameKeyEventAction* this = java_object_alloc(sizeof(UpOrientationInputToGameKeyEventAction), "UpOrientationInputToGameKeyEventAction");
    UpOrientationInputToGameKeyEventAction_init(this);
    return this;
}

