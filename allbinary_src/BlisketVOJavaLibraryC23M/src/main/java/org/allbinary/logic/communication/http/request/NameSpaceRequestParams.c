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
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/data/tree/dom/DomData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"

//containing string values and other hashmaps of the like
typedef struct NameSpaceRequestParams NameSpaceRequestParams;
struct NameSpaceRequestParams {
    RequestParams base;
    LogUtil* logUtil;
};


NameSpaceRequestParams* NameSpaceRequestParams_new(void);

void NameSpaceRequestParams_init(NameSpaceRequestParams* this);

NameSpaceRequestParams* NameSpaceRequestParams_new1(HttpServletRequest* httpServletRequest);
void NameSpaceRequestParams_init1(NameSpaceRequestParams* this, HttpServletRequest* httpServletRequest);

NameSpaceRequestParams* NameSpaceRequestParams_new1(PageContext* pageContext);
void NameSpaceRequestParams_init1(NameSpaceRequestParams* this, PageContext* pageContext);
static Node* NameSpaceRequestParams_createPackageNode(NameSpaceRequestParams* this, Document* document, const char* packageName, HashMap* packagePropertiesHashMap);
static Node* NameSpaceRequestParams_createPackageMultiNode(NameSpaceRequestParams* this, Document* document, NameSpaceRequestParam* nameSpaceRequestParam, const char* packageName, HashMap* packagePropertiesHashMap);
static Node* NameSpaceRequestParams_getRootNode(NameSpaceRequestParams* this, const char* rootElementPackage, HashMap* packagePropertiesHashMap, Document* document);
static Node* NameSpaceRequestParams_addNewProperties(NameSpaceRequestParams* this, Document* document, Node* node, HashMap* nextPackagePropertiesHashMap);
static bool NameSpaceRequestParams_isElementValueTextNodeEqual(NameSpaceRequestParams* this, HashMap* nextPackagePropertiesHashMap, Node* node);
static int32_t NameSpaceRequestParams_isElementValueTextNodeUnique(NameSpaceRequestParams* this, HashMap* nextPackagePropertiesHashMap, BasicArrayList* elementNodeVector);
static Document* NameSpaceRequestParams_addChildren(NameSpaceRequestParams* this, Document* document, Node* rootNode, NameSpaceRequestParam* nameSpaceRequestParam);
static Document* NameSpaceRequestParams_addNameSpace(NameSpaceRequestParams* this, const char* key, const char* value, Document* document);
HashMap* NameSpaceRequestParams_toHashMap(NameSpaceRequestParams* this);

static void NameSpaceRequestParams_initFields(NameSpaceRequestParams* this) {
    this->logUtil = LogUtil_getInstance();
}


void NameSpaceRequestParams_init(NameSpaceRequestParams* this) {
        RequestParams_init(&this->base);
        NameSpaceRequestParams_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, "Constructing empty", this, this->commonStrings->CONSTRUCTOR);
        }
}

NameSpaceRequestParams* NameSpaceRequestParams_new(void) {
    NameSpaceRequestParams* this = calloc(1, sizeof(NameSpaceRequestParams));
    NameSpaceRequestParams_init(this);
    return this;
}


void NameSpaceRequestParams_init1(NameSpaceRequestParams* this, HttpServletRequest* httpServletRequest) {
        RequestParams_init(&this->base, httpServletRequest);
        NameSpaceRequestParams_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, "Constructing from HttpServletRequest", this, this->commonStrings->CONSTRUCTOR);
        }
}

NameSpaceRequestParams* NameSpaceRequestParams_new1(HttpServletRequest* httpServletRequest) {
    NameSpaceRequestParams* this = calloc(1, sizeof(NameSpaceRequestParams));
    NameSpaceRequestParams_init1(this, httpServletRequest);
    return this;
}


void NameSpaceRequestParams_init1(NameSpaceRequestParams* this, PageContext* pageContext) {
        RequestParams_init(&this->base, pageContext);
        NameSpaceRequestParams_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, "Constructing from PageContext", this, this->commonStrings->CONSTRUCTOR);
        }
}

NameSpaceRequestParams* NameSpaceRequestParams_new1(PageContext* pageContext) {
    NameSpaceRequestParams* this = calloc(1, sizeof(NameSpaceRequestParams));
    NameSpaceRequestParams_init1(this, pageContext);
    return this;
}


