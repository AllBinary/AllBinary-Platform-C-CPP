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
// package org.allbinary.data.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/FileInputStream.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

//J2SE - PC
typedef struct ResourceUtil ResourceUtil;
struct ResourceUtil {
    LogUtil* logUtil;
    const char* path;
    const char* ext;
};

static ResourceUtil* ResourceUtil_instance;

ResourceUtil* ResourceUtil_new(void);
ResourceUtil* ResourceUtil_getInstance(void);

void ResourceUtil_init(ResourceUtil* this);
void ResourceUtil_setLoadingPaths(ResourceUtil* this, const char* path, const char* ext);
void ResourceUtil_setClassLoader(ResourceUtil* this, ClassLoader* classLoader);
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource);
static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex);
void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value);

// Static fields with runtime initializers: call this once at startup
void ResourceUtil_staticInit(void) {
    ResourceUtil_instance = ResourceUtil_new();
}

static void ResourceUtil_initFields(ResourceUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->path = StringUtil_getInstance()->EMPTY_STRING;
    this->ext = StringUtil_getInstance()->EMPTY_STRING;
}


ResourceUtil* ResourceUtil_getInstance(void) {
        return ResourceUtil_instance;
}


void ResourceUtil_init(ResourceUtil* this) {
    ResourceUtil_initFields(this);
}

ResourceUtil* ResourceUtil_new(void) {
    ResourceUtil* this = calloc(1, sizeof(ResourceUtil));
    ResourceUtil_init(this);
    return this;
}


void ResourceUtil_setLoadingPaths(ResourceUtil* this, const char* path, const char* ext) {
        this->path = path;
        this->ext = ext;
}


void ResourceUtil_setClassLoader(ResourceUtil* this, ClassLoader* classLoader) {
}


// throws Exception
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource) {
        InputStream* inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 2);
        if (inputStream == nullptr) {
            inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 1);
            if (inputStream == nullptr) {
                java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Unable to obtain: "), append, resource), toString)));
            }
        }
        return inputStream;
}


// throws Exception
static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex) {
        InputStream* inputStream = FileInputStream_new(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->path), append, resource), append, this->ext), toString));
        if (inputStream != nullptr) {
            int8_t* byteArray = ((int8_t*) java_array_new(sizeof(int8_t), InputStream_available(inputStream)));
            StreamUtil_getByteArray(StreamUtil_getInstance(), inputStream, ByteArrayOutputStream_new(), byteArray);
            return ByteArrayInputStream_new(byteArray);
        }
        return inputStream;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
}

