// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/BottomLimiter.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"


static BottomLimiter* BottomLimiter_instance;







void BottomLimiter_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BottomLimiter_instance = BottomLimiter_new();
}

void BottomLimiter_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BottomLimiter", nullptr);
    java_register_method("BottomLimiter", "init", (void*) BottomLimiter_initMethod);
    java_register_method("BottomLimiter", "update", (void*) BottomLimiter_update);
    java_register_method("BottomLimiter", "getDeltaY", (void*) BottomLimiter_getDeltaY);
    java_register_method("BottomLimiter", "getBottom", (void*) BottomLimiter_getBottom);
}

static void BottomLimiter_initFields(BottomLimiter* this) {
    this->bottom = 0;
    this->deltaY = 0;
    this->lower = 0;
    this->higher = 0;
}


BottomLimiter* BottomLimiter_getInstance(void) {
        return (BottomLimiter_staticInit(), BottomLimiter_instance);
}


void BottomLimiter_init(BottomLimiter* this) {
    BottomLimiter_register();
    BottomLimiter_initFields(this);
}

BottomLimiter* BottomLimiter_new(void) {
    BottomLimiter* this = java_object_alloc(sizeof(BottomLimiter), "BottomLimiter");
    BottomLimiter_init(this);
    return this;
}


void BottomLimiter_initMethod(BottomLimiter* this, int32_t lower, int32_t higher) {
        this->lower = lower;
        this->higher = higher;
}


void BottomLimiter_update(BottomLimiter* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(GameAdStateFactory_getInstance());
        if (GameAdStateBase_isShowingAt(gameAdState)) {
            this->deltaY = this->higher;
        } else {
            this->deltaY = this->lower;
        }
        this->bottom = DisplayInfoSingleton_getLastHeight(displayInfo) - this->deltaY;
}


int32_t BottomLimiter_getDeltaY(BottomLimiter* this) {
        return this->deltaY;
}


int32_t BottomLimiter_getBottom(BottomLimiter* this) {
        return this->bottom;
}

