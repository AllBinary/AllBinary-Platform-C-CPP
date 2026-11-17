#ifndef ORG_ALLBINARY_UTIL_ABCHARACTER_H
#define ORG_ALLBINARY_UTIL_ABCHARACTER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/lang/Character.h"

typedef struct ABCharacter ABCharacter;
struct ABCharacter {
    char unused;
};


ABCharacter* ABCharacter_new(void);
void ABCharacter_init(ABCharacter* this);

const char* ABCharacter_toString(uint16_t ch);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABCharacter_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABCharacter_register(void);


#endif // ORG_ALLBINARY_UTIL_ABCHARACTER_H
