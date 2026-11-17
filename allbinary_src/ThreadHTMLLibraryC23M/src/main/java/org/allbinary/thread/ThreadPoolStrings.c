/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct ThreadPoolStrings ThreadPoolStrings;
struct ThreadPoolStrings {
    const char* ADD_TASK;
    const char* START_TASK;
    const char* COMPLETE_TASK;
};

static ThreadPoolStrings* ThreadPoolStrings_instance;

ThreadPoolStrings* ThreadPoolStrings_new(void);
ThreadPoolStrings* ThreadPoolStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ThreadPoolStrings_staticInit(void) {
    ThreadPoolStrings_instance = ThreadPoolStrings_new();
}

static void ThreadPoolStrings_initFields(ThreadPoolStrings* this) {
    this->ADD_TASK = "addTask";
    this->START_TASK = "Started Task: ";
    this->COMPLETE_TASK = "Completed Task: ";
}

void ThreadPoolStrings_init(ThreadPoolStrings* this) {
    ThreadPoolStrings_initFields(this);
}

ThreadPoolStrings* ThreadPoolStrings_new(void) {
    ThreadPoolStrings* this = calloc(1, sizeof(ThreadPoolStrings));
    ThreadPoolStrings_init(this);
    return this;
}


ThreadPoolStrings* ThreadPoolStrings_getInstance(void) {
        return ThreadPoolStrings_instance;
}

