// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollisionType.h"





void CollisionType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollisionType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollisionType", nullptr);
    java_register_method("CollisionType", "toString", (void*) CollisionType_toString);
}

static void CollisionType_initFields(CollisionType* this) {
    
}


void CollisionType_init(CollisionType* this, const char* name) {
    CollisionType_register();
    CollisionType_initFields(this);
        this->name = name;
}

CollisionType* CollisionType_new(const char* name) {
    CollisionType* this = java_object_alloc(sizeof(CollisionType), "CollisionType");
    CollisionType_init(this, name);
    return this;
}


const char* CollisionType_toString(CollisionType* this) {
        return this->name;
}

