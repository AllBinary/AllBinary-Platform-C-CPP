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
// package org.allbinary.logic.visual.transform.template.customizer.widgets.title

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
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct TitleView TitleView;
struct TitleView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* title;
};

static const char* TitleView_NAME = "None";

TitleView* TitleView_new(void);

void TitleView_init(TitleView* this);

TitleView* TitleView_new1(Node* node);
void TitleView_init1(TitleView* this, Node* node);

TitleView* TitleView_new1(HashMap* hashMap);
void TitleView_init1(TitleView* this, HashMap* hashMap);
const char* TitleView_getTitle(TitleView* this);
void TitleView_getFormData(TitleView* this, HashMap* hashMap);
HashMap* TitleView_toHashMap(TitleView* this);
Node* TitleView_toXmlNode(TitleView* this, Document* document);

static void TitleView_initFields(TitleView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void TitleView_init(TitleView* this) {
    TitleView_initFields(this);
        this->title = TitleView_NAME;
}

TitleView* TitleView_new(void) {
    TitleView* this = calloc(1, sizeof(TitleView));
    TitleView_init(this);
    return this;
}


void TitleView_init1(TitleView* this, Node* node) {
    TitleView_initFields(this);
        Node* titleTextNode = DomSearchHelper_getNode(TitleData_getInstance()->TEXT, Node_getChildNodes(node));
        Node* valueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(titleTextNode));
        this->title = DomNodeHelper_getTextNodeValue(valueNode);
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->title)) {
            this->title = TitleView_NAME;
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Title: ", java_string_of(TitleView_getTitle(this))), this, "Consructor()");
        }
}

TitleView* TitleView_new1(Node* node) {
    TitleView* this = calloc(1, sizeof(TitleView));
    TitleView_init1(this, node);
    return this;
}


void TitleView_init1(TitleView* this, HashMap* hashMap) {
    TitleView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, this->commonStrings->CONSTRUCTOR);
        }
        TitleView_getFormData(this, hashMap);
}

TitleView* TitleView_new1(HashMap* hashMap) {
    TitleView* this = calloc(1, sizeof(TitleView));
    TitleView_init1(this, hashMap);
    return this;
}


const char* TitleView_getTitle(TitleView* this) {
        return this->title;
}


void TitleView_getFormData(TitleView* this, HashMap* hashMap) {
        this->title = ((const char*) HashMap_get(hashMap, TitleData_getInstance()->TEXT));
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->title)) {
            this->title = TitleView_NAME;
        }
}


HashMap* TitleView_toHashMap(TitleView* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, TitleData_getInstance()->TEXT, TitleView_getTitle(this));
        return hashMap;
}


// throws Exception
Node* TitleView_toXmlNode(TitleView* this, Document* document) {
        HashMap* hashMap = TitleView_toHashMap(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("TitleView HashMap: ", HashMap_toString(hashMap)), this, "toXmlNode()");
        }
        return ModDomHelper_createNameValueNodes(document, TitleData_getInstance()->NAME, hashMap);
}

