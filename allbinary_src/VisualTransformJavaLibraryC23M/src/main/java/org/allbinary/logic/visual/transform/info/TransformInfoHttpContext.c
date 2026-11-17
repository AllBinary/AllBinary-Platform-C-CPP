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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"

typedef struct TransformInfoHttpContext TransformInfoHttpContext;
struct TransformInfoHttpContext {
    TransformInfoHttp base;
    LogUtil* logUtil;
};


TransformInfoHttpContext* TransformInfoHttpContext_new(HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);

void TransformInfoHttpContext_init(TransformInfoHttpContext* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);

TransformInfoHttpContext* TransformInfoHttpContext_new2(HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttpContext_init2(TransformInfoHttpContext* this, HashMap* propertiesHashMap, PageContext* pageContext);
static const char* TransformInfoHttpContext_getPath(TransformInfoHttpContext* this);
AbPath* TransformInfoHttpContext_getTemplateFilePath(TransformInfoHttpContext* this);
AbPath* TransformInfoHttpContext_getObjectConfigFilePath(TransformInfoHttpContext* this);
AbPath* TransformInfoHttpContext_getDataFilePath(TransformInfoHttpContext* this);

static void TransformInfoHttpContext_initFields(TransformInfoHttpContext* this) {
    this->logUtil = LogUtil_getInstance();
}


void TransformInfoHttpContext_init(TransformInfoHttpContext* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoHttp_init(&this->base, databaseHashMap, propertiesHashMap, pageContext);
        TransformInfoHttpContext_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Database HashMap: ");
            StringMaker_append(stringBuffer, HashMap_toString(databaseHashMap));
            StringMaker_append(stringBuffer, "\nProperties HashMap: ");
            StringMaker_append(stringBuffer, HashMap_toString(propertiesHashMap));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->CONSTRUCTOR);
        }
        TransformInfoHttpContext_setStoreName(this, StringUtil_getInstance()->EMPTY_STRING);
}

TransformInfoHttpContext* TransformInfoHttpContext_new(HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttpContext* this = calloc(1, sizeof(TransformInfoHttpContext));
    TransformInfoHttpContext_init(this, databaseHashMap, propertiesHashMap, pageContext);
    return this;
}


void TransformInfoHttpContext_init2(TransformInfoHttpContext* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoHttp_init(&this->base, propertiesHashMap, pageContext);
        TransformInfoHttpContext_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, this->commonStrings->CONSTRUCTOR);
        }
        TransformInfoHttpContext_setStoreName(this, StringUtil_getInstance()->EMPTY_STRING);
}

TransformInfoHttpContext* TransformInfoHttpContext_new2(HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttpContext* this = calloc(1, sizeof(TransformInfoHttpContext));
    TransformInfoHttpContext_init2(this, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
static const char* TransformInfoHttpContext_getPath(TransformInfoHttpContext* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_FREEBLISKET_PATH_GLOBALS, getInstance)->INSTALLPATH);
        StringMaker_append(stringBuffer, TransformInfoHttpContext_getStoreName(this));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        return StringMaker_toString(stringBuffer);
}


// throws Exception
AbPath* TransformInfoHttpContext_getTemplateFilePath(TransformInfoHttpContext* this) {
        return AbPath_new(TransformInfoHttpContext_getPath(this), TransformInfoHttpContext_getTemplateFile(this));
}


// throws Exception
AbPath* TransformInfoHttpContext_getObjectConfigFilePath(TransformInfoHttpContext* this) {
        return AbPath_new(TransformInfoHttpContext_getPath(this), TransformInfoHttpContext_getObjectConfigFile(this));
}


// throws Exception
AbPath* TransformInfoHttpContext_getDataFilePath(TransformInfoHttpContext* this) {
        return AbPath_new(TransformInfoHttpContext_getPath(this), TransformInfoHttpContext_getDataFile(this));
}

