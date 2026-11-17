// Generated Code Do Not Modify
#include "org/allbinary/time/GameTickTimeDelayHelper.h"







void GameTickTimeDelayHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameTickTimeDelayHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameTickTimeDelayHelper", nullptr);
    java_register_method("GameTickTimeDelayHelper", "setStartTime", (void*) GameTickTimeDelayHelper_setStartTime);
    java_register_method("GameTickTimeDelayHelper", "loop", (void*) GameTickTimeDelayHelper_loop);
    java_register_method("GameTickTimeDelayHelper", "getTimeFromStart", (void*) GameTickTimeDelayHelper_getTimeFromStart);
}

static void GameTickTimeDelayHelper_initFields(GameTickTimeDelayHelper* this) {
    this->timeDelta = 0;
    
    
}


void GameTickTimeDelayHelper_init(GameTickTimeDelayHelper* this, int64_t startTime) {
    GameTickTimeDelayHelper_register();
    GameTickTimeDelayHelper_initFields(this);
        this->startTime = startTime;
        this->lastStartTime = 0LL;
}

GameTickTimeDelayHelper* GameTickTimeDelayHelper_new(int64_t startTime) {
    GameTickTimeDelayHelper* this = java_object_alloc(sizeof(GameTickTimeDelayHelper), "GameTickTimeDelayHelper");
    GameTickTimeDelayHelper_init(this, startTime);
    return this;
}


int64_t GameTickTimeDelayHelper_setStartTime(GameTickTimeDelayHelper* this) {
        this->startTime = java_current_time_millis();
        return this->startTime;
}


void GameTickTimeDelayHelper_loop(GameTickTimeDelayHelper* this) {
        if (this->lastStartTime == (Long_staticInit(), Long_MIN_VALUE)) {
            this->timeDelta = 0LL;
        } else {
            this->timeDelta = java_current_time_millis() - this->lastStartTime;
        }
}


int64_t GameTickTimeDelayHelper_getTimeFromStart(GameTickTimeDelayHelper* this) {
        return this->startTime - this->lastStartTime;
}

