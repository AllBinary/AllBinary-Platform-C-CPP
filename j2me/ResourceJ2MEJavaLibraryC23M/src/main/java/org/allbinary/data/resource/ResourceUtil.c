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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

//J2ME
typedef struct ResourceUtil ResourceUtil;
struct ResourceUtil {
    LogUtil* logUtil;
};

static ResourceUtil* ResourceUtil_instance;

ResourceUtil* ResourceUtil_new(void);
ResourceUtil* ResourceUtil_getInstance(void);

void ResourceUtil_init(ResourceUtil* this);
void ResourceUtil_setLoadingPaths(ResourceUtil* this, const char* path, const char* ext);
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource);
static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex);
void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value);

// Static fields with runtime initializers: call this once at startup
void ResourceUtil_staticInit(void) {
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


// throws Exception
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource) {
        InputStream* inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resource);
        if (inputStream == nullptr) {
            inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 2);
            if (inputStream == nullptr) {
                inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 1);
                if (inputStream == nullptr) {
                    StringMaker* stringMaker = StringMaker_new();
                    int32_t index = java_string_lastIndexOf(resource, u'/');
                    const char* resourcePath = java_substring(resource, index + 1, (int32_t) strlen(resource));
                    inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                    if (inputStream == nullptr) {
                        resourcePath = java_substring(resource, index, (int32_t) strlen(resource));
                        inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                        if (inputStream == nullptr) {
                            const char* RES = "res";
                            resourcePath = JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, RES), append, java_substring(resource, index, (int32_t) strlen(resource))), toString);
                            inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                            if (inputStream == nullptr) {
                                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                resourcePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "/"), append, RES), append, java_substring(resource, index, (int32_t) strlen(resource))), toString);
                                inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                const char* COLON = CommonSeps_getInstance()->COLON;
                                if (inputStream == nullptr) {
                                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                    resourcePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, RES), append, COLON), append, java_substring(resource, index, (int32_t) strlen(resource))), toString);
                                    inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                    if (inputStream == nullptr) {
                                        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                        resourcePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, RES), append, COLON), append, java_substring(resource, index + 1, (int32_t) strlen(resource))), toString);
                                        inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                        if (inputStream == nullptr) {
                                            const char* RESOURCE_STRING = "resource";
                                            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                            resourcePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, RESOURCE_STRING), append, COLON), append, java_substring(resource, index, (int32_t) strlen(resource))), toString);
                                            inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                            if (inputStream == nullptr) {
                                                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                                resourcePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, RESOURCE_STRING), append, COLON), append, java_substring(resource, index + 1, (int32_t) strlen(resource))), toString);
                                                inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                                if (inputStream == nullptr) {
                                                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                                    java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "Unable to obtain: "), append, resource), toString)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return inputStream;
}


// throws Exception
static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex) {
        StringMaker* stringMaker = StringMaker_new();
        int32_t index = java_string_indexOf(resource, CommonSeps_getInstance()->COLON);
        const char* resourcePath = java_substring(resource, index + startIndex, (int32_t) strlen(resource));
        InputStream* inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        return inputStream;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
}

