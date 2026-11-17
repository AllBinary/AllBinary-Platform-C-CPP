#ifndef ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H
#define ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H
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
typedef struct BasicArrayListS BasicArrayListS;
typedef struct ForcedLogUtil ForcedLogUtil;
// #include "jsinterop/annotations/JsType.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct ImmutableBasicArrayList ImmutableBasicArrayList;
struct ImmutableBasicArrayList {
    BasicArrayListS base;
    const char* name;
};


ImmutableBasicArrayList* ImmutableBasicArrayList_new(const char* name, int32_t size);

void ImmutableBasicArrayList_init(ImmutableBasicArrayList* this, const char* name, int32_t size);

bool ImmutableBasicArrayList_add(ImmutableBasicArrayList* this, void* e);

void ImmutableBasicArrayList_addAt(ImmutableBasicArrayList* this, int32_t index, void* element);

const char* ImmutableBasicArrayList_toString(ImmutableBasicArrayList* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImmutableBasicArrayList_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImmutableBasicArrayList_register(void);


#endif // ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H
