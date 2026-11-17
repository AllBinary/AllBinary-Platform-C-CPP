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
// package org.allbinary.media.image.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct BufferedImageInfoFactory BufferedImageInfoFactory;
struct BufferedImageInfoFactory {
    char unused;
};

static HashMap* BufferedImageInfoFactory_hashMap;

BufferedImageInfoFactory* BufferedImageInfoFactory_new(void);

void BufferedImageInfoFactory_init(BufferedImageInfoFactory* this);
BufferedImageInfo* BufferedImageInfoFactory_getInstance(int32_t width, int32_t height, int32_t type);

// Static fields with runtime initializers: call this once at startup
void BufferedImageInfoFactory_staticInit(void) {
    BufferedImageInfoFactory_hashMap = StdUtil_createHashMap(StdUtil_getInstance());
}


void BufferedImageInfoFactory_init(BufferedImageInfoFactory* this) {
}

BufferedImageInfoFactory* BufferedImageInfoFactory_new(void) {
    BufferedImageInfoFactory* this = calloc(1, sizeof(BufferedImageInfoFactory));
    BufferedImageInfoFactory_init(this);
    return this;
}


BufferedImageInfo* BufferedImageInfoFactory_getInstance(int32_t width, int32_t height, int32_t type) {
        StringMaker* stringbuffer = StringMaker_new();
        StringMaker_appendint(stringbuffer, width);
        StringMaker_appendint(stringbuffer, height);
        StringMaker_appendint(stringbuffer, type);
        const char* key = StringMaker_toString(stringbuffer);
        BufferedImageInfo* bufferedImageInfo = ((BufferedImageInfo*) JAVA_CALL(BufferedImageInfoFactory_hashMap, get, key));
        if (bufferedImageInfo == nullptr) {
            bufferedImageInfo = BufferedImageInfo_new(width, height, type);
            JAVA_CALL(BufferedImageInfoFactory_hashMap, put, key, bufferedImageInfo);
        }
        return bufferedImageInfo;
}

