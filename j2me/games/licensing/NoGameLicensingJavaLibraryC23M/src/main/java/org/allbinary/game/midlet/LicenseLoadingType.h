#ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPE_H
#define ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPE_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LicenseLoadingType LicenseLoadingType;
struct LicenseLoadingType {
    char unused;
};


LicenseLoadingType* LicenseLoadingType_new(const char* name);

void LicenseLoadingType_init(LicenseLoadingType* this, const char* name);
#define LicenseLoadingType_new1 LicenseLoadingType_new
#define LicenseLoadingType_init1 LicenseLoadingType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseLoadingType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseLoadingType_register(void);


#endif // ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPE_H
