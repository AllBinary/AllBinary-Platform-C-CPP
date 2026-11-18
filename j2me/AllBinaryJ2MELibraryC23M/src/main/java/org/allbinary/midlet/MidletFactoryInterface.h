#ifndef ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H
#define ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H
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
typedef struct AllBinaryMidlet AllBinaryMidlet;
typedef struct MIDlet MIDlet;

typedef struct MidletFactoryInterface MidletFactoryInterface;
struct MidletFactoryInterface {
    char unused;
};


MidletFactoryInterface* MidletFactoryInterface_new(void);
void MidletFactoryInterface_init(MidletFactoryInterface* this);

MIDlet* MidletFactoryInterface_getInstance(MidletFactoryInterface* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MidletFactoryInterface_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MidletFactoryInterface_register(void);

#if __has_include("javax/microedition/midlet/MIDlet.h")
#include "javax/microedition/midlet/MIDlet.h"
#endif

#endif // ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H
