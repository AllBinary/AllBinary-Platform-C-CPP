#ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H
#define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H
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
#if __has_include("org/allbinary/emulator/swt/SWTProcessor.h")
#include "org/allbinary/emulator/swt/SWTProcessor.h"
#endif

typedef struct SWTProcessorUtil SWTProcessorUtil;
struct SWTProcessorUtil {
    SWTProcessor* swtProcessor;
};


SWTProcessorUtil* SWTProcessorUtil_new(void);
void SWTProcessorUtil_init(SWTProcessorUtil* this);

SWTProcessorUtil* SWTProcessorUtil_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SWTProcessorUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SWTProcessorUtil_register(void);


#endif // ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSORUTIL_H
