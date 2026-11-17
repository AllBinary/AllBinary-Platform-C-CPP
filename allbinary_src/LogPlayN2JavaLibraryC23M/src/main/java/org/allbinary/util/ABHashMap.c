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
// #include "java/util/HashMap.h"
// #include "java/util/Map.h"
// #include "java/util/Set.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABHashMap ABHashMap;
struct ABHashMap {
    HashMap base;
};


ABHashMap* ABHashMap_new(void);
int32_t ABHashMap_size(ABHashMap* this);
bool ABHashMap_isEmpty(ABHashMap* this);
void* ABHashMap_get(ABHashMap* this, Any* key);
bool ABHashMap_containsKey(ABHashMap* this, Any* key);
void* ABHashMap_put(ABHashMap* this, void* key, void* value);
void ABHashMap_putAll(ABHashMap* this, Map* map);
void* ABHashMap_remove(ABHashMap* this, Any* key);
void ABHashMap_clear(ABHashMap* this);
bool ABHashMap_containsValue(ABHashMap* this, Any* value);
Set* ABHashMap_keySet(ABHashMap* this);
Set* ABHashMap_entrySet(ABHashMap* this);
void* ABHashMap_getOrDefault(ABHashMap* this, Any* key, void* defaultValue);
void* ABHashMap_putIfAbsent(ABHashMap* this, void* key, void* value);
Any* ABHashMap_clone(ABHashMap* this);

void ABHashMap_init(ABHashMap* this) {
    HashMap_init(&this->base);
}

ABHashMap* ABHashMap_new(void) {
    ABHashMap* this = calloc(1, sizeof(ABHashMap));
    ABHashMap_init(this);
    return this;
}


int32_t ABHashMap_size(ABHashMap* this) {
        return HashMap_size((&this->base));
}


bool ABHashMap_isEmpty(ABHashMap* this) {
        return HashMap_isEmpty((&this->base));
}


void* ABHashMap_get(ABHashMap* this, Any* key) {
        return HashMap_get((&this->base), key);
}


bool ABHashMap_containsKey(ABHashMap* this, Any* key) {
        return HashMap_containsKey((&this->base), key);
}


void* ABHashMap_put(ABHashMap* this, void* key, void* value) {
        return HashMap_put((&this->base), key, value);
}


void ABHashMap_putAll(ABHashMap* this, Map* map) {
        HashMap_putAll((&this->base), map);
}


void* ABHashMap_remove(ABHashMap* this, Any* key) {
        return HashMap_remove((&this->base), key);
}


void ABHashMap_clear(ABHashMap* this) {
        HashMap_clear((&this->base));
}


bool ABHashMap_containsValue(ABHashMap* this, Any* value) {
        return HashMap_containsValue((&this->base), value);
}


Set* ABHashMap_keySet(ABHashMap* this) {
        return HashMap_keySet((&this->base));
}


Set* ABHashMap_entrySet(ABHashMap* this) {
        return HashMap_entrySet((&this->base));
}


void* ABHashMap_getOrDefault(ABHashMap* this, Any* key, void* defaultValue) {
        return HashMap_getOrDefault((&this->base), key, defaultValue);
}


void* ABHashMap_putIfAbsent(ABHashMap* this, void* key, void* value) {
        return HashMap_putIfAbsent((&this->base), key, value);
}


Any* ABHashMap_clone(ABHashMap* this) {
        return HashMap_clone((&this->base));
}

