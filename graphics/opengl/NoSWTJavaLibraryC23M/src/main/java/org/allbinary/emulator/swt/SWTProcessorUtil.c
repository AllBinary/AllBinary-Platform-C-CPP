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
// package org.allbinary.emulator.swt

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SWTProcessorUtil SWTProcessorUtil;
struct SWTProcessorUtil {
    SWTProcessor* swtProcessor;
};

static SWTProcessorUtil* SWTProcessorUtil_instance;

SWTProcessorUtil* SWTProcessorUtil_new(void);
SWTProcessorUtil* SWTProcessorUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SWTProcessorUtil_staticInit(void) {
    SWTProcessorUtil_instance = SWTProcessorUtil_new();
}

static void SWTProcessorUtil_initFields(SWTProcessorUtil* this) {
    this->swtProcessor = SWTProcessor_getInstance();
}

void SWTProcessorUtil_init(SWTProcessorUtil* this) {
    SWTProcessorUtil_initFields(this);
}

SWTProcessorUtil* SWTProcessorUtil_new(void) {
    SWTProcessorUtil* this = calloc(1, sizeof(SWTProcessorUtil));
    SWTProcessorUtil_init(this);
    return this;
}


SWTProcessorUtil* SWTProcessorUtil_getInstance(void) {
        return SWTProcessorUtil_instance;
}

