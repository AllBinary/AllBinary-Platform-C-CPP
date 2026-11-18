#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLE_H
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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CacheableInterface CacheableInterface;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct BasicArrayListCacheable BasicArrayListCacheable;
struct BasicArrayListCacheable {
    BasicArrayListD base;
    CacheableInterface CacheableInterface_interface;
};


BasicArrayListCacheable* BasicArrayListCacheable_new(void);
void BasicArrayListCacheable_init(BasicArrayListCacheable* this);

void* BasicArrayListCacheable_getKey(BasicArrayListCacheable* this);
#ifndef BasicArrayListCacheable_addAt
#define BasicArrayListCacheable_addAt BasicArrayList_addAt
#endif
#ifndef BasicArrayListCacheable_add
#define BasicArrayListCacheable_add BasicArrayList_add
#endif
#ifndef BasicArrayListCacheable_removeAt
#define BasicArrayListCacheable_removeAt BasicArrayList_removeAt
#endif
#ifndef BasicArrayListCacheable_remove
#define BasicArrayListCacheable_remove BasicArrayList_remove
#endif
#ifndef BasicArrayListCacheable_removeAll2
#define BasicArrayListCacheable_removeAll2 BasicArrayList_removeAll2
#endif
#ifndef BasicArrayListCacheable_addAll2
#define BasicArrayListCacheable_addAll2 BasicArrayList_addAll2
#endif
#ifndef BasicArrayListCacheable_addAllList
#define BasicArrayListCacheable_addAllList BasicArrayList_addAllList
#endif
#ifndef BasicArrayListCacheable_addAll
#define BasicArrayListCacheable_addAll BasicArrayList_addAll
#endif
#ifndef BasicArrayListCacheable_ensureCapacity
#define BasicArrayListCacheable_ensureCapacity BasicArrayList_ensureCapacity
#endif
#ifndef BasicArrayListCacheable_trimToSize
#define BasicArrayListCacheable_trimToSize BasicArrayList_trimToSize
#endif
#ifndef BasicArrayListCacheable_indexOf
#define BasicArrayListCacheable_indexOf BasicArrayList_indexOf
#endif
#ifndef BasicArrayListCacheable_lastIndexOf
#define BasicArrayListCacheable_lastIndexOf BasicArrayList_lastIndexOf
#endif
#ifndef BasicArrayListCacheable_get
#define BasicArrayListCacheable_get BasicArrayList_get
#endif
#ifndef BasicArrayListCacheable_set
#define BasicArrayListCacheable_set BasicArrayList_set
#endif
#ifndef BasicArrayListCacheable_clear
#define BasicArrayListCacheable_clear BasicArrayList_clear
#endif
#ifndef BasicArrayListCacheable_size
#define BasicArrayListCacheable_size BasicArrayList_size
#endif
#ifndef BasicArrayListCacheable_isEmpty
#define BasicArrayListCacheable_isEmpty BasicArrayList_isEmpty
#endif
#ifndef BasicArrayListCacheable_contains
#define BasicArrayListCacheable_contains BasicArrayList_contains
#endif
#ifndef BasicArrayListCacheable_toArray
#define BasicArrayListCacheable_toArray BasicArrayList_toArray
#endif
#ifndef BasicArrayListCacheable_toArrayType
#define BasicArrayListCacheable_toArrayType BasicArrayList_toArrayType
#endif
#ifndef BasicArrayListCacheable_clone
#define BasicArrayListCacheable_clone BasicArrayList_clone
#endif
#ifndef BasicArrayListCacheable_toString
#define BasicArrayListCacheable_toString BasicArrayList_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListCacheable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListCacheable_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLE_H
