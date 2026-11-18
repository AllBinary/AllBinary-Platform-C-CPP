// Generated Code Do Not Modify
#include "org/allbinary/input/motion/trackball/action/LeftTrackballInputToGameKeyEventAction.h"
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


static void* LeftTrackballInputToGameKeyEventAction_instance;



void LeftTrackballInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LeftTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void LeftTrackballInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LeftTrackballInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* LeftTrackballInputToGameKeyEventAction_getInstance(void) {
        if ((LeftTrackballInputToGameKeyEventAction_staticInit(), LeftTrackballInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            LeftTrackballInputToGameKeyEventAction_instance = LeftTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (LeftTrackballInputToGameKeyEventAction_staticInit(), LeftTrackballInputToGameKeyEventAction_instance));
}


void LeftTrackballInputToGameKeyEventAction_init(LeftTrackballInputToGameKeyEventAction* this) {
    LeftTrackballInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Left Action", TrackballMotionGestureFactory_getInstance()->LEFT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

LeftTrackballInputToGameKeyEventAction* LeftTrackballInputToGameKeyEventAction_new(void) {
    LeftTrackballInputToGameKeyEventAction* this = java_object_alloc(sizeof(LeftTrackballInputToGameKeyEventAction), "LeftTrackballInputToGameKeyEventAction");
    LeftTrackballInputToGameKeyEventAction_init(this);
    return this;
}

