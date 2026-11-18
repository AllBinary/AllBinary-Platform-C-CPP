#ifndef ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H
#define ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H
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
#include "java/text/SimpleDateFormat.h"
#include "java/util/Calendar.h"
#include "java/util/Date.h"

//ActualPlatform
typedef struct TimeStampUtil TimeStampUtil;
struct TimeStampUtil {
    SimpleDateFormat* simpleDataFormat;
};


TimeStampUtil* TimeStampUtil_new(void);

TimeStampUtil* TimeStampUtil_getInstance(void);

void TimeStampUtil_init(TimeStampUtil* this);

const char* TimeStampUtil_getAsString(TimeStampUtil* this);
#define TimeStampUtil_new0 TimeStampUtil_new
#define TimeStampUtil_init0 TimeStampUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimeStampUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimeStampUtil_register(void);


#endif // ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H
