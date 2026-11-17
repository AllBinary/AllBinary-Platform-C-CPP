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

typedef struct UrlGlobalsInterface UrlGlobalsInterface;
struct UrlGlobalsInterface {
    char unused;
};


UrlGlobalsInterface* UrlGlobalsInterface_new(void);
const char* UrlGlobalsInterface_getMainPath(UrlGlobalsInterface* this);
const char* UrlGlobalsInterface_getTestHtmlPath(UrlGlobalsInterface* this);
const char* UrlGlobalsInterface_getWebappPath(UrlGlobalsInterface* this);
bool UrlGlobalsInterface_isTestingMode(UrlGlobalsInterface* this);

void UrlGlobalsInterface_init(UrlGlobalsInterface* this) {
}

UrlGlobalsInterface* UrlGlobalsInterface_new(void) {
    UrlGlobalsInterface* this = calloc(1, sizeof(UrlGlobalsInterface));
    UrlGlobalsInterface_init(this);
    return this;
}


// throws Exception
const char* UrlGlobalsInterface_getMainPath(UrlGlobalsInterface* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* UrlGlobalsInterface_getTestHtmlPath(UrlGlobalsInterface* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* UrlGlobalsInterface_getWebappPath(UrlGlobalsInterface* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool UrlGlobalsInterface_isTestingMode(UrlGlobalsInterface* this) {
        return false;
}

