#ifndef ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H
#define ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicArrayList BasicArrayList;
typedef struct ImmutableBasicArrayList ImmutableBasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonPhoneStrings CommonPhoneStrings;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsProperty.h"
#include "java/lang/System.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct BasicArrayListUtil BasicArrayListUtil;
struct BasicArrayListUtil {
    BasicArrayList*** NULL_ARRAY_OF_ARRAY;
    MyRandomFactory* myRandomFactory;
    BasicArrayList* immutableInstance;
};


BasicArrayListUtil* BasicArrayListUtil_new(void);
void BasicArrayListUtil_init(BasicArrayListUtil* this);

BasicArrayListUtil* BasicArrayListUtil_getInstance(void);

void* BasicArrayListUtil_getRandom(BasicArrayListUtil* this, BasicArrayList* list);

int32_t BasicArrayListUtil_getRandomIndex(BasicArrayListUtil* this, BasicArrayList* list);

void BasicArrayListUtil_reverse(BasicArrayListUtil* this, BasicArrayList* list);

const char* BasicArrayListUtil_log(BasicArrayListUtil* this, BasicArrayList* list);

BasicArrayList* BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil* this);

void BasicArrayListUtil_main(const char** args);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListUtil_register(void);


#endif // ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H