// throws Exception
static Node* NameSpaceRequestParams_createPackageNode(NameSpaceRequestParams* this, Document* document, const char* packageName, HashMap* packagePropertiesHashMap) {
        Node* node = Document_createElement(document, packageName);
        Set* propertyKeySet = HashMap_keySet(packagePropertiesHashMap);
        Any** propertyKeySetArray = Set_toArray(propertyKeySet);
        int32_t size = java_array_length(propertyKeySetArray);
        for (int32_t index = 0; index < size; index++) {
            const char* propertyName = ((const char*) propertyKeySetArray[index]);
            const char* propertyValue = ((const char*) HashMap_get(packagePropertiesHashMap, propertyName));
            Node* propertyNode = ModDomHelper_createTextNode(document, propertyName, propertyValue);
            Node_appendChild(node, propertyNode);
        }
        return node;
}


// throws Exception
static Node* NameSpaceRequestParams_createPackageMultiNode(NameSpaceRequestParams* this, Document* document, NameSpaceRequestParam* nameSpaceRequestParam, const char* packageName, HashMap* packagePropertiesHashMap) {
        int32_t beginIndex = java_string_indexOf(packageName, u'[');
        const char* indexValue = java_substring(packageName, beginIndex + 1, ((int32_t) strlen(packageName)) - 1);
        const char* multiElementPackage = java_substring(packageName, 0, beginIndex);
        const char* selectedValue = NameSpaceRequestParam_getValue(nameSpaceRequestParam);
        const char* propertyValue = ((const char*) HashMap_get(packagePropertiesHashMap, DomData_VALUE));
        if (strcmp(propertyValue, NameSpaceRequestParamData_VALUE) != 0) {
            selectedValue = propertyValue;
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("\nAppending Multinode Element: ", multiElementPackage), "["), indexValue), "] "), selectedValue), this, "createPackageMultiNode");
        }
        Node* nextNode = ModDomHelper_createNameValueNodes(document, multiElementPackage, selectedValue);
        Node* indexNode = ModDomHelper_createTextNode(document, DomData_INDEX, indexValue);
        Node_appendChild(nextNode, indexNode);
        return nextNode;
}


// throws Exception
static Node* NameSpaceRequestParams_getRootNode(NameSpaceRequestParams* this, const char* rootElementPackage, HashMap* packagePropertiesHashMap, Document* document) {
        Node* rootNode = DomSearchHelper_getNodeNoThrow(rootElementPackage, Document_getChildNodes(document));
        if (rootNode == nullptr) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat("\nAppending Document Root: ", "\nElementName: "), rootElementPackage), "\nProperties: "), HashMap_toString(packagePropertiesHashMap)), this, "getRootNode");
            }
            Node* node = NameSpaceRequestParams_createPackageNode(this, document, rootElementPackage, packagePropertiesHashMap);
            Document_appendChild(document, node);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, java_concat("\nAppended Document Created: ", XmlDocumentHelper_toString(document)), this, "getRootNode");
            }
            return node;
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, "\nUsing Existing Root Node", this, "getRootNode");
            }
            return rootNode;
        }
}


// throws Exception
static Node* NameSpaceRequestParams_addNewProperties(NameSpaceRequestParams* this, Document* document, Node* node, HashMap* nextPackagePropertiesHashMap) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "\nAdding Any New Properties: "), append, HashMap_toString(nextPackagePropertiesHashMap)), append, "\nto node: "), append, Node_getNodeName(node)), toString), this, "addNewProperties");
        }
        Set* propertyNameSet = HashMap_keySet(nextPackagePropertiesHashMap);
        Any** propertyNameSetArray = Set_toArray(propertyNameSet);
        int32_t size = java_array_length(propertyNameSetArray);
        for (int32_t index = 0; index < size; index++) {
            const char* nextPropertyName = ((const char*) propertyNameSetArray[index]);
            const char* propertyValue = StringUtil_getNonNull(StringUtil_getInstance(), ((const char*) HashMap_get(nextPackagePropertiesHashMap, nextPropertyName)));
            Node* valueNode = DomSearchHelper_getNodeNoThrow(nextPropertyName, Node_getChildNodes(node));
            if (valueNode != nullptr) {
                const char* existingElementNodeTextNodeValue = DomNodeHelper_getTextNodeValue(valueNode);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat("\nIf property: \"", nextPropertyName), " is the same as:\n"), "Node: "), java_string_of(Node_getNodeName(node))), " then: "), propertyValue), "=="), existingElementNodeTextNodeValue), this, "addNewProperties");
                }
                if (strcmp(propertyValue, existingElementNodeTextNodeValue) != 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                        LogUtil_putF(this->logUtil, "At least one Property from NameSpaceRequest Package was different from Node", this, "addNewProperties");
                    }
                    java_throw(java_exception_new("Exception", "Property Modifications Should Not Occur"));
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Adding a new Property: ", nextPropertyName), "="), propertyValue), this, "addNewProperties");
                }
                Node* newPropertyNode = ModDomHelper_createTextNode(document, nextPropertyName, propertyValue);
                Node_appendChild(node, newPropertyNode);
            }
        }
        return node;
}


