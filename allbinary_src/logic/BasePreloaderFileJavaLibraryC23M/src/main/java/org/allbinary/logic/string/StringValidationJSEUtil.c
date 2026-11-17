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
// package org.allbinary.logic.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StringValidationJSEUtil StringValidationJSEUtil;
struct StringValidationJSEUtil {
    char unused;
};


StringValidationJSEUtil* StringValidationJSEUtil_new(void);

void StringValidationJSEUtil_init(StringValidationJSEUtil* this);
bool StringValidationJSEUtil_isBlank(const char* string);


void StringValidationJSEUtil_init(StringValidationJSEUtil* this) {
}

StringValidationJSEUtil* StringValidationJSEUtil_new(void) {
    StringValidationJSEUtil* this = calloc(1, sizeof(StringValidationJSEUtil));
    StringValidationJSEUtil_init(this);
    return this;
}


bool StringValidationJSEUtil_isBlank(const char* string) {
        int32_t len = ((int32_t) strlen(string));
        for (int32_t i = 0; i < len; i++) {
            uint16_t c = ((uint16_t) string[i]);
            if (isspace(c) == false) {
                return false;
            }
        }
        return true;
}

