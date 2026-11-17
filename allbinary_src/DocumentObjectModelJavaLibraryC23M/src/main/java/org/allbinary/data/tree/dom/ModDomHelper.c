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
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/java/anyType/clazz/ClassUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ModDomHelper ModDomHelper;
struct ModDomHelper {
    char unused;
};


ModDomHelper* ModDomHelper_new(void);

void ModDomHelper_init(ModDomHelper* this);
Node* ModDomHelper_createTextNode(Document* document, const char* name, const char* text);
Node* ModDomHelper_createValueNode(Document* document, const char* text);
Node* ModDomHelper_createNameNode(Document* document, const char* text);
Node* ModDomHelper_createIndexNode(Document* document, int32_t index);
Node* ModDomHelper_createNameValueNodes(Document* document, const char* elementName, const char* nameText, const char* valueText);
Node* ModDomHelper_createNameValueNodes(Document* document, const char* elementNameAndNameText, const char* valueText);
Node* ModDomHelper_createNameValueIndexNodes(Document* document, const char* elementNameAndNameText, int32_t index, const char* valueText);
Node* ModDomHelper_createNameValueNodes(Document* document, const char* rootNode, HashMap* hashMap);
Node* ModDomHelper_createNameValueNodes(Document* document, Node* node, HashMap* hashMap);
Node* ModDomHelper_createNameValueNodes(Document* document, const char* rootNodeName, const char* duplicateNodeName, BasicArrayList* valueVector);
Node* ModDomHelper_createNameValueIndexNodes(Document* document, const char* rootNodeName, const char* duplicateNodeName, BasicArrayList* valueVector);
Node* ModDomHelper_createNodeWithValueNodes(Document* document, const char* rootNode, HashMap* hashMap);
Node* ModDomHelper_createNodeWithValueNodes(Document* document, Node* node, HashMap* hashMap);


void ModDomHelper_init(ModDomHelper* this) {
}

ModDomHelper* ModDomHelper_new(void) {
    ModDomHelper* this = calloc(1, sizeof(ModDomHelper));
    ModDomHelper_init(this);
    return this;
}


// throws Exception
Node* ModDomHelper_createTextNode(Document* document, const char* name, const char* text) {
        Node* newValueNode = Document_createElement(document, name);
        Node* newValueTextNode = Document_createTextNode(document, text);
        Node_appendChild(newValueNode, newValueTextNode);
        return newValueNode;
}


// throws Exception
Node* ModDomHelper_createValueNode(Document* document, const char* text) {
        return ModDomHelper_createTextNode(document, DomData_VALUE, text);
}


// throws Exception
Node* ModDomHelper_createNameNode(Document* document, const char* text) {
        return ModDomHelper_createTextNode(document, DomData_NAME, text);
}


// throws Exception
Node* ModDomHelper_createIndexNode(Document* document, int32_t index) {
        return ModDomHelper_createTextNode(document, DomData_INDEX, Integer_toString(index));
}


// throws Exception
Node* ModDomHelper_createNameValueNodes(Document* document, const char* elementName, const char* nameText, const char* valueText) {
        Node* newNode = Document_createElement(document, elementName);
        Node_appendChild(newNode, ModDomHelper_createNameNode(document, nameText));
        Node_appendChild(newNode, ModDomHelper_createValueNode(document, valueText));
        return newNode;
}


// throws Exception
// Java overloaded method: C needs a different name
Node* ModDomHelper_createNameValueNodes(Document* document, const char* elementNameAndNameText, const char* valueText) {
        Node* newNode = ModDomHelper_createNameValueNodes(document, elementNameAndNameText, elementNameAndNameText, valueText);
        return newNode;
}


// throws Exception
Node* ModDomHelper_createNameValueIndexNodes(Document* document, const char* elementNameAndNameText, int32_t index, const char* valueText) {
        Node* newNode = ModDomHelper_createNameValueNodes(document, elementNameAndNameText, valueText);
        Node_appendChild(newNode, ModDomHelper_createIndexNode(document, index));
        return newNode;
}


