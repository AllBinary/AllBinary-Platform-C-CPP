// Generated Code Do Not Modify
#include "org/allbinary/time/TimeUtil.h"


static TimeUtil* TimeUtil_instance;
static Calendar* TimeUtil_calendar;






void TimeUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TimeUtil_instance = TimeUtil_new();
    TimeUtil_calendar = Calendar_getInstance();
}

void TimeUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimeUtil", nullptr);
    java_register_method("TimeUtil", "setCalendar", (void*) TimeUtil_setCalendar);
    java_register_method("TimeUtil", "setCalendarWithTime", (void*) TimeUtil_setCalendarWithTime);
    java_register_method("TimeUtil", "setExpirationCalendar", (void*) TimeUtil_setExpirationCalendar);
    java_register_method("TimeUtil", "getTotalTime", (void*) TimeUtil_getTotalTime);
}

void TimeUtil_init(TimeUtil* this) {
    TimeUtil_register();
}

TimeUtil* TimeUtil_new(void) {
    TimeUtil* this = java_object_alloc(sizeof(TimeUtil), "TimeUtil");
    TimeUtil_init(this);
    return this;
}


TimeUtil* TimeUtil_getInstance(void) {
        return (TimeUtil_staticInit(), TimeUtil_instance);
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
        int32_t year = Calendar_get(calendar, (Calendar_staticInit(), Calendar_YEAR)) + Integer_intValue(yearsString);
        int32_t month = Calendar_get(calendar, (Calendar_staticInit(), Calendar_MONTH)) + Integer_intValue(monthsString);
        int32_t day = Calendar_get(calendar, (Calendar_staticInit(), Calendar_DAY_OF_MONTH)) + Integer_intValue(daysString);
        int32_t hour = Calendar_get(calendar, (Calendar_staticInit(), Calendar_HOUR)) + Integer_intValue(hoursString);
        int32_t minute = Calendar_get(calendar, (Calendar_staticInit(), Calendar_MINUTE)) + Integer_intValue(minutesString);
        int32_t second = Calendar_get(calendar, (Calendar_staticInit(), Calendar_SECOND)) + Integer_intValue(secondsString);
        Calendar_set(calendar, year, month, day, hour, minute, second);
}


int64_t TimeUtil_getTotalTime(TimeUtil* this, const char* yearString, const char* monthString, const char* dayString, const char* hourString, const char* minuteString, const char* secondString) {
        int64_t time = Calendar_getTimeInMillis((TimeUtil_staticInit(), TimeUtil_calendar));
        TimeUtil_setExpirationCalendar(this, (TimeUtil_staticInit(), TimeUtil_calendar), yearString, monthString, dayString, hourString, minuteString, secondString);
        int64_t timeDelta = Calendar_getTimeInMillis((TimeUtil_staticInit(), TimeUtil_calendar));
        return timeDelta - time;
}

