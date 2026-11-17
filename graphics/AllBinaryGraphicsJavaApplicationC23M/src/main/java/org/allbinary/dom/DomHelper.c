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
// package org.allbinary.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/File.h"
// #include "javax/xml/parsers/DocumentBuilder.h"
// #include "javax/xml/parsers/DocumentBuilderFactory.h"
// #include "javax/xml/transform/Transformer.h"
// #include "javax/xml/transform/TransformerFactory.h"
// #include "javax/xml/transform/dom/DOMSource.h"
// #include "javax/xml/transform/stream/StreamResult.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct DomHelper DomHelper;
struct DomHelper {
    LogUtil* logUtil;
};

static DomHelper* DomHelper_instance;

DomHelper* DomHelper_new(void);
DomHelper* DomHelper_getInstance(void);

void DomHelper_init(DomHelper* this);
Document* DomHelper_createDocument(DomHelper* this);
Document* DomHelper_createDocument(DomHelper* this, File* xmlFile);
const char* DomHelper_toString(DomHelper* this, Document* document);
void DomHelper_save(DomHelper* this, File* file, Document* document);
NodeList* DomHelper_getChildNodeList(DomHelper* this, const char* nodeName, NodeList* nodeList);
BasicArrayList* DomHelper_getChildrenWithoutTextNodes(DomHelper* this, const char* nodeName, NodeList* nodeList);
BasicArrayList* DomHelper_getWithoutTextNodes(DomHelper* this, NodeList* nodeList);
Node* DomHelper_searchNodeList(DomHelper* this, const char* nodeName, NodeList* nodeList);
Node* DomHelper_searchNodeList(DomHelper* this, const char* nodeName, BasicArrayList* nodeList);

// Static fields with runtime initializers: call this once at startup
void DomHelper_staticInit(void) {
    DomHelper_instance = DomHelper_new();
}

static void DomHelper_initFields(DomHelper* this) {
    this->logUtil = LogUtil_getInstance();
}


DomHelper* DomHelper_getInstance(void) {
        return DomHelper_instance;
}


void DomHelper_init(DomHelper* this) {
    DomHelper_initFields(this);
}

DomHelper* DomHelper_new(void) {
    DomHelper* this = calloc(1, sizeof(DomHelper));
    DomHelper_init(this);
    return this;
}


Document* DomHelper_createDocument(DomHelper* this) {
        JAVA_TRY {
            DocumentBuilderFactory* factory = DocumentBuilderFactory_newInstance();
            DocumentBuilder* builder = DocumentBuilderFactory_newDocumentBuilder(factory);
            Document* document = DocumentBuilder_newDocument(builder);
            return document;
        } JAVA_CATCH(Exception, e) {
            return nullptr;
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
Document* DomHelper_createDocument(DomHelper* this, File* xmlFile) {
        JAVA_TRY {
            DocumentBuilderFactory* factory = DocumentBuilderFactory_newInstance();
            DocumentBuilder* builder = DocumentBuilderFactory_newDocumentBuilder(factory);
            Document* document = DocumentBuilder_parse(builder, xmlFile);
            return document;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
const char* DomHelper_toString(DomHelper* this, Document* document) {
        JAVA_TRY {
            DOMSource* domSource = DOMSource_new(document);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            StreamResult* streamResult = StreamResult_new(byteArrayOutputStream);
            TransformerFactory* copyTransformerFactory = TransformerFactory_newInstance();
            Transformer* copyTransformer = TransformerFactory_newTransformer(copyTransformerFactory);
            Transformer_transform(copyTransformer, domSource, streamResult);
            return ByteArrayOutputStream_toString(byteArrayOutputStream);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void DomHelper_save(DomHelper* this, File* file, Document* document) {
        JAVA_TRY {
            TransformerFactory* copyTransformerFactory = TransformerFactory_newInstance();
            Transformer* copyTransformer = TransformerFactory_newTransformer(copyTransformerFactory);
            DOMSource* domSource = DOMSource_new(document);
            File_createNewFile(file);
            StreamResult* streamResult = StreamResult_new(file);
            Transformer_transform(copyTransformer, domSource, streamResult);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
NodeList* DomHelper_getChildNodeList(DomHelper* this, const char* nodeName, NodeList* nodeList) {
        int32_t numberOfNodes = NodeList_getLength(nodeList);
        for (int32_t index = 0; index < numberOfNodes; index++) {
            Node* node = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(node), compareTo, nodeName) == 0) {
                return Node_getChildNodes(node);
            }
        }
        java_throw(java_exception_new("Exception", java_concat(nodeName, " Node Not Found")));
}


// throws Exception
BasicArrayList* DomHelper_getChildrenWithoutTextNodes(DomHelper* this, const char* nodeName, NodeList* nodeList) {
        BasicArrayList* list = BasicArrayListD_new();
        NodeList* childNodeList = DomHelper_getChildNodeList(this, nodeName, nodeList);
        int32_t numberOfChildren = NodeList_getLength(childNodeList);
        for (int32_t index = 0; index < numberOfChildren; index++) {
            Node* node = NodeList_item(childNodeList, index);
            if (Node_getNodeType(node) != Node_TEXT_NODE) {
                BasicArrayList_add(list, node);
            }
        }
        return list;
}


// throws Exception
BasicArrayList* DomHelper_getWithoutTextNodes(DomHelper* this, NodeList* nodeList) {
        BasicArrayList* list = BasicArrayListD_new();
        int32_t numberOfChildren = NodeList_getLength(nodeList);
        for (int32_t index = 0; index < numberOfChildren; index++) {
            Node* node = NodeList_item(nodeList, index);
            if (Node_getNodeType(node) != Node_TEXT_NODE) {
                BasicArrayList_add(list, node);
            }
        }
        return list;
}


// throws Exception
Node* DomHelper_searchNodeList(DomHelper* this, const char* nodeName, NodeList* nodeList) {
        int32_t numberOfNodes = NodeList_getLength(nodeList);
        for (int32_t index = 0; index < numberOfNodes; index++) {
            Node* node = NodeList_item(nodeList, index);
            LogUtil_putF(this->logUtil, java_concat("NodeName: ", java_string_of(Node_getNodeName(node))), this, "searchNodeList");
            if (JAVA_CALL(Node_getNodeName(node), compareTo, nodeName) == 0) {
                return node;
            }
        }
        java_throw(java_exception_new("Exception", java_concat(nodeName, " Node Not Found in search")));
}


// throws Exception
// Java overloaded method: C needs a different name
Node* DomHelper_searchNodeList(DomHelper* this, const char* nodeName, BasicArrayList* nodeList) {
        int32_t numberOfNodes = NodeList_size(nodeList);
        for (int32_t index = 0; index < numberOfNodes; index++) {
            Node* node = ((Node*) NodeList_get(nodeList, index));
            LogUtil_putF(this->logUtil, java_concat("NodeName: ", java_string_of(Node_getNodeName(node))), this, "searchNodeList");
            if (JAVA_CALL(Node_getNodeName(node), compareTo, nodeName) == 0) {
                return node;
            }
        }
        java_throw(java_exception_new("Exception", java_concat(nodeName, " Node Not Found in search")));
}

