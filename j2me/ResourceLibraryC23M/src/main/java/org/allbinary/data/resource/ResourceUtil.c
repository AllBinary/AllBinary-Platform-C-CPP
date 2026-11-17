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
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

//J2SE - J2ME
typedef struct ResourceUtil ResourceUtil;
struct ResourceUtil {
    LogUtil* logUtil;
};

static Any* ResourceUtil_classLoader;
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
    ResourceUtil_classLoader = NullUtil_getInstance()->NULL_OBJECT;
    ResourceUtil_instance = ResourceUtil_new();
}

static void ResourceUtil_initFields(ResourceUtil* this) {
    this->logUtil = LogUtil_getInstance();
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
        LogUtil_putF(this->logUtil, CommonStrings_getInstance()->NOT_IMPLEMENTED, this, "setLoadingPaths");
}


void ResourceUtil_setClassLoader(ResourceUtil* this, ClassLoader* classLoader) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Resource Loader: "), append, java_class_of(classLoader)), toString), this, "setClassLoader");
        ResourceUtil_classLoader = classLoader;
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
        CommonSeps* commonSeps = CommonSeps_getInstance();
        int32_t index = java_string_indexOf(resource, commonSeps->COLON);
        const char* resourcePath = java_substring(resource, index + startIndex, (int32_t) strlen(resource));
        InputStream* inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        ClassLoader* classLoader = ((ClassLoader*) ResourceUtil_classLoader);
        inputStream = Any_getResourceAsStream(classLoader, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        inputStream = JAVA_CALL(JAVA_CALL(Thread_currentThread(), getContextClassLoader), getResourceAsStream, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        return inputStream;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
}

