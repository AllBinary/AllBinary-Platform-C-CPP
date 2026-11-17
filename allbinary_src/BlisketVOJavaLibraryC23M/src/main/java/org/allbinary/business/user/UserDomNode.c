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
// package org.allbinary.business.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct UserDomNode UserDomNode;
struct UserDomNode {
    DomNodeInterface DomNodeInterface_interface;
    TableMappingInterface* dataMappingInterface;
};


UserDomNode* UserDomNode_new(TableMappingInterface* dataMappingInterface);

void UserDomNode_init(UserDomNode* this, TableMappingInterface* dataMappingInterface);
Node* UserDomNode_toXmlNode(UserDomNode* this, Document* document);
Document* UserDomNode_toXmlDoc(UserDomNode* this);
const char* UserDomNode_view(UserDomNode* this);

static void UserDomNode_initFields(UserDomNode* this) {
    
}


void UserDomNode_init(UserDomNode* this, TableMappingInterface* dataMappingInterface) {
    UserDomNode_initFields(this);
        this->dataMappingInterface = dataMappingInterface;
}

UserDomNode* UserDomNode_new(TableMappingInterface* dataMappingInterface) {
    UserDomNode* this = calloc(1, sizeof(UserDomNode));
    UserDomNode_init(this, dataMappingInterface);
    return this;
}


// throws Exception
Node* UserDomNode_toXmlNode(UserDomNode* this, Document* document) {
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        HashMap* hashMap = TableMappingInterface_toHashMap(this->dataMappingInterface);
        HashMap_put(hashMap, EntryData_getInstance()->LASTMODIFIED, EMPTY_STRING);
        HashMap_put(hashMap, EntryData_getInstance()->ENCRYPTION, EMPTY_STRING);
        HashMap_put(hashMap, UserData_PASSWORD, EMPTY_STRING);
        return ModDomHelper_createNameValueNodes(document, UserData_NAME, hashMap);
}


// throws Exception
Document* UserDomNode_toXmlDoc(UserDomNode* this) {
        return nullptr;
}


// throws Exception
const char* UserDomNode_view(UserDomNode* this) {
        return nullptr;
}

