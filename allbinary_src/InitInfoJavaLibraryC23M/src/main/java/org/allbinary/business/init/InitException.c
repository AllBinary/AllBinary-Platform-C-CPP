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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/Exception.h"

typedef struct InitException InitException;
struct InitException {
    Exception base;
};


InitException* InitException_new(void);

void InitException_init(InitException* this);

InitException* InitException_new1(const char* msg);
void InitException_init1(InitException* this, const char* msg);


void InitException_init(InitException* this) {
    Exception_init(&this->base);
}

InitException* InitException_new(void) {
    InitException* this = calloc(1, sizeof(InitException));
    InitException_init(this);
    return this;
}


void InitException_init1(InitException* this, const char* msg) {
        Exception_init(&this->base, msg);
}

InitException* InitException_new1(const char* msg) {
    InitException* this = calloc(1, sizeof(InitException));
    InitException_init1(this, msg);
    return this;
}

