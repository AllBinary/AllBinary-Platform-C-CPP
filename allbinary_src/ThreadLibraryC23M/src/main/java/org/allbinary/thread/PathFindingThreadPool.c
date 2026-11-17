// Generated Code Do Not Modify
#include "org/allbinary/thread/PathFindingThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/thread/PriorityRunnable.h"


static ThreadPool* PathFindingThreadPool_instance;







void PathFindingThreadPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PathFindingThreadPool_instance = PathFindingThreadPool_new("PathFinding", 1, 1);
}

void PathFindingThreadPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PathFindingThreadPool", "ThreadPool");
    java_register_method("PathFindingThreadPool", "runTaskWithPriority", (void*) PathFindingThreadPool_runTaskWithPriority);
    java_register_method("PathFindingThreadPool", "runTask", (void*) PathFindingThreadPool_runTask);
    java_register_method("PathFindingThreadPool", "startTask", (void*) PathFindingThreadPool_startTask);
    java_register_method("PathFindingThreadPool", "completedTask", (void*) PathFindingThreadPool_completedTask);
}


ThreadPool* PathFindingThreadPool_getInstance(void) {
        return (PathFindingThreadPool_staticInit(), PathFindingThreadPool_instance);
}


void PathFindingThreadPool_init(PathFindingThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
    PathFindingThreadPool_register();
        ThreadPool_init(&this->base, poolName, numThreads, (ThreadPool_staticInit(), ThreadPool_NORMAL_PRIORITY));
}

PathFindingThreadPool* PathFindingThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    PathFindingThreadPool* this = java_object_alloc(sizeof(PathFindingThreadPool), "PathFindingThreadPool");
    PathFindingThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


void PathFindingThreadPool_runTaskWithPriority(PathFindingThreadPool* this, PriorityRunnable* task) {
        ThreadPool_runTaskWithPriority((&this->base), task);
}


void PathFindingThreadPool_runTask(PathFindingThreadPool* this, Runnable* task) {
        ThreadPool_runTask((&this->base), task);
}


void PathFindingThreadPool_startTask(PathFindingThreadPool* this, Runnable* task) {
}


void PathFindingThreadPool_completedTask(PathFindingThreadPool* this, Runnable* task) {
}

