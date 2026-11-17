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
// package org.allbinary.logic.visual.dhtml.style.css

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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertiesValidationFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct CssElementView CssElementView;
struct CssElementView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* TITLE;
    const char* DESCRIPTION;
    const char* value;
    const char* title;
    const char* description;
    BasicArrayList* cssElementVector;
    BasicArrayList* cssPropertyVector;
};


CssElementView* CssElementView_new(void);

void CssElementView_init(CssElementView* this);

CssElementView* CssElementView_new1(Node* node);
void CssElementView_init1(CssElementView* this, Node* node);
const char* CssElementView_getValue(CssElementView* this);
HashMap* CssElementView_toHashMap(CssElementView* this);
Node* CssElementView_toXmlNode(CssElementView* this, Document* document);

static void CssElementView_initFields(CssElementView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->TITLE = "title";
    this->DESCRIPTION = "description";
    
    
    
    this->cssElementVector = nullptr;
    
}


void CssElementView_init(CssElementView* this) {
    CssElementView_initFields(this);
        this->cssPropertyVector = BasicArrayListD_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        this->title = stringUtil->EMPTY_STRING;
        this->description = stringUtil->EMPTY_STRING;
        this->value = stringUtil->EMPTY_STRING;
}

CssElementView* CssElementView_new(void) {
    CssElementView* this = calloc(1, sizeof(CssElementView));
    CssElementView_init(this);
    return this;
}


void CssElementView_init1(CssElementView* this, Node* node) {
    CssElementView_initFields(this);
        JAVA_TRY {
            Node* valueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(node));
            this->value = DomNodeHelper_getTextNodeValue(valueNode);
            Node* titleValueNode = DomSearchHelper_getNodeNoThrow(this->TITLE, Node_getChildNodes(node));
            if (titleValueNode != nullptr) {
                this->title = DomNodeHelper_getTextNodeValue(titleValueNode);
            } else {
                StringUtil* stringUtil = StringUtil_getInstance();
                this->title = stringUtil->EMPTY_STRING;
            }
            Node* descriptionValueNode = DomSearchHelper_getNodeNoThrow(this->DESCRIPTION, Node_getChildNodes(node));
            if (descriptionValueNode != nullptr) {
                this->description = DomNodeHelper_getTextNodeValue(descriptionValueNode);
            } else {
                this->description = StringUtil_getInstance()->EMPTY_STRING;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Value: "), append, this->value), append, "\nTitle: "), append, this->title), append, "\nDescription: "), append, this->description), toString), this, this->commonStrings->CONSTRUCTOR);
            }
            BasicArrayList* cssElementStyleNodeVector = DomSearchHelper_getAllNodes(CssElementData_getInstance()->NAME, Node_getChildNodes(node));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Child Css Elements: ", java_string_of(BasicArrayList_size(cssElementStyleNodeVector))), this, "CssElementView()");
            }
            this->cssElementVector = CssElementsValidationFactory_getInstance(cssElementStyleNodeVector);
            NodeList* nodeList = Node_getChildNodes(node);
            this->cssPropertyVector = CssPropertiesValidationFactory_getInstance(nodeList);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Value: "), append, this->value), append, "\nTitle: "), append, this->title), append, "\nDescription: "), append, this->description), toString), this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(java_exception_new("Exception", "CssElementView"));
        } JAVA_END_TRY;
}

CssElementView* CssElementView_new1(Node* node) {
    CssElementView* this = calloc(1, sizeof(CssElementView));
    CssElementView_init1(this, node);
    return this;
}


const char* CssElementView_getValue(CssElementView* this) {
        return this->value;
}


HashMap* CssElementView_toHashMap(CssElementView* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, DomData_VALUE, this->value);
        HashMap_put(hashMap, this->TITLE, this->title);
        HashMap_put(hashMap, this->DESCRIPTION, this->description);
        return hashMap;
}


// throws Exception
Node* CssElementView_toXmlNode(CssElementView* this, Document* document) {
        HashMap* hashMap = CssElementView_toHashMap(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("CssView HashMap: ", HashMap_toString(hashMap)), this, "toXmlNode");
        }
        Node* node = ModDomHelper_createNodeWithValueNodes(document, CssElementData_getInstance()->NAME, hashMap);
        int32_t size = BasicArrayList_size(this->cssPropertyVector);
        for (int32_t index = 0; index < size; index++) {
            DomNodeInterface* cssPropertyDomNodeInterface = ((DomNodeInterface*) BasicArrayList_get(this->cssPropertyVector, index));
            Node_appendChild(node, DomNodeInterface_toXmlNode(cssPropertyDomNodeInterface, document));
        }
        int32_t size2 = BasicArrayList_size(this->cssElementVector);
        for (int32_t index = 0; index < size2; index++) {
            DomNodeInterface* cssElementDomNodeInterface = ((DomNodeInterface*) BasicArrayList_get(this->cssElementVector, index));
            Node_appendChild(node, DomNodeInterface_toXmlNode(cssElementDomNodeInterface, document));
        }
        return node;
}

