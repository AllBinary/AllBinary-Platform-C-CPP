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
#include "org/allbinary/data/tree/dom/DomData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CssProperty CssProperty;
struct CssProperty {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* propertyName;
    CssPropertyValues* cssPropertyValues;
};


CssProperty* CssProperty_new(const char* name);

void CssProperty_init(CssProperty* this, const char* name);

CssProperty* CssProperty_new1(Node* node);
void CssProperty_init1(CssProperty* this, Node* node);
const char* CssProperty_getName(CssProperty* this);
HashMap* CssProperty_toHashMap(CssProperty* this);
Node* CssProperty_toXmlNode(CssProperty* this, Document* document);

static void CssProperty_initFields(CssProperty* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void CssProperty_init(CssProperty* this, const char* name) {
    CssProperty_initFields(this);
        this->propertyName = name;
        this->cssPropertyValues = CssPropertyValues_new();
}

CssProperty* CssProperty_new(const char* name) {
    CssProperty* this = calloc(1, sizeof(CssProperty));
    CssProperty_init(this, name);
    return this;
}


void CssProperty_init1(CssProperty* this, Node* node) {
    CssProperty_initFields(this);
        Node* propertyNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(node));
        this->propertyName = DomNodeHelper_getTextNodeValue(propertyNode);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STYLE)) {
            LogUtil_putF(this->logUtil, java_concat("Name: ", CssProperty_getName(this)), this, "CssProperty()");
        }
        Node* propertyValuesNode = DomSearchHelper_getNode(CssPropertyData_getInstance()->VALUES, Node_getChildNodes(node));
        this->cssPropertyValues = CssPropertyValues_new(propertyValuesNode);
}

CssProperty* CssProperty_new1(Node* node) {
    CssProperty* this = calloc(1, sizeof(CssProperty));
    CssProperty_init1(this, node);
    return this;
}


const char* CssProperty_getName(CssProperty* this) {
        return this->propertyName;
}


HashMap* CssProperty_toHashMap(CssProperty* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, CssPropertyData_getInstance()->NAME, this->propertyName);
        return hashMap;
}


// throws Exception
Node* CssProperty_toXmlNode(CssProperty* this, Document* document) {
        HashMap* hashMap = CssProperty_toHashMap(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("CssView HashMap: ", HashMap_toString(hashMap)), this, "toXmlNode()");
        }
        Node* node = ModDomHelper_createNameValueNodes(document, CssPropertyData_getInstance()->NAME, this->propertyName);
        Node_appendChild(node, CssPropertyValues_toXmlNode(this->cssPropertyValues, document));
        return node;
}

