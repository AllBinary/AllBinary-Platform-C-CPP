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
// package org.allbinary.logic.java

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct PrimitiveArrayToString PrimitiveArrayToString;
struct PrimitiveArrayToString {
    char unused;
};


PrimitiveArrayToString* PrimitiveArrayToString_new(void);
const char* PrimitiveArrayToString_toString(float* floats);

void PrimitiveArrayToString_init(PrimitiveArrayToString* this) {
}

PrimitiveArrayToString* PrimitiveArrayToString_new(void) {
    PrimitiveArrayToString* this = calloc(1, sizeof(PrimitiveArrayToString));
    PrimitiveArrayToString_init(this);
    return this;
}


const char* PrimitiveArrayToString_toString(float* floats) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = 0; index < java_array_length(floats); index++) {
            StringMaker_appendfloat(stringBuffer, floats[index]);
        }
        return StringMaker_toString(stringBuffer);
}

