#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H
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
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameAdStateFactory GameAdStateFactory;
typedef struct GameAdState GameAdState;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;

typedef struct BottomLimiter BottomLimiter;
struct BottomLimiter {
    int32_t bottom;
    int32_t deltaY;
    int32_t lower;
    int32_t higher;
};


BottomLimiter* BottomLimiter_new(void);

BottomLimiter* BottomLimiter_getInstance(void);

void BottomLimiter_init(BottomLimiter* this);

void BottomLimiter_initMethod(BottomLimiter* this, int32_t lower, int32_t higher);

void BottomLimiter_update(BottomLimiter* this);

int32_t BottomLimiter_getDeltaY(BottomLimiter* this);

int32_t BottomLimiter_getBottom(BottomLimiter* this);
#define BottomLimiter_new0 BottomLimiter_new
#define BottomLimiter_init0 BottomLimiter_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BottomLimiter_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BottomLimiter_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_BOTTOMLIMITER_H
