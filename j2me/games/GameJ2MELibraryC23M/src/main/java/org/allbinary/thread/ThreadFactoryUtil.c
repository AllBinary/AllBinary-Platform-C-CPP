// Generated Code Do Not Modify
#include "org/allbinary/thread/ThreadFactoryUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
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
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static ThreadFactoryUtil* ThreadFactoryUtil_instance;




static Thread* ThreadFactoryUtil_getInstanceType(ThreadFactoryUtil* this, Runnable* runnable, int32_t type);


void ThreadFactoryUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThreadFactoryUtil_instance = ThreadFactoryUtil_new();
}

void ThreadFactoryUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThreadFactoryUtil", nullptr);
    java_register_method("ThreadFactoryUtil", "getInstanceGameCanvasRunnable", (void*) ThreadFactoryUtil_getInstanceGameCanvasRunnable);
    java_register_method("ThreadFactoryUtil", "getInstanceForRunnable", (void*) ThreadFactoryUtil_getInstanceForRunnable);
    java_register_method("ThreadFactoryUtil", "getInstanceType", (void*) ThreadFactoryUtil_getInstanceType);
    java_register_method("ThreadFactoryUtil", "start", (void*) ThreadFactoryUtil_start);
}

static void ThreadFactoryUtil_initFields(ThreadFactoryUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void ThreadFactoryUtil_init(ThreadFactoryUtil* this) {
    ThreadFactoryUtil_register();
    ThreadFactoryUtil_initFields(this);
}

ThreadFactoryUtil* ThreadFactoryUtil_new(void) {
    ThreadFactoryUtil* this = java_object_alloc(sizeof(ThreadFactoryUtil), "ThreadFactoryUtil");
    ThreadFactoryUtil_init(this);
    return this;
}


ThreadFactoryUtil* ThreadFactoryUtil_getInstance(void) {
        return (ThreadFactoryUtil_staticInit(), ThreadFactoryUtil_instance);
}


Thread* ThreadFactoryUtil_getInstanceGameCanvasRunnable(ThreadFactoryUtil* this, GameCanvasRunnableInterface* runnable) {
        return ThreadFactoryUtil_getInstanceType(this, runnable, GameCanvasRunnableInterface_getType(runnable));
}


Thread* ThreadFactoryUtil_getInstanceForRunnable(ThreadFactoryUtil* this, ABRunnable* runnable) {
        return ThreadFactoryUtil_getInstanceType(this, runnable, ABRunnable_getType(runnable));
}


static Thread* ThreadFactoryUtil_getInstanceType(ThreadFactoryUtil* this, Runnable* runnable, int32_t type) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        if (J2MEUtil_isHTML()) {
            if (type == (DemoCanvas_staticInit(), DemoCanvas_TYPE) || type == (AllBinaryGameCanvas_staticInit(), AllBinaryGameCanvas_TYPE)) {
                RunnableCanvasSingleThreadStartRunnable* demoGameSingleThreadStartRunnable = RunnableCanvasSingleThreadStartRunnable_new(((RunnableCanvas*) runnable));
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Using Pseudo Thread for DemoCanvas/AllBinaryGameCanvas under PlayN/HTML5: "), StringUtil_toString(StringUtil_getInstance(), runnable))), this, commonStrings->CONSTRUCTOR);
                ThreadPool* primaryThreadPool = PrimaryThreadPool_getInstance();
                ThreadPool_runTask(primaryThreadPool, demoGameSingleThreadStartRunnable);
            } else {
                PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Using Pseudo Thread for Runnable under PlayN/HTML5: "), StringUtil_toString(StringUtil_getInstance(), runnable))), this, commonStrings->CONSTRUCTOR);
                ThreadPool* primaryThreadPool = PrimaryThreadPool_getInstance();
                ThreadPool_runTask(primaryThreadPool, runnable);
            }
        }
        Thread* thread = Thread_new(runnable, java_string_of(runnable));
        LogUtil_putF(this->logUtil, java_string_of(thread), this, commonStrings->CONSTRUCTOR);
        return thread;
}


void ThreadFactoryUtil_start(ThreadFactoryUtil* this, Thread* thread) {
        Thread_start(thread);
}

