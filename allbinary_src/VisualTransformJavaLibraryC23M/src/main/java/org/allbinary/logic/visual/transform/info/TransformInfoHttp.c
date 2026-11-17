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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/AbContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlData.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"

typedef struct TransformInfoHttp TransformInfoHttp;
struct TransformInfoHttp {
    TransformInfo base;
    TransformInfoHttpInterface TransformInfoHttpInterface_interface;
    LogUtil* logUtil;
    AbContext* abContext;
};


TransformInfoHttp* TransformInfoHttp_new(HashMap* propertiesHashMap, PageContext* pageContext, bool crud);

void TransformInfoHttp_init(TransformInfoHttp* this, HashMap* propertiesHashMap, PageContext* pageContext, bool crud);

TransformInfoHttp* TransformInfoHttp_new3(HttpServletRequest* request, HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttp_init3(TransformInfoHttp* this, HttpServletRequest* request, HashMap* propertiesHashMap, PageContext* pageContext);

TransformInfoHttp* TransformInfoHttp_new3(HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttp_init3(TransformInfoHttp* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);

TransformInfoHttp* TransformInfoHttp_new2(HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttp_init2(TransformInfoHttp* this, HashMap* propertiesHashMap, PageContext* pageContext);

TransformInfoHttp* TransformInfoHttp_new1(TransformInfoHttp* parentViewOfThisTransformInfoInterface);
void TransformInfoHttp_init1(TransformInfoHttp* this, TransformInfoHttp* parentViewOfThisTransformInfoInterface);
static void TransformInfoHttp_set(TransformInfoHttp* this, HashMap* hashMap);
WeblisketSessionInterface* TransformInfoHttp_getWeblisketSession(TransformInfoHttp* this);
PageContext* TransformInfoHttp_getPageContext(TransformInfoHttp* this);
HashMap* TransformInfoHttp_getPropertiesHashMap(TransformInfoHttp* this);
AbPath* TransformInfoHttp_getTemplateFilePath(TransformInfoHttp* this);
AbPath* TransformInfoHttp_getObjectConfigFilePath(TransformInfoHttp* this);
AbPath* TransformInfoHttp_getDataFilePath(TransformInfoHttp* this);

static void TransformInfoHttp_initFields(TransformInfoHttp* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void TransformInfoHttp_init(TransformInfoHttp* this, HashMap* propertiesHashMap, PageContext* pageContext, bool crud) {
        TransformInfo_init(&this->base);
        TransformInfoHttp_initFields(this);
        this->abContext = AbContext_new(propertiesHashMap, pageContext);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, "Constructor(HashMap, PageContext, boolean)");
        }
        TransformInfoHttp_override(this, propertiesHashMap);
}

TransformInfoHttp* TransformInfoHttp_new(HashMap* propertiesHashMap, PageContext* pageContext, bool crud) {
    TransformInfoHttp* this = calloc(1, sizeof(TransformInfoHttp));
    TransformInfoHttp_init(this, propertiesHashMap, pageContext, crud);
    return this;
}


void TransformInfoHttp_init3(TransformInfoHttp* this, HttpServletRequest* request, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfo_init(&this->base);
        TransformInfoHttp_initFields(this);
        this->abContext = AbContext_new(propertiesHashMap, pageContext);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, "Constructor(HttpServletRequest, HashMap, PageContext)");
        }
        TransformInfoHttp_set(this, RequestParams_toHashMap(RequestParams_new(((HttpServletRequest*) request))));
        TransformInfoHttp_override(this, propertiesHashMap);
}

TransformInfoHttp* TransformInfoHttp_new3(HttpServletRequest* request, HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttp* this = calloc(1, sizeof(TransformInfoHttp));
    TransformInfoHttp_init3(this, request, propertiesHashMap, pageContext);
    return this;
}


void TransformInfoHttp_init3(TransformInfoHttp* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfo_init(&this->base);
        TransformInfoHttp_initFields(this);
        this->abContext = AbContext_new(propertiesHashMap, pageContext);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, "Constructor(HashMap, HashMap, PageContext)");
        }
        TransformInfoHttp_set(this, databaseHashMap);
}

TransformInfoHttp* TransformInfoHttp_new3(HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttp* this = calloc(1, sizeof(TransformInfoHttp));
    TransformInfoHttp_init3(this, databaseHashMap, propertiesHashMap, pageContext);
    return this;
}


