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
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/w3c/dom/Attr.h"
#include "org/w3c/dom/NamedNodeMap.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct TransformInfoPropertiesFactory TransformInfoPropertiesFactory;
struct TransformInfoPropertiesFactory {
    LogUtil* logUtil;
};

static TransformInfoPropertiesFactory* TransformInfoPropertiesFactory_instance;

TransformInfoPropertiesFactory* TransformInfoPropertiesFactory_new(void);
TransformInfoPropertiesFactory* TransformInfoPropertiesFactory_getInstance(void);

void TransformInfoPropertiesFactory_init(TransformInfoPropertiesFactory* this);
TransformInfoProperties* TransformInfoPropertiesFactory_getInstance(TransformInfoPropertiesFactory* this, Node* node);

// Static fields with runtime initializers: call this once at startup
void TransformInfoPropertiesFactory_staticInit(void) {
    TransformInfoPropertiesFactory_instance = TransformInfoPropertiesFactory_new();
}

static void TransformInfoPropertiesFactory_initFields(TransformInfoPropertiesFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformInfoPropertiesFactory* TransformInfoPropertiesFactory_getInstance(void) {
        return TransformInfoPropertiesFactory_instance;
}


void TransformInfoPropertiesFactory_init(TransformInfoPropertiesFactory* this) {
    TransformInfoPropertiesFactory_initFields(this);
}

TransformInfoPropertiesFactory* TransformInfoPropertiesFactory_new(void) {
    TransformInfoPropertiesFactory* this = calloc(1, sizeof(TransformInfoPropertiesFactory));
    TransformInfoPropertiesFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoProperties* TransformInfoPropertiesFactory_getInstance(TransformInfoPropertiesFactory* this, Node* node) {
        NodeList* transformInfoChildNodeList = Node_getChildNodes(node);
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        NamedNodeMap* attributes = Node_getAttributes(node);
        Attr* attrNode = ((Attr*) NamedNodeMap_getNamedItem(attributes, transformInfoData->NAME));
        const char* name = Attr_getValue(attrNode);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_string_of(CommonLabels_getInstance()->NEXT), " View Name: "), name), this, "toTransformInfoPropertiesHashMap()");
        }
        Node* labelNode = DomSearchHelper_getNodeNoThrow(transformInfoData->LABEL, transformInfoChildNodeList);
        const char* label = DomNodeHelper_getTextNodesValue(labelNode);
        if (label == nullptr) {
            label = name;
        }
        Node* descriptionNode = DomSearchHelper_getNode(transformInfoData->DESCRIPTION, transformInfoChildNodeList);
        const char* description = DomNodeHelper_getTextNodesValue(descriptionNode);
        Node* objectFileNode = DomSearchHelper_getNode(transformInfoData->OBJECTFILENAME, transformInfoChildNodeList);
        const char* objectFileName = DomNodeHelper_getTextNodeValue(objectFileNode);
        Node* objectConfigFileNode = DomSearchHelper_getNode(transformInfoData->OBJECTCONFIGFILENAME, transformInfoChildNodeList);
        const char* objectConfigFileName = DomNodeHelper_getTextNodeValue(objectConfigFileNode);
        Node* templateFileNode = DomSearchHelper_getNode(transformInfoData->TEMPLATEFILENAME, transformInfoChildNodeList);
        const char* templateFileName = DomNodeHelper_getTextNodeValue(templateFileNode);
        TransformInfoProperties* transformInfoProperties = TransformInfoProperties_new(name, label, description, objectFileName, objectConfigFileName, templateFileName);
        return transformInfoProperties;
}

