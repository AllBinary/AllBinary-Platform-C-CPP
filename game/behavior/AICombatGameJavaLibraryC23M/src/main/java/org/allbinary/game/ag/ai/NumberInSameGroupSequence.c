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
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"

typedef struct NumberInSameGroupSequence NumberInSameGroupSequence;
struct NumberInSameGroupSequence {
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_ONE;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_TWO;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_THREE;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_SIX;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT;
    int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_NINE;
    int32_t* NUMBER_ON_SAME_TEAM_SEQUENCE;
};


NumberInSameGroupSequence* NumberInSameGroupSequence_new(void);
NumberInSameGroupSequence* NumberInSameGroupSequence_getInstance(void);

void NumberInSameGroupSequence_init(NumberInSameGroupSequence* this);

static void NumberInSameGroupSequence_initFields(NumberInSameGroupSequence* this) {
    
    
    
    
    
    
    
    
    
    
    
}


NumberInSameGroupSequence* NumberInSameGroupSequence_getInstance(void) {
        return NumberInSameGroupSequence_new();
}


void NumberInSameGroupSequence_init(NumberInSameGroupSequence* this) {
    NumberInSameGroupSequence_initFields(this);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 100);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_ONE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 101);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_TWO = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 102);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_THREE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 103);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 104);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 105);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_SIX = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 106);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 107);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 108);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_NINE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 109);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ this->NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO, this->NUMBER_ON_SAME_TEAM_SEQUENCE_ONE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_THREE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SIX, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN, this->NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT, this->NUMBER_ON_SAME_TEAM_SEQUENCE_NINE }) / sizeof(int32_t), (int32_t[]){ this->NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO, this->NUMBER_ON_SAME_TEAM_SEQUENCE_ONE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_THREE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SIX, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN, this->NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT, this->NUMBER_ON_SAME_TEAM_SEQUENCE_NINE }));
}

NumberInSameGroupSequence* NumberInSameGroupSequence_new(void) {
    NumberInSameGroupSequence* this = calloc(1, sizeof(NumberInSameGroupSequence));
    NumberInSameGroupSequence_init(this);
    return this;
}

