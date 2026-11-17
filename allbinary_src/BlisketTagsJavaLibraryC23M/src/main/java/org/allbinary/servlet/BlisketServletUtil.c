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
// package org.allbinary.servlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"

typedef struct BlisketServletUtil BlisketServletUtil;
struct BlisketServletUtil {
    char unused;
};

static BlisketServletUtil* BlisketServletUtil_instance;

BlisketServletUtil* BlisketServletUtil_new(void);
BlisketServletUtil* BlisketServletUtil_getInstance(void);
void BlisketServletUtil_init(BlisketServletUtil* this, HttpServletRequest* request);

// Static fields with runtime initializers: call this once at startup
void BlisketServletUtil_staticInit(void) {
    BlisketServletUtil_instance = BlisketServletUtil_new();
}

void BlisketServletUtil_init(BlisketServletUtil* this) {
}

BlisketServletUtil* BlisketServletUtil_new(void) {
    BlisketServletUtil* this = calloc(1, sizeof(BlisketServletUtil));
    BlisketServletUtil_init(this);
    return this;
}


BlisketServletUtil* BlisketServletUtil_getInstance(void) {
        return BlisketServletUtil_instance;
}


void BlisketServletUtil_init(BlisketServletUtil* this, HttpServletRequest* request) {
        AppUrlGlobals* urlGlobals = AppUrlGlobals_new();
        AppUrlGlobals_setWebappPath(urlGlobals, JAVA_CALL(HttpServletRequest_getServletContext(request), getRealPath, AbPathData_getInstance()->SEPARATOR));
        JAVA_CALL(_URLGLOBALS, init, urlGlobals);
        WebappClassLoaderInfo_setLoader(JAVA_CALL(BlisketServletUtil_getClass(this), getClassLoader));
}

