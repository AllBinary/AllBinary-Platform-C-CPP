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
#include "org/eclipse/swt/widgets/Display.h"
#include "org/allbinary/emulator/swt/SWTProcessor.h"

typedef struct SWTRunnableProcessor SWTRunnableProcessor;
struct SWTRunnableProcessor {
    SWTProcessor base;
};

static SWTRunnableProcessor* SWTRunnableProcessor_instanceR;

SWTRunnableProcessor* SWTRunnableProcessor_new(void);
SWTRunnableProcessor* SWTRunnableProcessor_getInstance(void);
void SWTRunnableProcessor_process(SWTRunnableProcessor* this, Display* display);

// Static fields with runtime initializers: call this once at startup
void SWTRunnableProcessor_staticInit(void) {
    SWTRunnableProcessor_instanceR = SWTRunnableProcessor_new();
}

void SWTRunnableProcessor_init(SWTRunnableProcessor* this) {
    SWTProcessor_init(&this->base);
}

SWTRunnableProcessor* SWTRunnableProcessor_new(void) {
    SWTRunnableProcessor* this = calloc(1, sizeof(SWTRunnableProcessor));
    SWTRunnableProcessor_init(this);
    return this;
}


SWTRunnableProcessor* SWTRunnableProcessor_getInstance(void) {
        return SWTRunnableProcessor_instanceR;
}


void SWTRunnableProcessor_process(SWTRunnableProcessor* this, Display* display) {
}

