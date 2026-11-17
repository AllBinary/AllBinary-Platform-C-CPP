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

typedef struct LicenseLoadingTypeFactory LicenseLoadingTypeFactory;
struct LicenseLoadingTypeFactory {
    LicenseLoadingType* INITIAL_LOADING;
    LicenseLoadingType* GAME_START;
    LicenseLoadingType* LOGIN;
    LicenseLoadingType* OTHER;
};

static LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_instance;

LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_new(void);
LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_getIntance(void);

// Static fields with runtime initializers: call this once at startup
void LicenseLoadingTypeFactory_staticInit(void) {
    LicenseLoadingTypeFactory_instance = LicenseLoadingTypeFactory_new();
}

static void LicenseLoadingTypeFactory_initFields(LicenseLoadingTypeFactory* this) {
    this->INITIAL_LOADING = LicenseLoadingType_new("Initial Loading");
    this->GAME_START = LicenseLoadingType_new("Game Start");
    this->LOGIN = LicenseLoadingType_new("Login");
    this->OTHER = LicenseLoadingType_new("Other/Usually The First Non Demo Level");
}

void LicenseLoadingTypeFactory_init(LicenseLoadingTypeFactory* this) {
    LicenseLoadingTypeFactory_initFields(this);
}

LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_new(void) {
    LicenseLoadingTypeFactory* this = calloc(1, sizeof(LicenseLoadingTypeFactory));
    LicenseLoadingTypeFactory_init(this);
    return this;
}


LicenseLoadingTypeFactory* LicenseLoadingTypeFactory_getIntance(void) {
        return LicenseLoadingTypeFactory_instance;
}

