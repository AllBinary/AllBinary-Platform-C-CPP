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
#include "android/app/Activity.h"
#include "android/content/Context.h"
#include "android/content/res/Resources.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/HashtableUtil.h"

//Android
typedef struct ResourceUtil ResourceUtil;
struct ResourceUtil {
    LogUtil* logUtil;
    Any* context;
    Any* resources;
    ABHashtable* hashMap;
};

static ResourceUtil* ResourceUtil_instance;

ResourceUtil* ResourceUtil_new(void);
ResourceUtil* ResourceUtil_getInstance(void);

void ResourceUtil_init(ResourceUtil* this);
void ResourceUtil_setLoadingPaths(ResourceUtil* this, const char* path, const char* ext);
Context* ResourceUtil_getContext(ResourceUtil* this);
void ResourceUtil_setContextFromActivity(ResourceUtil* this, Activity* activity);
void ResourceUtil_setContext(ResourceUtil* this, Context* aContext);
int32_t ResourceUtil_getResourceId(ResourceUtil* this, const char* resource);
void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value);
static bool ResourceUtil_containsDuplicate(ResourceUtil* this, const char* resource, int32_t value);
void ResourceUtil_setResources(ResourceUtil* this, Resources* resources);
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource);

// Static fields with runtime initializers: call this once at startup
void ResourceUtil_staticInit(void) {
    ResourceUtil_instance = ResourceUtil_new();
}

static void ResourceUtil_initFields(ResourceUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->context = NullUtil_getInstance()->NULL_OBJECT;
    this->resources = NullUtil_getInstance()->NULL_OBJECT;
    this->hashMap = StdUtil_createHashtable(StdUtil_getInstance());
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


Context* ResourceUtil_getContext(ResourceUtil* this) {
        return ((Context*) this->context);
}


void ResourceUtil_setContextFromActivity(ResourceUtil* this, Activity* activity) {
        this->context = activity;
}


void ResourceUtil_setContext(ResourceUtil* this, Context* aContext) {
        this->context = aContext;
}


int32_t ResourceUtil_getResourceId(ResourceUtil* this, const char* resource) {
        int32_t value = ((int32_t) ABHashtable_get(this->hashMap, resource));
        if (DebugFactory_getInstance() != NoDebug_getInstance()) {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), resource), append, CommonSeps_getInstance()->COLON), append, Integer_toString(value)), toString), this, "getResourceId");
        }
        return value;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
        if (DebugFactory_getInstance() != NoDebug_getInstance()) {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), resource), append, CommonSeps_getInstance()->COLON), append, Integer_toString(value)), toString), this, "addResource");
            if (ResourceUtil_containsDuplicate(this, resource, value)) {
                ForcedLogUtil_log(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Found Duplicate Resource: "), append, resource), toString), this);
            }
        }
        ABHashtable_put(this->hashMap, resource, value);
}


static bool ResourceUtil_containsDuplicate(ResourceUtil* this, const char* resource, int32_t value) {
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), this->hashMap);
        for (int32_t index = java_array_length(objectArray); --index >= 0; ) {
            int32_t integer = ((int32_t) ABHashtable_get(this->hashMap, ((Any*) objectArray[index])));
            if (resource != objectArray[index]) {
                if (value != integer) {
                    if (Integer_intValue(value) == Integer_intValue(integer)) {
                        return true;
                    }
                }
            }
        }
        return false;
}


void ResourceUtil_setResources(ResourceUtil* this, Resources* resources) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Resource Loader: "), append, java_class_of(resources)), toString), this, "setResources");
        this->resources = resources;
}


// throws Exception
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource) {
        int32_t integer = ((int32_t) ABHashtable_get(this->hashMap, resource));
        int32_t id = Integer_intValue(integer);
        Resources* resources = (((Resources*) this->resources));
        InputStream* inputStream = Any_openRawResource(resources, id);
        if (inputStream != nullptr) {
            return inputStream;
        }
        return inputStream;
}

