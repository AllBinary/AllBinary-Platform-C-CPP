// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif


static void* GameKeyEventFactory_instance;






void GameKeyEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyEventFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GameKeyEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyEventFactory", nullptr);
    java_register_method("GameKeyEventFactory", "init", (void*) GameKeyEventFactory_initMethod);
    java_register_method("GameKeyEventFactory", "getInstanceForKey", (void*) GameKeyEventFactory_getInstanceForKey);
    java_register_method("GameKeyEventFactory", "getInstanceForInput", (void*) GameKeyEventFactory_getInstanceForInput);
}

static void GameKeyEventFactory_initFields(GameKeyEventFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->TOUCH_BUTTON_SOURCE_ID = 2;
    this->MOTION_GESTURE_SOURCE_ID = 3;
    this->MAX_SOURCES = 4;
    this->ARRAY = ((GameKeyEvent***) java_array_new2(sizeof(GameKeyEvent*), this->MAX_SOURCES, InputFactory_getInstance()->MAX));
}


GameKeyEventFactory* GameKeyEventFactory_getInstance(void) {
        if ((GameKeyEventFactory_staticInit(), GameKeyEventFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GameKeyEventFactory_instance = GameKeyEventFactory_new();
        }
        return ((GameKeyEventFactory*) (GameKeyEventFactory_staticInit(), GameKeyEventFactory_instance));
}


void GameKeyEventFactory_init(GameKeyEventFactory* this) {
    GameKeyEventFactory_register();
    GameKeyEventFactory_initFields(this);
}

GameKeyEventFactory* GameKeyEventFactory_new(void) {
    GameKeyEventFactory* this = java_object_alloc(sizeof(GameKeyEventFactory), "GameKeyEventFactory");
    GameKeyEventFactory_init(this);
    return this;
}


void GameKeyEventFactory_initMethod(GameKeyEventFactory* this) {
        NullUtil* nullUtil = NullUtil_getInstance();
        int32_t size = InputFactory_getInstance()->MAX;
        for (int32_t index = this->MAX_SOURCES; --index >= 0; ) {
            for (int32_t index2 = size; --index2 >= 0; ) {
                this->ARRAY[index][index2] = GameKeyEvent_createEvent(nullUtil->NULL_OBJECT, index, index2);
            }
        }
}


// throws Exception
GameKeyEvent* GameKeyEventFactory_getInstanceForKey(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, int32_t key) {
        GameKeyEvent* gameKeyEvent = this->ARRAY[GameKeyEventSourceInterface_getSourceId(anyType)][key];
        return gameKeyEvent;
}


// throws Exception
GameKeyEvent* GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, Input* input) {
        GameKeyEvent* gameKeyEvent = this->ARRAY[GameKeyEventSourceInterface_getSourceId(anyType)][Input_getId(input)];
        return gameKeyEvent;
}

