#ifndef ORG_ALLBINARY_DIRECTION_DIRECTION_H
#define ORG_ALLBINARY_DIRECTION_DIRECTION_H
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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;

typedef struct Direction Direction;
struct Direction {
    const char* name;
    const char* otherName;
    int32_t value;
    int32_t frameFactor;
};


Direction* Direction_new(const char* name, const char* otherName, int32_t value, int32_t frameFactor);

void Direction_init(Direction* this, const char* name, const char* otherName, int32_t value, int32_t frameFactor);

Direction* Direction_getInstance(int32_t direction);

int32_t Direction_getValue(Direction* this);

int32_t Direction_getFrameFactor(Direction* this);

const char* Direction_getOtherName(Direction* this);

const char* Direction_getName(Direction* this);

const char* Direction_toString(Direction* this);
#define Direction_new4 Direction_new
#define Direction_init4 Direction_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Direction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Direction_register(void);


#endif // ORG_ALLBINARY_DIRECTION_DIRECTION_H
