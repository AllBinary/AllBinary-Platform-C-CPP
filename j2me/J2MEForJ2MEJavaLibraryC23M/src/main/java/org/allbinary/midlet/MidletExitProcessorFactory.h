#ifndef ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H
#define ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H
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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct MidletExitProcessor MidletExitProcessor;
typedef struct MIDlet MIDlet;
typedef struct AppletUtil AppletUtil;
typedef struct J2MEUtil J2MEUtil;
typedef struct Processor Processor;

typedef struct MidletExitProcessorFactory MidletExitProcessorFactory;
struct MidletExitProcessorFactory {
    char unused;
};


MidletExitProcessorFactory* MidletExitProcessorFactory_new(void);
void MidletExitProcessorFactory_init(MidletExitProcessorFactory* this);

MidletExitProcessorFactory* MidletExitProcessorFactory_getInstance(void);

Processor* MidletExitProcessorFactory_getExitInstance(MidletExitProcessorFactory* this, MIDlet* midlet);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MidletExitProcessorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MidletExitProcessorFactory_register(void);

#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif

#endif // ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H
