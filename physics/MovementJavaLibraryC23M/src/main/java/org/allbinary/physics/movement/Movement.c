// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/MovementInterface.h"







void Movement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Movement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Movement", nullptr);
    java_register_method("Movement", "init", (void*) Movement_initMethod);
    java_register_method("Movement", "process", (void*) Movement_process);
    java_register_method("Movement", "stop", (void*) Movement_stop);
}


void Movement_init(Movement* this) {
    Movement_register();
}

Movement* Movement_new(void) {
    Movement* this = java_object_alloc(sizeof(Movement), "Movement");
    Movement_init(this);
    return this;
}


void Movement_initMethod(Movement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
}


// throws Exception
void Movement_process(Movement* this, AllBinaryGameLayer* layer) {
}


void Movement_stop(Movement* this) {
}

