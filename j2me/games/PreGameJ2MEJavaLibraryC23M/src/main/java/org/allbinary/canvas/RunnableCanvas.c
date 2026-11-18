// Generated Code Do Not Modify
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/NullThread.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/canvas/RunnableCanvasRefreshHelper.h"
#if __has_include("org/allbinary/canvas/GameRunnable.h")
#include "org/allbinary/canvas/GameRunnable.h"
#endif
#if __has_include("javax/microedition/lcdui/GameRunnable.h")
#include "javax/microedition/lcdui/GameRunnable.h"
#endif
#if __has_include("org/allbinary/GameRunnable.h")
#include "org/allbinary/GameRunnable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GameRunnable.h")
#include "org/allbinary/graphics/displayable/GameRunnable.h"
#endif
#if __has_include("org/allbinary/logic/GameRunnable.h")
#include "org/allbinary/logic/GameRunnable.h"
#endif
#if __has_include("org/allbinary/logic/GameRunnable.h")
#include "org/allbinary/logic/GameRunnable.h"
#endif
#if __has_include("org/allbinary/logic/GameRunnable.h")
#include "org/allbinary/logic/GameRunnable.h"
#endif
#if __has_include("org/allbinary/logic/string/GameRunnable.h")
#include "org/allbinary/logic/string/GameRunnable.h"
#endif
#if __has_include("org/allbinary/logic/string/GameRunnable.h")
#include "org/allbinary/logic/string/GameRunnable.h"
#endif
#if __has_include("org/allbinary/string/GameRunnable.h")
#include "org/allbinary/string/GameRunnable.h"
#endif
#if __has_include("org/allbinary/string/GameRunnable.h")
#include "org/allbinary/string/GameRunnable.h"
#endif
#if __has_include("org/allbinary/thread/GameRunnable.h")
#include "org/allbinary/thread/GameRunnable.h"
#endif
#if __has_include("org/allbinary/thread/GameRunnable.h")
#include "org/allbinary/thread/GameRunnable.h"
#endif
#if __has_include("org/allbinary/thread/GameRunnable.h")
#include "org/allbinary/thread/GameRunnable.h"
#endif
#if __has_include("org/allbinary/time/GameRunnable.h")
#include "org/allbinary/time/GameRunnable.h"
#endif
#if __has_include("org/allbinary/util/GameRunnable.h")
#include "org/allbinary/util/GameRunnable.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif















static void RunnableCanvas_stopWaiting(RunnableCanvas* this);










void RunnableCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RunnableCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RunnableCanvas", "MyCanvas");
    java_register_method("RunnableCanvas", "initCommands", (void*) RunnableCanvas_initCommands);
    java_register_method("RunnableCanvas", "isMainCanvas", (void*) RunnableCanvas_isMainCanvas);
    java_register_method("RunnableCanvas", "setThread", (void*) RunnableCanvas_setThread);
    java_register_method("RunnableCanvas", "setRunning", (void*) RunnableCanvas_setRunning);
    java_register_method("RunnableCanvas", "isRunning", (void*) RunnableCanvas_isRunning);
    java_register_method("RunnableCanvas", "getLoopTimeHelperP", (void*) RunnableCanvas_getLoopTimeHelperP);
    java_register_method("RunnableCanvas", "setWait", (void*) RunnableCanvas_setWait);
    java_register_method("RunnableCanvas", "getWait", (void*) RunnableCanvas_getWait);
    java_register_method("RunnableCanvas", "setCurrentThread", (void*) RunnableCanvas_setCurrentThread);
    java_register_method("RunnableCanvas", "setCurrentThreadFake", (void*) RunnableCanvas_setCurrentThreadFake);
    java_register_method("RunnableCanvas", "showNotify", (void*) RunnableCanvas_showNotify);
    java_register_method("RunnableCanvas", "stopWaiting", (void*) RunnableCanvas_stopWaiting);
    java_register_method("RunnableCanvas", "waitOnNotify", (void*) RunnableCanvas_waitOnNotify);
    java_register_method("RunnableCanvas", "processSleep", (void*) RunnableCanvas_processSleep);
    java_register_method("RunnableCanvas", "isPausable", (void*) RunnableCanvas_isPausable);
    java_register_method("RunnableCanvas", "processGameSleep", (void*) RunnableCanvas_processGameSleep);
    java_register_method("RunnableCanvas", "processLoopSleep", (void*) RunnableCanvas_processLoopSleep);
    java_register_method("RunnableCanvas", "isSingleThread", (void*) RunnableCanvas_isSingleThread);
    java_register_method("RunnableCanvas", "run", (void*) RunnableCanvas_run);
    java_register_method("RunnableCanvas", "end2", (void*) RunnableCanvas_end2);
    java_register_method("RunnableCanvas", "getType", (void*) RunnableCanvas_getType);
}

