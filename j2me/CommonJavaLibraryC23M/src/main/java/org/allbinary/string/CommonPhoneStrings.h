#ifndef ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H
#define ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H
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
// package org.allbinary.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"

typedef struct CommonPhoneStrings CommonPhoneStrings;
struct CommonPhoneStrings {
    const char* UP;
    const char* DOWN;
    const char* LEFT;
    const char* RIGHT;
    const char* ZERO;
    const char* ONE;
    const char* TWO;
    const char* THREE;
    const char* FOUR;
    const char* FIVE;
    const char* SIX;
    const char* SEVEN;
    const char* EIGHT;
    const char* NINE;
    const char* POUND;
    const char* STAR;
    const char* FIRE;
};


CommonPhoneStrings* CommonPhoneStrings_new(void);
void CommonPhoneStrings_init(CommonPhoneStrings* this);

CommonPhoneStrings* CommonPhoneStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommonPhoneStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommonPhoneStrings_register(void);


#endif // ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H
