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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StatePaintableFactory StatePaintableFactory;
struct StatePaintableFactory {
    char unused;
};

static StatePaintable* StatePaintableFactory_instance;

StatePaintableFactory* StatePaintableFactory_new(void);
StatePaintable* StatePaintableFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void StatePaintableFactory_staticInit(void) {
    StatePaintableFactory_instance = StatePaintable_new();
}

void StatePaintableFactory_init(StatePaintableFactory* this) {
}

StatePaintableFactory* StatePaintableFactory_new(void) {
    StatePaintableFactory* this = calloc(1, sizeof(StatePaintableFactory));
    StatePaintableFactory_init(this);
    return this;
}


StatePaintable* StatePaintableFactory_getInstance(void) {
        return StatePaintableFactory_instance;
}

