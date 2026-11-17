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

typedef struct Time Time;
struct Time {
    int64_t timeLong;
};


Time* Time_new(const char* time);

void Time_init(Time* this, const char* time);

Time* Time_new1(int64_t time);
void Time_init1(Time* this, int64_t time);
int64_t Time_getLong(Time* this);
int64_t Time_getlong(Time* this);
const char* Time_toString(Time* this);

static void Time_initFields(Time* this) {
    
}


void Time_init(Time* this, const char* time) {
    Time_initFields(this);
        this->timeLong = time;
}

Time* Time_new(const char* time) {
    Time* this = calloc(1, sizeof(Time));
    Time_init(this, time);
    return this;
}


void Time_init1(Time* this, int64_t time) {
    Time_initFields(this);
        this->timeLong = time;
}

Time* Time_new1(int64_t time) {
    Time* this = calloc(1, sizeof(Time));
    Time_init1(this, time);
    return this;
}


int64_t Time_getLong(Time* this) {
        return this->timeLong;
}


int64_t Time_getlong(Time* this) {
        return Long_longValue(this->timeLong);
}


const char* Time_toString(Time* this) {
        return JAVA_CALL(Time_getLong(this), toString);
}

