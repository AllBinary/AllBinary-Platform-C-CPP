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
// package org.allbinary.logic.control.workflow.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct BasicWorkFlow BasicWorkFlow;
struct BasicWorkFlow {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Document* workFlowDoc;
    const char* workFlowName;
    const char* storeName;
};


BasicWorkFlow* BasicWorkFlow_new(void);

void BasicWorkFlow_init(BasicWorkFlow* this);

BasicWorkFlow* BasicWorkFlow_new2(HashMap* hashMap, PageContext* pageContext);
void BasicWorkFlow_init2(BasicWorkFlow* this, HashMap* hashMap, PageContext* pageContext);

BasicWorkFlow* BasicWorkFlow_new1(HashMap* hashMap);
void BasicWorkFlow_init1(BasicWorkFlow* this, HashMap* hashMap);
const char* BasicWorkFlow_getName(BasicWorkFlow* this);
const char* BasicWorkFlow_getStoreName(BasicWorkFlow* this);
Any* BasicWorkFlow_getKey(BasicWorkFlow* this);
BasicArrayList* BasicWorkFlow_toVector(BasicWorkFlow* this);
HashMap* BasicWorkFlow_toHashMap(BasicWorkFlow* this);
Node* BasicWorkFlow_toXmlNode(BasicWorkFlow* this, Document* document);
Document* BasicWorkFlow_toXmlDoc(BasicWorkFlow* this);
bool BasicWorkFlow_isValid(BasicWorkFlow* this);
const char* BasicWorkFlow_validationInfo(BasicWorkFlow* this);
Document* BasicWorkFlow_toValidationInfoDoc(BasicWorkFlow* this);
Node* BasicWorkFlow_toValidationInfoNode(BasicWorkFlow* this, Document* document);

static void BasicWorkFlow_initFields(BasicWorkFlow* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void BasicWorkFlow_init(BasicWorkFlow* this) {
    BasicWorkFlow_initFields(this);
        this->workFlowName = StringUtil_getInstance()->EMPTY_STRING;
        this->workFlowDoc = DomDocumentHelper_create();
        Node* workFlowNode = Document_createElement(this->workFlowDoc, WorkFlowData_getInstance()->WORKFLOW);
        Document_appendChild(this->workFlowDoc, workFlowNode);
}

BasicWorkFlow* BasicWorkFlow_new(void) {
    BasicWorkFlow* this = calloc(1, sizeof(BasicWorkFlow));
    BasicWorkFlow_init(this);
    return this;
}


void BasicWorkFlow_init2(BasicWorkFlow* this, HashMap* hashMap, PageContext* pageContext) {
    BasicWorkFlow_initFields(this);
        WeblisketSession* weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->storeName = WeblisketSession_getStoreName(weblisketSession);
        HashMap* requestHashMap = RequestParams_toHashMap(RequestParams_new(pageContext));
        this->workFlowName = ((const char*) HashMap_get(requestHashMap, WorkFlowData_getInstance()->NAME));
        this->workFlowDoc = DomDocumentHelper_create(((const char*) HashMap_get(requestHashMap, WorkFlowData_getInstance()->DATA)));
}

BasicWorkFlow* BasicWorkFlow_new2(HashMap* hashMap, PageContext* pageContext) {
    BasicWorkFlow* this = calloc(1, sizeof(BasicWorkFlow));
    BasicWorkFlow_init2(this, hashMap, pageContext);
    return this;
}


void BasicWorkFlow_init1(BasicWorkFlow* this, HashMap* hashMap) {
    BasicWorkFlow_initFields(this);
        this->workFlowName = ((const char*) HashMap_get(hashMap, WorkFlowData_getInstance()->NAME));
        this->storeName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        this->workFlowDoc = DomDocumentHelper_create(((const char*) HashMap_get(hashMap, WorkFlowData_getInstance()->DATA)));
}

BasicWorkFlow* BasicWorkFlow_new1(HashMap* hashMap) {
    BasicWorkFlow* this = calloc(1, sizeof(BasicWorkFlow));
    BasicWorkFlow_init1(this, hashMap);
    return this;
}


const char* BasicWorkFlow_getName(BasicWorkFlow* this) {
        return this->workFlowName;
}


const char* BasicWorkFlow_getStoreName(BasicWorkFlow* this) {
        return this->storeName;
}


Any* BasicWorkFlow_getKey(BasicWorkFlow* this) {
        return ((Any*) BasicWorkFlow_getName(this));
}


// throws Exception
BasicArrayList* BasicWorkFlow_toVector(BasicWorkFlow* this) {
        BasicArrayList* values = BasicArrayListD_new();
        BasicArrayList_add(values, this->workFlowName);
        BasicArrayList_add(values, this->storeName);
        BasicArrayList_add(values, XmlDocumentHelper_toString(this->workFlowDoc));
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_add(values, time);
        BasicArrayList_add(values, time);
        return values;
}


// throws Exception
HashMap* BasicWorkFlow_toHashMap(BasicWorkFlow* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, WorkFlowData_getInstance()->NAME, this->workFlowName);
        HashMap_put(hashMap, StoreFrontData_getInstance()->NAME, this->storeName);
        HashMap_put(hashMap, WorkFlowData_getInstance()->DATA, XmlDocumentHelper_toString(this->workFlowDoc));
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(hashMap, EntryData_getInstance()->LASTMODIFIED, time);
        return hashMap;
}


Node* BasicWorkFlow_toXmlNode(BasicWorkFlow* this, Document* document) {
        JAVA_TRY {
            HashMap* hashMap = BasicWorkFlow_toHashMap(this);
            Set* keySet = HashMap_keySet(hashMap);
            Node* node = Document_createElement(document, WorkFlowData_getInstance()->WORKFLOW);
            Any** nameArray = Set_toArray(keySet);
            int32_t size = java_array_length(nameArray);
            for (int32_t index = 0; index < size; index++) {
                const char* name = ((const char*) nameArray[index]);
                const char* value = ((const char*) HashMap_get(hashMap, name));
                Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
            }
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


Document* BasicWorkFlow_toXmlDoc(BasicWorkFlow* this) {
        JAVA_TRY {
            return this->workFlowDoc;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlDoc()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


bool BasicWorkFlow_isValid(BasicWorkFlow* this) {
        JAVA_TRY {
            bool returnBoolean = true;
            if (this->workFlowName == nullptr) {
                returnBoolean = false;
            }
            return returnBoolean;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* BasicWorkFlow_validationInfo(BasicWorkFlow* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (this->workFlowName == nullptr) {
                StringMaker_append(stringBuffer, "No WorkFlow name specified.");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* BasicWorkFlow_toValidationInfoDoc(BasicWorkFlow* this) {
        return nullptr;
}


Node* BasicWorkFlow_toValidationInfoNode(BasicWorkFlow* this, Document* document) {
        return nullptr;
}

