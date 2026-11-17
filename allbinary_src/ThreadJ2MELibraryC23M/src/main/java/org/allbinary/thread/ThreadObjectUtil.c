// Generated Code Do Not Modify
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/thread/NullPriorityRunnable.h"
#include "org/allbinary/thread/PriorityRunnable.h"


static ThreadObjectUtil* ThreadObjectUtil_instance;






void ThreadObjectUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThreadObjectUtil_instance = ThreadObjectUtil_new();
}

void ThreadObjectUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThreadObjectUtil", nullptr);
    java_register_method("ThreadObjectUtil", "notifyObject", (void*) ThreadObjectUtil_notifyObject);
    java_register_method("ThreadObjectUtil", "waitObject", (void*) ThreadObjectUtil_waitObject);
    java_register_method("ThreadObjectUtil", "waitObjectFor", (void*) ThreadObjectUtil_waitObjectFor);
    java_register_method("ThreadObjectUtil", "processThread", (void*) ThreadObjectUtil_processThread);
}

static void ThreadObjectUtil_initFields(ThreadObjectUtil* this) {
    this->NULL_PRIORITY_RUNNABLE = NullPriorityRunnable_new();
}

void ThreadObjectUtil_init(ThreadObjectUtil* this) {
    ThreadObjectUtil_register();
    ThreadObjectUtil_initFields(this);
}

ThreadObjectUtil* ThreadObjectUtil_new(void) {
    ThreadObjectUtil* this = java_object_alloc(sizeof(ThreadObjectUtil), "ThreadObjectUtil");
    ThreadObjectUtil_init(this);
    return this;
}


ThreadObjectUtil* ThreadObjectUtil_getInstance(void) {
        return (ThreadObjectUtil_staticInit(), ThreadObjectUtil_instance);
}


void ThreadObjectUtil_notifyObject(ThreadObjectUtil* this, void* anyType) {
        Any_notify(anyType);
}


// throws Exception
void ThreadObjectUtil_waitObject(ThreadObjectUtil* this, void* anyType) {
        Any_wait(anyType);
}


// throws Exception
void ThreadObjectUtil_waitObjectFor(ThreadObjectUtil* this, void* anyType, int64_t delay) {
        TsUtil_waitFor(TsUtil_getInstance(), anyType, delay);
}


void ThreadObjectUtil_processThread(ThreadObjectUtil* this, Runnable* runnable) {
        Thread* thread = Thread_new(runnable);
        Thread_start(thread);
}

