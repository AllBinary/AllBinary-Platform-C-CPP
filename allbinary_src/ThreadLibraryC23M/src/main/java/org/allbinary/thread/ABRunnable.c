// Generated Code Do Not Modify
#include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/RunnableInterface.h"








void ABRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABRunnable", nullptr);
    java_register_method("ABRunnable", "setThread", (void*) ABRunnable_setThread);
    java_register_method("ABRunnable", "isRunning", (void*) ABRunnable_isRunning);
    java_register_method("ABRunnable", "setRunning", (void*) ABRunnable_setRunning);
    java_register_method("ABRunnable", "run", (void*) ABRunnable_run);
    java_register_method("ABRunnable", "getType", (void*) ABRunnable_getType);
}

static void ABRunnable_initFields(ABRunnable* this) {
    this->running = false;
}

void ABRunnable_init(ABRunnable* this) {
    ABRunnable_register();
    ABRunnable_initFields(this);
}

ABRunnable* ABRunnable_new(void) {
    ABRunnable* this = java_object_alloc(sizeof(ABRunnable), "ABRunnable");
    ABRunnable_init(this);
    return this;
}


void ABRunnable_setThread(ABRunnable* this, Thread* thread) {
}


// synchronized
bool ABRunnable_isRunning(ABRunnable* this) {
        return this->running;
}


// synchronized
void ABRunnable_setRunning(ABRunnable* this, bool running) {
        this->running = running;
}


void ABRunnable_run(ABRunnable* this) {
}


int32_t ABRunnable_getType(ABRunnable* this) {
        return -1;
}

