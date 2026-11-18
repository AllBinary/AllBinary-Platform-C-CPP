#ifndef ORG_ALLBINARY_LOGIC_PROPERTYINITUTIL_H
#define ORG_ALLBINARY_LOGIC_PROPERTYINITUTIL_H
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
// package org.allbinary.logic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;

typedef struct PropertyInitUtil PropertyInitUtil;
struct PropertyInitUtil {
    char unused;
};


PropertyInitUtil* PropertyInitUtil_new(void);
void PropertyInitUtil_init(PropertyInitUtil* this);

PropertyInitUtil* PropertyInitUtil_getInstance(int32_t value);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PropertyInitUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PropertyInitUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_PROPERTYINITUTIL_H
