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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct LockableFeatureFactory LockableFeatureFactory;
struct LockableFeatureFactory {
    BasicArrayList* list;
};

static LockableFeatureFactory* LockableFeatureFactory_instance;

LockableFeatureFactory* LockableFeatureFactory_new(void);
LockableFeatureFactory* LockableFeatureFactory_getInstance(void);
BasicArrayList* LockableFeatureFactory_getList(LockableFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void LockableFeatureFactory_staticInit(void) {
    LockableFeatureFactory_instance = LockableFeatureFactory_new();
}

static void LockableFeatureFactory_initFields(LockableFeatureFactory* this) {
    this->list = BasicArrayListD_new();
}

void LockableFeatureFactory_init(LockableFeatureFactory* this) {
    LockableFeatureFactory_initFields(this);
}

LockableFeatureFactory* LockableFeatureFactory_new(void) {
    LockableFeatureFactory* this = calloc(1, sizeof(LockableFeatureFactory));
    LockableFeatureFactory_init(this);
    return this;
}


LockableFeatureFactory* LockableFeatureFactory_getInstance(void) {
        return LockableFeatureFactory_instance;
}


BasicArrayList* LockableFeatureFactory_getList(LockableFeatureFactory* this) {
        return this->list;
}

