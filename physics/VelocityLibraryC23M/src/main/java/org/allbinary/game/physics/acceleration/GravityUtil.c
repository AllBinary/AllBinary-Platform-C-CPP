// Generated Code Do Not Modify
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#if __has_include("org/allbinary/game/physics/acceleration/BasicDecimal.h")
#include "org/allbinary/game/physics/acceleration/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif


static GravityUtil* GravityUtil_instance;



void GravityUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GravityUtil_instance = GravityUtil_new();
}

void GravityUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GravityUtil", nullptr);
    java_register_method("GravityUtil", "process", (void*) GravityUtil_process);
}

static void GravityUtil_initFields(GravityUtil* this) {
    this->GAME_GRAVITY_VELOCITY = 1800;
    this->MAX_GAME_VELOCITY = 18000;
}

void GravityUtil_init(GravityUtil* this) {
    GravityUtil_register();
    GravityUtil_initFields(this);
}

GravityUtil* GravityUtil_new(void) {
    GravityUtil* this = java_object_alloc(sizeof(GravityUtil), "GravityUtil");
    GravityUtil_init(this);
    return this;
}


GravityUtil* GravityUtil_getInstance(void) {
        return (GravityUtil_staticInit(), GravityUtil_instance);
}


void GravityUtil_process(GravityUtil* this, BasicVelocityProperties* velocityProperties, int32_t customGravity) {
        BasicDecimal_addint(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), customGravity);
}

