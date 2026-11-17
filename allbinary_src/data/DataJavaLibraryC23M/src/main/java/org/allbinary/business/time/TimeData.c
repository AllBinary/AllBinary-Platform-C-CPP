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
// package org.allbinary.business.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TimeData TimeData;
struct TimeData {
    const char* NAME;
    const char* START;
    const char* END;
};

static TimeData* TimeData_instance;

TimeData* TimeData_new(void);
TimeData* TimeData_getInstance(void);

void TimeData_init(TimeData* this);

// Static fields with runtime initializers: call this once at startup
void TimeData_staticInit(void) {
    TimeData_instance = TimeData_new();
}

static void TimeData_initFields(TimeData* this) {
    this->NAME = "TIME_NAME";
    this->START = "TIME_START";
    this->END = "TIME_END";
}


TimeData* TimeData_getInstance(void) {
        return TimeData_instance;
}


void TimeData_init(TimeData* this) {
    TimeData_initFields(this);
}

TimeData* TimeData_new(void) {
    TimeData* this = calloc(1, sizeof(TimeData));
    TimeData_init(this);
    return this;
}

