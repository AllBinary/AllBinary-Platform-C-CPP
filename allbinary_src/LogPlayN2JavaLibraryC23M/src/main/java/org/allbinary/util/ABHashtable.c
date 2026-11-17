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
// #include "java/util/Enumeration.h"
// #include "java/util/Hashtable.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABHashtable ABHashtable;
struct ABHashtable {
    Hashtable base;
};


ABHashtable* ABHashtable_new(void);

void ABHashtable_init(ABHashtable* this);
int32_t ABHashtable_size(ABHashtable* this);
bool ABHashtable_isEmpty(ABHashtable* this);
Enumeration* ABHashtable_elements(ABHashtable* this);
bool ABHashtable_contains(ABHashtable* this, Any* value);
bool ABHashtable_containsValue(ABHashtable* this, Any* value);
bool ABHashtable_containsKey(ABHashtable* this, Any* key);
void* ABHashtable_get(ABHashtable* this, Any* key);
void ABHashtable_clear(ABHashtable* this);
Any* ABHashtable_clone(ABHashtable* this);
const char* ABHashtable_toString(ABHashtable* this);
bool ABHashtable_equals(ABHashtable* this, Any* obj);
int32_t ABHashtable_hashCode(ABHashtable* this);


void ABHashtable_init(ABHashtable* this) {
        Hashtable_init(&this->base);
}

ABHashtable* ABHashtable_new(void) {
    ABHashtable* this = calloc(1, sizeof(ABHashtable));
    ABHashtable_init(this);
    return this;
}


int32_t ABHashtable_size(ABHashtable* this) {
        return Hashtable_size((&this->base));
}


bool ABHashtable_isEmpty(ABHashtable* this) {
        return Hashtable_isEmpty((&this->base));
}


Enumeration* ABHashtable_elements(ABHashtable* this) {
        return Hashtable_elements((&this->base));
}


bool ABHashtable_contains(ABHashtable* this, Any* value) {
        return Hashtable_contains((&this->base), value);
}


bool ABHashtable_containsValue(ABHashtable* this, Any* value) {
        return Hashtable_containsValue((&this->base), value);
}


bool ABHashtable_containsKey(ABHashtable* this, Any* key) {
        return Hashtable_containsKey((&this->base), key);
}


void* ABHashtable_get(ABHashtable* this, Any* key) {
        return Hashtable_get((&this->base), key);
}


void ABHashtable_clear(ABHashtable* this) {
        Hashtable_clear((&this->base));
}


Any* ABHashtable_clone(ABHashtable* this) {
        return Hashtable_clone((&this->base));
}


const char* ABHashtable_toString(ABHashtable* this) {
        return Hashtable_toString((&this->base));
}


bool ABHashtable_equals(ABHashtable* this, Any* obj) {
        return Hashtable_equals((&this->base), obj);
}


int32_t ABHashtable_hashCode(ABHashtable* this) {
        return Hashtable_hashCode((&this->base));
}

