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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Vector.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABVector ABVector;
struct ABVector {
    Vector base;
};


ABVector* ABVector_new(void);
void ABVector_ensureCapacity(ABVector* this, int32_t minCapacity);
int32_t ABVector_capacity(ABVector* this);
int32_t ABVector_size(ABVector* this);
bool ABVector_isEmpty(ABVector* this);
bool ABVector_contains(ABVector* this, Any* obj);
int32_t ABVector_indexOf(ABVector* this, Any* obj);
int32_t ABVector_lastIndexOf(ABVector* this, Any* obj);
void* ABVector_elementAt(ABVector* this, int32_t index);
void* ABVector_firstElement(ABVector* this);
void* ABVector_lastElement(ABVector* this);
void ABVector_setElementAt(ABVector* this, void* obj, int32_t index);
void ABVector_removeElementAt(ABVector* this, int32_t index);
void ABVector_addElement(ABVector* this, void* obj);
void ABVector_insertElementAt(ABVector* this, void* obj, int32_t index);
bool ABVector_removeElement(ABVector* this, Any* obj);
void ABVector_removeAllElements(ABVector* this);
Any* ABVector_clone(ABVector* this);
Any** ABVector_toArray(ABVector* this);
void* ABVector_set(ABVector* this, int32_t index, void* element);
bool ABVector_add(ABVector* this, void* element);
bool ABVector_remove(ABVector* this, Any* obj);
void ABVector_add(ABVector* this, int32_t index, void* element);
void* ABVector_remove(ABVector* this, int32_t index);
void ABVector_clear(ABVector* this);
bool ABVector_equals(ABVector* this, Any* obj);
int32_t ABVector_hashCode(ABVector* this);
const char* ABVector_toString(ABVector* this);
void ABVector_removeRange(ABVector* this, int32_t fromIndex, int32_t toIndex);

void ABVector_init(ABVector* this) {
    Vector_init(&this->base);
}

ABVector* ABVector_new(void) {
    ABVector* this = calloc(1, sizeof(ABVector));
    ABVector_init(this);
    return this;
}


void ABVector_ensureCapacity(ABVector* this, int32_t minCapacity) {
        Vector_ensureCapacity((&this->base), minCapacity);
}


int32_t ABVector_capacity(ABVector* this) {
        return Vector_capacity((&this->base));
}


int32_t ABVector_size(ABVector* this) {
        return Vector_size((&this->base));
}


bool ABVector_isEmpty(ABVector* this) {
        return Vector_isEmpty((&this->base));
}


bool ABVector_contains(ABVector* this, Any* obj) {
        return Vector_contains((&this->base), obj);
}


int32_t ABVector_indexOf(ABVector* this, Any* obj) {
        return Vector_indexOf((&this->base), obj);
}


int32_t ABVector_lastIndexOf(ABVector* this, Any* obj) {
        return Vector_lastIndexOf((&this->base), obj);
}


void* ABVector_elementAt(ABVector* this, int32_t index) {
        return Vector_elementAt((&this->base), index);
}


void* ABVector_firstElement(ABVector* this) {
        return Vector_firstElement((&this->base));
}


void* ABVector_lastElement(ABVector* this) {
        return Vector_lastElement((&this->base));
}


void ABVector_setElementAt(ABVector* this, void* obj, int32_t index) {
        Vector_setElementAt((&this->base), obj, index);
}


void ABVector_removeElementAt(ABVector* this, int32_t index) {
        Vector_removeElementAt((&this->base), index);
}


void ABVector_addElement(ABVector* this, void* obj) {
        Vector_addElement((&this->base), obj);
}


void ABVector_insertElementAt(ABVector* this, void* obj, int32_t index) {
        Vector_insertElementAt((&this->base), obj, index);
}


bool ABVector_removeElement(ABVector* this, Any* obj) {
        return Vector_removeElement((&this->base), obj);
}


void ABVector_removeAllElements(ABVector* this) {
        Vector_removeAllElements((&this->base));
}


Any* ABVector_clone(ABVector* this) {
        return Vector_clone((&this->base));
}


Any** ABVector_toArray(ABVector* this) {
        return Vector_toArray((&this->base));
}


void* ABVector_set(ABVector* this, int32_t index, void* element) {
        return Vector_set((&this->base), index, element);
}


bool ABVector_add(ABVector* this, void* element) {
        return Vector_add((&this->base), element);
}


bool ABVector_remove(ABVector* this, Any* obj) {
        return Vector_remove((&this->base), obj);
}


// Java overloaded method: C needs a different name
void ABVector_add(ABVector* this, int32_t index, void* element) {
        Vector_add((&this->base), index, element);
}


// Java overloaded method: C needs a different name
void* ABVector_remove(ABVector* this, int32_t index) {
        return Vector_remove((&this->base), index);
}


void ABVector_clear(ABVector* this) {
        Vector_clear((&this->base));
}


bool ABVector_equals(ABVector* this, Any* obj) {
        return Vector_equals((&this->base), obj);
}


int32_t ABVector_hashCode(ABVector* this) {
        return Vector_hashCode((&this->base));
}


const char* ABVector_toString(ABVector* this) {
        return Vector_toString((&this->base));
}


void ABVector_removeRange(ABVector* this, int32_t fromIndex, int32_t toIndex) {
        Vector_removeRange((&this->base), fromIndex, toIndex);
}

