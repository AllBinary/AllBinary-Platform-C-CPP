#ifndef ORG_ALLBINARY_UTIL_BASICARRAYLISTD_H
#define ORG_ALLBINARY_UTIL_BASICARRAYLISTD_H
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
typedef struct BasicArrayListS BasicArrayListS;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsConstructor.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct BasicArrayListD BasicArrayListD;
struct BasicArrayListD {
    BasicArrayListS base;
};


BasicArrayListD* BasicArrayListD_new(void);

void BasicArrayListD_init(BasicArrayListD* this);
#define BasicArrayListD_new0 BasicArrayListD_new
#define BasicArrayListD_init0 BasicArrayListD_init
#ifndef BasicArrayListD_addAt
#define BasicArrayListD_addAt BasicArrayList_addAt
#endif
#ifndef BasicArrayListD_add
#define BasicArrayListD_add BasicArrayList_add
#endif
#ifndef BasicArrayListD_removeAt
#define BasicArrayListD_removeAt BasicArrayList_removeAt
#endif
#ifndef BasicArrayListD_remove
#define BasicArrayListD_remove BasicArrayList_remove
#endif
#ifndef BasicArrayListD_removeAll2
#define BasicArrayListD_removeAll2 BasicArrayList_removeAll2
#endif
#ifndef BasicArrayListD_addAll2
#define BasicArrayListD_addAll2 BasicArrayList_addAll2
#endif
#ifndef BasicArrayListD_addAllList
#define BasicArrayListD_addAllList BasicArrayList_addAllList
#endif
#ifndef BasicArrayListD_addAll
#define BasicArrayListD_addAll BasicArrayList_addAll
#endif
#ifndef BasicArrayListD_ensureCapacity
#define BasicArrayListD_ensureCapacity BasicArrayList_ensureCapacity
#endif
#ifndef BasicArrayListD_trimToSize
#define BasicArrayListD_trimToSize BasicArrayList_trimToSize
#endif
#ifndef BasicArrayListD_indexOf
#define BasicArrayListD_indexOf BasicArrayList_indexOf
#endif
#ifndef BasicArrayListD_lastIndexOf
#define BasicArrayListD_lastIndexOf BasicArrayList_lastIndexOf
#endif
#ifndef BasicArrayListD_get
#define BasicArrayListD_get BasicArrayList_get
#endif
#ifndef BasicArrayListD_set
#define BasicArrayListD_set BasicArrayList_set
#endif
#ifndef BasicArrayListD_clear
#define BasicArrayListD_clear BasicArrayList_clear
#endif
#ifndef BasicArrayListD_size
#define BasicArrayListD_size BasicArrayList_size
#endif
#ifndef BasicArrayListD_isEmpty
#define BasicArrayListD_isEmpty BasicArrayList_isEmpty
#endif
#ifndef BasicArrayListD_contains
#define BasicArrayListD_contains BasicArrayList_contains
#endif
#ifndef BasicArrayListD_toArray
#define BasicArrayListD_toArray BasicArrayList_toArray
#endif
#ifndef BasicArrayListD_toArrayType
#define BasicArrayListD_toArrayType BasicArrayList_toArrayType
#endif
#ifndef BasicArrayListD_clone
#define BasicArrayListD_clone BasicArrayList_clone
#endif
#ifndef BasicArrayListD_toString
#define BasicArrayListD_toString BasicArrayList_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListD_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListD_register(void);


#endif // ORG_ALLBINARY_UTIL_BASICARRAYLISTD_H
