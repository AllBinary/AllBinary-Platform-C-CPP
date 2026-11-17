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
// #include "java/io/DataOutputStream.h"
// #include "java/io/OutputStream.h"

typedef struct AbDataOutputStream AbDataOutputStream;
struct AbDataOutputStream {
    DataOutputStream base;
};


AbDataOutputStream* AbDataOutputStream_new(OutputStream* out);

void AbDataOutputStream_init(AbDataOutputStream* this, OutputStream* out);


void AbDataOutputStream_init(AbDataOutputStream* this, OutputStream* out) {
        DataOutputStream_init(&this->base, out);
}

AbDataOutputStream* AbDataOutputStream_new(OutputStream* out) {
    AbDataOutputStream* this = calloc(1, sizeof(AbDataOutputStream));
    AbDataOutputStream_init(this, out);
    return this;
}

