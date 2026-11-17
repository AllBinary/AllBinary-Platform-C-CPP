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
// #include "java/util/Calendar.h"

typedef struct TimeUtil TimeUtil;
struct TimeUtil {
    char unused;
};

static TimeUtil* TimeUtil_instance;
static Calendar* TimeUtil_calendar;

TimeUtil* TimeUtil_new(void);
TimeUtil* TimeUtil_getInstance(void);
void TimeUtil_setCalendar(TimeUtil* this, Calendar* calendar, const char* yearString, const char* monthString, const char* dayString, const char* hourString);
void TimeUtil_setCalendarWithTime(TimeUtil* this, Calendar* calendar, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString);
void TimeUtil_setExpirationCalendar(TimeUtil* this, Calendar* calendar, const char* yearsString, const char* monthsString, const char* daysString, const char* hoursString, const char* minutesString, const char* secondsString);
int64_t TimeUtil_getTotalTime(TimeUtil* this, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString);

// Static fields with runtime initializers: call this once at startup
void TimeUtil_staticInit(void) {
    TimeUtil_instance = TimeUtil_new();
    TimeUtil_calendar = Calendar_getInstance();
}

void TimeUtil_init(TimeUtil* this) {
}

TimeUtil* TimeUtil_new(void) {
    TimeUtil* this = calloc(1, sizeof(TimeUtil));
    TimeUtil_init(this);
    return this;
}


TimeUtil* TimeUtil_getInstance(void) {
        return TimeUtil_instance;
}


void TimeUtil_setCalendar(TimeUtil* this, Calendar* calendar, const char* yearString, const char* monthString, const char* dayString, const char* hourString) {
        int32_t year = Integer_intValue(yearString);
        int32_t month = Integer_intValue(monthString);
        int32_t day = Integer_intValue(dayString);
        int32_t hour = Integer_intValue(hourString);
        Calendar_set(calendar, year, month, day, hour, 0);
}


void TimeUtil_setCalendarWithTime(TimeUtil* this, Calendar* calendar, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString) {
        int32_t year = Integer_intValue(yearString);
        int32_t month = Integer_intValue(monthString);
        int32_t day = Integer_intValue(dayString);
        int32_t hour = Integer_intValue(hourString);
        int32_t minute = Integer_intValue(minuteString);
        int32_t second = Integer_intValue(secondString);
        Calendar_set(calendar, year, month, day, hour, minute, second);
}


void TimeUtil_setExpirationCalendar(TimeUtil* this, Calendar* calendar, const char* yearsString, const char* monthsString, const char* daysString, const char* hoursString, const char* minutesString, const char* secondsString) {
        int32_t year = Calendar_get(calendar, Calendar_YEAR) + Integer_intValue(yearsString);
        int32_t month = Calendar_get(calendar, Calendar_MONTH) + Integer_intValue(monthsString);
        int32_t day = Calendar_get(calendar, Calendar_DAY_OF_MONTH) + Integer_intValue(daysString);
        int32_t hour = Calendar_get(calendar, Calendar_HOUR) + Integer_intValue(hoursString);
        int32_t minute = Calendar_get(calendar, Calendar_MINUTE) + Integer_intValue(minutesString);
        int32_t second = Calendar_get(calendar, Calendar_SECOND) + Integer_intValue(secondsString);
        Calendar_set(calendar, year, month, day, hour, minute, second);
}


int64_t TimeUtil_getTotalTime(TimeUtil* this, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString) {
        int64_t time = JAVA_CALL(TimeUtil_calendar, getTimeInMillis);
        TimeUtil_setExpirationCalendar(this, TimeUtil_calendar, yearString, monthString, dayString, hourString, minuteString, secondString);
        int64_t timeDelta = JAVA_CALL(TimeUtil_calendar, getTimeInMillis);
        return timeDelta - time;
}

