#ifndef ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H
#define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H
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
// package org.allbinary.logic.java.bool

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/lang/Boolean.h"

typedef struct BooleanFactory BooleanFactory;
struct BooleanFactory {
    bool TRUE;
    bool FALSE;
    const char* TRUE_STRING;
    const char* FALSE_STRING;
    const char* YES;
    const char* NO;
};


BooleanFactory* BooleanFactory_new(void);
void BooleanFactory_init(BooleanFactory* this);

BooleanFactory* BooleanFactory_getInstance(void);

const char* BooleanFactory_toStringb(BooleanFactory* this, bool bool_);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BooleanFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BooleanFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H
