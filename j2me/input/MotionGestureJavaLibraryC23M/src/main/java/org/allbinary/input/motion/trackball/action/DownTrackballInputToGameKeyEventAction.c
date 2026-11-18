// Generated Code Do Not Modify
#include "org/allbinary/input/motion/trackball/action/DownTrackballInputToGameKeyEventAction.h"
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


static void* DownTrackballInputToGameKeyEventAction_instance;



void DownTrackballInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DownTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void DownTrackballInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DownTrackballInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* DownTrackballInputToGameKeyEventAction_getInstance(void) {
        if ((DownTrackballInputToGameKeyEventAction_staticInit(), DownTrackballInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            DownTrackballInputToGameKeyEventAction_instance = DownTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (DownTrackballInputToGameKeyEventAction_staticInit(), DownTrackballInputToGameKeyEventAction_instance));
}


void DownTrackballInputToGameKeyEventAction_init(DownTrackballInputToGameKeyEventAction* this) {
    DownTrackballInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Down Action", TrackballMotionGestureFactory_getInstance()->DOWN, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

DownTrackballInputToGameKeyEventAction* DownTrackballInputToGameKeyEventAction_new(void) {
    DownTrackballInputToGameKeyEventAction* this = java_object_alloc(sizeof(DownTrackballInputToGameKeyEventAction), "DownTrackballInputToGameKeyEventAction");
    DownTrackballInputToGameKeyEventAction_init(this);
    return this;
}

