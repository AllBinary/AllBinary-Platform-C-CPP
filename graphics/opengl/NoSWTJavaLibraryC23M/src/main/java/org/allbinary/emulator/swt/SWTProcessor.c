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
#include "org/allbinary/thread/NullRunnable.h"

typedef struct SWTProcessor SWTProcessor;
struct SWTProcessor {
    Runnable* runnable;
};

static SWTProcessor* SWTProcessor_instance;

SWTProcessor* SWTProcessor_new(void);
SWTProcessor* SWTProcessor_getInstance(void);
void SWTProcessor_process(SWTProcessor* this, Display* display);

// Static fields with runtime initializers: call this once at startup
void SWTProcessor_staticInit(void) {
    SWTProcessor_instance = SWTProcessor_new();
}

static void SWTProcessor_initFields(SWTProcessor* this) {
    this->runnable = NullRunnable_getInstance();
}

void SWTProcessor_init(SWTProcessor* this) {
    SWTProcessor_initFields(this);
}

SWTProcessor* SWTProcessor_new(void) {
    SWTProcessor* this = calloc(1, sizeof(SWTProcessor));
    SWTProcessor_init(this);
    return this;
}


SWTProcessor* SWTProcessor_getInstance(void) {
        return SWTProcessor_instance;
}


void SWTProcessor_process(SWTProcessor* this, Display* display) {
        Display_sleep(display);
}

