#ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_H
#define ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SpecialDemoGameMidlet SpecialDemoGameMidlet;
typedef struct ABRunnable ABRunnable;
typedef struct NullABRunnable NullABRunnable;

typedef struct LicenseCheckRunnableFactory LicenseCheckRunnableFactory;
struct LicenseCheckRunnableFactory {
    char unused;
};


LicenseCheckRunnableFactory* LicenseCheckRunnableFactory_new(void);
void LicenseCheckRunnableFactory_init(LicenseCheckRunnableFactory* this);

ABRunnable* LicenseCheckRunnableFactory_getInstance(LicenseCheckRunnableFactory* this, SpecialDemoGameMidlet* specialDemoGameMidlet);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseCheckRunnableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseCheckRunnableFactory_register(void);

#if __has_include("org/allbinary/thread/ABRunnable.h")
#include "org/allbinary/thread/ABRunnable.h"
#endif

#endif // ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_H
