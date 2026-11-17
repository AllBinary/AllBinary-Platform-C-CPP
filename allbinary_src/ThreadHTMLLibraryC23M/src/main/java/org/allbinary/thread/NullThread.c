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
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct NullThread NullThread;
struct NullThread {
    char unused;
};

Thread* NullThread_NULL_THREAD;

NullThread* NullThread_new(void);

// Static fields with runtime initializers: call this once at startup
void NullThread_staticInit(void) {
    NullThread_NULL_THREAD = Thread_new(NullRunnable_getInstance(), StringUtil_getInstance()->EMPTY_STRING);
}

void NullThread_init(NullThread* this) {
}

NullThread* NullThread_new(void) {
    NullThread* this = calloc(1, sizeof(NullThread));
    NullThread_init(this);
    return this;
}

