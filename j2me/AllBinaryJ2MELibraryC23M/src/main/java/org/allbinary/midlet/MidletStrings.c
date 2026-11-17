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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MidletStrings MidletStrings;
struct MidletStrings {
    const char* COMMAND_ACTION;
};

static MidletStrings* MidletStrings_instance;

MidletStrings* MidletStrings_new(void);
MidletStrings* MidletStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MidletStrings_staticInit(void) {
    MidletStrings_instance = MidletStrings_new();
}

static void MidletStrings_initFields(MidletStrings* this) {
    this->COMMAND_ACTION = "commandAction";
}

void MidletStrings_init(MidletStrings* this) {
    MidletStrings_initFields(this);
}

MidletStrings* MidletStrings_new(void) {
    MidletStrings* this = calloc(1, sizeof(MidletStrings));
    MidletStrings_init(this);
    return this;
}


MidletStrings* MidletStrings_getInstance(void) {
        return MidletStrings_instance;
}

