// Generated Code Do Not Modify
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"










void GameKeyCompleteMotionGestureInputEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameKeyCompleteMotionGestureInputEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyCompleteMotionGestureInputEvent", "CompleteMotionGestureInputEvent");
    java_register_method("GameKeyCompleteMotionGestureInputEvent", "getSourceId", (void*) GameKeyCompleteMotionGestureInputEvent_getSourceId);
    java_register_method("GameKeyCompleteMotionGestureInputEvent", "update", (void*) GameKeyCompleteMotionGestureInputEvent_update);
    java_register_method("GameKeyCompleteMotionGestureInputEvent", "setGameKeyEvent", (void*) GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent);
    java_register_method("GameKeyCompleteMotionGestureInputEvent", "getGameKeyEvent", (void*) GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent);
    java_register_method("GameKeyCompleteMotionGestureInputEvent", "setGameKey", (void*) GameKeyCompleteMotionGestureInputEvent_setGameKey);
    java_register_method("GameKeyCompleteMotionGestureInputEvent", "getGameKey", (void*) GameKeyCompleteMotionGestureInputEvent_getGameKey);
}

static void GameKeyCompleteMotionGestureInputEvent_initFields(GameKeyCompleteMotionGestureInputEvent* this) {
    this->gameKey = (GameKey_staticInit(), GameKey_NULL_GAME_KEY);
    this->gameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
}


void GameKeyCompleteMotionGestureInputEvent_init(GameKeyCompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping) {
    GameKeyCompleteMotionGestureInputEvent_register();
        CompleteMotionGestureInputEvent_init(&this->base, name, motionGestureInput);
        GameKeyCompleteMotionGestureInputEvent_initFields(this);
}

GameKeyCompleteMotionGestureInputEvent* GameKeyCompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping) {
    GameKeyCompleteMotionGestureInputEvent* this = java_object_alloc(sizeof(GameKeyCompleteMotionGestureInputEvent), "GameKeyCompleteMotionGestureInputEvent");
    GameKeyCompleteMotionGestureInputEvent_init(this, name, motionGestureInput, inputToGameKeyMapping);
    return this;
}


int32_t GameKeyCompleteMotionGestureInputEvent_getSourceId(GameKeyCompleteMotionGestureInputEvent* this) {
        return 0;
}


void GameKeyCompleteMotionGestureInputEvent_update(GameKeyCompleteMotionGestureInputEvent* this) {
}


void GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this, GameKeyEvent* gameKeyEvent) {
        this->gameKeyEvent = gameKeyEvent;
}


GameKeyEvent* GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this) {
        return this->gameKeyEvent;
}


void GameKeyCompleteMotionGestureInputEvent_setGameKey(GameKeyCompleteMotionGestureInputEvent* this, GameKey* gameKey) {
        this->gameKey = gameKey;
}


GameKey* GameKeyCompleteMotionGestureInputEvent_getGameKey(GameKeyCompleteMotionGestureInputEvent* this) {
        return this->gameKey;
}

