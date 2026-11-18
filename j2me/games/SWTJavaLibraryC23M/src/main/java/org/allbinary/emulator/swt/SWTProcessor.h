#ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H
#define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H
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
typedef struct NullRunnable NullRunnable;
typedef struct Display Display;
#include "java/lang/Runnable.h"

typedef struct SWTProcessor SWTProcessor;
struct SWTProcessor {
    Runnable* runnable;
};


SWTProcessor* SWTProcessor_new(void);

SWTProcessor* SWTProcessor_getInstance(void);

void SWTProcessor_init(SWTProcessor* this);

void SWTProcessor_process(SWTProcessor* this, Display* display);
#define SWTProcessor_new0 SWTProcessor_new
#define SWTProcessor_init0 SWTProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SWTProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SWTProcessor_register(void);


#endif // ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_H
