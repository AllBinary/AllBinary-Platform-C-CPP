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
// package org.allbinary.system

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

//NoPlatform
typedef struct Memory Memory;
struct Memory {
    char unused;
};


Memory* Memory_new(void);
const char* Memory_getInfo(void);

void Memory_init(Memory* this) {
}

Memory* Memory_new(void) {
    Memory* this = calloc(1, sizeof(Memory));
    Memory_init(this);
    return this;
}


const char* Memory_getInfo(void) {
        java_throw(java_exception_new("RuntimeException", ""));
}

