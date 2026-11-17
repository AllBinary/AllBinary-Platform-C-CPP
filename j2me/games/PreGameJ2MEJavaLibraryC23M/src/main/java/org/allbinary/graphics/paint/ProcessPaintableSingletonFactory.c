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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ProcessPaintableSingletonFactory ProcessPaintableSingletonFactory;
struct ProcessPaintableSingletonFactory {
    char unused;
};

static ProcessPaintable* ProcessPaintableSingletonFactory_SINGLETON;

ProcessPaintableSingletonFactory* ProcessPaintableSingletonFactory_new(void);

void ProcessPaintableSingletonFactory_init(ProcessPaintableSingletonFactory* this);
ProcessPaintable* ProcessPaintableSingletonFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ProcessPaintableSingletonFactory_staticInit(void) {
    ProcessPaintableSingletonFactory_SINGLETON = ProcessPaintable_new();
}


void ProcessPaintableSingletonFactory_init(ProcessPaintableSingletonFactory* this) {
}

ProcessPaintableSingletonFactory* ProcessPaintableSingletonFactory_new(void) {
    ProcessPaintableSingletonFactory* this = calloc(1, sizeof(ProcessPaintableSingletonFactory));
    ProcessPaintableSingletonFactory_init(this);
    return this;
}


ProcessPaintable* ProcessPaintableSingletonFactory_getInstance(void) {
        return ProcessPaintableSingletonFactory_SINGLETON;
}