void TransformInfoHttp_init2(TransformInfoHttp* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfo_init(&this->base);
        TransformInfoHttp_initFields(this);
        this->abContext = AbContext_new(propertiesHashMap, pageContext);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, "Constructor(HashMap, PageContext)");
        }
        TransformInfoHttp_set(this, propertiesHashMap);
}

TransformInfoHttp* TransformInfoHttp_new2(HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttp* this = calloc(1, sizeof(TransformInfoHttp));
    TransformInfoHttp_init2(this, propertiesHashMap, pageContext);
    return this;
}


void TransformInfoHttp_init1(TransformInfoHttp* this, TransformInfoHttp* parentViewOfThisTransformInfoInterface) {
        TransformInfo_init(&this->base);
        TransformInfoHttp_initFields(this);
        this->abContext = AbContext_new(TransformInfoHttp_getPropertiesHashMap(parentViewOfThisTransformInfoInterface), TransformInfoHttp_getPageContext(parentViewOfThisTransformInfoInterface));
}

TransformInfoHttp* TransformInfoHttp_new1(TransformInfoHttp* parentViewOfThisTransformInfoInterface) {
    TransformInfoHttp* this = calloc(1, sizeof(TransformInfoHttp));
    TransformInfoHttp_init1(this, parentViewOfThisTransformInfoInterface);
    return this;
}


// throws Exception
static void TransformInfoHttp_set(TransformInfoHttp* this, HashMap* hashMap) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(hashMap)), this, "set()");
        }
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        TransformInfoHttp_setName(this, ((const char*) HashMap_get(hashMap, transformInfoData->NAME)));
        TransformInfoHttp_setStoreName(this, ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME)));
        TransformInfoHttp_setObjectFile(this, ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTFILENAME)));
        TransformInfoHttp_setObject(this, ((const char*) HashMap_get(hashMap, transformInfoData->OBJECT)));
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        const char* objectConfigString = ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTCONFIG));
        if (StringValidationUtil_isValidRequired(stringValidationUtil, objectConfigString, 10, AbSqlData_MAXBLOB)) {
            TransformInfoHttp_setObjectConfig(this, objectConfigString);
        } else {
            TransformInfoHttp_setObjectConfig(this, TransformInfoObjectConfig_toString(TransformInfoObjectConfig_new(this)));
        }
        if (!StringValidationUtil_isEmpty(stringValidationUtil, ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTCONFIGFILENAME)))) {
            TransformInfoHttp_setObjectConfigFile(this, ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTCONFIGFILENAME)));
        }
        TransformInfoHttp_setTemplateFile(this, ((const char*) HashMap_get(hashMap, transformInfoData->TEMPLATEFILENAME)));
        TransformInfoHttp_setTemplate(this, ((const char*) HashMap_get(hashMap, transformInfoData->TEMPLATE)));
        TransformInfoHttp_setDataFile(this, ((const char*) HashMap_get(hashMap, transformInfoData->DATAFILENAME)));
        TransformInfoHttp_setData(this, ((const char*) HashMap_get(hashMap, transformInfoData->DATA)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
            LogUtil_putF(this->logUtil, TransformInfoHttp_log(this), this, "set()");
        }
}


WeblisketSessionInterface* TransformInfoHttp_getWeblisketSession(TransformInfoHttp* this) {
        return AbContext_getWeblisketSession(this->abContext);
}


PageContext* TransformInfoHttp_getPageContext(TransformInfoHttp* this) {
        return AbContext_getPageContext(this->abContext);
}


HashMap* TransformInfoHttp_getPropertiesHashMap(TransformInfoHttp* this) {
        return AbContext_getPropertiesHashMap(this->abContext);
}


// throws Exception
AbPath* TransformInfoHttp_getTemplateFilePath(TransformInfoHttp* this) {
        return AbPath_new(JAVA_CALL(TransformInfo_URLGLOBALS, getMainPath) + JAVA_CALL(TransformInfo_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH, TransformInfoHttp_getTemplateFile(this));
}


// throws Exception
AbPath* TransformInfoHttp_getObjectConfigFilePath(TransformInfoHttp* this) {
        return AbPath_new(JAVA_CALL(TransformInfo_URLGLOBALS, getMainPath) + JAVA_CALL(TransformInfo_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH, TransformInfoHttp_getObjectConfigFile(this));
}


// throws Exception
AbPath* TransformInfoHttp_getDataFilePath(TransformInfoHttp* this) {
        return AbPath_new(JAVA_CALL(TransformInfo_URLGLOBALS, getMainPath) + JAVA_CALL(TransformInfo_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH, TransformInfoHttp_getDataFile(this));
}

