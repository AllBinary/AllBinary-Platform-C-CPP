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
#define ImmutableBasicArrayList_new2 ImmutableBasicArrayList_new
#define ImmutableBasicArrayList_init2 ImmutableBasicArrayList_init
#ifndef ImmutableBasicArrayList_removeAt
#define ImmutableBasicArrayList_removeAt BasicArrayList_removeAt
#endif
#ifndef ImmutableBasicArrayList_remove
#define ImmutableBasicArrayList_remove BasicArrayList_remove
#endif
#ifndef ImmutableBasicArrayList_removeAll2
#define ImmutableBasicArrayList_removeAll2 BasicArrayList_removeAll2
#endif
#ifndef ImmutableBasicArrayList_addAll2
#define ImmutableBasicArrayList_addAll2 BasicArrayList_addAll2
#endif
#ifndef ImmutableBasicArrayList_addAllList
#define ImmutableBasicArrayList_addAllList BasicArrayList_addAllList
#endif
#ifndef ImmutableBasicArrayList_addAll
#define ImmutableBasicArrayList_addAll BasicArrayList_addAll
#endif
#ifndef ImmutableBasicArrayList_ensureCapacity
#define ImmutableBasicArrayList_ensureCapacity BasicArrayList_ensureCapacity
#endif
#ifndef ImmutableBasicArrayList_trimToSize
#define ImmutableBasicArrayList_trimToSize BasicArrayList_trimToSize
#endif
#ifndef ImmutableBasicArrayList_indexOf
#define ImmutableBasicArrayList_indexOf BasicArrayList_indexOf
#endif
#ifndef ImmutableBasicArrayList_lastIndexOf
#define ImmutableBasicArrayList_lastIndexOf BasicArrayList_lastIndexOf
#endif
#ifndef ImmutableBasicArrayList_get
#define ImmutableBasicArrayList_get BasicArrayList_get
#endif
#ifndef ImmutableBasicArrayList_set
#define ImmutableBasicArrayList_set BasicArrayList_set
#endif
#ifndef ImmutableBasicArrayList_clear
#define ImmutableBasicArrayList_clear BasicArrayList_clear
#endif
#ifndef ImmutableBasicArrayList_size
#define ImmutableBasicArrayList_size BasicArrayList_size
#endif
#ifndef ImmutableBasicArrayList_isEmpty
#define ImmutableBasicArrayList_isEmpty BasicArrayList_isEmpty
#endif
#ifndef ImmutableBasicArrayList_contains
#define ImmutableBasicArrayList_contains BasicArrayList_contains
#endif
#ifndef ImmutableBasicArrayList_toArray
#define ImmutableBasicArrayList_toArray BasicArrayList_toArray
#endif
#ifndef ImmutableBasicArrayList_toArrayType
#define ImmutableBasicArrayList_toArrayType BasicArrayList_toArrayType
#endif
#ifndef ImmutableBasicArrayList_clone
#define ImmutableBasicArrayList_clone BasicArrayList_clone
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImmutableBasicArrayList_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImmutableBasicArrayList_register(void);


#endif // ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H
