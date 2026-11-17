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
// package org.allbinary.logic.visual.transform.info.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/InputOutputTypeData.h"
#include "org/allbinary/logic/io/OutputTypeData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "org/allbinary/logic/visual/transform/template/XslData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Attr.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/NamedNodeMap.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"

typedef struct TransformInfoObjectConfig TransformInfoObjectConfig;
struct TransformInfoObjectConfig {
    TransformInfoObjectConfigInterface TransformInfoObjectConfigInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TransformInfoInterface* ownerTransformInfoInterface;
    Document* document;
    const char* outputTypeName;
};


TransformInfoObjectConfig* TransformInfoObjectConfig_new(TransformInfoInterface* transformInfoInterface);

void TransformInfoObjectConfig_init(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface);

TransformInfoObjectConfig* TransformInfoObjectConfig_new2(TransformInfoInterface* transformInfoInterface, Document* document);
void TransformInfoObjectConfig_init2(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, Document* document);

TransformInfoObjectConfig* TransformInfoObjectConfig_new3(TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void TransformInfoObjectConfig_init3(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
static void TransformInfoObjectConfig_createDocument(TransformInfoObjectConfig* this);
TransformInfoInterface* TransformInfoObjectConfig_getTransformInfoInterface(TransformInfoObjectConfig* this);
Document* TransformInfoObjectConfig_toXmlDoc(TransformInfoObjectConfig* this);
void TransformInfoObjectConfig_setDocument(TransformInfoObjectConfig* this, Document* document);
bool TransformInfoObjectConfig_containsView(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface);
static NamedNodeMap* TransformInfoObjectConfig_getTemplateAttributes(TransformInfoObjectConfig* this);
const char* TransformInfoObjectConfig_getName(TransformInfoObjectConfig* this);
void TransformInfoObjectConfig_setName(TransformInfoObjectConfig* this, const char* name);
static BasicArrayList* TransformInfoObjectConfig_getNodeVector(TransformInfoObjectConfig* this, const char* nodeName);
static BasicArrayList* TransformInfoObjectConfig_getTransformDomNodes(TransformInfoObjectConfig* this, const char* nodeName);
BasicArrayList* TransformInfoObjectConfig_getTransforms(TransformInfoObjectConfig* this, const char* nodeName);
BasicArrayList* TransformInfoObjectConfig_getTransformsGroup(TransformInfoObjectConfig* this, const char* group);
BasicArrayList* TransformInfoObjectConfig_getTransformDomNodes(TransformInfoObjectConfig* this);
BasicArrayList* TransformInfoObjectConfig_getTransforms(TransformInfoObjectConfig* this);
BasicArrayList* TransformInfoObjectConfig_getGroupTransforms(TransformInfoObjectConfig* this);
BasicArrayList* TransformInfoObjectConfig_getParentTransforms(TransformInfoObjectConfig* this);
static Node* TransformInfoObjectConfig_getRootNode(TransformInfoObjectConfig* this);
void TransformInfoObjectConfig_setOutputTypeName(TransformInfoObjectConfig* this, const char* outputTypeName);
const char* TransformInfoObjectConfig_getOutputTypeName(TransformInfoObjectConfig* this);
const char* TransformInfoObjectConfig_getInputOutputTypeName(TransformInfoObjectConfig* this);
const char* TransformInfoObjectConfig_getInputOutputTypeFile(TransformInfoObjectConfig* this);
const char* TransformInfoObjectConfig_getImportUriPath(TransformInfoObjectConfig* this);
const char* TransformInfoObjectConfig_toString(TransformInfoObjectConfig* this);

static void TransformInfoObjectConfig_initFields(TransformInfoObjectConfig* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->outputTypeName = nullptr;
}


void TransformInfoObjectConfig_init(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface) {
    TransformInfoObjectConfig_initFields(this);
        this->ownerTransformInfoInterface = transformInfoInterface;
        TransformInfoObjectConfig_createDocument(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "TransformInfo: ");
            if (this->ownerTransformInfoInterface != nullptr) {
                StringMaker_append(stringBuffer, TransformInfoInterface_getName(this->ownerTransformInfoInterface));
            } else {
                StringMaker_append(stringBuffer, "No Owner!?#@");
            }
            StringMaker_append(stringBuffer, "\nConstructed with document: ");
            StringMaker_append(stringBuffer, TransformInfoObjectConfig_toString(this));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "Constructor(TransformInfoInterface)");
        }
}

