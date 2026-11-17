#ifndef ORG_ALLBINARY_TIME_STUPIDTIMER_H
#define ORG_ALLBINARY_TIME_STUPIDTIMER_H
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
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct Visitor Visitor;
typedef struct CommonStrings CommonStrings;
typedef struct ThreadObjectUtil ThreadObjectUtil;
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/thread/ThreadObjectUtil.h")
#include "org/allbinary/thread/ThreadObjectUtil.h"
#endif
#include "java/lang/Boolean.h"

typedef struct StupidTimer StupidTimer;
struct StupidTimer {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    NullUtil* nullUtil;
    ThreadObjectUtil* threadObjectUtil;
};


StupidTimer* StupidTimer_new(void);
void StupidTimer_init(StupidTimer* this);


void StupidTimer_visit(StupidTimer* this, Visitor* visitorInterface, TimeDelayHelper* timeDelayHelper);

void StupidTimer_stopWaiting(StupidTimer* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StupidTimer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StupidTimer_register(void);


#endif // ORG_ALLBINARY_TIME_STUPIDTIMER_H
