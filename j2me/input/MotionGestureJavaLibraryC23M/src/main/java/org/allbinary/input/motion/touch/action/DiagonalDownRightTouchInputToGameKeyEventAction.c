// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h"
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


static void* DiagonalDownRightTouchInputToGameKeyEventAction_instance;



void DiagonalDownRightTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DiagonalDownRightTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void DiagonalDownRightTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiagonalDownRightTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
}


GameKeyCompleteMotionGestureInputEvent* DiagonalDownRightTouchInputToGameKeyEventAction_getInstance(void) {
        if ((DiagonalDownRightTouchInputToGameKeyEventAction_staticInit(), DiagonalDownRightTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalDownRightTouchInputToGameKeyEventAction_instance = DiagonalDownRightTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (DiagonalDownRightTouchInputToGameKeyEventAction_staticInit(), DiagonalDownRightTouchInputToGameKeyEventAction_instance));
}


void DiagonalDownRightTouchInputToGameKeyEventAction_init(DiagonalDownRightTouchInputToGameKeyEventAction* this) {
    DiagonalDownRightTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Down Right Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_DOWN_RIGHT, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
}

DiagonalDownRightTouchInputToGameKeyEventAction* DiagonalDownRightTouchInputToGameKeyEventAction_new(void) {
    DiagonalDownRightTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(DiagonalDownRightTouchInputToGameKeyEventAction), "DiagonalDownRightTouchInputToGameKeyEventAction");
    DiagonalDownRightTouchInputToGameKeyEventAction_init(this);
    return this;
}

