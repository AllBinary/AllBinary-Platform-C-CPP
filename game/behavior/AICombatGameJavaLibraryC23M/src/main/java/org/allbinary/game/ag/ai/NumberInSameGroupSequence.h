#ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H
#define ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H
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
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
#include "java/lang/Integer.h"

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
#define NumberInSameGroupSequence_new0 NumberInSameGroupSequence_new
#define NumberInSameGroupSequence_init0 NumberInSameGroupSequence_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberInSameGroupSequence_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberInSameGroupSequence_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H
