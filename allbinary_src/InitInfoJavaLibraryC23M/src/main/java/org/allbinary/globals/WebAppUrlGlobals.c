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
#include "org/allbinary/business/init/InitInfo.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/globals/UrlGlobalsInterface.h"

typedef struct WebAppUrlGlobals WebAppUrlGlobals;
struct WebAppUrlGlobals {
    UrlGlobalsInterface base;
    const char* path;
    bool isWebappPathSet;
};


WebAppUrlGlobals* WebAppUrlGlobals_new(void);
bool WebAppUrlGlobals_isTestingMode(WebAppUrlGlobals* this);
const char* WebAppUrlGlobals_getWebappPath(WebAppUrlGlobals* this);
void WebAppUrlGlobals_setWebappPath(WebAppUrlGlobals* this, const char* path);
const char* WebAppUrlGlobals_getTestHtmlPath(WebAppUrlGlobals* this);
const char* WebAppUrlGlobals_getMainPath(WebAppUrlGlobals* this);

static void WebAppUrlGlobals_initFields(WebAppUrlGlobals* this) {
    this->path = nullptr;
    this->isWebappPathSet = false;
}

void WebAppUrlGlobals_init(WebAppUrlGlobals* this) {
    UrlGlobalsInterface_init(&this->base);
    WebAppUrlGlobals_initFields(this);
}

WebAppUrlGlobals* WebAppUrlGlobals_new(void) {
    WebAppUrlGlobals* this = calloc(1, sizeof(WebAppUrlGlobals));
    WebAppUrlGlobals_init(this);
    return this;
}


bool WebAppUrlGlobals_isTestingMode(WebAppUrlGlobals* this) {
        return InitInfo_isTesting(InitInfo_getInstance());
}


const char* WebAppUrlGlobals_getWebappPath(WebAppUrlGlobals* this) {
        return this->path;
}


// synchronized
void WebAppUrlGlobals_setWebappPath(WebAppUrlGlobals* this, const char* path) {
        path = path;
        this->isWebappPathSet = true;
}


const char* WebAppUrlGlobals_getTestHtmlPath(WebAppUrlGlobals* this) {
        return InitInfo_getTestHtmlPath(InitInfo_getInstance());
}


// throws Exception
const char* WebAppUrlGlobals_getMainPath(WebAppUrlGlobals* this) {
        const char* mainPath = InitInfo_getMainPath(InitInfo_getInstance());
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), mainPath)) {
            return mainPath;
        } else if (this->isWebappPathSet) {
            return WebAppUrlGlobals_getWebappPath(this);
        } else {
            java_throw(java_exception_new("Exception", "Webapp Path is not set"));
        }
}

