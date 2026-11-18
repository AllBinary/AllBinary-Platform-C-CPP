// Generated Code Do Not Modify
#include "org/allbinary/thread/SecondaryThreadPool.h"
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


static ThreadPool* SecondaryThreadPool_instance;






void SecondaryThreadPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SecondaryThreadPool_instance = SecondaryThreadPool_new("Secondary", 1, (ThreadPool_staticInit(), ThreadPool_NORMAL_PRIORITY));
}

void SecondaryThreadPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SecondaryThreadPool", "ThreadPool");
    java_register_method("SecondaryThreadPool", "runTask", (void*) SecondaryThreadPool_runTask);
    java_register_method("SecondaryThreadPool", "startTask", (void*) SecondaryThreadPool_startTask);
    java_register_method("SecondaryThreadPool", "completedTask", (void*) SecondaryThreadPool_completedTask);
}


ThreadPool* SecondaryThreadPool_getInstance(void) {
        return (SecondaryThreadPool_staticInit(), SecondaryThreadPool_instance);
}


void SecondaryThreadPool_init(SecondaryThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
    SecondaryThreadPool_register();
        ThreadPool_init(&this->base, poolName, numThreads, priority);
}

SecondaryThreadPool* SecondaryThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    SecondaryThreadPool* this = java_object_alloc(sizeof(SecondaryThreadPool), "SecondaryThreadPool");
    SecondaryThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


void SecondaryThreadPool_runTask(SecondaryThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_new(), StringUtil_toString(StringUtil_getInstance(), task)), java_current_time_millis())), this, this->base.threadPoolStrings->ADD_TASK);
        ThreadPool_runTask((&this->base), task);
}


void SecondaryThreadPool_startTask(SecondaryThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.threadPoolStrings->START_TASK), StringUtil_toString(StringUtil_getInstance(), task)), java_current_time_millis())), this, this->base.commonStrings->RUN);
}


void SecondaryThreadPool_completedTask(SecondaryThreadPool* this, Runnable* task) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.threadPoolStrings->COMPLETE_TASK), StringUtil_toString(StringUtil_getInstance(), task)), java_current_time_millis())), this, this->base.commonStrings->RUN);
}

