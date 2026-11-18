// Generated Code Do Not Modify
#include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/thread/ThreadPoolStrings.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/thread/PooledThread.h"
#include "org/allbinary/thread/PriorityRunnable.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
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


static const char* ThreadPool_ROOT_NAME = "-PooledThread-";
int32_t ThreadPool_NORMAL_PRIORITY;
















void ThreadPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThreadPool_NORMAL_PRIORITY = (Thread_staticInit(), Thread_NORM_PRIORITY);
}

void ThreadPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThreadPool", nullptr);
    java_register_method("ThreadPool", "init", (void*) ThreadPool_initMethod);
    java_register_method("ThreadPool", "runAPriorityTask", (void*) ThreadPool_runAPriorityTask);
    java_register_method("ThreadPool", "runTaskWithPriority", (void*) ThreadPool_runTaskWithPriority);
    java_register_method("ThreadPool", "runTask", (void*) ThreadPool_runTask);
    java_register_method("ThreadPool", "getTask", (void*) ThreadPool_getTask);
    java_register_method("ThreadPool", "clear", (void*) ThreadPool_clear);
    java_register_method("ThreadPool", "close", (void*) ThreadPool_close);
    java_register_method("ThreadPool", "join", (void*) ThreadPool_join);
    java_register_method("ThreadPool", "isBusy", (void*) ThreadPool_isBusy);
    java_register_method("ThreadPool", "threadStarted", (void*) ThreadPool_threadStarted);
    java_register_method("ThreadPool", "threadStopped", (void*) ThreadPool_threadStopped);
    java_register_method("ThreadPool", "startTask", (void*) ThreadPool_startTask);
    java_register_method("ThreadPool", "completedTask", (void*) ThreadPool_completedTask);
    java_register_method("ThreadPool", "createName", (void*) ThreadPool_createName);
}

static void ThreadPool_initFields(ThreadPool* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->NULL_RUNNABLE = NullRunnable_getInstance();
    this->threadPoolStrings = ThreadPoolStrings_getInstance();
    this->threadObjectUtil = ThreadObjectUtil_getInstance();
    
    
    this->isAlive = false;
    this->taskQueue = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->threadID = 0;
    
    this->runningTask = false;
}


void ThreadPool_init(ThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
    ThreadPool_register();
    ThreadPool_initFields(this);
        this->poolName = poolName;
        this->priority = priority;
        this->numThreads = numThreads;
}

ThreadPool* ThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    ThreadPool* this = java_object_alloc(sizeof(ThreadPool), "ThreadPool");
    ThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


void ThreadPool_initMethod(ThreadPool* this) {
        if (!this->isAlive) {
            this->isAlive = true;
            this->taskQueue = BasicArrayListD_new();
            PooledThread* pooledThread = nullptr;
            for (int32_t i = 0; i < this->numThreads; i++) {
                pooledThread = PooledThread_new(this);
                Thread_setPriority(pooledThread, this->priority);
                Thread_start(pooledThread);
            }
        }
}


// throws Exception
void ThreadPool_runAPriorityTask(ThreadPool* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void ThreadPool_runTaskWithPriority(ThreadPool* this, PriorityRunnable* task) {
        java_monitor_enter(this);
        {
            if (!this->isAlive) {
                ThreadPool_initMethod(this);
            }
            if (task != nullptr) {
                int32_t size = BasicArrayList_size(this->taskQueue);
                PriorityRunnable* runnable = nullptr;
                PriorityRunnable* lowerPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
                for (int32_t index = 0; index < size; index++) {
                    runnable = ((PriorityRunnable*) BasicArrayList_get(this->taskQueue, index));
                    if (PriorityRunnable_getPriority(runnable) > PriorityRunnable_getPriority(task)) {
                        lowerPriorityRunnable = runnable;
                        break;
                    }
                }
                if (lowerPriorityRunnable == this->threadObjectUtil->NULL_PRIORITY_RUNNABLE) {
                    BasicArrayList_add(this->taskQueue, task);
                } else {
                    int32_t index = BasicArrayList_indexOf(this->taskQueue, lowerPriorityRunnable);
                    BasicArrayList_addAt(this->taskQueue, index, task);
                }
                Any_notify(this);
            }
        }
        java_monitor_exit(this);
}


void ThreadPool_runTask(ThreadPool* this, Runnable* task) {
        java_monitor_enter(this);
        {
            if (!this->isAlive) {
                ThreadPool_initMethod(this);
            }
            if (task != nullptr) {
                BasicArrayList_add(this->taskQueue, task);
                Any_notify(this);
            }
        }
        java_monitor_exit(this);
}


// throws InterruptedException
Runnable* ThreadPool_getTask(ThreadPool* this) {
        java_monitor_enter(this);
        {
            while (BasicArrayList_size(this->taskQueue) == 0) {
                if (!this->isAlive) {
                    return this->NULL_RUNNABLE;
                }
                Any_wait(this);
            }
            Runnable* runnable = ((Runnable*) BasicArrayList_removeAt(this->taskQueue, 0));
            return runnable;
        }
        java_monitor_exit(this);
}


void ThreadPool_clear(ThreadPool* this) {
        java_monitor_enter(this);
        {
            if (this->isAlive) {
                BasicArrayList_clear(this->taskQueue);
            }
        }
        java_monitor_exit(this);
}


void ThreadPool_close(ThreadPool* this) {
        java_monitor_enter(this);
        {
            if (this->isAlive) {
                this->isAlive = false;
                BasicArrayList_clear(this->taskQueue);
            }
        }
        java_monitor_exit(this);
}


void ThreadPool_join(ThreadPool* this) {
        java_monitor_enter(this);
        {
            this->isAlive = false;
            BasicArrayList_clear(this->taskQueue);
            Any_notifyAll(this);
        }
        java_monitor_exit(this);
}


bool ThreadPool_isBusy(ThreadPool* this) {
        if (!this->isAlive) {
            return false;
        }
        if (BasicArrayList_size(this->taskQueue) > 0) {
            return true;
        }
        if (this->runningTask) {
            return true;
        }
        return false;
}


void ThreadPool_threadStarted(ThreadPool* this) {
}


void ThreadPool_threadStopped(ThreadPool* this) {
        if (this->numThreads == 1) {
            this->isAlive = false;
            BasicArrayList_clear(this->taskQueue);
        }
}


void ThreadPool_startTask(ThreadPool* this, Runnable* task) {
}


void ThreadPool_completedTask(ThreadPool* this, Runnable* task) {
}


const char* ThreadPool_createName(ThreadPool* this) {
        return java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_new(), this->poolName), ThreadPool_ROOT_NAME), this->threadID++));
}

