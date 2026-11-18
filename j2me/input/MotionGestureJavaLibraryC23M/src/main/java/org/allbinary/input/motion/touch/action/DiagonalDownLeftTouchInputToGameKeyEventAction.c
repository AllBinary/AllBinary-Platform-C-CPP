// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h"
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


static void* DiagonalDownLeftTouchInputToGameKeyEventAction_instance;



void DiagonalDownLeftTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DiagonalDownLeftTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void DiagonalDownLeftTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiagonalDownLeftTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* DiagonalDownLeftTouchInputToGameKeyEventAction_getInstance(void) {
        if ((DiagonalDownLeftTouchInputToGameKeyEventAction_staticInit(), DiagonalDownLeftTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalDownLeftTouchInputToGameKeyEventAction_instance = DiagonalDownLeftTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (DiagonalDownLeftTouchInputToGameKeyEventAction_staticInit(), DiagonalDownLeftTouchInputToGameKeyEventAction_instance));
}


void DiagonalDownLeftTouchInputToGameKeyEventAction_init(DiagonalDownLeftTouchInputToGameKeyEventAction* this) {
    DiagonalDownLeftTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Down Left Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_DOWN_LEFT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

DiagonalDownLeftTouchInputToGameKeyEventAction* DiagonalDownLeftTouchInputToGameKeyEventAction_new(void) {
    DiagonalDownLeftTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(DiagonalDownLeftTouchInputToGameKeyEventAction), "DiagonalDownLeftTouchInputToGameKeyEventAction");
    DiagonalDownLeftTouchInputToGameKeyEventAction_init(this);
    return this;
}

