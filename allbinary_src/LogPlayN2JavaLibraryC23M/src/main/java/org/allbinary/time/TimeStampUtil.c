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
#include "com/google/gwt/i18n/client/DateTimeFormat.h"
// #include "java/util/Date.h"

//ActualPlatform
typedef struct TimeStampUtil TimeStampUtil;
struct TimeStampUtil {
    char unused;
};

static TimeStampUtil* TimeStampUtil_instance;

TimeStampUtil* TimeStampUtil_new(void);
TimeStampUtil* TimeStampUtil_getInstance(void);

void TimeStampUtil_init(TimeStampUtil* this);
const char* TimeStampUtil_getAsString(TimeStampUtil* this);

// Static fields with runtime initializers: call this once at startup
void TimeStampUtil_staticInit(void) {
    TimeStampUtil_instance = TimeStampUtil_new();
}


TimeStampUtil* TimeStampUtil_getInstance(void) {
        return TimeStampUtil_instance;
}


void TimeStampUtil_init(TimeStampUtil* this) {
}

TimeStampUtil* TimeStampUtil_new(void) {
    TimeStampUtil* this = calloc(1, sizeof(TimeStampUtil));
    TimeStampUtil_init(this);
    return this;
}


const char* TimeStampUtil_getAsString(TimeStampUtil* this) {
        DateTimeFormat* simpleDataFormat = DateTimeFormat_getFormat("yyyy-MM-dd HH:mm:ss.SSS");
        Date* date = Date_new();
        return DateTimeFormat_format(simpleDataFormat, date);
}

