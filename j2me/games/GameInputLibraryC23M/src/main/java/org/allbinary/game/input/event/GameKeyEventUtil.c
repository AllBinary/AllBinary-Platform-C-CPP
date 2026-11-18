// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"





void GameKeyEventUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameKeyEventUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyEventUtil", nullptr);
}


void GameKeyEventUtil_init(GameKeyEventUtil* this) {
    GameKeyEventUtil_register();
}

GameKeyEventUtil* GameKeyEventUtil_new(void) {
    GameKeyEventUtil* this = java_object_alloc(sizeof(GameKeyEventUtil), "GameKeyEventUtil");
    GameKeyEventUtil_init(this);
    return this;
}


int32_t GameKeyEventUtil_getKey(void* anyType) {
        GameKeyEvent* gameKeyEvent = ((GameKeyEvent*) anyType);
        return GameKeyEvent_getKey(gameKeyEvent);
}

