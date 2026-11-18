// Generated Code Do Not Modify
#include "org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
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
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PersistentInputMapping.h")
#include "org/allbinary/game/input/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/event/PersistentInputMapping.h")
#include "org/allbinary/game/input/event/PersistentInputMapping.h"
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
#if __has_include("org/allbinary/string/PersistentInputMapping.h")
#include "org/allbinary/string/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif


static void* ReleaseTouchInputToGameKeyEventAction_instance;




void ReleaseTouchInputToGameKeyEventAction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ReleaseTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void ReleaseTouchInputToGameKeyEventAction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ReleaseTouchInputToGameKeyEventAction", "GameKeyCompleteMotionGestureInputEvent");
    java_register_method("ReleaseTouchInputToGameKeyEventAction", "update", (void*) ReleaseTouchInputToGameKeyEventAction_update);
}

static void ReleaseTouchInputToGameKeyEventAction_initFields(ReleaseTouchInputToGameKeyEventAction* this) {
    this->NONE = GameKeyFactory_getInstance()->NONE;
}


GameKeyCompleteMotionGestureInputEvent* ReleaseTouchInputToGameKeyEventAction_getInstance(void) {
        if ((ReleaseTouchInputToGameKeyEventAction_staticInit(), ReleaseTouchInputToGameKeyEventAction_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            ReleaseTouchInputToGameKeyEventAction_instance = ReleaseTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) (ReleaseTouchInputToGameKeyEventAction_staticInit(), ReleaseTouchInputToGameKeyEventAction_instance));
}


void ReleaseTouchInputToGameKeyEventAction_init(ReleaseTouchInputToGameKeyEventAction* this) {
    ReleaseTouchInputToGameKeyEventAction_register();
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Release Action", TouchMotionGestureFactory_getInstance()->RELEASED, PersistentInputMapping_getInputMapping(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance())));
        ReleaseTouchInputToGameKeyEventAction_initFields(this);
        JAVA_TRY {
            GameKeyCompleteMotionGestureInputEvent_setGameKey(this, this->NONE);
            GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent(this, GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->NONE));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->base.base.logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

ReleaseTouchInputToGameKeyEventAction* ReleaseTouchInputToGameKeyEventAction_new(void) {
    ReleaseTouchInputToGameKeyEventAction* this = java_object_alloc(sizeof(ReleaseTouchInputToGameKeyEventAction), "ReleaseTouchInputToGameKeyEventAction");
    ReleaseTouchInputToGameKeyEventAction_init(this);
    return this;
}


void ReleaseTouchInputToGameKeyEventAction_update(ReleaseTouchInputToGameKeyEventAction* this) {
}

