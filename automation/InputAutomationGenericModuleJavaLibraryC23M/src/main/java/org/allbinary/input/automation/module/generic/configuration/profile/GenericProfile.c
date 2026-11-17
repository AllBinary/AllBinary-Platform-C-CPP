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
// package org.allbinary.input.automation.module.generic.configuration.profile

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
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct GenericProfile GenericProfile;
struct GenericProfile {
    LogUtil* logUtil;
    const char* name;
    BasicArrayList* vector;
    GenericProfileActions* genericProfileActions;
};


GenericProfile* GenericProfile_new(Node* node);

void GenericProfile_init(GenericProfile* this, Node* node);

GenericProfile* GenericProfile_new1(const char* name);
void GenericProfile_init1(GenericProfile* this, const char* name);
BasicArrayList* GenericProfile_getGenericProfileDataWorkerTypeVector(GenericProfile* this);
void GenericProfile_add(GenericProfile* this, GenericProfileDataWorkerType* genericProfileDataWorkerType);
void GenericProfile_remove(GenericProfile* this, GenericProfileDataWorkerType* genericProfileDataWorkerType);
Node* GenericProfile_toXmlNode(GenericProfile* this, Document* document);
const char* GenericProfile_getName(GenericProfile* this);
void GenericProfile_setName(GenericProfile* this, const char* name);
GenericProfileActions* GenericProfile_getGenericProfileActions(GenericProfile* this);
void GenericProfile_setGenericProfileActions(GenericProfile* this, GenericProfileActions* genericProfileActions);

static void GenericProfile_initFields(GenericProfile* this) {
    this->logUtil = LogUtil_getInstance();
    this->name = nullptr;
    
    this->genericProfileActions = nullptr;
}


void GenericProfile_init(GenericProfile* this, Node* node) {
    GenericProfile_initFields(this);
        GenericProfile_setName(this, DomNodeHelper_getTextNodeValue(node));
        this->vector = BasicArrayListD_new();
        NodeList* nodeList = Node_getChildNodes(node);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Name: ", GenericProfile_getName(this)), " Child Nodes: "), java_string_of(NodeList_getLength(nodeList))), this, "Contructor");
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* profileNode = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(profileNode), compareTo, GenericProfileDataWorkerData_NAME) == 0) {
                GenericProfileDataWorkerType* genericProfileDataWorkerType = GenericProfileDataWorkerType_getInstance(profileNode);
                LogUtil_putF(this->logUtil, java_concat("Adding GenericProfileDataWorkerType: ", GenericProfileDataWorkerType_toString(genericProfileDataWorkerType)), this, "Contructor");
                BasicArrayList_add(this->vector, genericProfileDataWorkerType);
            }
        }
}

GenericProfile* GenericProfile_new(Node* node) {
    GenericProfile* this = calloc(1, sizeof(GenericProfile));
    GenericProfile_init(this, node);
    return this;
}


void GenericProfile_init1(GenericProfile* this, const char* name) {
    GenericProfile_initFields(this);
        GenericProfile_setName(this, name);
        this->vector = BasicArrayListD_new();
}

GenericProfile* GenericProfile_new1(const char* name) {
    GenericProfile* this = calloc(1, sizeof(GenericProfile));
    GenericProfile_init1(this, name);
    return this;
}


BasicArrayList* GenericProfile_getGenericProfileDataWorkerTypeVector(GenericProfile* this) {
        return this->vector;
}


void GenericProfile_add(GenericProfile* this, GenericProfileDataWorkerType* genericProfileDataWorkerType) {
        if (!BasicArrayList_contains(this->vector, genericProfileDataWorkerType)) {
            BasicArrayList_add(this->vector, genericProfileDataWorkerType);
        }
}


void GenericProfile_remove(GenericProfile* this, GenericProfileDataWorkerType* genericProfileDataWorkerType) {
        BasicArrayList_remove(this->vector, genericProfileDataWorkerType);
}


// throws Exception
Node* GenericProfile_toXmlNode(GenericProfile* this, Document* document) {
        Node* node = ModDomHelper_createTextNode(document, GenericProfileData_NAME, this->name);
        int32_t size = BasicArrayList_size(this->vector);
        for (int32_t index = 0; index < size; index++) {
            GenericProfileDataWorkerType* genericProfileDataWorkerType = ((GenericProfileDataWorkerType*) BasicArrayList_get(this->vector, index));
            Node_appendChild(node, GenericProfileDataWorkerType_toXmlNode(genericProfileDataWorkerType, document));
        }
        return node;
}


const char* GenericProfile_getName(GenericProfile* this) {
        return this->name;
}


void GenericProfile_setName(GenericProfile* this, const char* name) {
        this->name = name;
}


GenericProfileActions* GenericProfile_getGenericProfileActions(GenericProfile* this) {
        return this->genericProfileActions;
}


void GenericProfile_setGenericProfileActions(GenericProfile* this, GenericProfileActions* genericProfileActions) {
        this->genericProfileActions = genericProfileActions;
}

