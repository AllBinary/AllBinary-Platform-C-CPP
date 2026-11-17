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
// package org.allbinary.logic.visual.dhtml.style

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
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/dhtml/style/css/CssElementData.h"
#include "org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct StylesValidationFactory StylesValidationFactory;
struct StylesValidationFactory {
    LogUtil* logUtil;
};

static StylesValidationFactory* StylesValidationFactory_instance;

StylesValidationFactory* StylesValidationFactory_new(void);
StylesValidationFactory* StylesValidationFactory_getInstance(void);

void StylesValidationFactory_init(StylesValidationFactory* this);
BasicArrayList* StylesValidationFactory_getInstance(StylesValidationFactory* this, Document* document);
BasicArrayList* StylesValidationFactory_getInstance(HashMap* hashMap);

// Static fields with runtime initializers: call this once at startup
void StylesValidationFactory_staticInit(void) {
    StylesValidationFactory_instance = StylesValidationFactory_new();
}

static void StylesValidationFactory_initFields(StylesValidationFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


StylesValidationFactory* StylesValidationFactory_getInstance(void) {
        return StylesValidationFactory_instance;
}


void StylesValidationFactory_init(StylesValidationFactory* this) {
    StylesValidationFactory_initFields(this);
}

StylesValidationFactory* StylesValidationFactory_new(void) {
    StylesValidationFactory* this = calloc(1, sizeof(StylesValidationFactory));
    StylesValidationFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* StylesValidationFactory_getInstance(StylesValidationFactory* this, Document* document) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        NodeList* nodeList = Document_getElementsByTagName(document, StylesData_getInstance()->NAME);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Style Present: ", XmlDocumentHelper_toString(document)), this, commonStrings->GET_INSTANCE);
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Styles Present: ", java_string_of(NodeList_getLength(nodeList))), this, commonStrings->GET_INSTANCE);
        }
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* stylesNode = NodeList_item(nodeList, index);
            BasicArrayList* styleNodeList = DomSearchHelper_getAllNodes(StyleData_getInstance()->NAME, Node_getChildNodes(stylesNode));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Number Of Style Nodes Present: ", java_string_of(BasicArrayList_size(styleNodeList))), this, commonStrings->GET_INSTANCE);
            }
            for (int32_t styleNodesIndex = 0; styleNodesIndex < BasicArrayList_size(styleNodeList); styleNodesIndex++) {
                Node* styleNode = ((Node*) BasicArrayList_get(styleNodeList, styleNodesIndex));
                BasicArrayList* cssElementStyleNodeList = DomSearchHelper_getAllNodes(CssElementData_getInstance()->NAME, Node_getChildNodes(styleNode));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("Number Of Element Nodes Present: ", java_string_of(BasicArrayList_size(cssElementStyleNodeList))), this, commonStrings->GET_INSTANCE);
                }
                return CssElementsValidationFactory_getInstance(cssElementStyleNodeList);
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, "No Style Present", this, commonStrings->GET_INSTANCE);
        }
        return BasicArrayListD_new();
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* StylesValidationFactory_getInstance(HashMap* hashMap) {
        Document* stylesDocument = ((Document*) HashMap_get(hashMap, NameSpaceRequestParamData_DOCUMENT));
        return StylesValidationFactory_getInstance(StylesValidationFactory_getInstance(), stylesDocument);
}

