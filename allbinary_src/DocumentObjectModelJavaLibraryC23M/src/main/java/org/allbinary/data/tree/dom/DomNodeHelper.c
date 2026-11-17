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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct DomNodeHelper DomNodeHelper;
struct DomNodeHelper {
    char unused;
};


DomNodeHelper* DomNodeHelper_new(void);

void DomNodeHelper_init(DomNodeHelper* this);
Node* DomNodeHelper_getFirstChildElement(Node* parentNode);
const char* DomNodeHelper_getTextNodeValue(Node* node);
const char* DomNodeHelper_getTextNodeValue(const char* nodeName, NodeList* nodeList);
const char* DomNodeHelper_getTextNodesValue(Node* node);


void DomNodeHelper_init(DomNodeHelper* this) {
}

DomNodeHelper* DomNodeHelper_new(void) {
    DomNodeHelper* this = calloc(1, sizeof(DomNodeHelper));
    DomNodeHelper_init(this);
    return this;
}


Node* DomNodeHelper_getFirstChildElement(Node* parentNode) {
        Node* node = Node_getFirstChild(parentNode);
        if (node != nullptr && Node_getNodeType(node) != Node_ELEMENT_NODE) {
            NodeList* nodeList = Node_getChildNodes(parentNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                node = NodeList_item(nodeList, index);
                if (Node_getNodeType(node) == 1) {
                    break;
                }
            }
        }
        return node;
}


const char* DomNodeHelper_getTextNodeValue(Node* node) {
        Node* nodeTextNode = Node_getFirstChild(node);
        if (nodeTextNode != nullptr) {
            return Node_getNodeValue(nodeTextNode);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}


// throws Exception
// Java overloaded method: C needs a different name
const char* DomNodeHelper_getTextNodeValue(const char* nodeName, NodeList* nodeList) {
        Node* node = DomSearchHelper_getNode(nodeName, nodeList);
        return DomNodeHelper_getTextNodeValue(node);
}


const char* DomNodeHelper_getTextNodesValue(Node* node) {
        StringMaker* stringBuffer = StringMaker_new();
        NodeList* nodeList = Node_getChildNodes(node);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* nodeTextNode = NodeList_item(nodeList, index);
            if (Node_getNodeType(nodeTextNode) == Node_TEXT_NODE) {
                if (nodeTextNode != nullptr) {
                    StringMaker_append(stringBuffer, Node_getNodeValue(nodeTextNode));
                }
            }
        }
        return StringMaker_toString(stringBuffer);
}

