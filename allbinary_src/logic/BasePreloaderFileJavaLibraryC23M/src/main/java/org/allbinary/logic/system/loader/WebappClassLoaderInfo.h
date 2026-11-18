#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H
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
// package org.allbinary.logic.system.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NullUtil NullUtil;
#include "java/lang/ClassLoader.h"

typedef struct WebappClassLoaderInfo WebappClassLoaderInfo;
struct WebappClassLoaderInfo {
    char unused;
};


WebappClassLoaderInfo* WebappClassLoaderInfo_new(void);

void WebappClassLoaderInfo_init(WebappClassLoaderInfo* this);

void WebappClassLoaderInfo_setLoader(ClassLoader* classLoader);

ClassLoader* WebappClassLoaderInfo_getLoader(void);
#define WebappClassLoaderInfo_new0 WebappClassLoaderInfo_new
#define WebappClassLoaderInfo_init0 WebappClassLoaderInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WebappClassLoaderInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WebappClassLoaderInfo_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_WEBAPPCLASSLOADERINFO_H
