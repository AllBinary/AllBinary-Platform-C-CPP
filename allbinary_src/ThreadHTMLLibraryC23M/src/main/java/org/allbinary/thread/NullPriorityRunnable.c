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
// package org.allbinary.thread

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/thread/PriorityRunnable.h"

typedef struct NullPriorityRunnable NullPriorityRunnable;
struct NullPriorityRunnable {
    PriorityRunnable PriorityRunnable_interface;
};


NullPriorityRunnable* NullPriorityRunnable_new(void);
int32_t NullPriorityRunnable_getPriority(NullPriorityRunnable* this);
bool NullPriorityRunnable_isDone(NullPriorityRunnable* this);
void NullPriorityRunnable_reset(NullPriorityRunnable* this);
void NullPriorityRunnable_run(NullPriorityRunnable* this);

void NullPriorityRunnable_init(NullPriorityRunnable* this) {
}

NullPriorityRunnable* NullPriorityRunnable_new(void) {
    NullPriorityRunnable* this = calloc(1, sizeof(NullPriorityRunnable));
    NullPriorityRunnable_init(this);
    return this;
}


int32_t NullPriorityRunnable_getPriority(NullPriorityRunnable* this) {
        return 0;
}


bool NullPriorityRunnable_isDone(NullPriorityRunnable* this) {
        return true;
}


void NullPriorityRunnable_reset(NullPriorityRunnable* this) {
}


void NullPriorityRunnable_run(NullPriorityRunnable* this) {
}

