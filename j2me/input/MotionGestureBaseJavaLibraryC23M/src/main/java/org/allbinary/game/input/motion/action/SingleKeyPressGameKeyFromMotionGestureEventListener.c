// Generated Code Do Not Modify
#include "org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/game/input/event/PressGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#endif





void SingleKeyPressGameKeyFromMotionGestureEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SingleKeyPressGameKeyFromMotionGestureEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SingleKeyPressGameKeyFromMotionGestureEventListener", "CompleteMotionGestureInputEventListener");
    java_register_method("SingleKeyPressGameKeyFromMotionGestureEventListener", "onEvent", (void*) SingleKeyPressGameKeyFromMotionGestureEventListener_onEvent);
    java_register_method("SingleKeyPressGameKeyFromMotionGestureEventListener", "onCompleteMotionGestureInputEvent", (void*) SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent);
}

static void SingleKeyPressGameKeyFromMotionGestureEventListener_initFields(SingleKeyPressGameKeyFromMotionGestureEventListener* this) {
    this->logUtil = LogUtil_getInstance();
}

void SingleKeyPressGameKeyFromMotionGestureEventListener_init(SingleKeyPressGameKeyFromMotionGestureEventListener* this) {
    SingleKeyPressGameKeyFromMotionGestureEventListener_register();
    CompleteMotionGestureInputEventListener_init(&this->base);
    SingleKeyPressGameKeyFromMotionGestureEventListener_initFields(this);
}

SingleKeyPressGameKeyFromMotionGestureEventListener* SingleKeyPressGameKeyFromMotionGestureEventListener_new(void) {
    SingleKeyPressGameKeyFromMotionGestureEventListener* this = java_object_alloc(sizeof(SingleKeyPressGameKeyFromMotionGestureEventListener), "SingleKeyPressGameKeyFromMotionGestureEventListener");
    SingleKeyPressGameKeyFromMotionGestureEventListener_init(this);
    return this;
}


void SingleKeyPressGameKeyFromMotionGestureEventListener_onEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
        JAVA_TRY {
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) completeMotionGestureInputEvent);
            GameKeyEvent* gameKeyEvent = GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(gameKeyCompleteMotionGestureInputEvent);
            PressGameKeyEventHandler_fireEvent(PressGameKeyEventHandler_getInstance(), gameKeyEvent);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "onCompleteMotionGestureInputEvent", e);
        } JAVA_END_TRY;
}

