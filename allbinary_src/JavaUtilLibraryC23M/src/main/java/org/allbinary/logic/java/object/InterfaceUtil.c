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
#include "org/allbinary/string/CommonSeps.h"

typedef struct InterfaceUtil InterfaceUtil;
struct InterfaceUtil {
    char unused;
};


InterfaceUtil* InterfaceUtil_new(void);

void InterfaceUtil_init(InterfaceUtil* this);
const char* InterfaceUtil_viewAll(const char* myClass, const char* lineBreak);
const char* InterfaceUtil_getClass(const char* interfaceName, const char** interfaces);
bool InterfaceUtil_isImplemented(const char* clazz, Any* anyType);
bool InterfaceUtil_isImplemented(const char* className, Any* anyType);
const char* InterfaceUtil_isImplementedView(const char* clazz, Any* anyType);


void InterfaceUtil_init(InterfaceUtil* this) {
}

InterfaceUtil* InterfaceUtil_new(void) {
    InterfaceUtil* this = calloc(1, sizeof(InterfaceUtil));
    InterfaceUtil_init(this);
    return this;
}


const char* InterfaceUtil_viewAll(const char* myClass, const char* lineBreak) {
        StringMaker* stringBuffer = StringMaker_new();
        const char** interfaces = Class_getInterfaces(myClass);
        StringMaker_append(stringBuffer, lineBreak);
        StringMaker_append(stringBuffer, "Interfaces: ");
        StringMaker_append(stringBuffer, lineBreak);
        for (int32_t index = 0; index < java_array_length(interfaces); index++) {
            StringMaker_append(stringBuffer, "Interface: ");
            StringMaker_append(stringBuffer, JAVA_CALL(interfaces[index], getName));
            StringMaker_append(stringBuffer, lineBreak);
        }
        return StringMaker_toString(stringBuffer);
}


const char* InterfaceUtil_getClass(const char* interfaceName, const char** interfaces) {
        if (interfaceName != nullptr && interfaces != nullptr && java_array_length(interfaces) > 0) {
            for (int32_t index = 0; index < java_array_length(interfaces); index++) {
                if (JAVA_CALL(JAVA_CALL(interfaces[index], getName), indexOf, interfaceName) >= 0) {
                    return interfaces[index];
                }
            }
        }
        return nullptr;
}


bool InterfaceUtil_isImplemented(const char* clazz, Any* anyType) {
        const char** classes = JAVA_CALL(java_class_of(anyType), getInterfaces);
        for (int32_t index = 0; index < java_array_length(classes); index++) {
            if (JAVA_CALL(Class_getName(clazz), compareTo, JAVA_CALL(classes[index], getName)) == 0) {
                return true;
            }
        }
        return false;
}


// Java overloaded method: C needs a different name
bool InterfaceUtil_isImplemented(const char* className, Any* anyType) {
        const char** classes = JAVA_CALL(java_class_of(anyType), getInterfaces);
        for (int32_t index = 0; index < java_array_length(classes); index++) {
            if (JAVA_CALL(JAVA_CALL(classes[index], getName), indexOf, className) == 0) {
                return true;
            }
        }
        return false;
}


const char* InterfaceUtil_isImplementedView(const char* clazz, Any* anyType) {
        StringMaker* stringBuffer = StringMaker_new();
        const char** classes = JAVA_CALL(java_class_of(anyType), getInterfaces);
        StringMaker_append(stringBuffer, "isImplementedView: \n");
        for (int32_t index = 0; index < java_array_length(classes); index++) {
            StringMaker_append(stringBuffer, Class_getName(clazz));
            StringMaker_append(stringBuffer, " should be = ");
            StringMaker_append(stringBuffer, JAVA_CALL(classes[index], getName));
            StringMaker_append(stringBuffer, JAVA_CALL(classes[index], getName));
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        }
        return StringMaker_toString(stringBuffer);
}

