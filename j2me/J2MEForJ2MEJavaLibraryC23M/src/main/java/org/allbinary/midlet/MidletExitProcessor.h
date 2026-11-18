#ifndef ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSOR_H
#define ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSOR_H
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
typedef struct MIDlet MIDlet;
typedef struct Processor Processor;
#if __has_include("javax/microedition/midlet/MIDlet.h")
#include "javax/microedition/midlet/MIDlet.h"
#endif
#include "org/allbinary/canvas/Processor.h"

typedef struct MidletExitProcessor MidletExitProcessor;
struct MidletExitProcessor {
    Processor base;
    MIDlet* midlet;
};


MidletExitProcessor* MidletExitProcessor_new(MIDlet* midlet);

void MidletExitProcessor_init(MidletExitProcessor* this, MIDlet* midlet);

void MidletExitProcessor_process(MidletExitProcessor* this);
#define MidletExitProcessor_new1 MidletExitProcessor_new
#define MidletExitProcessor_init1 MidletExitProcessor_init
#ifndef MidletExitProcessor_getInstance
#define MidletExitProcessor_getInstance Processor_getInstance
#endif
#ifndef MidletExitProcessor_processt
#define MidletExitProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MidletExitProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MidletExitProcessor_register(void);


#endif // ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSOR_H
