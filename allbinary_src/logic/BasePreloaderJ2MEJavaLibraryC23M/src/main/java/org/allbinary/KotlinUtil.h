#ifndef ORG_ALLBINARY_KOTLINUTIL_H
#define ORG_ALLBINARY_KOTLINUTIL_H
// Generated Code Do Not Modify
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringUtil StringUtil;

typedef struct KotlinUtil KotlinUtil;
struct KotlinUtil {
    char unused;
};


KotlinUtil* KotlinUtil_new(void);
void KotlinUtil_init(KotlinUtil* this);

bool KotlinUtil_isKotlin(void);

const char* KotlinUtil_getShortName(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KotlinUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KotlinUtil_register(void);


#endif // ORG_ALLBINARY_KOTLINUTIL_H
