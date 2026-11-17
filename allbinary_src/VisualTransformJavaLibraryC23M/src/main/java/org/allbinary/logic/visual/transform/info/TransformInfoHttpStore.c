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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h"

typedef struct TransformInfoHttpStore TransformInfoHttpStore;
struct TransformInfoHttpStore {
    TransformInfoHttp base;
    TransformInfoHttpStoreInterface TransformInfoHttpStoreInterface_interface;
    LogUtil* logUtil;
};


TransformInfoHttpStore* TransformInfoHttpStore_new(HashMap* propertiesHashMap, PageContext* pageContext);

void TransformInfoHttpStore_init(TransformInfoHttpStore* this, HashMap* propertiesHashMap, PageContext* pageContext);

TransformInfoHttpStore* TransformInfoHttpStore_new3(HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttpStore_init3(TransformInfoHttpStore* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);

TransformInfoHttpStore* TransformInfoHttpStore_new3(StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttpStore_init3(TransformInfoHttpStore* this, StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext);
static const char* TransformInfoHttpStore_getPath(TransformInfoHttpStore* this);
AbPath* TransformInfoHttpStore_getTemplateFilePath(TransformInfoHttpStore* this);
AbPath* TransformInfoHttpStore_getObjectConfigFilePath(TransformInfoHttpStore* this);
AbPath* TransformInfoHttpStore_getDataFilePath(TransformInfoHttpStore* this);
void TransformInfoHttpStore_setStoreName(TransformInfoHttpStore* this, const char* value);
const char* TransformInfoHttpStore_getStoreName(TransformInfoHttpStore* this);

static void TransformInfoHttpStore_initFields(TransformInfoHttpStore* this) {
    this->logUtil = LogUtil_getInstance();
}


void TransformInfoHttpStore_init(TransformInfoHttpStore* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoHttp_init(&this->base, propertiesHashMap, pageContext, true);
        TransformInfoHttpStore_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, this->commonStrings->CONSTRUCTOR);
        }
}

TransformInfoHttpStore* TransformInfoHttpStore_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttpStore* this = calloc(1, sizeof(TransformInfoHttpStore));
    TransformInfoHttpStore_init(this, propertiesHashMap, pageContext);
    return this;
}


void TransformInfoHttpStore_init3(TransformInfoHttpStore* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoHttp_init(&this->base, databaseHashMap, propertiesHashMap, pageContext);
        TransformInfoHttpStore_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Database HashMap: ");
            StringMaker_append(stringBuffer, HashMap_toString(databaseHashMap));
            StringMaker_append(stringBuffer, "\nProperties HashMap: ");
            StringMaker_append(stringBuffer, HashMap_toString(propertiesHashMap));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "Constructor(HashMap, HashMap , PageContext)");
        }
        TransformInfoHttpStore_setStoreName(this, ((const char*) HashMap_get(databaseHashMap, StoreFrontData_getInstance()->NAME)));
}

TransformInfoHttpStore* TransformInfoHttpStore_new3(HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttpStore* this = calloc(1, sizeof(TransformInfoHttpStore));
    TransformInfoHttpStore_init3(this, databaseHashMap, propertiesHashMap, pageContext);
    return this;
}


void TransformInfoHttpStore_init3(TransformInfoHttpStore* this, StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoHttp_init(&this->base, propertiesHashMap, pageContext);
        TransformInfoHttpStore_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, this->commonStrings->CONSTRUCTOR);
        }
        TransformInfoHttpStore_setStoreName(this, StoreFrontInterface_getName(storeFrontInterface));
}

TransformInfoHttpStore* TransformInfoHttpStore_new3(StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttpStore* this = calloc(1, sizeof(TransformInfoHttpStore));
    TransformInfoHttpStore_init3(this, storeFrontInterface, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
static const char* TransformInfoHttpStore_getPath(TransformInfoHttpStore* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, TransformInfoHttpStore_getStoreName(this));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        return StringMaker_toString(stringBuffer);
}


// throws Exception
AbPath* TransformInfoHttpStore_getTemplateFilePath(TransformInfoHttpStore* this) {
        return AbPath_new(TransformInfoHttpStore_getPath(this), TransformInfoHttpStore_getTemplateFile(this));
}


// throws Exception
AbPath* TransformInfoHttpStore_getObjectConfigFilePath(TransformInfoHttpStore* this) {
        return AbPath_new(TransformInfoHttpStore_getPath(this), TransformInfoHttpStore_getObjectConfigFile(this));
}


// throws Exception
AbPath* TransformInfoHttpStore_getDataFilePath(TransformInfoHttpStore* this) {
        return AbPath_new(TransformInfoHttpStore_getPath(this), TransformInfoHttpStore_getDataFile(this));
}


void TransformInfoHttpStore_setStoreName(TransformInfoHttpStore* this, const char* value) {
        TransformInfoHttp_setStoreName((&this->base), value);
}


const char* TransformInfoHttpStore_getStoreName(TransformInfoHttpStore* this) {
        return TransformInfoHttp_getStoreName((&this->base));
}

