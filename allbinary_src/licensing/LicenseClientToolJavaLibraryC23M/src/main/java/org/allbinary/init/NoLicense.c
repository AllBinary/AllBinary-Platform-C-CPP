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
// package org.allbinary.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/globals/Globals.h"

typedef struct NoLicense NoLicense;
struct NoLicense {
    char unused;
};


NoLicense* NoLicense_new(void);

void NoLicense_init(NoLicense* this);
void NoLicense_init(ClassLoader* classLoader, const char* pathString);


void NoLicense_init(NoLicense* this) {
}

NoLicense* NoLicense_new(void) {
    NoLicense* this = calloc(1, sizeof(NoLicense));
    NoLicense_init(this);
    return this;
}


// throws Exception
void NoLicense_init(ClassLoader* classLoader, const char* pathString) {
        Globals_init(classLoader, pathString);
}

