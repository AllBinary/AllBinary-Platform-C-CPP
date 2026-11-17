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
// package org.allbinary.logic.visual.dhtml.style.css.property

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CssPropertyValues CssPropertyValues;
struct CssPropertyValues {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* propertyValueVector;
};


CssPropertyValues* CssPropertyValues_new(void);

void CssPropertyValues_init(CssPropertyValues* this);

CssPropertyValues* CssPropertyValues_new1(Node* node);
void CssPropertyValues_init1(CssPropertyValues* this, Node* node);
HashMap* CssPropertyValues_toHashMap(CssPropertyValues* this);
Node* CssPropertyValues_toXmlNode(CssPropertyValues* this, Document* document);

static void CssPropertyValues_initFields(CssPropertyValues* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void CssPropertyValues_init(CssPropertyValues* this) {
    CssPropertyValues_initFields(this);
        this->propertyValueVector = BasicArrayListD_new();
}

CssPropertyValues* CssPropertyValues_new(void) {
    CssPropertyValues* this = calloc(1, sizeof(CssPropertyValues));
    CssPropertyValues_init(this);
    return this;
}


void CssPropertyValues_init1(CssPropertyValues* this, Node* node) {
    CssPropertyValues_initFields(this);
        HashMap* indexPropertyValueHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        this->propertyValueVector = BasicArrayListD_new();
        BasicArrayList* cssPropertyNodeVector = DomSearchHelper_getAllNodes(CssPropertyValueData_getInstance()->NAME, Node_getChildNodes(node));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STYLE)) {
            LogUtil_putF(this->logUtil, java_concat("Number Of Properties: ", java_string_of(BasicArrayList_size(cssPropertyNodeVector))), this, "CssProperties()");
        }
        int32_t size = BasicArrayList_size(cssPropertyNodeVector);
        for (int32_t index = 0; index < size; index++) {
            Node* cssPropertyValueNode = ((Node*) BasicArrayList_get(cssPropertyNodeVector, index));
            Node* valueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(cssPropertyValueNode));
            const char* propertyValue = DomNodeHelper_getTextNodeValue(valueNode);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STYLE)) {
                LogUtil_putF(this->logUtil, java_concat("Property Value: ", propertyValue), this, "CssProperties()");
            }
            Node* indexNode = DomSearchHelper_getNode(DomData_INDEX, Node_getChildNodes(cssPropertyValueNode));
            const char* indexValue = DomNodeHelper_getTextNodeValue(indexNode);
            HashMap_put(indexPropertyValueHashMap, indexValue, propertyValue);
        }
        int32_t size2 = JAVA_CALL(HashMap_keySet(indexPropertyValueHashMap), size);
        for (int32_t index = 0; index < size2; index++) {
            int32_t indexInt = index;
            const char* propertyValue = ((const char*) HashMap_get(indexPropertyValueHashMap, Integer_toString(indexInt)));
            BasicArrayList_add(this->propertyValueVector, propertyValue);
        }
}

CssPropertyValues* CssPropertyValues_new1(Node* node) {
    CssPropertyValues* this = calloc(1, sizeof(CssPropertyValues));
    CssPropertyValues_init1(this, node);
    return this;
}


HashMap* CssPropertyValues_toHashMap(CssPropertyValues* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        CssPropertyValueData* cssPropertyValueData = CssPropertyValueData_getInstance();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        StringMaker* stringBuffer = StringMaker_new();
        int32_t size = BasicArrayList_size(this->propertyValueVector);
        for (int32_t index = 0; index < size; index++) {
            const char* value = ((const char*) BasicArrayList_get(this->propertyValueVector, index));
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, cssPropertyValueData->NAME);
            StringMaker_append(stringBuffer, commonSeps->BRACKET_OPEN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, commonSeps->BRACKET_CLOSE);
            HashMap_put(hashMap, StringMaker_toString(stringBuffer), value);
            index++;
        }
        return hashMap;
}


// throws Exception
Node* CssPropertyValues_toXmlNode(CssPropertyValues* this, Document* document) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            HashMap* hashMap = CssPropertyValues_toHashMap(this);
            LogUtil_putF(this->logUtil, java_concat("CssPropertyValues HashMap: ", HashMap_toString(hashMap)), this, "toXmlNode()");
        }
        return ModDomHelper_createNameValueIndexNodes(document, CssPropertyData_getInstance()->VALUES, CssPropertyValueData_getInstance()->NAME, this->propertyValueVector);
}