// throws Exception
// Java overloaded method: C needs a different name
Node* ModDomHelper_createNameValueNodes(Document* document, const char* rootNode, HashMap* hashMap) {
        Node* node = Document_createElement(document, rootNode);
        return ModDomHelper_createNameValueNodes(document, node, hashMap);
}


// throws Exception
// Java overloaded method: C needs a different name
Node* ModDomHelper_createNameValueNodes(Document* document, Node* node, HashMap* hashMap) {
        StringUtil* stringUtil = StringUtil_getInstance();
        Set* keySet = HashMap_keySet(hashMap);
        Any** keyArray = Set_toArray(keySet);
        int32_t size = java_array_length(keyArray);
        for (int32_t i = 0; i < size; i++) {
            Any* objectKey = keyArray[i];
            const char* name = ((const char*) objectKey);
            Any* anyType = ((Any*) HashMap_get(hashMap, objectKey));
            if (anyType == nullptr) {
                const char* value = stringUtil->EMPTY_STRING;
                Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
            } else if (java_instanceof(anyType, "String")) {
                const char* value = StringUtil_getNonNull(stringUtil, ((const char*) anyType));
                Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
            } else if (java_instanceof(anyType, "HashMap")) {
                Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, hashMap));
            } else {
                java_throw(java_exception_new("Exception", java_concat("HashMap value is the wrong instance and is: ", java_string_of(ClassUtil_viewAll(anyType, CommonSeps_getInstance()->NEW_LINE)))));
            }
        }
        return node;
}


// throws Exception
// Java overloaded method: C needs a different name
Node* ModDomHelper_createNameValueNodes(Document* document, const char* rootNodeName, const char* duplicateNodeName, BasicArrayList* valueVector) {
        StringUtil* stringUtil = StringUtil_getInstance();
        Node* node = Document_createElement(document, rootNodeName);
        int32_t size = BasicArrayList_size(valueVector);
        for (int32_t i = 0; i < size; i++) {
            const char* value = StringUtil_getNonNull(stringUtil, ((const char*) BasicArrayList_get(valueVector, i)));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, duplicateNodeName, value));
        }
        return node;
}


// throws Exception
// Java overloaded method: C needs a different name
Node* ModDomHelper_createNameValueIndexNodes(Document* document, const char* rootNodeName, const char* duplicateNodeName, BasicArrayList* valueVector) {
        StringUtil* stringUtil = StringUtil_getInstance();
        Node* node = Document_createElement(document, rootNodeName);
        int32_t size = BasicArrayList_size(valueVector);
        for (int32_t index = 0; index < size; index++) {
            const char* value = StringUtil_getNonNull(stringUtil, ((const char*) BasicArrayList_get(valueVector, index)));
            Node_appendChild(node, ModDomHelper_createNameValueIndexNodes(document, duplicateNodeName, index, value));
        }
        return node;
}


// throws Exception
Node* ModDomHelper_createNodeWithValueNodes(Document* document, const char* rootNode, HashMap* hashMap) {
        Node* node = Document_createElement(document, rootNode);
        return ModDomHelper_createNodeWithValueNodes(document, node, hashMap);
}


// throws Exception
// Java overloaded method: C needs a different name
Node* ModDomHelper_createNodeWithValueNodes(Document* document, Node* node, HashMap* hashMap) {
        StringUtil* stringUtil = StringUtil_getInstance();
        Set* keySet = HashMap_keySet(hashMap);
        Any** keyArray = Set_toArray(keySet);
        int32_t size = java_array_length(keyArray);
        for (int32_t i = 0; i < size; i++) {
            const char* name = ((const char*) keyArray[i]);
            Any* anyType = ((Any*) HashMap_get(hashMap, name));
            const char* value = StringUtil_getNonNull(stringUtil, ((const char*) anyType));
            Node_appendChild(node, ModDomHelper_createTextNode(document, name, value));
        }
        return node;
}

