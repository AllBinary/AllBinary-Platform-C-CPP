#ifndef ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
#define ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PrimitiveLongSingleton PrimitiveLongSingleton;
typedef struct ScaleFactorFactory ScaleFactorFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/logic/math/PrimitiveLongSingleton.h")
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Integer.h"
#include "java/lang/Long.h"

typedef struct BaseGameStatistics BaseGameStatistics;
struct BaseGameStatistics {
    TimeDelayHelper* timeDelayHelper;
    TimeDelayHelper* updateDelayHelper;
    int64_t totalRefreshes;
    int64_t totalFrames;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    int32_t DEFAULT_SCALE_FACTOR;
    const char* NOT;
    const char* EMPTY_STRING;
    const char** STRING_ARRAY;
    uint16_t SPACE_CHAR;
    uint16_t PLUS_CHAR;
    uint16_t X_CHAR;
    uint16_t** CHAR_ARRAY;
    PrimitiveLongSingleton* primitiveLongSingleton;
};


BaseGameStatistics* BaseGameStatistics_new(void);

void BaseGameStatistics_init(BaseGameStatistics* this);

void BaseGameStatistics_initMethod(BaseGameStatistics* this);

void BaseGameStatistics_add(BaseGameStatistics* this, const char* string);

void BaseGameStatistics_process(BaseGameStatistics* this);

void BaseGameStatistics_nextFrame(BaseGameStatistics* this);

void BaseGameStatistics_nextRefresh(BaseGameStatistics* this);

int16_t BaseGameStatistics_getRefreshRate(BaseGameStatistics* this);

TimeDelayHelper* BaseGameStatistics_getTimeDelayHelper(BaseGameStatistics* this);

uint16_t** BaseGameStatistics_to2DCharArray(BaseGameStatistics* this);

const char** BaseGameStatistics_toStringArray(BaseGameStatistics* this);

const char* BaseGameStatistics_toStringAt(BaseGameStatistics* this, int64_t totalTime);

const char* BaseGameStatistics_toString(BaseGameStatistics* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseGameStatistics_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseGameStatistics_register(void);


#endif // ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
