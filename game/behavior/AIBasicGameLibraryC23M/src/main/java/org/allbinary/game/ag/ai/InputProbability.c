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
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct InputProbability InputProbability;
struct InputProbability {
    int32_t** likelyhoodIntegerArray;
    int32_t* repeatLikelyhoodIntegerArray;
    int32_t max;
    TimeDelayHelper* timeDelayHelper;
};

int32_t InputProbability_INPUT_PROBABILITY;

InputProbability* InputProbability_new(int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper);

void InputProbability_init(InputProbability* this, int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper);
int32_t** InputProbability_getLikelyhoodIntegerArray(InputProbability* this);
int32_t* InputProbability_getRepeatLikelyhoodIntegerArray(InputProbability* this);
int32_t InputProbability_getMax(InputProbability* this);
TimeDelayHelper* InputProbability_getTimeDelayHelper(InputProbability* this);
ABHashtable* InputProbability_toHashtable(InputProbability* this);

// Static fields with runtime initializers: call this once at startup
void InputProbability_staticInit(void) {
    InputProbability_INPUT_PROBABILITY = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
}

static void InputProbability_initFields(InputProbability* this) {
    
    
    
    
}


void InputProbability_init(InputProbability* this, int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper) {
    InputProbability_initFields(this);
        this->likelyhoodIntegerArray = likelyhoodIntegerArray;
        this->repeatLikelyhoodIntegerArray = repeatLikelyhoodIntegerArray;
        this->max = max;
        this->timeDelayHelper = timeDelayHelper;
}

InputProbability* InputProbability_new(int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper) {
    InputProbability* this = calloc(1, sizeof(InputProbability));
    InputProbability_init(this, likelyhoodIntegerArray, repeatLikelyhoodIntegerArray, max, timeDelayHelper);
    return this;
}


int32_t** InputProbability_getLikelyhoodIntegerArray(InputProbability* this) {
        return this->likelyhoodIntegerArray;
}


int32_t* InputProbability_getRepeatLikelyhoodIntegerArray(InputProbability* this) {
        return this->repeatLikelyhoodIntegerArray;
}


int32_t InputProbability_getMax(InputProbability* this) {
        return this->max;
}


TimeDelayHelper* InputProbability_getTimeDelayHelper(InputProbability* this) {
        return this->timeDelayHelper;
}


ABHashtable* InputProbability_toHashtable(InputProbability* this) {
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        ABHashtable_put(hashtable, InputProbability_INPUT_PROBABILITY, this);
        return hashtable;
}

