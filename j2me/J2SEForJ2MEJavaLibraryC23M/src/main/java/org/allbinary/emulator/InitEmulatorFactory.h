#ifndef ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_H
#define ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_H
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


InitEmulatorFactory* InitEmulatorFactory_new(void);
void InitEmulatorFactory_init(InitEmulatorFactory* this);

InitEmulatorFactory* InitEmulatorFactory_getInstance(void);

void InitEmulatorFactory_setInitEmulator(InitEmulatorFactory* this, bool initEmulator);

bool InitEmulatorFactory_isInitEmulator(InitEmulatorFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InitEmulatorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InitEmulatorFactory_register(void);


#endif // ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_H
