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
// package org.allbinary.logic.io.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AbPathUtil AbPathUtil;
struct AbPathUtil {
    AbPath* NO_ABPATH;
};

static AbPathUtil* AbPathUtil_instance;

AbPathUtil* AbPathUtil_new(void);
AbPathUtil* AbPathUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AbPathUtil_staticInit(void) {
    AbPathUtil_instance = AbPathUtil_new();
}

static void AbPathUtil_initFields(AbPathUtil* this) {
    this->NO_ABPATH = AbPath_createAbPath();
}

void AbPathUtil_init(AbPathUtil* this) {
    AbPathUtil_initFields(this);
}

AbPathUtil* AbPathUtil_new(void) {
    AbPathUtil* this = calloc(1, sizeof(AbPathUtil));
    AbPathUtil_init(this);
    return this;
}


AbPathUtil* AbPathUtil_getInstance(void) {
        return AbPathUtil_instance;
}