// throws Exception
static bool NameSpaceRequestParams_isElementValueTextNodeEqual(NameSpaceRequestParams* this, HashMap* nextPackagePropertiesHashMap, Node* node) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("\nComparing the value property in: ", HashMap_toString(nextPackagePropertiesHashMap)), "\nto node child leaves of node: "), java_string_of(Node_getNodeName(node))), this, "isElementValueTextNodeEqual");
        }
        const char* propertyValue = ((const char*) HashMap_get(nextPackagePropertiesHashMap, DomData_VALUE));
        Node* valueNode = DomSearchHelper_getNodeNoThrow(DomData_VALUE, Node_getChildNodes(node));
        if (valueNode != nullptr) {
            const char* existingElementNodeTextNodeValue = DomNodeHelper_getTextNodeValue(valueNode);
            if (strcmp(propertyValue, existingElementNodeTextNodeValue) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, "Value Node is the same", this, "isElementValueTextNodeEqual");
                }
                return true;
            }
        } else {
            return true;
        }
        return false;
}


// throws Exception
static int32_t NameSpaceRequestParams_isElementValueTextNodeUnique(NameSpaceRequestParams* this, HashMap* nextPackagePropertiesHashMap, BasicArrayList* elementNodeVector) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat(java_concat("\nComparing Properties of: ", java_string_of(BasicArrayList_size(elementNodeVector))), " Nodes"), this, "isElementValueTextNodeUnique");
        }
        int32_t size = BasicArrayList_size(elementNodeVector);
        for (int32_t index = 0; index < size; index++) {
            Node* existingElementNode = ((Node*) BasicArrayList_get(elementNodeVector, index));
            if (NameSpaceRequestParams_isElementValueTextNodeEqual(this, nextPackagePropertiesHashMap, existingElementNode)) {
                return index;
            }
        }
        return -1;
}


// throws Exception
static Document* NameSpaceRequestParams_addChildren(NameSpaceRequestParams* this, Document* document, Node* rootNode, NameSpaceRequestParam* nameSpaceRequestParam) {
        Node* node = rootNode;
        BasicArrayList* packageVector = NameSpaceRequestParam_getPackages(nameSpaceRequestParam);
        int32_t size = BasicArrayList_size(packageVector);
        for (int32_t index = 1; index < size; index++) {
            const char* nextPackageName = ((const char*) BasicArrayList_get(packageVector, index));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "\nTrying to Add Child to Node: "), append, Node_getNodeName(node)), append, "\nwith new PackageName: "), append, nextPackageName), toString), this, "addChildren");
            }
            HashMap* nextPackagePropertiesHashMap = NameSpaceRequestParam_getPackageProperties(nameSpaceRequestParam, index);
            BasicArrayList* elementNodeVector = DomSearchHelper_getAllNodesNoThrow(nextPackageName, Node_getChildNodes(node));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, java_concat(java_concat("\nDocument Contains ", java_string_of(BasicArrayList_size(elementNodeVector))), " Node(s) With Same Name"), this, "addChildren");
            }
            int32_t isElementValueTextNodeUniqueIndex = NameSpaceRequestParams_isElementValueTextNodeUnique(this, nextPackagePropertiesHashMap, elementNodeVector);
            if ((BasicArrayList_size(elementNodeVector) == 0 || isElementValueTextNodeUniqueIndex == -1) && !java_string_endsWith(nextPackageName, CommonSeps_getInstance()->BRACKET_CLOSE)) {
                Node* nextNode = NameSpaceRequestParams_createPackageNode(this, document, nextPackageName, nextPackagePropertiesHashMap);
                Node_appendChild(node, nextNode);
                node = nextNode;
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, java_concat("\nAppended Package: ", java_string_of(Node_getNodeName(node))), this, "addChildren");
                    LogUtil_putF(this->logUtil, java_concat("\nAppended Document Created: ", XmlDocumentHelper_toString(document)), this, "addChildren");
                }
            } else if (java_string_endsWith(nextPackageName, CommonSeps_getInstance()->BRACKET_CLOSE)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, "Package is MultiNode: just append", this, "addChildren");
                }
                Node* nextNode = NameSpaceRequestParams_createPackageMultiNode(this, document, nameSpaceRequestParam, nextPackageName, nextPackagePropertiesHashMap);
                Node_appendChild(node, nextNode);
                node = nextNode;
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, java_concat("\nAppended Multinode Element: ", XmlDocumentHelper_toString(document)), this, "addChildren");
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, "Value Node already exists: Now compare (properties to leaf nodes)", this, "addChildren");
                }
                Node* nodeNameDuplicateNode = ((Node*) BasicArrayList_get(elementNodeVector, isElementValueTextNodeUniqueIndex));
                node = NameSpaceRequestParams_addNewProperties(this, document, nodeNameDuplicateNode, nextPackagePropertiesHashMap);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, "\nDuplicate Node Found: Moving to next child ^", this, "addChildre");
                }
            }
        }
        return document;
}


