// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h"
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


static void* DiagonalUpRightTouchInputToGameKeyEventAction_instance;



void DiagonalUpRightTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DiagonalUpRightTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void DiagonalUpRightTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiagonalUpRightTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* DiagonalUpRightTouchInputToGameKeyEventAction_getInstance(void) {
        if ((DiagonalUpRightTouchInputToGameKeyEventAction_staticInit(), DiagonalUpRightTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalUpRightTouchInputToGameKeyEventAction_instance = DiagonalUpRightTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (DiagonalUpRightTouchInputToGameKeyEventAction_staticInit(), DiagonalUpRightTouchInputToGameKeyEventAction_instance));
}


void DiagonalUpRightTouchInputToGameKeyEventAction_init(DiagonalUpRightTouchInputToGameKeyEventAction* this) {
    DiagonalUpRightTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Up Right Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_UP_RIGHT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

DiagonalUpRightTouchInputToGameKeyEventAction* DiagonalUpRightTouchInputToGameKeyEventAction_new(void) {
    DiagonalUpRightTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(DiagonalUpRightTouchInputToGameKeyEventAction), "DiagonalUpRightTouchInputToGameKeyEventAction");
    DiagonalUpRightTouchInputToGameKeyEventAction_init(this);
    return this;
}

