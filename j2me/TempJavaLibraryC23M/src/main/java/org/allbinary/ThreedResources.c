/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ThreedResources ThreedResources;
struct ThreedResources {
    char unused;
};

static ThreedResources* ThreedResources_threedResources;

ThreedResources* ThreedResources_new(void);
ThreedResources* ThreedResources_getThreedResources(void);
void ThreedResources_add(ThreedResources* this);

// Static fields with runtime initializers: call this once at startup
void ThreedResources_staticInit(void) {
    ThreedResources_threedResources = ThreedResources_new();
}

void ThreedResources_init(ThreedResources* this) {
}

ThreedResources* ThreedResources_new(void) {
    ThreedResources* this = calloc(1, sizeof(ThreedResources));
    ThreedResources_init(this);
    return this;
}


ThreedResources* ThreedResources_getThreedResources(void) {
        return ThreedResources_threedResources;
}


void ThreedResources_add(ThreedResources* this) {
}

