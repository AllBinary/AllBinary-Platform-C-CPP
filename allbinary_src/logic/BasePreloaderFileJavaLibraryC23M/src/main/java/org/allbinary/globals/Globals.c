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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct Globals Globals;
struct Globals {
    LogUtil* logUtil;
};

static Globals* Globals_instance;

Globals* Globals_new(void);
Globals* Globals_getInstance(void);

void Globals_init(Globals* this);
void Globals_init(Globals* this, ClassLoader* classLoader, const char* pathString);

// Static fields with runtime initializers: call this once at startup
void Globals_staticInit(void) {
    Globals_instance = Globals_new();
}

static void Globals_initFields(Globals* this) {
    this->logUtil = LogUtil_getInstance();
}


Globals* Globals_getInstance(void) {
        return Globals_instance;
}


void Globals_init(Globals* this) {
    Globals_initFields(this);
}

Globals* Globals_new(void) {
    Globals* this = calloc(1, sizeof(Globals));
    Globals_init(this);
    return this;
}


void Globals_init(Globals* this, ClassLoader* classLoader, const char* pathString) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        AppUrlGlobals* appUrlGlobals = AppUrlGlobals_new();
        AppUrlGlobals_setWebappPath(appUrlGlobals, pathString);
        JAVA_CALL(_URLGLOBALS, init, appUrlGlobals);
        WebappClassLoaderInfo_setLoader(classLoader);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Setting Up AllBinary System Configuration Args: ");
        StringMaker_append(stringBuffer, pathString);
        StringMaker_append(stringBuffer, " ClassLoader: ");
        StringMaker_append(stringBuffer, java_class_of(classLoader));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->INIT);
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, pathString)) {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "No Path Provided. Using Process Path: ");
            StringMaker_append(stringBuffer, pathString);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->EQUALS);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->INIT);
        }
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, "Webapp Path Set To: ");
        StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->INIT);
}

