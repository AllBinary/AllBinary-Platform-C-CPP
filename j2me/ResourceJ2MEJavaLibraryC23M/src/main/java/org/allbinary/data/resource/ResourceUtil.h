#ifndef ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
#define ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
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
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#include "java/io/InputStream.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Integer.h"

//J2ME
typedef struct ResourceUtil ResourceUtil;
struct ResourceUtil {
    LogUtil* logUtil;
};


ResourceUtil* ResourceUtil_new(void);

ResourceUtil* ResourceUtil_getInstance(void);

void ResourceUtil_init(ResourceUtil* this);

void ResourceUtil_setLoadingPaths(ResourceUtil* this, const char* path, const char* ext);

InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource);


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value);
#define ResourceUtil_new0 ResourceUtil_new
#define ResourceUtil_init0 ResourceUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResourceUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ResourceUtil_register(void);


#endif // ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
