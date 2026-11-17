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
#include "org/allbinary/logic/NullUtil.h"

typedef struct WebappClassLoaderInfo WebappClassLoaderInfo;
struct WebappClassLoaderInfo {
    char unused;
};

static Any* WebappClassLoaderInfo_classLoader;

WebappClassLoaderInfo* WebappClassLoaderInfo_new(void);

void WebappClassLoaderInfo_init(WebappClassLoaderInfo* this);
void WebappClassLoaderInfo_setLoader(ClassLoader* classLoader);
ClassLoader* WebappClassLoaderInfo_getLoader(void);

// Static fields with runtime initializers: call this once at startup
void WebappClassLoaderInfo_staticInit(void) {
    WebappClassLoaderInfo_classLoader = NullUtil_getInstance()->NULL_OBJECT;
}


void WebappClassLoaderInfo_init(WebappClassLoaderInfo* this) {
}

WebappClassLoaderInfo* WebappClassLoaderInfo_new(void) {
    WebappClassLoaderInfo* this = calloc(1, sizeof(WebappClassLoaderInfo));
    WebappClassLoaderInfo_init(this);
    return this;
}


// synchronized
void WebappClassLoaderInfo_setLoader(ClassLoader* classLoader) {
        WebappClassLoaderInfo_classLoader = classLoader;
}


// synchronized
ClassLoader* WebappClassLoaderInfo_getLoader(void) {
        return ((ClassLoader*) WebappClassLoaderInfo_classLoader);
}

