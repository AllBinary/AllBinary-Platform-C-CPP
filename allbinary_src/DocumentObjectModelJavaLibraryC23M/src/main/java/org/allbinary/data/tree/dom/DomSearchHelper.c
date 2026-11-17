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
// package org.allbinary.data.tree.dom

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
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct DomSearchHelper DomSearchHelper;
struct DomSearchHelper {
    char unused;
};


DomSearchHelper* DomSearchHelper_new(void);

void DomSearchHelper_init(DomSearchHelper* this);
Node* DomSearchHelper_getNodeNoThrow(const char* nodeName, NodeList* nodeList);
Node* DomSearchHelper_getNode(const char* nodeName, NodeList* nodeList);
NodeList* DomSearchHelper_getChildNodeList(const char* nodeName, NodeList* nodeList);
BasicArrayList* DomSearchHelper_getAllNodes(const char* nodeName, NodeList* nodeList);
BasicArrayList* DomSearchHelper_getAllNodesNoThrow(const char* nodeName, NodeList* nodeList);


void DomSearchHelper_init(DomSearchHelper* this) {
}

DomSearchHelper* DomSearchHelper_new(void) {
    DomSearchHelper* this = calloc(1, sizeof(DomSearchHelper));
    DomSearchHelper_init(this);
    return this;
}


Node* DomSearchHelper_getNodeNoThrow(const char* nodeName, NodeList* nodeList) {
        int32_t numberOfNodes = NodeList_getLength(nodeList);
        for (int32_t index = 0; index < numberOfNodes; index++) {
            Node* node = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(node), compareTo, nodeName) == 0) {
                return node;
            }
        }
        return nullptr;
}


// throws Exception
Node* DomSearchHelper_getNode(const char* nodeName, NodeList* nodeList) {
        Node* node = DomSearchHelper_getNodeNoThrow(nodeName, nodeList);
        if (node != nullptr) {
            return node;
        } else {
            java_throw(java_exception_new("Exception", java_concat(nodeName, " Node Not Found in search")));
        }
}


// throws Exception
NodeList* DomSearchHelper_getChildNodeList(const char* nodeName, NodeList* nodeList) {
        Node* node = DomSearchHelper_getNode(nodeName, nodeList);
        return Node_getChildNodes(node);
}


// throws Exception
BasicArrayList* DomSearchHelper_getAllNodes(const char* nodeName, NodeList* nodeList) {
        BasicArrayList* vector = DomSearchHelper_getAllNodesNoThrow(nodeName, nodeList);
        if (vector == nullptr) {
            java_throw(java_exception_new("Exception", java_concat(nodeName, " Node Not Found in search")));
        } else {
            return vector;
        }
}


BasicArrayList* DomSearchHelper_getAllNodesNoThrow(const char* nodeName, NodeList* nodeList) {
        BasicArrayList* nodeVector = BasicArrayListD_new();
        int32_t numberOfNodes = NodeList_getLength(nodeList);
        for (int32_t index = 0; index < numberOfNodes; index++) {
            Node* node = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(node), compareTo, nodeName) == 0) {
                BasicArrayList_add(nodeVector, node);
            }
        }
        return nodeVector;
}

