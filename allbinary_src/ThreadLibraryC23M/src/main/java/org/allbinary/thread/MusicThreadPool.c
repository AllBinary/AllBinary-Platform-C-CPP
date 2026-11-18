// Generated Code Do Not Modify
#include "org/allbinary/thread/MusicThreadPool.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/thread/ThreadPool.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static ThreadPool* MusicThreadPool_THREAD_POOL;






void MusicThreadPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MusicThreadPool_THREAD_POOL = ThreadPool_new("Music", 2, (ThreadPool_staticInit(), ThreadPool_NORMAL_PRIORITY));
}

void MusicThreadPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MusicThreadPool", "ThreadPool");
    java_register_method("MusicThreadPool", "runTask", (void*) MusicThreadPool_runTask);
    java_register_method("MusicThreadPool", "startTask", (void*) MusicThreadPool_startTask);
    java_register_method("MusicThreadPool", "completedTask", (void*) MusicThreadPool_completedTask);
}


ThreadPool* MusicThreadPool_getInstance(void) {
        return (MusicThreadPool_staticInit(), MusicThreadPool_THREAD_POOL);
}


void MusicThreadPool_init(MusicThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
    MusicThreadPool_register();
        ThreadPool_init(&this->base, poolName, numThreads, priority);
}

MusicThreadPool* MusicThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    MusicThreadPool* this = java_object_alloc(sizeof(MusicThreadPool), "MusicThreadPool");
    MusicThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


void MusicThreadPool_runTask(MusicThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_new(), StringUtil_toString(StringUtil_getInstance(), task)), java_current_time_millis())), this, this->base.threadPoolStrings->ADD_TASK);
        ThreadPool_runTask((&this->base), task);
}


void MusicThreadPool_startTask(MusicThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.threadPoolStrings->START_TASK), StringUtil_toString(StringUtil_getInstance(), task)), java_current_time_millis())), this, this->base.commonStrings->RUN);
}


void MusicThreadPool_completedTask(MusicThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.threadPoolStrings->COMPLETE_TASK), StringUtil_toString(StringUtil_getInstance(), task)), java_current_time_millis())), this, this->base.commonStrings->RUN);
}

