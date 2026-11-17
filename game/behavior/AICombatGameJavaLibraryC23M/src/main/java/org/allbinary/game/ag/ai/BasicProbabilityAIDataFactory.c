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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/time/NoTimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct BasicProbabilityAIDataFactory BasicProbabilityAIDataFactory;
struct BasicProbabilityAIDataFactory {
    char unused;
};


BasicProbabilityAIDataFactory* BasicProbabilityAIDataFactory_new(void);
ABHashtable* BasicProbabilityAIDataFactory_getInstance(BasicProbabilityAIDataFactory* this);

void BasicProbabilityAIDataFactory_init(BasicProbabilityAIDataFactory* this) {
}

BasicProbabilityAIDataFactory* BasicProbabilityAIDataFactory_new(void) {
    BasicProbabilityAIDataFactory* this = calloc(1, sizeof(BasicProbabilityAIDataFactory));
    BasicProbabilityAIDataFactory_init(this);
    return this;
}


ABHashtable* BasicProbabilityAIDataFactory_getInstance(BasicProbabilityAIDataFactory* this) {
        int32_t** likelyhoodIntegerArray = ((int32_t**) java_array_new2(sizeof(int32_t), Canvas_KEY_NUM9 + 1, 2));
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        likelyhoodIntegerArray[Canvas_UP][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        likelyhoodIntegerArray[Canvas_UP][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10);
        likelyhoodIntegerArray[Canvas_DOWN][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10);
        likelyhoodIntegerArray[Canvas_DOWN][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 14);
        likelyhoodIntegerArray[Canvas_LEFT][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 14);
        likelyhoodIntegerArray[Canvas_LEFT][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 18);
        likelyhoodIntegerArray[Canvas_RIGHT][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 18);
        likelyhoodIntegerArray[Canvas_RIGHT][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 22);
        likelyhoodIntegerArray[Canvas_KEY_NUM7][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 22);
        likelyhoodIntegerArray[Canvas_KEY_NUM7][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 26);
        likelyhoodIntegerArray[Canvas_KEY_NUM9][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 26);
        likelyhoodIntegerArray[Canvas_KEY_NUM9][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 30);
        likelyhoodIntegerArray[Canvas_KEY_NUM1][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 30);
        likelyhoodIntegerArray[Canvas_KEY_NUM1][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 40);
        int32_t* repeatLikelyhoodIntegerArray = ((int32_t*) java_array_new(sizeof(int32_t), Canvas_KEY_NUM9 + 1));
        repeatLikelyhoodIntegerArray[Canvas_UP] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[Canvas_DOWN] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[Canvas_LEFT] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[Canvas_RIGHT] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[Canvas_KEY_NUM7] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[Canvas_KEY_NUM9] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[Canvas_KEY_NUM1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10);
        InputProbability* inputProbability = InputProbability_new(likelyhoodIntegerArray, repeatLikelyhoodIntegerArray, 42, NoTimeDelayHelper_SINGLETON);
        return InputProbability_toHashtable(inputProbability);
}

