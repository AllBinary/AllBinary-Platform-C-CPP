// Generated Code Do Not Modify
#include "org/allbinary/util/ABPriorityQueue.h"



void ABPriorityQueue_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABPriorityQueue_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABPriorityQueue", "PriorityQueue");
}

void ABPriorityQueue_init(ABPriorityQueue* this) {
    ABPriorityQueue_register();
    PriorityQueue_init(&this->base);
}

ABPriorityQueue* ABPriorityQueue_new(void) {
    ABPriorityQueue* this = java_object_alloc(sizeof(ABPriorityQueue), "ABPriorityQueue");
    ABPriorityQueue_init(this);
    return this;
}

