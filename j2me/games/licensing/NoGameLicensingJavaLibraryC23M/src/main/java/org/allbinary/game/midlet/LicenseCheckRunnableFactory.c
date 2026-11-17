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
#include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/NullABRunnable.h"

typedef struct LicenseCheckRunnableFactory LicenseCheckRunnableFactory;
struct LicenseCheckRunnableFactory {
    char unused;
};


LicenseCheckRunnableFactory* LicenseCheckRunnableFactory_new(void);
ABRunnable* LicenseCheckRunnableFactory_getInstance(LicenseCheckRunnableFactory* this, SpecialDemoGameMidlet* specialDemoGameMidlet);

void LicenseCheckRunnableFactory_init(LicenseCheckRunnableFactory* this) {
}

LicenseCheckRunnableFactory* LicenseCheckRunnableFactory_new(void) {
    LicenseCheckRunnableFactory* this = calloc(1, sizeof(LicenseCheckRunnableFactory));
    LicenseCheckRunnableFactory_init(this);
    return this;
}


ABRunnable* LicenseCheckRunnableFactory_getInstance(LicenseCheckRunnableFactory* this, SpecialDemoGameMidlet* specialDemoGameMidlet) {
        return NullABRunnable_getInstance();
}

