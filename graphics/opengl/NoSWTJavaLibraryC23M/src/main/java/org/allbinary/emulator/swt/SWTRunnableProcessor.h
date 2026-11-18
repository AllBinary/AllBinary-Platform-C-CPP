#ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H
#define ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H
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
typedef struct SWTProcessor SWTProcessor;
typedef struct Display Display;
#include "org/allbinary/emulator/swt/SWTProcessor.h"

typedef struct SWTRunnableProcessor SWTRunnableProcessor;
struct SWTRunnableProcessor {
    SWTProcessor base;
};


SWTRunnableProcessor* SWTRunnableProcessor_new(void);
void SWTRunnableProcessor_init(SWTRunnableProcessor* this);

SWTRunnableProcessor* SWTRunnableProcessor_getInstance(void);

void SWTRunnableProcessor_process(SWTRunnableProcessor* this, Display* display);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SWTRunnableProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SWTRunnableProcessor_register(void);


#endif // ORG_ALLBINARY_EMULATOR_SWT_SWTRUNNABLEPROCESSOR_H
