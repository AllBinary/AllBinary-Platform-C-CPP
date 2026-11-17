// Generated Code Do Not Modify
#include "org/allbinary/thread/ARunnable.h"




void ARunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ARunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ARunnable", nullptr);
    java_register_method("ARunnable", "run", (void*) ARunnable_run);
}

void ARunnable_init(ARunnable* this) {
    ARunnable_register();
}

ARunnable* ARunnable_new(void) {
    ARunnable* this = java_object_alloc(sizeof(ARunnable), "ARunnable");
    ARunnable_init(this);
    return this;
}


void ARunnable_run(ARunnable* this) {
}

