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
// package org.allbinary.system

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

//ActualPlatform
typedef struct Memory Memory;
struct Memory {
    char unused;
};


Memory* Memory_new(void);
const char* Memory_getInfo(void);

void Memory_init(Memory* this) {
}

Memory* Memory_new(void) {
    Memory* this = calloc(1, sizeof(Memory));
    Memory_init(this);
    return this;
}


const char* Memory_getInfo(void) {
        StringMaker* stringBuffer = StringMaker_new();
        int64_t maxUtilizedMemoryAvailable = JAVA_CALL(Runtime_getRuntime(), maxMemory);
        int64_t memoryUsed = JAVA_CALL(Runtime_getRuntime(), totalMemory);
        StringMaker_append(stringBuffer, "APK Memory: Available: ");
        StringMaker_appendlong(stringBuffer, maxUtilizedMemoryAvailable);
        StringMaker_append(stringBuffer, "/");
        StringMaker_appendlong(stringBuffer, ((int64_t) JAVA_CALL(Runtime_getRuntime(), maxMemory)));
        StringMaker_append(stringBuffer, " Used: ");
        StringMaker_appendlong(stringBuffer, memoryUsed);
        StringMaker_append(stringBuffer, " Free: ");
        StringMaker_appendlong(stringBuffer, maxUtilizedMemoryAvailable - memoryUsed);
        StringMaker_append(stringBuffer, "/");
        StringMaker_appendlong(stringBuffer, ((int64_t) (JAVA_CALL(Runtime_getRuntime(), maxMemory) - memoryUsed)));
        return StringMaker_toString(stringBuffer);
}

