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
#include "org/junit/jupiter/api/Assertions.h"
#include "org/junit/jupiter/api/DisplayName.h"
#include "org/junit/jupiter/api/Test.h"

typedef struct TimeTypeTest TimeTypeTest;
struct TimeTypeTest {
    char unused;
};


TimeTypeTest* TimeTypeTest_new(void);
static int64_t TimeTypeTest_millisForHourLocal(int32_t hour);
void TimeTypeTest_isNight_returnsTrue_for_hours_less_than_6(TimeTypeTest* this);
void TimeTypeTest_isNight_returnsTrue_for_hours_greater_than_18(TimeTypeTest* this);
void TimeTypeTest_isNight_returnsFalse_for_boundary_hours_6_and_18(TimeTypeTest* this);
void TimeTypeTest_getNightOrDay_returns_expected_label(TimeTypeTest* this);
void TimeTypeTest_getHourOfDay_long_converts_epoch_to_local_hour(TimeTypeTest* this);
void TimeTypeTest_isNight_long_expected_ranges(TimeTypeTest* this);
void TimeTypeTest_getNightOrDay_long_consistency(TimeTypeTest* this);
void TimeTypeTest_boundaries_day_for_long_based_api(TimeTypeTest* this);
void TimeTypeTest_constants_accessible_and_stable(TimeTypeTest* this);
void TimeTypeTest_getInstance_returns_same_singleton(TimeTypeTest* this);

void TimeTypeTest_init(TimeTypeTest* this) {
}

TimeTypeTest* TimeTypeTest_new(void) {
    TimeTypeTest* this = calloc(1, sizeof(TimeTypeTest));
    TimeTypeTest_init(this);
    return this;
}


static int64_t TimeTypeTest_millisForHourLocal(int32_t hour) {
        Calendar* cal = Calendar_getInstance();
        Calendar_set(cal, Calendar_HOUR_OF_DAY, hour);
        Calendar_set(cal, Calendar_MINUTE, 0);
        Calendar_set(cal, Calendar_SECOND, 0);
        Calendar_set(cal, Calendar_MILLISECOND, 0);
        return Calendar_getTimeInMillis(cal);
}


void TimeTypeTest_isNight_returnsTrue_for_hours_less_than_6(TimeTypeTest* this) {
        /* Otherwise - statement - ForEachStmt */
}


void TimeTypeTest_isNight_returnsTrue_for_hours_greater_than_18(TimeTypeTest* this) {
        /* Otherwise - statement - ForEachStmt */
}


void TimeTypeTest_isNight_returnsFalse_for_boundary_hours_6_and_18(TimeTypeTest* this) {
        /* Otherwise - statement - ForEachStmt */
}


void TimeTypeTest_getNightOrDay_returns_expected_label(TimeTypeTest* this) {
        TimeTypeUtil* nightUtil = TestableTimeTypeUtil_new(0);
        Assertions_assertEquals(nightUtil->NIGHT, TimeTypeUtil_getNightOrDay(nightUtil));
        TimeTypeUtil* dayUtil = TestableTimeTypeUtil_new(12);
        Assertions_assertEquals(dayUtil->DAY, TimeTypeUtil_getNightOrDay(dayUtil));
}


void TimeTypeTest_getHourOfDay_long_converts_epoch_to_local_hour(TimeTypeTest* this) {
        TimeTypeUtil* util = TimeTypeUtil_new();
        /* Otherwise - statement - ForEachStmt */
}


void TimeTypeTest_isNight_long_expected_ranges(TimeTypeTest* this) {
        TimeTypeUtil* util = TimeTypeUtil_new();
        /* Otherwise - statement - ForEachStmt */
        /* Otherwise - statement - ForEachStmt */
}


void TimeTypeTest_getNightOrDay_long_consistency(TimeTypeTest* this) {
        TimeTypeUtil* util = TimeTypeUtil_new();
        int64_t nightMillis = TimeTypeTest_millisForHourLocal(0);
        int64_t dayMillis = TimeTypeTest_millisForHourLocal(12);
        Assertions_assertEquals(util->NIGHT, TimeTypeUtil_getNightOrDay(util, nightMillis));
        Assertions_assertEquals(util->DAY, TimeTypeUtil_getNightOrDay(util, dayMillis));
}


void TimeTypeTest_boundaries_day_for_long_based_api(TimeTypeTest* this) {
        TimeTypeUtil* util = TimeTypeUtil_new();
        /* Otherwise - statement - ForEachStmt */
}


void TimeTypeTest_constants_accessible_and_stable(TimeTypeTest* this) {
        TimeTypeUtil* util = TimeTypeUtil_new();
        Assertions_assertEquals("Night", util->NIGHT);
        Assertions_assertEquals("Day", util->DAY);
}


void TimeTypeTest_getInstance_returns_same_singleton(TimeTypeTest* this) {
        TimeTypeUtil* a = TimeTypeUtil_getInstance();
        TimeTypeUtil* b = TimeTypeUtil_getInstance();
        Assertions_assertSame(a, b);
}

typedef struct TestableTimeTypeUtil TestableTimeTypeUtil;
struct TestableTimeTypeUtil {
    TimeTypeUtil base;
    int32_t hour;
};


TestableTimeTypeUtil* TestableTimeTypeUtil_new(int32_t hour);
    
    void TimeTypeTest_init(TimeTypeTest* this, int32_t hour);
    int32_t TimeTypeTest_getHourOfDay(TimeTypeTest* this);

static void TestableTimeTypeUtil_initFields(TestableTimeTypeUtil* this) {
        
}
    

    void TimeTypeTest_init(TimeTypeTest* this, int32_t hour) {
    TimeTypeUtil_init(&this->base);
        TimeTypeTest_initFields(this);
            this->hour = hour;
    }

    TimeTypeTest* TimeTypeTest_new(int32_t hour) {
        TimeTypeTest* this = calloc(1, sizeof(TimeTypeTest));
        TimeTypeTest_init(this, hour);
        return this;
    }
    

    int32_t TimeTypeTest_getHourOfDay(TimeTypeTest* this) {
            return this->hour;
    }

