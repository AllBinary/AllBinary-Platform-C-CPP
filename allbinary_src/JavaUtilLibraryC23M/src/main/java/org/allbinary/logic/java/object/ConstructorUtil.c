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
// #include "java/lang/reflect/Constructor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct ConstructorUtil ConstructorUtil;
struct ConstructorUtil {
    char unused;
};


ConstructorUtil* ConstructorUtil_new(void);

void ConstructorUtil_init(ConstructorUtil* this);
const char* ConstructorUtil_viewAll(const char* myClass, const char* lineBreak);
const char* ConstructorUtil_view(Constructor* constructor, const char* lineBreak);


void ConstructorUtil_init(ConstructorUtil* this) {
}

ConstructorUtil* ConstructorUtil_new(void) {
    ConstructorUtil* this = calloc(1, sizeof(ConstructorUtil));
    ConstructorUtil_init(this);
    return this;
}


const char* ConstructorUtil_viewAll(const char* myClass, const char* lineBreak) {
        StringMaker* stringBuffer = StringMaker_new();
        Constructor** constructor = Class_getConstructors(myClass);
        StringMaker_append(stringBuffer, "Constructors: ");
        StringMaker_append(stringBuffer, lineBreak);
        for (int32_t index = 0; index < java_array_length(constructor); index++) {
            StringMaker_append(stringBuffer, ConstructorUtil_view(constructor[index], lineBreak));
        }
        return StringMaker_toString(stringBuffer);
}


const char* ConstructorUtil_view(Constructor* constructor, const char* lineBreak) {
        if (constructor != nullptr) {
            CommonSeps* commonSeps = CommonSeps_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(constructor, getName));
            const char** classes = JAVA_CALL(constructor, getParameterTypes);
            for (int32_t index = 0; index < java_array_length(classes); index++) {
                StringMaker_append(stringBuffer, commonSeps->SPACE);
                StringMaker_append(stringBuffer, JAVA_CALL(classes[index], getName));
                StringMaker_append(stringBuffer, commonSeps->COLON);
                StringMaker_appendint(stringBuffer, index);
            }
            StringMaker_append(stringBuffer, lineBreak);
            return StringMaker_toString(stringBuffer);
        } else {
            return "Constructor Null";
        }
}