// throws Exception
static Document* NameSpaceRequestParams_addNameSpace(NameSpaceRequestParams* this, const char* key, const char* value, Document* document) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "NameSpace key: "), append, key), append, " Value: "), append, value), toString), this, "addNameSpace");
        }
        NameSpaceRequestParam* nameSpaceRequestParam = NameSpaceRequestParam_new(key, value);
        BasicArrayList* packageVector = NameSpaceRequestParam_getPackages(nameSpaceRequestParam);
        int32_t size = BasicArrayList_size(packageVector);
        for (int32_t index = 0; index < size; index++) {
            const char* packageName = ((const char*) BasicArrayList_get(packageVector, index));
            HashMap* packagePropertiesHashMap = NameSpaceRequestParam_getPackageProperties(nameSpaceRequestParam, BasicArrayList_indexOf(packageVector, packageName));
            Node* rootNode = NameSpaceRequestParams_getRootNode(this, packageName, packagePropertiesHashMap, document);
            if (index < size - 1) {
                return NameSpaceRequestParams_addChildren(this, document, ((Node*) rootNode), nameSpaceRequestParam);
            }
        }
        return document;
}


// throws Exception
HashMap* NameSpaceRequestParams_toHashMap(NameSpaceRequestParams* this) {
        Document* document = DomDocumentHelper_create();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        Set* keys = JAVA_CALL(NameSpaceRequestParams_getMap(this), keySet);
        Any** keyArray = Set_toArray(keys);
        int32_t keySize = java_array_length(keyArray);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat("NameSpace Request Size: ", java_string_of(Set_size(keys))), this, "toHashMap");
        }
        for (int32_t i = 0; i < keySize; i++) {
            const char* key = ((const char*) keyArray[i]);
            Any* anyType = JAVA_CALL(NameSpaceRequestParams_getMap(this), get, key);
            const char* className = ((const char*) java_class_of(anyType));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, java_concat("Request Param Class: ", className), this, "toHashMap");
            }
            if (java_instanceof(JAVA_CALL(NameSpaceRequestParams_getMap(this), get, key), "String")) {
                const char* value = ((const char*) JAVA_CALL(NameSpaceRequestParams_getMap(this), get, key));
                if (java_string_indexOf(key, NameSpaceRequestParamData_NAME) < 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Not NameSpace key: ", key), " Value: "), value), this, "toHashMap()");
                    }
                    HashMap_put(hashMap, java_string_new(key), java_string_new(value));
                } else {
                    document = NameSpaceRequestParams_addNameSpace(this, java_string_new(key), java_string_new(value), document);
                }
            } else if (java_instanceof(JAVA_CALL(NameSpaceRequestParams_getMap(this), get, key), "")) {
                const char** values = ((const char**) JAVA_CALL(NameSpaceRequestParams_getMap(this), get, key));
                if (java_string_indexOf(key, NameSpaceRequestParamData_NAME) < 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Not NameSpace key: ", key), " Value: "), java_string_of(values[0])), this, "toHashMap()");
                    }
                    HashMap_put(hashMap, java_string_new(key), java_string_new(values[0]));
                } else {
                    document = NameSpaceRequestParams_addNameSpace(this, java_string_new(key), java_string_new(values[0]), document);
                }
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("NameSpaceRequestParams: ", JAVA_CALL(NameSpaceRequestParams_getMap(this), toString)), "\ntoHashMap(): "), HashMap_toString(hashMap)), "\nDocument Created: "), XmlDocumentHelper_toString(document)), this, "toHashMap()");
        }
        HashMap_put(hashMap, NameSpaceRequestParamData_DOCUMENT, document);
        return hashMap;
}

