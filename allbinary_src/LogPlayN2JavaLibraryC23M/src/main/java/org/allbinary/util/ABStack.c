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
// #include "java/util/Stack.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABStack ABStack;
struct ABStack {
    Stack base;
};


ABStack* ABStack_new(void);
void* ABStack_push(ABStack* this, void* item);
void* ABStack_pop(ABStack* this);
void* ABStack_peek(ABStack* this);
bool ABStack_empty(ABStack* this);
int32_t ABStack_search(ABStack* this, Any* obj);
bool ABStack_removeElement(ABStack* this, Any* obj);

void ABStack_init(ABStack* this) {
    Stack_init(&this->base);
}

ABStack* ABStack_new(void) {
    ABStack* this = calloc(1, sizeof(ABStack));
    ABStack_init(this);
    return this;
}


void* ABStack_push(ABStack* this, void* item) {
        return Stack_push((&this->base), item);
}


void* ABStack_pop(ABStack* this) {
        return Stack_pop((&this->base));
}


void* ABStack_peek(ABStack* this) {
        return Stack_peek((&this->base));
}


bool ABStack_empty(ABStack* this) {
        return Stack_empty((&this->base));
}


int32_t ABStack_search(ABStack* this, Any* obj) {
        return Stack_search((&this->base), obj);
}


bool ABStack_removeElement(ABStack* this, Any* obj) {
        return Stack_removeElement((&this->base), obj);
}

