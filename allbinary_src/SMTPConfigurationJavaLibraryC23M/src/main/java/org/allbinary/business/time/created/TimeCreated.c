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
// package org.allbinary.business.time.created

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/time/Time.h"

typedef struct TimeCreated TimeCreated;
struct TimeCreated {
    Time base;
};


TimeCreated* TimeCreated_new(const char* time);

void TimeCreated_init(TimeCreated* this, const char* time);

TimeCreated* TimeCreated_new1(int64_t time);
void TimeCreated_init1(TimeCreated* this, int64_t time);


void TimeCreated_init(TimeCreated* this, const char* time) {
        Time_init(&this->base, time);
}

TimeCreated* TimeCreated_new(const char* time) {
    TimeCreated* this = calloc(1, sizeof(TimeCreated));
    TimeCreated_init(this, time);
    return this;
}


void TimeCreated_init1(TimeCreated* this, int64_t time) {
        Time_init(&this->base, time);
}

TimeCreated* TimeCreated_new1(int64_t time) {
    TimeCreated* this = calloc(1, sizeof(TimeCreated));
    TimeCreated_init1(this, time);
    return this;
}

