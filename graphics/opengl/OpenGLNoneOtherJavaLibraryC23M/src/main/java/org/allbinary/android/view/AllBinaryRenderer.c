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
// package org.allbinary.android.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AllBinaryRenderer AllBinaryRenderer;
struct AllBinaryRenderer {
    char unused;
};

static AllBinaryRenderer* AllBinaryRenderer_instance;

AllBinaryRenderer* AllBinaryRenderer_new(void);
AllBinaryRenderer* AllBinaryRenderer_getInstance(void);
void AllBinaryRenderer_setRunnable(AllBinaryRenderer* this, Runnable* runnable);
void AllBinaryRenderer_clearRunnable(AllBinaryRenderer* this);

// Static fields with runtime initializers: call this once at startup
void AllBinaryRenderer_staticInit(void) {
    AllBinaryRenderer_instance = AllBinaryRenderer_new();
}

void AllBinaryRenderer_init(AllBinaryRenderer* this) {
}

AllBinaryRenderer* AllBinaryRenderer_new(void) {
    AllBinaryRenderer* this = calloc(1, sizeof(AllBinaryRenderer));
    AllBinaryRenderer_init(this);
    return this;
}


AllBinaryRenderer* AllBinaryRenderer_getInstance(void) {
        return AllBinaryRenderer_instance;
}


void AllBinaryRenderer_setRunnable(AllBinaryRenderer* this, Runnable* runnable) {
}


void AllBinaryRenderer_clearRunnable(AllBinaryRenderer* this) {
}

