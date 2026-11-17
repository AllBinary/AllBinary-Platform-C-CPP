// Generated Code Do Not Modify
#include "org/allbinary/thread/NullPriorityRunnable.h"
#include "org/allbinary/thread/PriorityRunnable.h"







void NullPriorityRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullPriorityRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullPriorityRunnable", nullptr);
    java_register_method("NullPriorityRunnable", "getPriority", (void*) NullPriorityRunnable_getPriority);
    java_register_method("NullPriorityRunnable", "isDone", (void*) NullPriorityRunnable_isDone);
    java_register_method("NullPriorityRunnable", "reset", (void*) NullPriorityRunnable_reset);
    java_register_method("NullPriorityRunnable", "run", (void*) NullPriorityRunnable_run);
}

void NullPriorityRunnable_init(NullPriorityRunnable* this) {
    NullPriorityRunnable_register();
}

NullPriorityRunnable* NullPriorityRunnable_new(void) {
    NullPriorityRunnable* this = java_object_alloc(sizeof(NullPriorityRunnable), "NullPriorityRunnable");
    NullPriorityRunnable_init(this);
    return this;
}


int32_t NullPriorityRunnable_getPriority(NullPriorityRunnable* this) {
        return 0;
}


bool NullPriorityRunnable_isDone(NullPriorityRunnable* this) {
        return true;
}


void NullPriorityRunnable_reset(NullPriorityRunnable* this) {
}


void NullPriorityRunnable_run(NullPriorityRunnable* this) {
}

