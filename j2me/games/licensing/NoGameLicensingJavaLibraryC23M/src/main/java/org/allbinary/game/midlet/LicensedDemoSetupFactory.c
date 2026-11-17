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

typedef struct LicensedDemoSetupFactory LicensedDemoSetupFactory;
struct LicensedDemoSetupFactory {
    char unused;
};


LicensedDemoSetupFactory* LicensedDemoSetupFactory_new(void);
DemoSetup* LicensedDemoSetupFactory_getInstance(LicensedDemoSetupFactory* this);

void LicensedDemoSetupFactory_init(LicensedDemoSetupFactory* this) {
}

LicensedDemoSetupFactory* LicensedDemoSetupFactory_new(void) {
    LicensedDemoSetupFactory* this = calloc(1, sizeof(LicensedDemoSetupFactory));
    LicensedDemoSetupFactory_init(this);
    return this;
}


DemoSetup* LicensedDemoSetupFactory_getInstance(LicensedDemoSetupFactory* this) {
        return DemoSetup_new();
}

