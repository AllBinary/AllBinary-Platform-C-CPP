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
// package org.allbinary.logic.communication.ftp.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct FtpConfigurationView FtpConfigurationView;
struct FtpConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    FtpConfigurationInterface* ftpConfigurationInterface;
};


FtpConfigurationView* FtpConfigurationView_new(Node* node);

void FtpConfigurationView_init(FtpConfigurationView* this, Node* node);

FtpConfigurationView* FtpConfigurationView_new1(FtpConfigurationInterface* ftpConfigurationInterface);
void FtpConfigurationView_init1(FtpConfigurationView* this, FtpConfigurationInterface* ftpConfigurationInterface);
Node* FtpConfigurationView_toXmlNode(FtpConfigurationView* this, Document* document);
FtpConfigurationInterface* FtpConfigurationView_getFtpConfigurationInterface(FtpConfigurationView* this);
void FtpConfigurationView_setFtpConfigurationInterface(FtpConfigurationView* this, FtpConfigurationInterface* ftpConfigurationInterface);

static void FtpConfigurationView_initFields(FtpConfigurationView* this) {
    this->ftpConfigurationInterface = nullptr;
}


void FtpConfigurationView_init(FtpConfigurationView* this, Node* node) {
    FtpConfigurationView_initFields(this);
        FtpConfigurationView_setFtpConfigurationInterface(this, ((FtpConfigurationInterface*) FtpConfiguration_new()));
        NodeList* chileNodeList = Node_getChildNodes(node);
        const char* server = DomNodeHelper_getTextNodeValue(FtpConfigurationData_SERVER, chileNodeList);
        JAVA_CALL(FtpConfigurationView_getFtpConfigurationInterface(this), setServer, server);
        const char* userName = DomNodeHelper_getTextNodeValue(FtpConfigurationData_USERNAME, chileNodeList);
        JAVA_CALL(FtpConfigurationView_getFtpConfigurationInterface(this), setUserName, userName);
        const char* password = DomNodeHelper_getTextNodeValue(FtpConfigurationData_PASSWORD, chileNodeList);
        JAVA_CALL(FtpConfigurationView_getFtpConfigurationInterface(this), setPassword, password);
        const char* path = DomNodeHelper_getTextNodeValue(FtpConfigurationData_PATH, chileNodeList);
        JAVA_CALL(FtpConfigurationView_getFtpConfigurationInterface(this), setPath, path);
}

FtpConfigurationView* FtpConfigurationView_new(Node* node) {
    FtpConfigurationView* this = calloc(1, sizeof(FtpConfigurationView));
    FtpConfigurationView_init(this, node);
    return this;
}


void FtpConfigurationView_init1(FtpConfigurationView* this, FtpConfigurationInterface* ftpConfigurationInterface) {
    FtpConfigurationView_initFields(this);
        FtpConfigurationView_setFtpConfigurationInterface(this, ftpConfigurationInterface);
}

FtpConfigurationView* FtpConfigurationView_new1(FtpConfigurationInterface* ftpConfigurationInterface) {
    FtpConfigurationView* this = calloc(1, sizeof(FtpConfigurationView));
    FtpConfigurationView_init1(this, ftpConfigurationInterface);
    return this;
}


// throws Exception
Node* FtpConfigurationView_toXmlNode(FtpConfigurationView* this, Document* document) {
        FtpConfigurationMapping* ftpConfigurationMapping = FtpConfigurationMapping_new(FtpConfigurationView_getFtpConfigurationInterface(this));
        HashMap* hashMap = FtpConfigurationMapping_toHashMap(ftpConfigurationMapping);
        Node* node = ModDomHelper_createNameValueNodes(document, FtpConfigurationData_NAME, hashMap);
        return node;
}


FtpConfigurationInterface* FtpConfigurationView_getFtpConfigurationInterface(FtpConfigurationView* this) {
        return this->ftpConfigurationInterface;
}


void FtpConfigurationView_setFtpConfigurationInterface(FtpConfigurationView* this, FtpConfigurationInterface* ftpConfigurationInterface) {
        this->ftpConfigurationInterface = ftpConfigurationInterface;
}

