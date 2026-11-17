/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/NullThread.h"
#include "org/allbinary/thread/RunnableInterface.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct RunnableCanvas RunnableCanvas;
struct RunnableCanvas {
    MyCanvas base;
    RunnableInterface RunnableInterface_interface;
    NullUtil* nullUtil;
    StdUtil* stdUtil;
    ABSystemWrapper* systemWrapper;
    TsUtil* tsUtil;
    Thread* thread;
    Thread* currentThread;
    bool running;
    TimeDelayHelper* loopTimeHelper;
    Processor* runnableCanvasRefreshHelper;
    CommonLabels* commonLabels;
    ThreadObjectUtil* threadObjectUtil;
    const char* SET_RUNNING;
    const char* IS_RUNNING;
    const char* THREAD;
    const char* NOT_EQUAL;
    const char* PAUSE_SLEEP;
    const char* START_PAUSE;
    const char* END_PAUSE;
    const char* PROCESS_LOOP_SLEEP;
    int64_t pauseWait;
    bool notified;
};


RunnableCanvas* RunnableCanvas_new(CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam);

void RunnableCanvas_init(RunnableCanvas* this, CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam);
void RunnableCanvas_initCommands(RunnableCanvas* this, CommandListener* cmdListener);
bool RunnableCanvas_isMainCanvas(RunnableCanvas* this);
void RunnableCanvas_setThread(RunnableCanvas* this, Thread* thread);
void RunnableCanvas_setRunning(RunnableCanvas* this, bool running);
bool RunnableCanvas_isRunning(RunnableCanvas* this);
TimeDelayHelper* RunnableCanvas_getLoopTimeHelperP(RunnableCanvas* this);
void RunnableCanvas_setWait(RunnableCanvas* this, int32_t wait);
int32_t RunnableCanvas_getWait(RunnableCanvas* this);
void RunnableCanvas_setCurrentThread(RunnableCanvas* this);
void RunnableCanvas_setCurrentThreadFake(RunnableCanvas* this);
void RunnableCanvas_showNotify(RunnableCanvas* this);
static void RunnableCanvas_stopWaiting(RunnableCanvas* this);
void RunnableCanvas_waitOnNotify(RunnableCanvas* this, int64_t wait);
void RunnableCanvas_processSleep(RunnableCanvas* this);
bool RunnableCanvas_isPausable(RunnableCanvas* this);
void RunnableCanvas_processGameSleep(RunnableCanvas* this, int64_t sleep);
void RunnableCanvas_processLoopSleep(RunnableCanvas* this);
bool RunnableCanvas_isSingleThread(RunnableCanvas* this);
void RunnableCanvas_run(RunnableCanvas* this);
void RunnableCanvas_end2(RunnableCanvas* this);
int32_t RunnableCanvas_getType(RunnableCanvas* this);

static void RunnableCanvas_initFields(RunnableCanvas* this) {
    this->nullUtil = NullUtil_getInstance();
    this->stdUtil = StdUtil_getInstance();
    this->systemWrapper = ABSystemWrapper_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->thread = NullThread_NULL_THREAD;
    this->currentThread = NullThread_NULL_THREAD;
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
        MyCanvas_init(&this->base, CommonStrings_getInstance()->UNKNOWN, childNameList);
        RunnableCanvas_initFields(this);
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "RunnableCanvas delay: "), appendint, ((int32_t) this->loopTimeHelper->delay)), toString), this, this->commonStrings->CONSTRUCTOR);
        this->runnableCanvasRefreshHelper = RunnableCanvasRefreshHelper_new(this);
        if (commandListener != nullptr) {
            RunnableCanvas_initCommands(this, commandListener);
        } else if (hasParam) {
            JAVA_CALL(this->logUtil, putF, "commandListener was null", this, "initCommands");
        }
}

RunnableCanvas* RunnableCanvas_new(CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam) {
    RunnableCanvas* this = calloc(1, sizeof(RunnableCanvas));
    RunnableCanvas_init(this, commandListener, childNameList, hasParam);
    return this;
}


void RunnableCanvas_initCommands(RunnableCanvas* this, CommandListener* cmdListener) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->NOT_IMPLEMENTED, this, "initCommands");
}


bool RunnableCanvas_isMainCanvas(RunnableCanvas* this) {
        if (RunnableCanvas_getCustomCommandListener(this) != nullptr) {
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
            this->thread = NullThread_NULL_THREAD;
            java_monitor_enter(this);
            {
                ThreadObjectUtil_notifyObject(this->threadObjectUtil, this);
            }
            java_monitor_exit(this);
        }
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->IS_RUNNING), appendboolean, this->running), toString), this, this->SET_RUNNING);
}


// synchronized
bool RunnableCanvas_isRunning(RunnableCanvas* this) {
        if (this->thread == this->currentThread) {
            return this->running;
        } else {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->THREAD);
            if (this->thread != nullptr) {
                StringMaker_append(stringBuffer, Thread_toString(this->thread));
            }
            StringMaker_append(stringBuffer, this->NOT_EQUAL);
            if (this->currentThread != nullptr) {
                StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->currentThread));
            }
            JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, this->IS_RUNNING);
            return false;
        }
}


TimeDelayHelper* RunnableCanvas_getLoopTimeHelperP(RunnableCanvas* this) {
        return this->loopTimeHelper;
}


void RunnableCanvas_setWait(RunnableCanvas* this, int32_t wait) {
        this->loopTimeHelper->delay = wait;
        this->pauseWait = ((int64_t) wait) * 3LL;
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "setWait - delay: "), appendint, ((int32_t) this->loopTimeHelper->delay)), toString), this, this->commonStrings->CONSTRUCTOR);
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
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "showNotify", e);
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
        RunnableCanvas_repaint(this);
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
        if (RunnableCanvas_isPaused(this)) {
            StringMaker* stringMaker = StringMaker_new();
            if (RunnableCanvas_isRunning(this) && !RunnableCanvas_isSingleThread(this)) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                int64_t currentTimeMillis = ABSystemWrapper_currentTimeMillis(this->systemWrapper);
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, this->START_PAUSE), appendlong, currentTimeMillis), append, this->PAUSE_SLEEP), appendlong, this->pauseWait), toString), this, this->PROCESS_LOOP_SLEEP);
                while (RunnableCanvas_isPaused(this) && RunnableCanvas_isRunning(this) && !RunnableCanvas_isSingleThread(this)) {
                    RunnableCanvas_processSleep(this);
                    if (!RunnableCanvas_isPausable(this)) {
                        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, this->END_PAUSE), appendlong, currentTimeMillis), toString), this, this->PROCESS_LOOP_SLEEP);
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

