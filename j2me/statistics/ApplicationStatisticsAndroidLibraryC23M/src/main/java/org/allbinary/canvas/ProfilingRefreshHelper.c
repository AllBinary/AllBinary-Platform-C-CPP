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
#include "android/view/View.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/canvas/AndroidGameStatistics.h"

typedef struct ProfilingRefreshHelper ProfilingRefreshHelper;
struct ProfilingRefreshHelper {
    AndroidGameStatistics base;
    bool firstTime;
    int32_t bestFrameProcessingTime;
    int32_t worstFrameProcessingTime;
    int64_t frameProcessingTimeElapsed;
};

static ProfilingRefreshHelper* ProfilingRefreshHelper_instance;

ProfilingRefreshHelper* ProfilingRefreshHelper_new(void);
AndroidGameStatistics* ProfilingRefreshHelper_getInstance(void);

void ProfilingRefreshHelper_init(ProfilingRefreshHelper* this);
void ProfilingRefreshHelper_initView(ProfilingRefreshHelper* this, View* view);
void ProfilingRefreshHelper_nextFrame(ProfilingRefreshHelper* this);
const char* ProfilingRefreshHelper_toString(ProfilingRefreshHelper* this);

// Static fields with runtime initializers: call this once at startup
void ProfilingRefreshHelper_staticInit(void) {
    ProfilingRefreshHelper_instance = ProfilingRefreshHelper_new();
}

static void ProfilingRefreshHelper_initFields(ProfilingRefreshHelper* this) {
    this->firstTime = true;
    this->bestFrameProcessingTime = 0;
    this->worstFrameProcessingTime = 0;
    this->frameProcessingTimeElapsed = 0;
}


AndroidGameStatistics* ProfilingRefreshHelper_getInstance(void) {
        return ProfilingRefreshHelper_instance;
}


void ProfilingRefreshHelper_init(ProfilingRefreshHelper* this) {
    AndroidGameStatistics_init(&this->base);
    ProfilingRefreshHelper_initFields(this);
}

ProfilingRefreshHelper* ProfilingRefreshHelper_new(void) {
    ProfilingRefreshHelper* this = calloc(1, sizeof(ProfilingRefreshHelper));
    ProfilingRefreshHelper_init(this);
    return this;
}


void ProfilingRefreshHelper_initView(ProfilingRefreshHelper* this, View* view) {
        AndroidGameStatistics_initView((&this->base), view);
        this->frameProcessingTimeElapsed = JAVA_CALL(ProfilingRefreshHelper_getTimeDelayHelper(this), getStartTime);
        this->bestFrameProcessingTime = Integer_MAX_VALUE;
        this->worstFrameProcessingTime = 0;
}


void ProfilingRefreshHelper_nextFrame(ProfilingRefreshHelper* this) {
        this->frameProcessingTimeElapsed = java_current_time_millis() - this->frameProcessingTimeElapsed;
        if (this->firstTime != true) {
            if (this->frameProcessingTimeElapsed > ((int64_t) this->worstFrameProcessingTime)) {
                this->worstFrameProcessingTime = ((int32_t) this->frameProcessingTimeElapsed);
            }
            if (this->frameProcessingTimeElapsed < ((int64_t) this->bestFrameProcessingTime)) {
                this->bestFrameProcessingTime = ((int32_t) this->frameProcessingTimeElapsed);
            }
        } else {
            this->firstTime = false;
        }
        AndroidGameStatistics_nextFrame((&this->base));
}


const char* ProfilingRefreshHelper_toString(ProfilingRefreshHelper* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), AndroidGameStatistics_toString((&this->base))), append, " Worst: "), appendint, this->worstFrameProcessingTime), append, " Best: "), appendint, this->bestFrameProcessingTime), toString);
}

