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
// package org.allbinary.business.time.modified

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/time/Time.h"

typedef struct TimeLastModified TimeLastModified;
struct TimeLastModified {
    Time base;
};


TimeLastModified* TimeLastModified_new(const char* time);

void TimeLastModified_init(TimeLastModified* this, const char* time);

TimeLastModified* TimeLastModified_new1(int64_t time);
void TimeLastModified_init1(TimeLastModified* this, int64_t time);


void TimeLastModified_init(TimeLastModified* this, const char* time) {
        Time_init(&this->base, time);
}

TimeLastModified* TimeLastModified_new(const char* time) {
    TimeLastModified* this = calloc(1, sizeof(TimeLastModified));
    TimeLastModified_init(this, time);
    return this;
}


void TimeLastModified_init1(TimeLastModified* this, int64_t time) {
        Time_init(&this->base, time);
}

TimeLastModified* TimeLastModified_new1(int64_t time) {
    TimeLastModified* this = calloc(1, sizeof(TimeLastModified));
    TimeLastModified_init1(this, time);
    return this;
}

