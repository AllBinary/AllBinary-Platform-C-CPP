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
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct FREEBLISKET_PATH_GLOBALS FREEBLISKET_PATH_GLOBALS;
struct FREEBLISKET_PATH_GLOBALS {
    const char* INSTALLPATH;
    const char* XSLPATH;
    const char* TEMPLATEPATH;
    const char* STYLEPATH;
    const char* THEMEPATH;
    const char* DBINITPATH;
    const char* LINEDATAPATH;
    const char* CONFIGURATIONPATH;
    const char* USERCONFIGURATIONPATH;
    const char* CONTEXTCONFIGURATIONPATH;
    const char* LICENSEERRORPAGE;
    const char* ERRORPAGE;
};

static FREEBLISKET_PATH_GLOBALS* FREEBLISKET_PATH_GLOBALS_instance;

FREEBLISKET_PATH_GLOBALS* FREEBLISKET_PATH_GLOBALS_new(void);
FREEBLISKET_PATH_GLOBALS* FREEBLISKET_PATH_GLOBALS_getInstance(void);

void FREEBLISKET_PATH_GLOBALS_init(FREEBLISKET_PATH_GLOBALS* this);

// Static fields with runtime initializers: call this once at startup
void FREEBLISKET_PATH_GLOBALS_staticInit(void) {
    FREEBLISKET_PATH_GLOBALS_instance = FREEBLISKET_PATH_GLOBALS_new();
}

static void FREEBLISKET_PATH_GLOBALS_initFields(FREEBLISKET_PATH_GLOBALS* this) {
    
    
    this->TEMPLATEPATH = java_concat("template", java_string_of(AbPathData_getInstance()->SEPARATOR));
    this->STYLEPATH = java_concat(java_concat(this->TEMPLATEPATH, "style"), java_string_of(AbPathData_getInstance()->SEPARATOR));
    this->THEMEPATH = java_concat(java_concat(this->STYLEPATH, "theme"), java_string_of(AbPathData_getInstance()->SEPARATOR));
    this->DBINITPATH = java_concat(java_concat(java_string_of(JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH), "db"), java_string_of(AbPathData_getInstance()->SEPARATOR));
    this->LINEDATAPATH = java_concat(java_concat(java_string_of(JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH), "lineData"), java_string_of(AbPathData_getInstance()->SEPARATOR));
    
    
    
    this->LICENSEERRORPAGE = "LicensingError.jsp";
    this->ERRORPAGE = "Error.jsp";
}


FREEBLISKET_PATH_GLOBALS* FREEBLISKET_PATH_GLOBALS_getInstance(void) {
        return _FREEBLISKET_PATH_GLOBALS->instance;
}


void FREEBLISKET_PATH_GLOBALS_init(FREEBLISKET_PATH_GLOBALS* this) {
    FREEBLISKET_PATH_GLOBALS_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "install");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        this->INSTALLPATH = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH);
        StringMaker_append(stringBuffer, "views");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        this->XSLPATH = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->XSLPATH);
        StringMaker_append(stringBuffer, "configuration");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        this->CONFIGURATIONPATH = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->CONFIGURATIONPATH);
        StringMaker_append(stringBuffer, "user");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        this->USERCONFIGURATIONPATH = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->CONFIGURATIONPATH);
        StringMaker_append(stringBuffer, "context");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        this->CONTEXTCONFIGURATIONPATH = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
}

FREEBLISKET_PATH_GLOBALS* FREEBLISKET_PATH_GLOBALS_new(void) {
    FREEBLISKET_PATH_GLOBALS* this = calloc(1, sizeof(FREEBLISKET_PATH_GLOBALS));
    FREEBLISKET_PATH_GLOBALS_init(this);
    return this;
}

