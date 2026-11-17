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
// package org.allbinary.logic.java.anyType.clazz

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/java/anyType/ConstructorUtil.h"
#include "org/allbinary/logic/java/anyType/InterfaceUtil.h"
#include "org/allbinary/logic/java/anyType/MethodUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct ClassUtil ClassUtil;
struct ClassUtil {
    char unused;
};


ClassUtil* ClassUtil_new(void);

void ClassUtil_init(ClassUtil* this);
const char* ClassUtil_viewAll(Any* anyType, const char* lineBreak);
const char* ClassUtil_viewAll(const char* myClass, const char* lineBreak);


void ClassUtil_init(ClassUtil* this) {
}

ClassUtil* ClassUtil_new(void) {
    ClassUtil* this = calloc(1, sizeof(ClassUtil));
    ClassUtil_init(this);
    return this;
}


const char* ClassUtil_viewAll(Any* anyType, const char* lineBreak) {
        if (anyType != nullptr) {
            return ClassUtil_viewAll(java_class_of(anyType), lineBreak);
        } else {
            return "Object Null";
        }
}


// Java overloaded method: C needs a different name
const char* ClassUtil_viewAll(const char* myClass, const char* lineBreak) {
        if (myClass != nullptr) {
            StringMaker* stringBuffer = StringMaker_new();
            const char** classes = Class_getClasses(myClass);
            StringMaker_append(stringBuffer, lineBreak);
            StringMaker_append(stringBuffer, "Class: ");
            StringMaker_append(stringBuffer, Class_getName(myClass));
            StringMaker_append(stringBuffer, " uses ");
            StringMaker_appendint(stringBuffer, java_array_length(classes));
            StringMaker_append(stringBuffer, " other classes");
            StringMaker_append(stringBuffer, lineBreak);
            StringMaker_append(stringBuffer, lineBreak);
            StringMaker_append(stringBuffer, "Classes: ");
            StringMaker_append(stringBuffer, lineBreak);
            for (int32_t index = 0; index < java_array_length(classes); index++) {
                StringMaker_append(stringBuffer, "Class: ");
                StringMaker_append(stringBuffer, JAVA_CALL(classes[index], getName));
                StringMaker_append(stringBuffer, lineBreak);
            }
            StringMaker_append(stringBuffer, InterfaceUtil_viewAll(myClass, lineBreak));
            StringMaker_append(stringBuffer, lineBreak);
            StringMaker_append(stringBuffer, ConstructorUtil_viewAll(myClass, lineBreak));
            StringMaker_append(stringBuffer, lineBreak);
            StringMaker_append(stringBuffer, MethodUtil_viewAll(myClass, lineBreak));
            return StringMaker_toString(stringBuffer);
        } else {
            return "Class Null";
        }
}

