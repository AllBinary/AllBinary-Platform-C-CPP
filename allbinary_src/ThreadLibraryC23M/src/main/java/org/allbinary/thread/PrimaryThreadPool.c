// Generated Code Do Not Modify
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/thread/ThreadPool.h"


static ThreadPool* PrimaryThreadPool_THREAD_POOL;






void PrimaryThreadPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PrimaryThreadPool_THREAD_POOL = ThreadPool_new("Primary", 1, (ThreadPool_staticInit(), ThreadPool_NORMAL_PRIORITY));
}

void PrimaryThreadPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimaryThreadPool", "ThreadPool");
    java_register_method("PrimaryThreadPool", "runTask", (void*) PrimaryThreadPool_runTask);
    java_register_method("PrimaryThreadPool", "startTask", (void*) PrimaryThreadPool_startTask);
    java_register_method("PrimaryThreadPool", "completedTask", (void*) PrimaryThreadPool_completedTask);
}


ThreadPool* PrimaryThreadPool_getInstance(void) {
        return (PrimaryThreadPool_staticInit(), PrimaryThreadPool_THREAD_POOL);
}


void PrimaryThreadPool_init(PrimaryThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
    PrimaryThreadPool_register();
        ThreadPool_init(&this->base, poolName, numThreads, priority);
}

PrimaryThreadPool* PrimaryThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    PrimaryThreadPool* this = java_object_alloc(sizeof(PrimaryThreadPool), "PrimaryThreadPool");
    PrimaryThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


void PrimaryThreadPool_runTask(PrimaryThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_new(), StringUtil_toString(StringUtil_getInstance(), task)), ((int64_t) java_current_time_millis()))), this, this->base.threadPoolStrings->ADD_TASK);
        ThreadPool_runTask((&this->base), task);
}


void PrimaryThreadPool_startTask(PrimaryThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.threadPoolStrings->START_TASK), StringUtil_toString(StringUtil_getInstance(), task))), this, this->base.commonStrings->RUN);
}


void PrimaryThreadPool_completedTask(PrimaryThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.threadPoolStrings->COMPLETE_TASK), StringUtil_toString(StringUtil_getInstance(), task))), this, this->base.commonStrings->RUN);
}

