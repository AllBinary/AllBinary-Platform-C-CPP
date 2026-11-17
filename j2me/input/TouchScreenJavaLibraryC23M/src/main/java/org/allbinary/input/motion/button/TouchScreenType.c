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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TouchScreenType TouchScreenType;
struct TouchScreenType {
    const char* name;
};


TouchScreenType* TouchScreenType_new(const char* name);

void TouchScreenType_init(TouchScreenType* this, const char* name);
const char* TouchScreenType_getName(TouchScreenType* this);
const char* TouchScreenType_toString(TouchScreenType* this);

static void TouchScreenType_initFields(TouchScreenType* this) {
    
}


void TouchScreenType_init(TouchScreenType* this, const char* name) {
    TouchScreenType_initFields(this);
        this->name = name;
}

TouchScreenType* TouchScreenType_new(const char* name) {
    TouchScreenType* this = calloc(1, sizeof(TouchScreenType));
    TouchScreenType_init(this, name);
    return this;
}


const char* TouchScreenType_getName(TouchScreenType* this) {
        return this->name;
}


const char* TouchScreenType_toString(TouchScreenType* this) {
        return TouchScreenType_getName(this);
}

