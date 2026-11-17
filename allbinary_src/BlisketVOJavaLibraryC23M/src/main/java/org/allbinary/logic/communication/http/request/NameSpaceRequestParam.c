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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct NameSpaceRequestParam NameSpaceRequestParam;
struct NameSpaceRequestParam {
    LogUtil* logUtil;
    BasicArrayList* nameSpaceVector;
    HashMap* nameSpacePropertiesHashMap;
    const char* value;
};


NameSpaceRequestParam* NameSpaceRequestParam_new(const char* nameSpace, const char* value);

void NameSpaceRequestParam_init(NameSpaceRequestParam* this, const char* nameSpace, const char* value);
BasicArrayList* NameSpaceRequestParam_getPackages(NameSpaceRequestParam* this);
HashMap* NameSpaceRequestParam_getPackageProperties(NameSpaceRequestParam* this, int32_t packageIndex);
const char* NameSpaceRequestParam_getValue(NameSpaceRequestParam* this);
static HashMap* NameSpaceRequestParam_generatePackagePropertiesHashMap(NameSpaceRequestParam* this, const char* properties);

static void NameSpaceRequestParam_initFields(NameSpaceRequestParam* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
}


void NameSpaceRequestParam_init(NameSpaceRequestParam* this, const char* nameSpace, const char* value) {
    NameSpaceRequestParam_initFields(this);
        this->nameSpaceVector = BasicArrayListD_new();
        this->nameSpacePropertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        this->value = value;
        int32_t beginIndex = java_string_indexOf(nameSpace, NameSpaceRequestParamData_NAME);
        if (beginIndex < 0) {
            java_throw(java_exception_new("Exception", "Not a NameSpaceRequest"));
        }
        const char* packages = java_substring(nameSpace, beginIndex + JAVA_CALL(NameSpaceRequestParamData_NAME, length) + JAVA_CALL(NameSpaceRequestParamData_SEP, length), (int32_t) strlen(nameSpace));
        Tokenizer* sepTokenizer = Tokenizer_new(NameSpaceRequestParamData_SEP);
        BasicArrayList* nameSpaceWithPropertiesVector = Tokenizer_getTokensFromString(sepTokenizer, packages, BasicArrayListD_new());
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat("\nSep Tokens: ", BasicArrayList_toString(nameSpaceWithPropertiesVector)), this, "NameSpaceRequestParam()");
        }
        Tokenizer* nameSpaceAndPropertiesTokenizer = Tokenizer_new(NameSpaceRequestParamData_PROPERTIES);
        int32_t packageIndex = 0;
        BasicArrayList* list = BasicArrayListD_new();
        int32_t index = 0;
        int32_t size = BasicArrayList_size(nameSpaceWithPropertiesVector);
        while (index < size) {
            const char* nameSpaceWithProperties = ((const char*) BasicArrayList_get(nameSpaceWithPropertiesVector, index++));
            BasicArrayList_clear(list);
            BasicArrayList* nameSpaceAndPropertiesVector = Tokenizer_getTokensFromString(nameSpaceAndPropertiesTokenizer, nameSpaceWithProperties, list);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, java_concat("\nPackageName and PackageName Properties Tokens: ", BasicArrayList_toString(nameSpaceAndPropertiesVector)), this, "NameSpaceRequestParam()");
            }
            if (BasicArrayList_size(nameSpaceAndPropertiesVector) > 0) {
                const char* packageName = ((const char*) BasicArrayList_get(nameSpaceAndPropertiesVector, 0));
                if (packageName == nullptr) {
                    java_throw(java_exception_new("Exception", "Package Name Is Null"));
                }
                BasicArrayList_add(this->nameSpaceVector, packageName);
                if (BasicArrayList_size(nameSpaceAndPropertiesVector) > 1) {
                    const char* properties = ((const char*) BasicArrayList_get(nameSpaceAndPropertiesVector, 1));
                    HashMap* packagePropertiesHashMap = NameSpaceRequestParam_generatePackagePropertiesHashMap(this, properties);
                    HashMap_put(this->nameSpacePropertiesHashMap, java_string_of(packageIndex), packagePropertiesHashMap);
                }
                packageIndex++;
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat("NameSpace: ", BasicArrayList_toString(this->nameSpaceVector)), this, "NameSpaceRequestParam()");
        }
}

NameSpaceRequestParam* NameSpaceRequestParam_new(const char* nameSpace, const char* value) {
    NameSpaceRequestParam* this = calloc(1, sizeof(NameSpaceRequestParam));
    NameSpaceRequestParam_init(this, nameSpace, value);
    return this;
}


BasicArrayList* NameSpaceRequestParam_getPackages(NameSpaceRequestParam* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat("NameSpace: ", BasicArrayList_toString(this->nameSpaceVector)), this, "getPackages()");
        }
        return this->nameSpaceVector;
}


HashMap* NameSpaceRequestParam_getPackageProperties(NameSpaceRequestParam* this, int32_t packageIndex) {
        HashMap* packagePropertiesHashMap = ((HashMap*) HashMap_get(this->nameSpacePropertiesHashMap, java_string_of(packageIndex)));
        if (packagePropertiesHashMap == nullptr) {
            packagePropertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat("Package Properties: ", HashMap_toString(packagePropertiesHashMap)), this, "getPackagesProperties()");
        }
        return packagePropertiesHashMap;
}


const char* NameSpaceRequestParam_getValue(NameSpaceRequestParam* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat("\nValue: ", this->value), this, "getValue()");
        }
        return this->value;
}


// throws Exception
static HashMap* NameSpaceRequestParam_generatePackagePropertiesHashMap(NameSpaceRequestParam* this, const char* properties) {
        Tokenizer* propertiesTokenizer = Tokenizer_new(NameSpaceRequestParamData_PROPERTIESSEPARATOR);
        HashMap* packagePropertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList* propertyVector = Tokenizer_getTokensFromString(propertiesTokenizer, properties, BasicArrayListD_new());
        BasicArrayList* list = BasicArrayListD_new();
        Tokenizer* propertyTokenizer = Tokenizer_new(HtmlNameMathData_getInstance()->EQUALS);
        int32_t index = 0;
        int32_t size = BasicArrayList_size(propertyVector);
        while (index < size) {
            const char* property = ((const char*) BasicArrayList_get(propertyVector, index));
            BasicArrayList_clear(list);
            BasicArrayList* propertyNameValueVector = Tokenizer_getTokensFromString(propertyTokenizer, property, list);
            int32_t index2 = 0;
            while (index2 < BasicArrayList_size(propertyNameValueVector)) {
                const char* propertyName = ((const char*) BasicArrayList_get(propertyNameValueVector, index2++));
                if (BasicArrayList_size(propertyNameValueVector) > 1) {
                    const char* propertyValue = ((const char*) BasicArrayList_get(propertyNameValueVector, index2++));
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("\nProperty Name: ", propertyName), "\nProperty Value: "), propertyValue), this, "generatePackagePropertiesHashMap()");
                    }
                    HashMap_put(packagePropertiesHashMap, propertyName, propertyValue);
                } else {
                    HashMap_put(packagePropertiesHashMap, propertyName, StringUtil_getInstance()->EMPTY_STRING);
                }
            }
        }
        return packagePropertiesHashMap;
}

