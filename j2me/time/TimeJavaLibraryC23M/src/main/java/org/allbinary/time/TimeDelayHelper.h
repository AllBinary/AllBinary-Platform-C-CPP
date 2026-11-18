#ifndef ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H
#define ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H
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
// package org.allbinary.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
#include "java/lang/System.h"
#include "java/lang/Long.h"

typedef struct TimeDelayHelper TimeDelayHelper;
struct TimeDelayHelper {
    int64_t startTime;
    int64_t elapsedTimeAtPause;
    int32_t delay;
};


TimeDelayHelper* TimeDelayHelper_new(int32_t delay);

void TimeDelayHelper_init(TimeDelayHelper* this, int32_t delay);

bool TimeDelayHelper_isTimeTNT(TimeDelayHelper* this);

bool TimeDelayHelper_isTimeSinceTNT(TimeDelayHelper* this, int32_t delay);

bool TimeDelayHelper_isTime(TimeDelayHelper* this, int64_t currentTime);

bool TimeDelayHelper_isTimeWithoutReset(TimeDelayHelper* this, int64_t currentTime);

bool TimeDelayHelper_isTimeSince(TimeDelayHelper* this, int32_t delay, int64_t currentTime);

int64_t TimeDelayHelper_getElapsedTNT(TimeDelayHelper* this);

int64_t TimeDelayHelper_getElapsed(TimeDelayHelper* this, int64_t currentTime);

bool TimeDelayHelper_isElapsed(TimeDelayHelper* this, int64_t currentTime, int64_t time);

bool TimeDelayHelper_isElapsedTNT(TimeDelayHelper* this, int64_t time);

void TimeDelayHelper_setStartTime(TimeDelayHelper* this, int64_t startTime);

int64_t TimeDelayHelper_getStartTime(TimeDelayHelper* this);

void TimeDelayHelper_setStartTimeTNT(TimeDelayHelper* this);

void TimeDelayHelper_pause(TimeDelayHelper* this);

bool TimeDelayHelper_resume(TimeDelayHelper* this);

const char* TimeDelayHelper_toStringAt(TimeDelayHelper* this, int64_t currentTime);

const char* TimeDelayHelper_toString(TimeDelayHelper* this);
#define TimeDelayHelper_new1 TimeDelayHelper_new
#define TimeDelayHelper_init1 TimeDelayHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimeDelayHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimeDelayHelper_register(void);


#endif // ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H
