// Generated Code Do Not Modify
#include "org/allbinary/input/motion/trackball/action/UpTrackballInputToGameKeyEventAction.h"
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


static void* UpTrackballInputToGameKeyEventAction_instance;



void UpTrackballInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    UpTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void UpTrackballInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpTrackballInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* UpTrackballInputToGameKeyEventAction_getInstance(void) {
        if ((UpTrackballInputToGameKeyEventAction_staticInit(), UpTrackballInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            UpTrackballInputToGameKeyEventAction_instance = UpTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (UpTrackballInputToGameKeyEventAction_staticInit(), UpTrackballInputToGameKeyEventAction_instance));
}


void UpTrackballInputToGameKeyEventAction_init(UpTrackballInputToGameKeyEventAction* this) {
    UpTrackballInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Up Action", TrackballMotionGestureFactory_getInstance()->UP, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

UpTrackballInputToGameKeyEventAction* UpTrackballInputToGameKeyEventAction_new(void) {
    UpTrackballInputToGameKeyEventAction* this = java_object_alloc(sizeof(UpTrackballInputToGameKeyEventAction), "UpTrackballInputToGameKeyEventAction");
    UpTrackballInputToGameKeyEventAction_init(this);
    return this;
}

