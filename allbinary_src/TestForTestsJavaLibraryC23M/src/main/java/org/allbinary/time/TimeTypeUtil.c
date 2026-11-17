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
// #include "java/util/TimeZone.h"

typedef struct TimeTypeUtil TimeTypeUtil;
struct TimeTypeUtil {
    const char* NIGHT;
    const char* DAY;
};

static TimeTypeUtil* TimeTypeUtil_instance;

TimeTypeUtil* TimeTypeUtil_new(void);
TimeTypeUtil* TimeTypeUtil_getInstance(void);
bool TimeTypeUtil_isNight(TimeTypeUtil* this);
int32_t TimeTypeUtil_getHourOfDay(TimeTypeUtil* this);
const char* TimeTypeUtil_getNightOrDay(TimeTypeUtil* this);
int32_t TimeTypeUtil_getHourOfDay(TimeTypeUtil* this, int64_t timeInMillis);
bool TimeTypeUtil_isNight(TimeTypeUtil* this, int64_t timeInMillis);
const char* TimeTypeUtil_getNightOrDay(TimeTypeUtil* this, int64_t timeInMillis);

// Static fields with runtime initializers: call this once at startup
void TimeTypeUtil_staticInit(void) {
    TimeTypeUtil_instance = TimeTypeUtil_new();
}

static void TimeTypeUtil_initFields(TimeTypeUtil* this) {
    this->NIGHT = "Night";
    this->DAY = "Day";
}

void TimeTypeUtil_init(TimeTypeUtil* this) {
    TimeTypeUtil_initFields(this);
}

TimeTypeUtil* TimeTypeUtil_new(void) {
    TimeTypeUtil* this = calloc(1, sizeof(TimeTypeUtil));
    TimeTypeUtil_init(this);
    return this;
}


TimeTypeUtil* TimeTypeUtil_getInstance(void) {
        return TimeTypeUtil_instance;
}


bool TimeTypeUtil_isNight(TimeTypeUtil* this) {
        int32_t hoursOfDay = TimeTypeUtil_getHourOfDay(this);
        return hoursOfDay < 6 || hoursOfDay > 18;
}


int32_t TimeTypeUtil_getHourOfDay(TimeTypeUtil* this) {
        Calendar* calendar = Calendar_getInstance();
        return Calendar_get(calendar, Calendar_HOUR_OF_DAY);
}


const char* TimeTypeUtil_getNightOrDay(TimeTypeUtil* this) {
        return (TimeTypeUtil_isNight(this) ? this->NIGHT : this->DAY);
}


// Java overloaded method: C needs a different name
int32_t TimeTypeUtil_getHourOfDay(TimeTypeUtil* this, int64_t timeInMillis) {
        Calendar* calendar = Calendar_getInstance();
        Calendar_setTimeInMillis(calendar, timeInMillis);
        return Calendar_get(calendar, Calendar_HOUR_OF_DAY);
}


// Java overloaded method: C needs a different name
bool TimeTypeUtil_isNight(TimeTypeUtil* this, int64_t timeInMillis) {
        int32_t hoursOfDay = TimeTypeUtil_getHourOfDay(this, timeInMillis);
        return hoursOfDay < 6 || hoursOfDay > 18;
}


// Java overloaded method: C needs a different name
const char* TimeTypeUtil_getNightOrDay(TimeTypeUtil* this, int64_t timeInMillis) {
        return (TimeTypeUtil_isNight(this, timeInMillis) ? this->NIGHT : this->DAY);
}

