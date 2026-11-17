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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AbIOSystem AbIOSystem;
struct AbIOSystem {
    const char* type;
};

static AbIOSystem* AbIOSystem_instance;

AbIOSystem* AbIOSystem_new(void);
AbIOSystem* AbIOSystem_getInstance(void);
const char* AbIOSystem_getType(AbIOSystem* this);
bool AbIOSystem_isType(AbIOSystem* this, const char* type);

// Static fields with runtime initializers: call this once at startup
void AbIOSystem_staticInit(void) {
    AbIOSystem_instance = AbIOSystem_new();
}

static void AbIOSystem_initFields(AbIOSystem* this) {
    this->type = "java.io";
}

void AbIOSystem_init(AbIOSystem* this) {
    AbIOSystem_initFields(this);
}

AbIOSystem* AbIOSystem_new(void) {
    AbIOSystem* this = calloc(1, sizeof(AbIOSystem));
    AbIOSystem_init(this);
    return this;
}


AbIOSystem* AbIOSystem_getInstance(void) {
        return AbIOSystem_instance;
}


const char* AbIOSystem_getType(AbIOSystem* this) {
        return this->type;
}


bool AbIOSystem_isType(AbIOSystem* this, const char* type) {
        if (strcmp(this->type, type) == 0) {
            return true;
        } else {
            return false;
        }
}

