#ifndef ORG_ALLBINARY_CANVAS_PROCESSOR_H
#define ORG_ALLBINARY_CANVAS_PROCESSOR_H
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


Processor* Processor_new(void);
void Processor_init(Processor* this);

Processor* Processor_getInstance(void);

void Processor_process(Processor* this);

void Processor_processt(Processor* this, int64_t timeDelta);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Processor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Processor_register(void);


#endif // ORG_ALLBINARY_CANVAS_PROCESSOR_H