static void RunnableCanvas_initFields(RunnableCanvas* this) {
    this->nullUtil = NullUtil_getInstance();
    this->stdUtil = StdUtil_getInstance();
    this->systemWrapper = ABSystemWrapper_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->thread = (NullThread_staticInit(), NullThread_NULL_THREAD);
    this->currentThread = (NullThread_staticInit(), NullThread_NULL_THREAD);
    this->running = false;
    this->loopTimeHelper = TimeDelayHelper_new(NullWaitGameRunnable_getInstance()->WAIT);
    this->runnableCanvasRefreshHelper = Processor_getInstance();
    this->commonLabels = CommonLabels_getInstance();
    this->threadObjectUtil = ThreadObjectUtil_getInstance();
    this->SET_RUNNING = "setRunning";
    this->IS_RUNNING = "isRunning";
    this->THREAD = "Thread: ";
    this->NOT_EQUAL = " != ";
    this->PAUSE_SLEEP = "pause sleep";
    this->START_PAUSE = "start pause - game thread sleep at: ";
    this->END_PAUSE = "end pause - game thread sleep at: ";
    this->PROCESS_LOOP_SLEEP = "processLoopSleep";
    this->pauseWait = 0LL;
    this->notified = false;
}


void RunnableCanvas_init(RunnableCanvas* this, CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam) {
    RunnableCanvas_register();
        MyCanvas_init(&this->base, CommonStrings_getInstance()->UNKNOWN, childNameList);
        RunnableCanvas_initFields(this);
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "RunnableCanvas delay: "), this->loopTimeHelper->delay)), this, this->base.commonStrings->CONSTRUCTOR);
        this->runnableCanvasRefreshHelper = RunnableCanvasRefreshHelper_new(this);
        if (commandListener != nullptr) {
            RunnableCanvas_initCommands(this, commandListener);
        } else if (hasParam) {
            LogUtil_putF(this->base.logUtil, "commandListener was null", this, "initCommands");
        }
}

RunnableCanvas* RunnableCanvas_new(CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam) {
    RunnableCanvas* this = java_object_alloc(sizeof(RunnableCanvas), "RunnableCanvas");
    RunnableCanvas_init(this, commandListener, childNameList, hasParam);
    return this;
}


void RunnableCanvas_initCommands(RunnableCanvas* this, CommandListener* cmdListener) {
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->NOT_IMPLEMENTED, this, "initCommands");
}


bool RunnableCanvas_isMainCanvas(RunnableCanvas* this) {
        if (MyCanvas_getCustomCommandListener(this) != nullptr) {
            return true;
        } else {
            return false;
        }
}


void RunnableCanvas_setThread(RunnableCanvas* this, Thread* thread) {
        this->thread = thread;
}


void RunnableCanvas_setRunning(RunnableCanvas* this, bool running) {
        this->running = running;
        if (!this->running) {
            this->thread = (NullThread_staticInit(), NullThread_NULL_THREAD);
            java_monitor_enter(this);
            {
                ThreadObjectUtil_notifyObject(this->threadObjectUtil, this);
            }
            java_monitor_exit(this);
        }
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendboolean(StringMaker_append(StringMaker_new(), this->IS_RUNNING), this->running)), this, this->SET_RUNNING);
}


// synchronized
bool RunnableCanvas_isRunning(RunnableCanvas* this) {
        if (this->thread == this->currentThread) {
            return this->running;
        } else {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->THREAD);
            if (this->thread != nullptr) {
                StringMaker_append(stringBuffer, java_string_of(this->thread));
            }
            StringMaker_append(stringBuffer, this->NOT_EQUAL);
            if (this->currentThread != nullptr) {
                StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->currentThread));
            }
            LogUtil_putF(this->base.logUtil, java_string_of(stringBuffer), this, this->IS_RUNNING);
            return false;
        }
}


