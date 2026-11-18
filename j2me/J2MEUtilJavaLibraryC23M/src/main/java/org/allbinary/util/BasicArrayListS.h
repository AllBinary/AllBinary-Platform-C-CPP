#ifndef ORG_ALLBINARY_UTIL_BASICARRAYLISTS_H
#define ORG_ALLBINARY_UTIL_BASICARRAYLISTS_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct NullUtil NullUtil;
typedef struct StringMaker StringMaker;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsConstructor.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct BasicArrayListS BasicArrayListS;
struct BasicArrayListS {
    BasicArrayList base;
};


BasicArrayListS* BasicArrayListS_new(int32_t size);

void BasicArrayListS_init(BasicArrayListS* this, int32_t size);
#define BasicArrayListS_new1 BasicArrayListS_new
#define BasicArrayListS_init1 BasicArrayListS_init
#ifndef BasicArrayListS_addAt
#define BasicArrayListS_addAt BasicArrayList_addAt
#endif
#ifndef BasicArrayListS_add
#define BasicArrayListS_add BasicArrayList_add
#endif
#ifndef BasicArrayListS_removeAt
#define BasicArrayListS_removeAt BasicArrayList_removeAt
#endif
#ifndef BasicArrayListS_remove
#define BasicArrayListS_remove BasicArrayList_remove
#endif
#ifndef BasicArrayListS_removeAll2
#define BasicArrayListS_removeAll2 BasicArrayList_removeAll2
#endif
#ifndef BasicArrayListS_addAll2
#define BasicArrayListS_addAll2 BasicArrayList_addAll2
#endif
#ifndef BasicArrayListS_addAllList
#define BasicArrayListS_addAllList BasicArrayList_addAllList
#endif
#ifndef BasicArrayListS_addAll
#define BasicArrayListS_addAll BasicArrayList_addAll
#endif
#ifndef BasicArrayListS_ensureCapacity
#define BasicArrayListS_ensureCapacity BasicArrayList_ensureCapacity
#endif
#ifndef BasicArrayListS_trimToSize
#define BasicArrayListS_trimToSize BasicArrayList_trimToSize
#endif
#ifndef BasicArrayListS_indexOf
#define BasicArrayListS_indexOf BasicArrayList_indexOf
#endif
#ifndef BasicArrayListS_lastIndexOf
#define BasicArrayListS_lastIndexOf BasicArrayList_lastIndexOf
#endif
#ifndef BasicArrayListS_get
#define BasicArrayListS_get BasicArrayList_get
#endif
#ifndef BasicArrayListS_set
#define BasicArrayListS_set BasicArrayList_set
#endif
#ifndef BasicArrayListS_clear
#define BasicArrayListS_clear BasicArrayList_clear
#endif
#ifndef BasicArrayListS_size
#define BasicArrayListS_size BasicArrayList_size
#endif
#ifndef BasicArrayListS_isEmpty
#define BasicArrayListS_isEmpty BasicArrayList_isEmpty
#endif
#ifndef BasicArrayListS_contains
#define BasicArrayListS_contains BasicArrayList_contains
#endif
#ifndef BasicArrayListS_toArray
#define BasicArrayListS_toArray BasicArrayList_toArray
#endif
#ifndef BasicArrayListS_toArrayType
#define BasicArrayListS_toArrayType BasicArrayList_toArrayType
#endif
#ifndef BasicArrayListS_clone
#define BasicArrayListS_clone BasicArrayList_clone
#endif
#ifndef BasicArrayListS_toString
#define BasicArrayListS_toString BasicArrayList_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListS_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListS_register(void);


#endif // ORG_ALLBINARY_UTIL_BASICARRAYLISTS_H
