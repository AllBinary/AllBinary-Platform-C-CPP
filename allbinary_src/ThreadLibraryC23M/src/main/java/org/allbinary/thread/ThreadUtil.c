// Generated Code Do Not Modify
#include "org/allbinary/thread/ThreadUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"


static ThreadUtil* ThreadUtil_instance;




void ThreadUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThreadUtil_instance = ThreadUtil_new();
}

void ThreadUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThreadUtil", nullptr);
    java_register_method("ThreadUtil", "isRunning", (void*) ThreadUtil_isRunning);
    java_register_method("ThreadUtil", "join", (void*) ThreadUtil_join);
}

static void ThreadUtil_initFields(ThreadUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->JOIN = "join";
}

void ThreadUtil_init(ThreadUtil* this) {
    ThreadUtil_register();
    ThreadUtil_initFields(this);
}

ThreadUtil* ThreadUtil_new(void) {
    ThreadUtil* this = java_object_alloc(sizeof(ThreadUtil), "ThreadUtil");
    ThreadUtil_init(this);
    return this;
}


ThreadUtil* ThreadUtil_getInstance(void) {
        return (ThreadUtil_staticInit(), ThreadUtil_instance);
}


bool ThreadUtil_isRunning(ThreadUtil* this, Thread* thread) {
        if (thread != nullptr && Thread_isAlive(thread)) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void ThreadUtil_join(ThreadUtil* this, Thread* thread) {
        if (ThreadUtil_isRunning(ThreadUtil_getInstance(), thread)) {
            LogUtil_putF(this->logUtil, "Waiting for Thread To Join/End", this, this->JOIN);
            Thread_join(thread);
        }
}

