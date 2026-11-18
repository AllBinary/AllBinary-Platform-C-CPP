#ifndef ORG_ALLBINARY_TIME_TIMEUTIL_H
#define ORG_ALLBINARY_TIME_TIMEUTIL_H
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
#include "java/util/Calendar.h"
#include "java/lang/Integer.h"

typedef struct TimeUtil TimeUtil;
struct TimeUtil {
    char unused;
};


TimeUtil* TimeUtil_new(void);
void TimeUtil_init(TimeUtil* this);

TimeUtil* TimeUtil_getInstance(void);

void TimeUtil_setCalendar(TimeUtil* this, Calendar* calendar, const char* yearString, const char* monthString, const char* dayString, const char* hourString);

void TimeUtil_setCalendarWithTime(TimeUtil* this, Calendar* calendar, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString);

void TimeUtil_setExpirationCalendar(TimeUtil* this, Calendar* calendar, const char* yearsString, const char* monthsString, const char* daysString, const char* hoursString, const char* minutesString, const char* secondsString);

int64_t TimeUtil_getTotalTime(TimeUtil* this, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimeUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimeUtil_register(void);


#endif // ORG_ALLBINARY_TIME_TIMEUTIL_H
