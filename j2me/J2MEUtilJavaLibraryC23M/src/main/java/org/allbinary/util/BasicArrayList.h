#ifndef ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
#define ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
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
typedef struct ArrayUtil ArrayUtil;
typedef struct BasicArrayListS BasicArrayListS;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"
#include "java/lang/System.h"
#if __has_include("org/allbinary/util/ArrayUtil.h")
#include "org/allbinary/util/ArrayUtil.h"
#endif

//This is a very fast and simple resizable list.
typedef struct BasicArrayList BasicArrayList;
struct BasicArrayList {
    ArrayUtil* arrayUtil;
    void** objectArray;
    int32_t currentIndex;
};


BasicArrayList* BasicArrayList_new(void** objectArray);

void BasicArrayList_init(BasicArrayList* this, void** objectArray);

void BasicArrayList_addAt(BasicArrayList* this, int32_t index, void* element);

bool BasicArrayList_add(BasicArrayList* this, void* anyType);

void* BasicArrayList_removeAt(BasicArrayList* this, int32_t index);

bool BasicArrayList_remove(BasicArrayList* this, void* anyType);

bool BasicArrayList_removeAll2(BasicArrayList* this, BasicArrayList* list);

bool BasicArrayList_addAll2(BasicArrayList* this, BasicArrayList* list);

bool BasicArrayList_addAllList(BasicArrayList* this, BasicArrayList* list);

bool BasicArrayList_addAll(BasicArrayList* this, void** newObjectArray);

void BasicArrayList_ensureCapacity(BasicArrayList* this, int32_t minSize);

void BasicArrayList_trimToSize(BasicArrayList* this);

int32_t BasicArrayList_indexOf(BasicArrayList* this, void* anyType);

int32_t BasicArrayList_lastIndexOf(BasicArrayList* this, void* anyType);

void* BasicArrayList_get(BasicArrayList* this, int32_t index);

void* BasicArrayList_set(BasicArrayList* this, int32_t index, void* element);

void BasicArrayList_clear(BasicArrayList* this);

int32_t BasicArrayList_size(BasicArrayList* this);

bool BasicArrayList_isEmpty(BasicArrayList* this);

bool BasicArrayList_contains(BasicArrayList* this, void* anyType);

void** BasicArrayList_toArray(BasicArrayList* this);

void** BasicArrayList_toArrayType(BasicArrayList* this, void** objectArray);

void* BasicArrayList_clone(BasicArrayList* this);

const char* BasicArrayList_toString(BasicArrayList* this);
#define BasicArrayList_new1 BasicArrayList_new
#define BasicArrayList_init1 BasicArrayList_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayList_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayList_register(void);


#endif // ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