TransformInfoObjectConfig* TransformInfoObjectConfig_new(TransformInfoInterface* transformInfoInterface) {
    TransformInfoObjectConfig* this = calloc(1, sizeof(TransformInfoObjectConfig));
    TransformInfoObjectConfig_init(this, transformInfoInterface);
    return this;
}


void TransformInfoObjectConfig_init2(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, Document* document) {
    TransformInfoObjectConfig_initFields(this);
        this->ownerTransformInfoInterface = transformInfoInterface;
        this->document = document;
        Node* node = DomSearchHelper_getNodeNoThrow(OutputTypeData_getInstance()->NAME, JAVA_CALL(TransformInfoObjectConfig_getRootNode(this), getChildNodes));
        if (node != nullptr) {
            TransformInfoObjectConfig_setOutputTypeName(this, DomNodeHelper_getTextNodeValue(node));
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "TransformInfo: ");
            if (this->ownerTransformInfoInterface != nullptr) {
                StringMaker_append(stringBuffer, TransformInfoInterface_getName(this->ownerTransformInfoInterface));
            } else {
                StringMaker_append(stringBuffer, "No Owner!?#@");
            }
            StringMaker_append(stringBuffer, "\nConstructed with document: ");
            StringMaker_append(stringBuffer, TransformInfoObjectConfig_toString(this));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "Constructor(TransformInfoInterface, Document)");
        }
}

TransformInfoObjectConfig* TransformInfoObjectConfig_new2(TransformInfoInterface* transformInfoInterface, Document* document) {
    TransformInfoObjectConfig* this = calloc(1, sizeof(TransformInfoObjectConfig));
    TransformInfoObjectConfig_init2(this, transformInfoInterface, document);
    return this;
}


void TransformInfoObjectConfig_init3(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    TransformInfoObjectConfig_initFields(this);
        this->ownerTransformInfoInterface = transformInfoInterface;
        TransformInfoObjectConfig_createDocument(this);
        Attr* configNameAttr = Document_createAttribute(this->document, TransformInfoObjectConfigData_getInstance()->NAME);
        Attr_setValue(configNameAttr, name);
        Node* objectConfigNode = JAVA_CALL(Document_getElementsByTagName(this->document, TransformInfoObjectConfigData_getInstance()->NAME), item, 0);
        Node_appendChild(objectConfigNode, configNameAttr);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "TransformInfo: ");
            if (this->ownerTransformInfoInterface != nullptr) {
                StringMaker_append(stringBuffer, TransformInfoInterface_getName(this->ownerTransformInfoInterface));
            } else {
                StringMaker_append(stringBuffer, "No Owner!?#@");
            }
            StringMaker_append(stringBuffer, "\nConstructed with document: ");
            StringMaker_append(stringBuffer, TransformInfoObjectConfig_toString(this));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "Constructor(TransformInfoInterface, name, type)");
        }
}

TransformInfoObjectConfig* TransformInfoObjectConfig_new3(TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    TransformInfoObjectConfig* this = calloc(1, sizeof(TransformInfoObjectConfig));
    TransformInfoObjectConfig_init3(this, transformInfoInterface, name, type);
    return this;
}


static void TransformInfoObjectConfig_createDocument(TransformInfoObjectConfig* this) {
        this->document = DomDocumentHelper_create();
        Node* objectConfigNode = Document_createElement(this->document, TransformInfoObjectConfigData_getInstance()->NAME);
        Document_appendChild(this->document, objectConfigNode);
}


TransformInfoInterface* TransformInfoObjectConfig_getTransformInfoInterface(TransformInfoObjectConfig* this) {
        return this->ownerTransformInfoInterface;
}


// throws Exception
Document* TransformInfoObjectConfig_toXmlDoc(TransformInfoObjectConfig* this) {
        return this->document;
}


void TransformInfoObjectConfig_setDocument(TransformInfoObjectConfig* this, Document* document) {
        this->document = document;
}


bool TransformInfoObjectConfig_containsView(TransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface) {
        Node* objectConfigNode = JAVA_CALL(Document_getElementsByTagName(this->document, TransformInfoObjectConfigData_getInstance()->NAME), item, 0);
        NodeList* viewNodeList = Node_getChildNodes(objectConfigNode);
        int32_t numberOfViews = NodeList_getLength(viewNodeList);
        for (int32_t index = 0; index < numberOfViews; index++) {
            Node* viewNode = NodeList_item(viewNodeList, index);
            NamedNodeMap* viewAttributes = Node_getAttributes(viewNode);
            Attr* attrNode = ((Attr*) NamedNodeMap_getNamedItem(viewAttributes, TransformInfoData_getInstance()->NAME));
            if (JAVA_CALL(TransformInfoInterface_getName(transformInfoInterface), compareTo, Attr_getValue(attrNode)) == 0) {
                return true;
            }
        }
        return false;
}


