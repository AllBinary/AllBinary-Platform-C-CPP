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
// package org.allbinary.logic.java.array

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct IntArrayUtil IntArrayUtil;
struct IntArrayUtil {
    char unused;
};


IntArrayUtil* IntArrayUtil_new(void);

void IntArrayUtil_init(IntArrayUtil* this);
const char* IntArrayUtil_toString(int32_t* array);
const char* IntArrayUtil_toString(int32_t** array);
const char* IntArrayUtil_toString(int32_t*** array);


void IntArrayUtil_init(IntArrayUtil* this) {
}

IntArrayUtil* IntArrayUtil_new(void) {
    IntArrayUtil* this = calloc(1, sizeof(IntArrayUtil));
    IntArrayUtil_init(this);
    return this;
}


const char* IntArrayUtil_toString(int32_t* array) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = 0; index < java_array_length(array); index++) {
            StringMaker_appendint(stringBuffer, array[index]);
            if (index < java_array_length(array)) {
                StringMaker_append(stringBuffer, ", ");
            }
        }
        return StringMaker_toString(stringBuffer);
}


// Java overloaded method: C needs a different name
const char* IntArrayUtil_toString(int32_t** array) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = 0; index < java_array_length(array); index++) {
            StringMaker_append(stringBuffer, "{");
            for (int32_t index2 = 0; index2 < java_array_length(array[index]); index2++) {
                StringMaker_appendint(stringBuffer, ((int32_t) array[index][index2]));
                if (index2 < java_array_length(array[index]) - 1) {
                    StringMaker_append(stringBuffer, ", ");
                }
            }
            StringMaker_append(stringBuffer, "}");
            if (index < java_array_length(array) - 1) {
                StringMaker_append(stringBuffer, ", \n");
            }
        }
        return StringMaker_toString(stringBuffer);
}


// Java overloaded method: C needs a different name
const char* IntArrayUtil_toString(int32_t*** array) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = 0; index < java_array_length(array); index++) {
            StringMaker_append(stringBuffer, "{");
            for (int32_t index2 = 0; index2 < java_array_length(array[index]); index2++) {
                StringMaker_append(stringBuffer, "{");
                for (int32_t index3 = 0; index3 < java_array_length(array[index][index2]); index3++) {
                    StringMaker_appendint(stringBuffer, ((int32_t) array[index][index2][index3]));
                    if (index3 < java_array_length(array[index][index2]) - 1) {
                        StringMaker_append(stringBuffer, ", ");
                    }
                }
                StringMaker_append(stringBuffer, "}");
                if (index2 < java_array_length(array[index]) - 1) {
                    StringMaker_append(stringBuffer, ", ");
                }
            }
            StringMaker_append(stringBuffer, "}");
            if (index < java_array_length(array) - 1) {
                StringMaker_append(stringBuffer, ", \n");
            }
        }
        return StringMaker_toString(stringBuffer);
}

