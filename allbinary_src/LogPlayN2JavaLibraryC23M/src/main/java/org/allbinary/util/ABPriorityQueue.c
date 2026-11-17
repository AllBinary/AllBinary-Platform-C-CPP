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
// #include "java/util/PriorityQueue.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABPriorityQueue ABPriorityQueue;
struct ABPriorityQueue {
    PriorityQueue base;
};


ABPriorityQueue* ABPriorityQueue_new(void);

void ABPriorityQueue_init(ABPriorityQueue* this) {
    PriorityQueue_init(&this->base);
}

ABPriorityQueue* ABPriorityQueue_new(void) {
    ABPriorityQueue* this = calloc(1, sizeof(ABPriorityQueue));
    ABPriorityQueue_init(this);
    return this;
}