// throws Exception
static NamedNodeMap* TransformInfoObjectConfig_getTemplateAttributes(TransformInfoObjectConfig* this) {
        Node* componentNode = JAVA_CALL(Document_getElementsByTagName(this->document, TransformInfoObjectConfigData_getInstance()->NAME), item, 0);
        return Node_getAttributes(componentNode);
}


// throws Exception
const char* TransformInfoObjectConfig_getName(TransformInfoObjectConfig* this) {
        Attr* attrNode = ((Attr*) JAVA_CALL(TransformInfoObjectConfig_getTemplateAttributes(this), getNamedItem, TransformInfoObjectConfigData_getInstance()->NAME));
        return Attr_getValue(attrNode);
}


// throws Exception
void TransformInfoObjectConfig_setName(TransformInfoObjectConfig* this, const char* name) {
        Attr* attrNode = ((Attr*) JAVA_CALL(TransformInfoObjectConfig_getTemplateAttributes(this), getNamedItem, TransformInfoObjectConfigData_getInstance()->NAME));
        Attr_setValue(attrNode, name);
}


// throws Exception
static BasicArrayList* TransformInfoObjectConfig_getNodeVector(TransformInfoObjectConfig* this, const char* nodeName) {
        NodeList* componentsNodeList = Document_getElementsByTagName(this->document, nodeName);
        if (componentsNodeList != nullptr && NodeList_getLength(componentsNodeList) > 0) {
            BasicArrayList* viewNodeVector = DomSearchHelper_getAllNodes(TransformInfoData_getInstance()->NAME, JAVA_CALL(NodeList_item(componentsNodeList, 0), getChildNodes));
            int32_t numberOfViews = BasicArrayList_size(viewNodeVector);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Number Of ");
                StringMaker_append(stringBuffer, nodeName);
                StringMaker_append(stringBuffer, " Nodes: ");
                StringMaker_appendint(stringBuffer, numberOfViews);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "getNodeVector(nodename)");
            }
            return viewNodeVector;
        }
        return BasicArrayListD_new();
}


// throws Exception
static BasicArrayList* TransformInfoObjectConfig_getTransformDomNodes(TransformInfoObjectConfig* this, const char* nodeName) {
        BasicArrayList* viewVector = BasicArrayListD_new();
        BasicArrayList* viewNodeVector = TransformInfoObjectConfig_getNodeVector(this, nodeName);
        int32_t size = BasicArrayList_size(viewNodeVector);
        for (int32_t index = 0; index < size; index++) {
            Node* viewNode = ((Node*) BasicArrayList_get(viewNodeVector, index));
            BasicArrayList_add(viewVector, TransformInfoDomNode_new(viewNode));
        }
        return viewVector;
}


// throws Exception
BasicArrayList* TransformInfoObjectConfig_getTransforms(TransformInfoObjectConfig* this, const char* nodeName) {
        BasicArrayList* viewVector = BasicArrayListD_new();
        BasicArrayList* viewNodeVector = TransformInfoObjectConfig_getNodeVector(this, nodeName);
        int32_t size = BasicArrayList_size(viewNodeVector);
        for (int32_t index = 0; index < size; index++) {
            Node* viewNode = ((Node*) BasicArrayList_get(viewNodeVector, index));
            BasicArrayList_add(viewVector, TransformInfoDomNode_getTransformInfoInterface(TransformInfoDomNode_new(viewNode)));
        }
        return viewVector;
}


