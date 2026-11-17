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
// package org.allbinary.logic.java.anyType

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct ParamsUtil ParamsUtil;
struct ParamsUtil {
    char unused;
};


ParamsUtil* ParamsUtil_new(void);

void ParamsUtil_init(ParamsUtil* this);
const char* ParamsUtil_viewParams(const char** params);


void ParamsUtil_init(ParamsUtil* this) {
}

ParamsUtil* ParamsUtil_new(void) {
    ParamsUtil* this = calloc(1, sizeof(ParamsUtil));
    ParamsUtil_init(this);
    return this;
}


const char* ParamsUtil_viewParams(const char** params) {
        if (params != nullptr) {
            StringMaker* stringBuffer = StringMaker_new();
            for (int32_t index = 0; index < java_array_length(params); index++) {
                StringMaker_append(stringBuffer, " ");
                StringMaker_append(stringBuffer, JAVA_CALL(params[index], getName));
            }
            return StringMaker_toString(stringBuffer);
        } else {
            return "Params Null";
        }
}

