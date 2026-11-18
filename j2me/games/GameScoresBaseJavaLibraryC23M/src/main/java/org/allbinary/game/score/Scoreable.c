// Generated Code Do Not Modify
#include "org/allbinary/game/score/Scoreable.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif


int32_t Scoreable_ID;






void Scoreable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Scoreable_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 3);
}

void Scoreable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Scoreable", nullptr);
    java_register_method("Scoreable", "addPoints", (void*) Scoreable_addPoints);
    java_register_method("Scoreable", "removePoints", (void*) Scoreable_removePoints);
    java_register_method("Scoreable", "setPoints", (void*) Scoreable_setPoints);
    java_register_method("Scoreable", "getPoints", (void*) Scoreable_getPoints);
}

static void Scoreable_initFields(Scoreable* this) {
    
}


void Scoreable_init(Scoreable* this, int32_t points) {
    Scoreable_register();
    Scoreable_initFields(this);
        this->points = points;
}

Scoreable* Scoreable_new(int32_t points) {
    Scoreable* this = java_object_alloc(sizeof(Scoreable), "Scoreable");
    Scoreable_init(this, points);
    return this;
}


void Scoreable_addPoints(Scoreable* this, int32_t points) {
        this->points += points;
}


void Scoreable_removePoints(Scoreable* this, int32_t points) {
        this->points -= points;
}


void Scoreable_setPoints(Scoreable* this, int32_t points) {
        this->points = points;
}


int32_t Scoreable_getPoints(Scoreable* this) {
        return this->points;
}