// throws Exception
BasicArrayList* TransformInfoObjectConfig_getTransformsGroup(TransformInfoObjectConfig* this, const char* group) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Started: ", group), this, "getTransformsGroup()");
        }
        BasicArrayList* viewVector = BasicArrayListD_new();
        const char* GROUP = TransformInfosData_getInstance()->GROUP;
        NodeList* componentsNodeList = Document_getElementsByTagName(this->document, GROUP);
        if (componentsNodeList != nullptr && NodeList_getLength(componentsNodeList) > 0) {
            Node* componentsNode = NodeList_item(componentsNodeList, 0);
            int32_t length = NodeList_getLength(componentsNodeList);
            for (int32_t index = 0; index < length; index++) {
                Node* node = NodeList_item(componentsNodeList, index);
                NamedNodeMap* attributes = Node_getAttributes(node);
                Attr* attrNode = ((Attr*) NamedNodeMap_getNamedItem(attributes, GROUP));
                const char* value = Attr_getValue(attrNode);
                if (strcmp(value, group) == 0) {
                    componentsNode = node;
                    break;
                }
            }
            BasicArrayList* viewNodeVector = DomSearchHelper_getAllNodes(TransformInfoData_getInstance()->NAME, Node_getChildNodes(componentsNode));
            int32_t numberOfViews = BasicArrayList_size(viewNodeVector);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Number Of Nodes: ", java_string_of(numberOfViews)), this, "getTransformsGroup()");
            }
            int32_t size = BasicArrayList_size(viewNodeVector);
            for (int32_t index = 0; index < size; index++) {
                Node* viewNode = ((Node*) BasicArrayList_get(viewNodeVector, index));
                BasicArrayList_add(viewVector, TransformInfoDomNode_new(viewNode));
            }
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                if (componentsNodeList == nullptr) {
                    LogUtil_putF(this->logUtil, "Number Of Nodes: NULL", this, "getTransformsGroup()");
                } else {
                    LogUtil_putF(this->logUtil, "Number Of Nodes: 0", this, "getTransformsGroup()");
                }
            }
        }
        return viewVector;
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* TransformInfoObjectConfig_getTransformDomNodes(TransformInfoObjectConfig* this) {
        return TransformInfoObjectConfig_getTransformDomNodes(this, TransformInfosData_getInstance()->GROUP);
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* TransformInfoObjectConfig_getTransforms(TransformInfoObjectConfig* this) {
        return TransformInfoObjectConfig_getTransforms(this, TransformInfosData_getInstance()->NAME);
}


// throws Exception
BasicArrayList* TransformInfoObjectConfig_getGroupTransforms(TransformInfoObjectConfig* this) {
        return TransformInfoObjectConfig_getTransforms(this, TransformInfosData_getInstance()->GROUP);
}


// throws Exception
BasicArrayList* TransformInfoObjectConfig_getParentTransforms(TransformInfoObjectConfig* this) {
        return TransformInfoObjectConfig_getTransforms(this, TransformInfoData_getInstance()->PARENT);
}


static Node* TransformInfoObjectConfig_getRootNode(TransformInfoObjectConfig* this) {
        return JAVA_CALL(Document_getElementsByTagName(this->document, TransformInfoObjectConfigData_getInstance()->NAME), item, 0);
}


void TransformInfoObjectConfig_setOutputTypeName(TransformInfoObjectConfig* this, const char* outputTypeName) {
        this->outputTypeName = outputTypeName;
}


// throws Exception
const char* TransformInfoObjectConfig_getOutputTypeName(TransformInfoObjectConfig* this) {
        return this->outputTypeName;
}


// throws Exception
const char* TransformInfoObjectConfig_getInputOutputTypeName(TransformInfoObjectConfig* this) {
        Node* node = DomSearchHelper_getNode(InputOutputTypeData_getInstance()->NAME, JAVA_CALL(TransformInfoObjectConfig_getRootNode(this), getChildNodes));
        return DomNodeHelper_getTextNodeValue(node);
}


// throws Exception
const char* TransformInfoObjectConfig_getInputOutputTypeFile(TransformInfoObjectConfig* this) {
        Node* node = DomSearchHelper_getNode(InputOutputTypeData_getInstance()->FILE, JAVA_CALL(TransformInfoObjectConfig_getRootNode(this), getChildNodes));
        return DomNodeHelper_getTextNodeValue(node);
}


// throws Exception
const char* TransformInfoObjectConfig_getImportUriPath(TransformInfoObjectConfig* this) {
        Node* node = DomSearchHelper_getNode(XslData_getInstance()->ROOT_IMPORT_URI, JAVA_CALL(TransformInfoObjectConfig_getRootNode(this), getChildNodes));
        return DomNodeHelper_getTextNodeValue(node);
}


const char* TransformInfoObjectConfig_toString(TransformInfoObjectConfig* this) {
        JAVA_TRY {
            if (this->document != nullptr) {
                return XmlDocumentHelper_toString(this->document);
            } else {
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_putF(this->logUtil, "DOM Document error", this, this->commonStrings->TOSTRING);
            }
            return nullptr;
        } JAVA_END_TRY;
}