TimeDelayHelper* RunnableCanvas_getLoopTimeHelperP(RunnableCanvas* this) {
        return this->loopTimeHelper;
}


void RunnableCanvas_setWait(RunnableCanvas* this, int32_t wait) {
        this->loopTimeHelper->delay = wait;
        this->pauseWait = ((int64_t) wait) * 3LL;
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "setWait - delay: "), this->loopTimeHelper->delay)), this, this->base.commonStrings->CONSTRUCTOR);
}


int32_t RunnableCanvas_getWait(RunnableCanvas* this) {
        return this->loopTimeHelper->delay;
}


void RunnableCanvas_setCurrentThread(RunnableCanvas* this) {
        this->currentThread = Thread_currentThread();
}


void RunnableCanvas_setCurrentThreadFake(RunnableCanvas* this) {
        this->currentThread = this->thread;
}


void RunnableCanvas_showNotify(RunnableCanvas* this) {
        JAVA_TRY {
            RunnableCanvas_stopWaiting(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, "showNotify", e);
        } JAVA_END_TRY;
}


// throws Exception
static void RunnableCanvas_stopWaiting(RunnableCanvas* this) {
        this->notified = true;
        java_monitor_enter(this);
        {
            ThreadObjectUtil_notifyObject(this->threadObjectUtil, this);
        }
        java_monitor_exit(this);
        Canvas_repaint(this);
}


// throws Exception
// synchronized
void RunnableCanvas_waitOnNotify(RunnableCanvas* this, int64_t wait) {
        if (!this->notified) {
            if (wait > 0LL) {
                ThreadObjectUtil_waitObjectFor(this->threadObjectUtil, this, wait);
            } else {
                ThreadObjectUtil_waitObject(this->threadObjectUtil, this);
            }
        }
}


// throws Exception
void RunnableCanvas_processSleep(RunnableCanvas* this) {
        java_sleep(this->pauseWait);
}


bool RunnableCanvas_isPausable(RunnableCanvas* this) {
        return false;
}


// throws Exception
void RunnableCanvas_processGameSleep(RunnableCanvas* this, int64_t sleep) {
        java_sleep(sleep);
}


// throws Exception
void RunnableCanvas_processLoopSleep(RunnableCanvas* this) {
        Processor_process(this->runnableCanvasRefreshHelper);
        if (MyCanvas_isPaused(this)) {
            StringMaker* stringMaker = StringMaker_new();
            if (RunnableCanvas_isRunning(this) && !RunnableCanvas_isSingleThread(this)) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                int64_t currentTimeMillis = ABSystemWrapper_currentTimeMillis(this->systemWrapper);
                LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_appendlong(StringMaker_append(stringMaker, this->START_PAUSE), currentTimeMillis), this->PAUSE_SLEEP), this->pauseWait)), this, this->PROCESS_LOOP_SLEEP);
                while (MyCanvas_isPaused(this) && RunnableCanvas_isRunning(this) && !RunnableCanvas_isSingleThread(this)) {
                    RunnableCanvas_processSleep(this);
                    if (!RunnableCanvas_isPausable(this)) {
                        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(stringMaker, this->END_PAUSE), currentTimeMillis)), this, this->PROCESS_LOOP_SLEEP);
                        return;
                    }
                }
            }
        }
        int64_t elapsedTime = TimeDelayHelper_getElapsedTNT(this->loopTimeHelper);
        int64_t wait = ((int64_t) this->loopTimeHelper->delay);
        if (elapsedTime > wait) {
            elapsedTime = wait;
        } else {
            RunnableCanvas_processGameSleep(this, wait - elapsedTime);
        }
}


bool RunnableCanvas_isSingleThread(RunnableCanvas* this) {
        return false;
}


void RunnableCanvas_run(RunnableCanvas* this) {
        RunnableCanvas_setCurrentThread(this);
}


// throws Exception
void RunnableCanvas_end2(RunnableCanvas* this) {
}


int32_t RunnableCanvas_getType(RunnableCanvas* this) {
        return -1;
}

