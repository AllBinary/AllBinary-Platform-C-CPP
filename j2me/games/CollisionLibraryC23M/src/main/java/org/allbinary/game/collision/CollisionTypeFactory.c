// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/collision/CollisionType.h"


static CollisionTypeFactory* CollisionTypeFactory_SINGLETON;


void CollisionTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CollisionTypeFactory_SINGLETON = CollisionTypeFactory_new();
}

void CollisionTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollisionTypeFactory", nullptr);
}

static void CollisionTypeFactory_initFields(CollisionTypeFactory* this) {
    this->NONE = CollisionType_new("None");
    this->DAMAGE = CollisionType_new("Damage");
    this->PICKUP = CollisionType_new("Pickup");
    this->COLLISION = CollisionType_new("Collision");
}

void CollisionTypeFactory_init(CollisionTypeFactory* this) {
    CollisionTypeFactory_register();
    CollisionTypeFactory_initFields(this);
}

CollisionTypeFactory* CollisionTypeFactory_new(void) {
    CollisionTypeFactory* this = java_object_alloc(sizeof(CollisionTypeFactory), "CollisionTypeFactory");
    CollisionTypeFactory_init(this);
    return this;
}


CollisionTypeFactory* CollisionTypeFactory_getInstance(void) {
        return (CollisionTypeFactory_staticInit(), CollisionTypeFactory_SINGLETON);
}

