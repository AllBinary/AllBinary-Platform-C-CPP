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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Attr.h"
#include "org/w3c/dom/NamedNodeMap.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct TransformInfoDomNode TransformInfoDomNode;
struct TransformInfoDomNode {
    LogUtil* logUtil;
    TransformInfoInterface* transformInfoInterface;
    const char* mappedName;
};


TransformInfoDomNode* TransformInfoDomNode_new(Node* node);

void TransformInfoDomNode_init(TransformInfoDomNode* this, Node* node);

TransformInfoDomNode* TransformInfoDomNode_new1(TransformInfoInterface* transformInfoInterface);
void TransformInfoDomNode_init1(TransformInfoDomNode* this, TransformInfoInterface* transformInfoInterface);

TransformInfoDomNode* TransformInfoDomNode_new2(TransformInfoInterface* transformInfoInterface, const char* mappedName);
void TransformInfoDomNode_init2(TransformInfoDomNode* this, TransformInfoInterface* transformInfoInterface, const char* mappedName);

TransformInfoDomNode* TransformInfoDomNode_new2(const char* name, const char* mappedName);
void TransformInfoDomNode_init2(TransformInfoDomNode* this, const char* name, const char* mappedName);
TransformInfoInterface* TransformInfoDomNode_getTransformInfoInterface(TransformInfoDomNode* this);
const char* TransformInfoDomNode_getMappedName(TransformInfoDomNode* this);
const char* TransformInfoDomNode_getReplaceKey(TransformInfoDomNode* this);

static void TransformInfoDomNode_initFields(TransformInfoDomNode* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void TransformInfoDomNode_init(TransformInfoDomNode* this, Node* node) {
    TransformInfoDomNode_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Constructing TransformInfo From TransformInfoDomNode: ", java_string_of(Node_getNodeName(node))), this, "TransformInfoDomNode(Node node)");
        }
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        NamedNodeMap* attributes = Node_getAttributes(node);
        Attr* attrNode = ((Attr*) NamedNodeMap_getNamedItem(attributes, transformInfoData->NAME));
        const char* name = Attr_getValue(attrNode);
        NodeList* nodeList = Node_getChildNodes(node);
        if (NodeList_getLength(nodeList) > 1) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Constructing Complete TransformInfo Node For: ");
                StringMaker_append(stringBuffer, name);
                StringMaker_append(stringBuffer, " with ");
                StringMaker_appendint(stringBuffer, ((int32_t) NodeList_getLength(nodeList)));
                StringMaker_append(stringBuffer, " children");
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "TransformInfoObjectConfigComponent(Node node)");
            }
            Node* objectFileNameNode = DomSearchHelper_getNode(transformInfoData->OBJECTFILENAME, nodeList);
            const char* objectFileName = DomNodeHelper_getTextNodeValue(objectFileNameNode);
            Node* objectConfigFileNameNode = DomSearchHelper_getNode(transformInfoData->OBJECTCONFIGFILENAME, nodeList);
            const char* objectConfigFileName = DomNodeHelper_getTextNodeValue(objectConfigFileNameNode);
            Node* templateFileNameNode = DomSearchHelper_getNode(transformInfoData->TEMPLATEFILENAME, nodeList);
            const char* templateFileName = DomNodeHelper_getTextNodeValue(templateFileNameNode);
            Node* dataFileNameNode = DomSearchHelper_getNode(transformInfoData->DATAFILENAME, nodeList);
            const char* dataFileName = DomNodeHelper_getTextNodeValue(dataFileNameNode);
            this->transformInfoInterface = ((TransformInfoInterface*) TransformInfo_new(name, objectFileName, objectConfigFileName, templateFileName, dataFileName));
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Constructing Partial TransformInfo Node For: ");
                StringMaker_append(stringBuffer, name);
                StringMaker_append(stringBuffer, " with ");
                StringMaker_appendint(stringBuffer, ((int32_t) NodeList_getLength(nodeList)));
                StringMaker_append(stringBuffer, " children");
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "TransformInfoObjectConfigComponent(Node node)");
            }
            this->transformInfoInterface = ((TransformInfoInterface*) TransformInfo_new(name));
        }
        Attr* templateAttrNode = ((Attr*) NamedNodeMap_getNamedItem(attributes, transformInfoData->MAPPED));
        if (templateAttrNode != nullptr) {
            this->mappedName = Attr_getValue(templateAttrNode);
        } else {
            this->mappedName = JAVA_CALL(TransformInfoDomNode_getTransformInfoInterface(this), getName);
        }
}

TransformInfoDomNode* TransformInfoDomNode_new(Node* node) {
    TransformInfoDomNode* this = calloc(1, sizeof(TransformInfoDomNode));
    TransformInfoDomNode_init(this, node);
    return this;
}


void TransformInfoDomNode_init1(TransformInfoDomNode* this, TransformInfoInterface* transformInfoInterface) {
    TransformInfoDomNode_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->mappedName = TransformInfoInterface_getName(transformInfoInterface);
}

TransformInfoDomNode* TransformInfoDomNode_new1(TransformInfoInterface* transformInfoInterface) {
    TransformInfoDomNode* this = calloc(1, sizeof(TransformInfoDomNode));
    TransformInfoDomNode_init1(this, transformInfoInterface);
    return this;
}


void TransformInfoDomNode_init2(TransformInfoDomNode* this, TransformInfoInterface* transformInfoInterface, const char* mappedName) {
    TransformInfoDomNode_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->mappedName = mappedName;
}

TransformInfoDomNode* TransformInfoDomNode_new2(TransformInfoInterface* transformInfoInterface, const char* mappedName) {
    TransformInfoDomNode* this = calloc(1, sizeof(TransformInfoDomNode));
    TransformInfoDomNode_init2(this, transformInfoInterface, mappedName);
    return this;
}


void TransformInfoDomNode_init2(TransformInfoDomNode* this, const char* name, const char* mappedName) {
    TransformInfoDomNode_initFields(this);
        this->transformInfoInterface = TransformInfo_new(name);
        this->mappedName = mappedName;
}

TransformInfoDomNode* TransformInfoDomNode_new2(const char* name, const char* mappedName) {
    TransformInfoDomNode* this = calloc(1, sizeof(TransformInfoDomNode));
    TransformInfoDomNode_init2(this, name, mappedName);
    return this;
}


TransformInfoInterface* TransformInfoDomNode_getTransformInfoInterface(TransformInfoDomNode* this) {
        return this->transformInfoInterface;
}


const char* TransformInfoDomNode_getMappedName(TransformInfoDomNode* this) {
        return this->mappedName;
}


const char* TransformInfoDomNode_getReplaceKey(TransformInfoDomNode* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "<transform:component name=\"");
        StringMaker_append(stringBuffer, "body");
        StringMaker_append(stringBuffer, "\"/>");
        const char* key = StringMaker_toString(stringBuffer);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Component Key: ", key), this, "getReplaceKey()");
        }
        return key;
}

