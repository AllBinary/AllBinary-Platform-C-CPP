// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h"
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


static void* DiagonalUpLeftTouchInputToGameKeyEventAction_instance;



void DiagonalUpLeftTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DiagonalUpLeftTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void DiagonalUpLeftTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiagonalUpLeftTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* DiagonalUpLeftTouchInputToGameKeyEventAction_getInstance(void) {
        if ((DiagonalUpLeftTouchInputToGameKeyEventAction_staticInit(), DiagonalUpLeftTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalUpLeftTouchInputToGameKeyEventAction_instance = DiagonalUpLeftTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (DiagonalUpLeftTouchInputToGameKeyEventAction_staticInit(), DiagonalUpLeftTouchInputToGameKeyEventAction_instance));
}


void DiagonalUpLeftTouchInputToGameKeyEventAction_init(DiagonalUpLeftTouchInputToGameKeyEventAction* this) {
    DiagonalUpLeftTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Up Left Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_UP_LEFT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

DiagonalUpLeftTouchInputToGameKeyEventAction* DiagonalUpLeftTouchInputToGameKeyEventAction_new(void) {
    DiagonalUpLeftTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(DiagonalUpLeftTouchInputToGameKeyEventAction), "DiagonalUpLeftTouchInputToGameKeyEventAction");
    DiagonalUpLeftTouchInputToGameKeyEventAction_init(this);
    return this;
}

