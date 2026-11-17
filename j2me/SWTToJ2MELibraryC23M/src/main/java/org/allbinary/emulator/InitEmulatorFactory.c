/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2011 AllBinary 
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
// package org.allbinary.emulator

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InitEmulatorFactory InitEmulatorFactory;
struct InitEmulatorFactory {
    bool initEmulator;
};

static InitEmulatorFactory* InitEmulatorFactory_instance;

InitEmulatorFactory* InitEmulatorFactory_new(void);
InitEmulatorFactory* InitEmulatorFactory_getInstance(void);
void InitEmulatorFactory_setInitEmulator(InitEmulatorFactory* this, bool initEmulator);
bool InitEmulatorFactory_isInitEmulator(InitEmulatorFactory* this);

// Static fields with runtime initializers: call this once at startup
void InitEmulatorFactory_staticInit(void) {
    InitEmulatorFactory_instance = InitEmulatorFactory_new();
}

static void InitEmulatorFactory_initFields(InitEmulatorFactory* this) {
    this->initEmulator = false;
}

void InitEmulatorFactory_init(InitEmulatorFactory* this) {
    InitEmulatorFactory_initFields(this);
}

InitEmulatorFactory* InitEmulatorFactory_new(void) {
    InitEmulatorFactory* this = calloc(1, sizeof(InitEmulatorFactory));
    InitEmulatorFactory_init(this);
    return this;
}


InitEmulatorFactory* InitEmulatorFactory_getInstance(void) {
        return InitEmulatorFactory_instance;
}


void InitEmulatorFactory_setInitEmulator(InitEmulatorFactory* this, bool initEmulator) {
        this->initEmulator = initEmulator;
}


bool InitEmulatorFactory_isInitEmulator(InitEmulatorFactory* this) {
        return this->initEmulator;
}

