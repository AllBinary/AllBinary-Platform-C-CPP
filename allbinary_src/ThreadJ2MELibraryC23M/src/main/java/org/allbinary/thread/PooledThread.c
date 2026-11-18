// Generated Code Do Not Modify
#include "org/allbinary/thread/PooledThread.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
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





void PooledThread_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PooledThread_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PooledThread", "Thread");
    java_register_method("PooledThread", "run", (void*) PooledThread_run);
}

static void PooledThread_initFields(PooledThread* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->threadObjectUtil = ThreadObjectUtil_getInstance();
    
    this->INTERRUPT_EXCEPTION = "Exit InterruptedException";
}


void PooledThread_init(PooledThread* this, ThreadPool* threadPool) {
    PooledThread_register();
        Thread_init(&this->base, ThreadPool_createName(threadPool));
        PooledThread_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        this->threadPool = threadPool;
}

PooledThread* PooledThread_new(ThreadPool* threadPool) {
    PooledThread* this = java_object_alloc(sizeof(PooledThread), "PooledThread");
    PooledThread_init(this, threadPool);
    return this;
}


void PooledThread_run(PooledThread* this) {
        ThreadPool_threadStarted(this->threadPool);
        while (true) {
            Runnable* task2 = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
            JAVA_TRY {
                task2 = ThreadPool_getTask(this->threadPool);
                this->threadPool->runningTask = true;
                ThreadPool_startTask(this->threadPool, task2);
            } JAVA_CATCH(InterruptedException, ex) {
                LogUtil* logUtil = LogUtil_getInstance();
                LogUtil_putF(logUtil, this->INTERRUPT_EXCEPTION, this, this->commonStrings->RUN);
                break;
            } JAVA_END_TRY;
            if (task2 == this->threadObjectUtil->NULL_PRIORITY_RUNNABLE) {
                break;
            }
            JAVA_TRY {
                Runnable_run(task2);
                ThreadPool_completedTask(this->threadPool, task2);
                this->threadPool->runningTask = false;
            } JAVA_CATCH(Exception, e) {
                LogUtil* logUtil = LogUtil_getInstance();
                LogUtil_put(logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), StringUtil_toString(StringUtil_getInstance(), task2))), this, this->commonStrings->RUN, e);
            } JAVA_END_TRY;
        }
        ThreadPool_threadStopped(this->threadPool);
}

