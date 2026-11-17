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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct PlatformKeyFactory PlatformKeyFactory;
struct PlatformKeyFactory {
    char unused;
};

static Any* PlatformKeyFactory_instance;

PlatformKeyFactory* PlatformKeyFactory_new(void);
PlatformKeyFactory* PlatformKeyFactory_getInstance(void);
const char* PlatformKeyFactory_getString(PlatformKeyFactory* this, int32_t keyCode);
bool PlatformKeyFactory_isSubmission(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isDelete(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isBackSpace(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isUp(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isDown(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isEnter(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isLeft(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isRight(PlatformKeyFactory* this, Input* input);

// Static fields with runtime initializers: call this once at startup
void PlatformKeyFactory_staticInit(void) {
    PlatformKeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void PlatformKeyFactory_init(PlatformKeyFactory* this) {
}

PlatformKeyFactory* PlatformKeyFactory_new(void) {
    PlatformKeyFactory* this = calloc(1, sizeof(PlatformKeyFactory));
    PlatformKeyFactory_init(this);
    return this;
}


PlatformKeyFactory* PlatformKeyFactory_getInstance(void) {
        if (PlatformKeyFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            PlatformKeyFactory_instance = PlatformKeyFactory_new();
        }
        return ((PlatformKeyFactory*) PlatformKeyFactory_instance);
}


const char* PlatformKeyFactory_getString(PlatformKeyFactory* this, int32_t keyCode) {
        return PCGameKey_getString(keyCode);
}


bool PlatformKeyFactory_isSubmission(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isSubmission(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isDelete(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isDelete(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isBackSpace(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isBackSpace(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isUp(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isUp(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isDown(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isDown(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isEnter(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isEnter(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isLeft(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isLeft(PCKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isRight(PlatformKeyFactory* this, Input* input) {
        return PCKeyFactory_isRight(PCKeyFactory_getInstance(), input);
}

