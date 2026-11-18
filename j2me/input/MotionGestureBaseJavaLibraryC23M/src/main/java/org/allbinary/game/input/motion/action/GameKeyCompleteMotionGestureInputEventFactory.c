// Generated Code Do Not Modify
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEventFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


static GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_SINGLETON;




void GameKeyCompleteMotionGestureInputEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyCompleteMotionGestureInputEventFactory_SINGLETON = GameKeyCompleteMotionGestureInputEventFactory_new();
}

void GameKeyCompleteMotionGestureInputEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyCompleteMotionGestureInputEventFactory", nullptr);
    java_register_method("GameKeyCompleteMotionGestureInputEventFactory", "add", (void*) GameKeyCompleteMotionGestureInputEventFactory_add);
    java_register_method("GameKeyCompleteMotionGestureInputEventFactory", "updateAll", (void*) GameKeyCompleteMotionGestureInputEventFactory_updateAll);
}

static void GameKeyCompleteMotionGestureInputEventFactory_initFields(GameKeyCompleteMotionGestureInputEventFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->eventList = BasicArrayListD_new();
}

void GameKeyCompleteMotionGestureInputEventFactory_init(GameKeyCompleteMotionGestureInputEventFactory* this) {
    GameKeyCompleteMotionGestureInputEventFactory_register();
    GameKeyCompleteMotionGestureInputEventFactory_initFields(this);
}

GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_new(void) {
    GameKeyCompleteMotionGestureInputEventFactory* this = java_object_alloc(sizeof(GameKeyCompleteMotionGestureInputEventFactory), "GameKeyCompleteMotionGestureInputEventFactory");
    GameKeyCompleteMotionGestureInputEventFactory_init(this);
    return this;
}


GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_getInstance(void) {
        return (GameKeyCompleteMotionGestureInputEventFactory_staticInit(), GameKeyCompleteMotionGestureInputEventFactory_SINGLETON);
}


void GameKeyCompleteMotionGestureInputEventFactory_add(GameKeyCompleteMotionGestureInputEventFactory* this, GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent) {
        BasicArrayList_add(this->eventList, gameKeyCompleteMotionGestureInputEvent);
}


void GameKeyCompleteMotionGestureInputEventFactory_updateAll(GameKeyCompleteMotionGestureInputEventFactory* this) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), BasicArrayList_size(this->eventList))), this, "updateAll");
        for (int32_t index = BasicArrayList_size(this->eventList) - 1; index >= 0; index--) {
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) this->eventList->objectArray[index]);
            GameKeyCompleteMotionGestureInputEvent_update(gameKeyCompleteMotionGestureInputEvent);
        }
}

