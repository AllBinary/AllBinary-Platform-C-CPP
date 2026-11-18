#ifndef ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H
#define ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H
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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StdUtil StdUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Integer.h"

typedef struct InputProbability InputProbability;
struct InputProbability {
    int32_t** likelyhoodIntegerArray;
    int32_t* repeatLikelyhoodIntegerArray;
    int32_t max;
    TimeDelayHelper* timeDelayHelper;
};

extern int32_t InputProbability_INPUT_PROBABILITY;

InputProbability* InputProbability_new(int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper);

void InputProbability_init(InputProbability* this, int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper);

int32_t** InputProbability_getLikelyhoodIntegerArray(InputProbability* this);

int32_t* InputProbability_getRepeatLikelyhoodIntegerArray(InputProbability* this);

int32_t InputProbability_getMax(InputProbability* this);

TimeDelayHelper* InputProbability_getTimeDelayHelper(InputProbability* this);

ABHashtable* InputProbability_toHashtable(InputProbability* this);
#define InputProbability_new4 InputProbability_new
#define InputProbability_init4 InputProbability_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputProbability_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputProbability_register(void);

#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H
