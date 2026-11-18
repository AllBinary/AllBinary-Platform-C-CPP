#ifndef ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H
#define ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H
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
typedef struct InputProbability InputProbability;
typedef struct Canvas Canvas;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct NoTimeDelayHelper NoTimeDelayHelper;
typedef struct ABHashtable ABHashtable;
#include "java/lang/Integer.h"

typedef struct BasicProbabilityAIDataFactory BasicProbabilityAIDataFactory;
struct BasicProbabilityAIDataFactory {
    char unused;
};


BasicProbabilityAIDataFactory* BasicProbabilityAIDataFactory_new(void);
void BasicProbabilityAIDataFactory_init(BasicProbabilityAIDataFactory* this);

ABHashtable* BasicProbabilityAIDataFactory_getInstance(BasicProbabilityAIDataFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicProbabilityAIDataFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicProbabilityAIDataFactory_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_BASICPROBABILITYAIDATAFACTORY_H
