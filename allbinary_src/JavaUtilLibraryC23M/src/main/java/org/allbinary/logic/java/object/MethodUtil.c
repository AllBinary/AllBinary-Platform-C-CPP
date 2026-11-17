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
// #include "java/lang/reflect/Method.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct MethodUtil MethodUtil;
struct MethodUtil {
    char unused;
};


MethodUtil* MethodUtil_new(void);

void MethodUtil_init(MethodUtil* this);
const char* MethodUtil_viewAll(const char* myClass, const char* lineBreak);


void MethodUtil_init(MethodUtil* this) {
}

MethodUtil* MethodUtil_new(void) {
    MethodUtil* this = calloc(1, sizeof(MethodUtil));
    MethodUtil_init(this);
    return this;
}


const char* MethodUtil_viewAll(const char* myClass, const char* lineBreak) {
        StringMaker* stringBuffer = StringMaker_new();
        Method** method = Class_getMethods(myClass);
        StringMaker_append(stringBuffer, "Methods: ");
        StringMaker_append(stringBuffer, lineBreak);
        for (int32_t index = 0; index < java_array_length(method); index++) {
            StringMaker_append(stringBuffer, JAVA_CALL(JAVA_CALL(method[index], getReturnType), getName));
            StringMaker_append(stringBuffer, " ");
            StringMaker_append(stringBuffer, JAVA_CALL(method[index], getName));
            StringMaker_append(stringBuffer, "(");
            ParamsUtil_viewParams(JAVA_CALL(method[index], getParameterTypes));
            StringMaker_append(stringBuffer, ")");
            StringMaker_append(stringBuffer, lineBreak);
        }
        return StringMaker_toString(stringBuffer);
}

