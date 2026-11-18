// Generated Code Do Not Modify
#include "org/allbinary/game/ag/life/Life.h"
#include "org/allbinary/game/ag/life/LifeInterface.h"


Life* Life_NO_LIFE;









static bool Life_reachedLimit(Life* this);




void Life_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Life_NO_LIFE = Life_createLife();
}

void Life_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Life", nullptr);
    java_register_method("Life", "get", (void*) Life_get);
    java_register_method("Life", "set", (void*) Life_set);
    java_register_method("Life", "reset", (void*) Life_reset);
    java_register_method("Life", "add", (void*) Life_add);
    java_register_method("Life", "isAlive", (void*) Life_isAlive);
    java_register_method("Life", "getMaxlives", (void*) Life_getMaxlives);
    java_register_method("Life", "reachedLimit", (void*) Life_reachedLimit);
    java_register_method("Life", "deaths", (void*) Life_deaths);
    java_register_method("Life", "getStartLives", (void*) Life_getStartLives);
    java_register_method("Life", "setStartLives", (void*) Life_setStartLives);
}

static void Life_initFields(Life* this) {
    
    
    
}


Life* Life_createLife(void) {
        JAVA_TRY {
            return Life_new(((int16_t) 0), ((int16_t) 0));
        } JAVA_CATCH(Exception, e) {
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


void Life_init(Life* this, int16_t lives, int16_t maxlives) {
    Life_register();
    Life_initFields(this);
        this->maxlives = maxlives;
        if (lives > this->maxlives) {
            java_throw(java_exception_new("Exception", "To Many Lives"));
        }
        this->lives = lives;
        this->startLives = lives;
}

Life* Life_new(int16_t lives, int16_t maxlives) {
    Life* this = java_object_alloc(sizeof(Life), "Life");
    Life_init(this, lives, maxlives);
    return this;
}


int16_t Life_get(Life* this) {
        return this->lives;
}


void Life_set(Life* this, int16_t lives) {
        this->lives = lives;
}


void Life_reset(Life* this) {
        this->lives = this->startLives;
}


void Life_add(Life* this, int16_t lives) {
        if (!Life_reachedLimit(this)) {
            if (this->lives + lives <= ((int32_t) Life_getMaxlives(this))) {
                this->lives = ((int16_t) (this->lives + lives));
            } else {
                this->lives = Life_getMaxlives(this);
            }
        }
}


bool Life_isAlive(Life* this) {
        if (((int32_t) this->lives) <= 0) {
            return false;
        } else {
            return true;
        }
}


int16_t Life_getMaxlives(Life* this) {
        return this->maxlives;
}


static bool Life_reachedLimit(Life* this) {
        if (this->lives > this->maxlives || ((int32_t) this->lives) < 0) {
            return true;
        } else {
            return false;
        }
}


void Life_deaths(Life* this, int16_t lives) {
        if (!Life_reachedLimit(this)) {
            if (this->lives - lives >= 0) {
                this->lives = ((int16_t) (this->lives - lives));
            } else {
                this->lives = 0;
            }
        }
}


int16_t Life_getStartLives(Life* this) {
        return this->startLives;
}


void Life_setStartLives(Life* this, int16_t startLives) {
        this->startLives = startLives;
}

