// Generated Code Do Not Modify
#include "org/allbinary/thread/ThreadPoolStrings.h"


static ThreadPoolStrings* ThreadPoolStrings_instance;


void ThreadPoolStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThreadPoolStrings_instance = ThreadPoolStrings_new();
}

void ThreadPoolStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThreadPoolStrings", nullptr);
}

static void ThreadPoolStrings_initFields(ThreadPoolStrings* this) {
    this->ADD_TASK = "addTask";
    this->START_TASK = "Started Task: ";
    this->COMPLETE_TASK = "Completed Task: ";
}

void ThreadPoolStrings_init(ThreadPoolStrings* this) {
    ThreadPoolStrings_register();
    ThreadPoolStrings_initFields(this);
}

ThreadPoolStrings* ThreadPoolStrings_new(void) {
    ThreadPoolStrings* this = java_object_alloc(sizeof(ThreadPoolStrings), "ThreadPoolStrings");
    ThreadPoolStrings_init(this);
    return this;
}


ThreadPoolStrings* ThreadPoolStrings_getInstance(void) {
        return (ThreadPoolStrings_staticInit(), ThreadPoolStrings_instance);
}

