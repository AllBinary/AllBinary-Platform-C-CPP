// Generated Code Do Not Modify
#include "org/allbinary/thread/SoundThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"


static ThreadPool* SoundThreadPool_instance;


void SoundThreadPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SoundThreadPool_instance = ThreadPool_new("Sound", 1, (ThreadPool_staticInit(), ThreadPool_NORMAL_PRIORITY));
}

void SoundThreadPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SoundThreadPool", nullptr);
}

void SoundThreadPool_init(SoundThreadPool* this) {
    SoundThreadPool_register();
}

SoundThreadPool* SoundThreadPool_new(void) {
    SoundThreadPool* this = java_object_alloc(sizeof(SoundThreadPool), "SoundThreadPool");
    SoundThreadPool_init(this);
    return this;
}


ThreadPool* SoundThreadPool_getInstance(void) {
        return (SoundThreadPool_staticInit(), SoundThreadPool_instance);
}

