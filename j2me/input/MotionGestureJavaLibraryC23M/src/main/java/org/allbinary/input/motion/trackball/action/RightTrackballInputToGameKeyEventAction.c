// Generated Code Do Not Modify
#include "org/allbinary/input/motion/trackball/action/RightTrackballInputToGameKeyEventAction.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/trackball/action/PersistentInputMapping.h")
#include "org/allbinary/input/motion/trackball/action/PersistentInputMapping.h"
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


static void* RightTrackballInputToGameKeyEventAction_instance;



void RightTrackballInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RightTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void RightTrackballInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RightTrackballInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* RightTrackballInputToGameKeyEventAction_getInstance(void) {
        if ((RightTrackballInputToGameKeyEventAction_staticInit(), RightTrackballInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            RightTrackballInputToGameKeyEventAction_instance = RightTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (RightTrackballInputToGameKeyEventAction_staticInit(), RightTrackballInputToGameKeyEventAction_instance));
}


void RightTrackballInputToGameKeyEventAction_init(RightTrackballInputToGameKeyEventAction* this) {
    RightTrackballInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Right Action", TrackballMotionGestureFactory_getInstance()->RIGHT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

RightTrackballInputToGameKeyEventAction* RightTrackballInputToGameKeyEventAction_new(void) {
    RightTrackballInputToGameKeyEventAction* this = java_object_alloc(sizeof(RightTrackballInputToGameKeyEventAction), "RightTrackballInputToGameKeyEventAction");
    RightTrackballInputToGameKeyEventAction_init(this);
    return this;
}

