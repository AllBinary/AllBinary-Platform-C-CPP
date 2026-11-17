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
// package org.allbinary.logic.java.number

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonPhoneStrings.h"

typedef struct LongUtil LongUtil;
struct LongUtil {
    char unused;
};


LongUtil* LongUtil_new(void);

void LongUtil_init(LongUtil* this);
const char* LongUtil_fillIn(const char* end);


void LongUtil_init(LongUtil* this) {
}

LongUtil* LongUtil_new(void) {
    LongUtil* this = calloc(1, sizeof(LongUtil));
    LongUtil_init(this);
    return this;
}


const char* LongUtil_fillIn(const char* end) {
        StringMaker* frameStringBuffer = StringMaker_new();
        if (StringMaker_length(frameStringBuffer) < LongData_MAX_LONG_LENGTH) {
            CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
            int32_t size = LongData_MAX_LONG_LENGTH - StringMaker_length(frameStringBuffer);
            for (int32_t index = 0; index < size; index++) {
                StringMaker_append(frameStringBuffer, commonPhoneStrings->ZERO);
            }
        }
        StringMaker_append(frameStringBuffer, end);
        return StringMaker_toString(frameStringBuffer);
}

