// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif






void GameRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameRunnable", nullptr);
    java_register_method("GameRunnable", "run", (void*) GameRunnable_run);
    java_register_method("GameRunnable", "processLoopSleep", (void*) GameRunnable_processLoopSleep);
}

static void GameRunnable_initFields(GameRunnable* this) {
    this->WAIT = 240;
    this->FAST = 60;
    this->waitInMillis = ((int64_t) this->WAIT);
}


void GameRunnable_init(GameRunnable* this) {
    GameRunnable_register();
    GameRunnable_initFields(this);
}

GameRunnable* GameRunnable_new(void) {
    GameRunnable* this = java_object_alloc(sizeof(GameRunnable), "GameRunnable");
    GameRunnable_init(this);
    return this;
}


void GameRunnable_run(GameRunnable* this) {
        DisplayInfoSingleton_process(DisplayInfoSingleton_getInstance());
}


// throws Exception
void GameRunnable_processLoopSleep(GameRunnable* this) {
        java_sleep(this->waitInMillis);
}

