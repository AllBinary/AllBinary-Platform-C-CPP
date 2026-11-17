#ifndef ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H
#define ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H
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
typedef struct TimeDelayHelper TimeDelayHelper;
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct NoTimeDelayHelper NoTimeDelayHelper;
struct NoTimeDelayHelper {
    TimeDelayHelper base;
};

extern NoTimeDelayHelper* NoTimeDelayHelper_SINGLETON;

NoTimeDelayHelper* NoTimeDelayHelper_new(void);

void NoTimeDelayHelper_init(NoTimeDelayHelper* this);

bool NoTimeDelayHelper_isTimeTNT(NoTimeDelayHelper* this);

bool NoTimeDelayHelper_isTimeSinceTNT(NoTimeDelayHelper* this, int32_t delay);

bool NoTimeDelayHelper_isTime(NoTimeDelayHelper* this, int64_t currentTime);

bool NoTimeDelayHelper_isTimeSince(NoTimeDelayHelper* this, int32_t delay, int64_t currentTime);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoTimeDelayHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoTimeDelayHelper_register(void);


#endif // ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H
