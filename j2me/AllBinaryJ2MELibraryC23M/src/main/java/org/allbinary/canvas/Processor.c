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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Processor Processor;
struct Processor {
    char unused;
};

static Processor* Processor_SINGLETON;

Processor* Processor_new(void);
Processor* Processor_getInstance(void);
void Processor_process(Processor* this);
void Processor_processt(Processor* this, int64_t timeDelta);

// Static fields with runtime initializers: call this once at startup
void Processor_staticInit(void) {
    Processor_SINGLETON = Processor_new();
}

void Processor_init(Processor* this) {
}

Processor* Processor_new(void) {
    Processor* this = calloc(1, sizeof(Processor));
    Processor_init(this);
    return this;
}


Processor* Processor_getInstance(void) {
        return Processor_SINGLETON;
}


// throws Exception
void Processor_process(Processor* this) {
}


// throws Exception
void Processor_processt(Processor* this, int64_t timeDelta) {
}

