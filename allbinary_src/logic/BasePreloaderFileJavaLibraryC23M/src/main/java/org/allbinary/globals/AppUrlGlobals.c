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
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/globals/UrlGlobalsInterface.h"

//implements
typedef struct AppUrlGlobals AppUrlGlobals;
struct AppUrlGlobals {
    UrlGlobalsInterface base;
    const char* path;
};

AppUrlGlobals* AppUrlGlobals_NULL_APP_URL_GLOBALS;

AppUrlGlobals* AppUrlGlobals_new(void);
bool AppUrlGlobals_isTestingMode(AppUrlGlobals* this);
const char* AppUrlGlobals_getWebappPath(AppUrlGlobals* this);
void AppUrlGlobals_setWebappPath(AppUrlGlobals* this, const char* path);
const char* AppUrlGlobals_getTestHtmlPath(AppUrlGlobals* this);
const char* AppUrlGlobals_getMainPath(AppUrlGlobals* this);

// Static fields with runtime initializers: call this once at startup
void AppUrlGlobals_staticInit(void) {
    AppUrlGlobals_NULL_APP_URL_GLOBALS = AppUrlGlobals_new();
}

static void AppUrlGlobals_initFields(AppUrlGlobals* this) {
    this->path = StringUtil_getInstance()->EMPTY_STRING;
}

void AppUrlGlobals_init(AppUrlGlobals* this) {
    UrlGlobalsInterface_init(&this->base);
    AppUrlGlobals_initFields(this);
}

AppUrlGlobals* AppUrlGlobals_new(void) {
    AppUrlGlobals* this = calloc(1, sizeof(AppUrlGlobals));
    AppUrlGlobals_init(this);
    return this;
}


bool AppUrlGlobals_isTestingMode(AppUrlGlobals* this) {
        return false;
}


const char* AppUrlGlobals_getWebappPath(AppUrlGlobals* this) {
        return this->path;
}


// synchronized
void AppUrlGlobals_setWebappPath(AppUrlGlobals* this, const char* path) {
        this->path = path;
        if (!(java_string_endsWith(this->path, "\\") || java_string_endsWith(this->path, "/"))) {
            this->path = java_concat(this->path, "\\");
        }
}


const char* AppUrlGlobals_getTestHtmlPath(AppUrlGlobals* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


// throws Exception
const char* AppUrlGlobals_getMainPath(AppUrlGlobals* this) {
        return this->path;
}

