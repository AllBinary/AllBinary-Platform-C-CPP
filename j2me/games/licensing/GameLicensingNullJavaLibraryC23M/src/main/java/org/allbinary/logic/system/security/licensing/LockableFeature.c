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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LockableFeature LockableFeature;
struct LockableFeature {
    const char* name;
};


LockableFeature* LockableFeature_new(const char* name);

void LockableFeature_init(LockableFeature* this, const char* name);
const char* LockableFeature_getName(LockableFeature* this);

static void LockableFeature_initFields(LockableFeature* this) {
    
}


void LockableFeature_init(LockableFeature* this, const char* name) {
    LockableFeature_initFields(this);
        this->name = name;
}

LockableFeature* LockableFeature_new(const char* name) {
    LockableFeature* this = calloc(1, sizeof(LockableFeature));
    LockableFeature_init(this, name);
    return this;
}


const char* LockableFeature_getName(LockableFeature* this) {
        return this->name;
}

