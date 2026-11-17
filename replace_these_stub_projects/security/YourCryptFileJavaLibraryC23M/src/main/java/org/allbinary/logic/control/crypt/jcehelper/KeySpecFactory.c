/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.logic.control.crypt.jcehelper

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/security/spec/KeySpec.h"

typedef struct KeySpecFactory KeySpecFactory;
struct KeySpecFactory {
    char unused;
};

const char* KeySpecFactory_DES = "DES";
const char* KeySpecFactory_DESEDE = "DESede";

KeySpecFactory* KeySpecFactory_new(void);

void KeySpecFactory_init(KeySpecFactory* this);
KeySpec* KeySpecFactory_getInstance(const char* algorithm, int8_t* keyData);


void KeySpecFactory_init(KeySpecFactory* this) {
}

KeySpecFactory* KeySpecFactory_new(void) {
    KeySpecFactory* this = calloc(1, sizeof(KeySpecFactory));
    KeySpecFactory_init(this);
    return this;
}


KeySpec* KeySpecFactory_getInstance(const char* algorithm, int8_t* keyData) {
        return nullptr;
}

