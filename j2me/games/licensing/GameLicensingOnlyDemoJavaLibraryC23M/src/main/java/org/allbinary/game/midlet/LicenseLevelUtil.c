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

typedef struct LicenseLevelUtil LicenseLevelUtil;
struct LicenseLevelUtil {
    char unused;
};

static LicenseLevelUtil* LicenseLevelUtil_instance;

LicenseLevelUtil* LicenseLevelUtil_new(void);
LicenseLevelUtil* LicenseLevelUtil_getInstance(void);
int32_t LicenseLevelUtil_getMaxLevel(LicenseLevelUtil* this, int32_t maxLevel, int32_t demoLevel);

// Static fields with runtime initializers: call this once at startup
void LicenseLevelUtil_staticInit(void) {
    LicenseLevelUtil_instance = LicenseLevelUtil_new();
}

void LicenseLevelUtil_init(LicenseLevelUtil* this) {
}

LicenseLevelUtil* LicenseLevelUtil_new(void) {
    LicenseLevelUtil* this = calloc(1, sizeof(LicenseLevelUtil));
    LicenseLevelUtil_init(this);
    return this;
}


LicenseLevelUtil* LicenseLevelUtil_getInstance(void) {
        return LicenseLevelUtil_instance;
}


int32_t LicenseLevelUtil_getMaxLevel(LicenseLevelUtil* this, int32_t maxLevel, int32_t demoLevel) {
        return demoLevel;
}

