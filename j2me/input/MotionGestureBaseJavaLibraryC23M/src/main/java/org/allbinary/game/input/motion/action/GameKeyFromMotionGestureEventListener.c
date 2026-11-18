// Generated Code Do Not Modify
#include "org/allbinary/game/input/motion/action/GameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif





void GameKeyFromMotionGestureEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameKeyFromMotionGestureEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyFromMotionGestureEventListener", "CompleteMotionGestureInputEventListener");
    java_register_method("GameKeyFromMotionGestureEventListener", "onEvent", (void*) GameKeyFromMotionGestureEventListener_onEvent);
    java_register_method("GameKeyFromMotionGestureEventListener", "onCompleteMotionGestureInputEvent", (void*) GameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent);
}

static void GameKeyFromMotionGestureEventListener_initFields(GameKeyFromMotionGestureEventListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->previousGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
}

void GameKeyFromMotionGestureEventListener_init(GameKeyFromMotionGestureEventListener* this) {
    GameKeyFromMotionGestureEventListener_register();
    CompleteMotionGestureInputEventListener_init(&this->base);
    GameKeyFromMotionGestureEventListener_initFields(this);
}

GameKeyFromMotionGestureEventListener* GameKeyFromMotionGestureEventListener_new(void) {
    GameKeyFromMotionGestureEventListener* this = java_object_alloc(sizeof(GameKeyFromMotionGestureEventListener), "GameKeyFromMotionGestureEventListener");
    GameKeyFromMotionGestureEventListener_init(this);
    return this;
}


void GameKeyFromMotionGestureEventListener_onEvent(GameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void GameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(GameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
        JAVA_TRY {
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) completeMotionGestureInputEvent);
            GameKeyEvent* gameKeyEvent = GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(gameKeyCompleteMotionGestureInputEvent);
            if (gameKeyEvent != this->previousGameKeyEvent) {
                if (this->previousGameKeyEvent != (GameKeyEvent_staticInit(), GameKeyEvent_NONE)) {
                    UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstance(), this->previousGameKeyEvent);
                }
                this->previousGameKeyEvent = gameKeyEvent;
                if (gameKeyEvent != nullptr && gameKeyEvent != (GameKeyEvent_staticInit(), GameKeyEvent_NONE)) {
                    DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandler_getInstance(), gameKeyEvent);
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "onCompleteMotionGestureInputEvent", e);
        } JAVA_END_TRY;
}

