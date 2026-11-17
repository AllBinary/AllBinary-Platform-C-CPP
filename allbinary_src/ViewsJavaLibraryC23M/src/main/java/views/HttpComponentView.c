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
// package views

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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/BasicTransformer.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct HttpComponentView HttpComponentView;
struct HttpComponentView {
    TransformInfoHttpComposite base;
    TransformInterface TransformInterface_interface;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    BasicArrayList* domNodeInterfaceVector;
    TransformDocumentInterface* transformDocumentInterface;
    int32_t NO_TYPE;
};


HttpComponentView* HttpComponentView_new(TransformInfoInterface* transformInfoInterface);

void HttpComponentView_init(HttpComponentView* this, TransformInfoInterface* transformInfoInterface);
int32_t HttpComponentView_getTypeId(HttpComponentView* this);
TransformDocumentInterface* HttpComponentView_getTransformDocumentInterface(HttpComponentView* this);
void HttpComponentView_setTransformDocumentInterface(HttpComponentView* this, TransformDocumentInterface* transformDocumentInterface);
void HttpComponentView_addDomNodeInterface(HttpComponentView* this, DomNodeInterface* domNodeInterface);
Document* HttpComponentView_toXmlDoc(HttpComponentView* this);
Document* HttpComponentView_getDoc(HttpComponentView* this);
const char* HttpComponentView_view(HttpComponentView* this);
TransformInfoInterface* HttpComponentView_getTransformInfoInterface(HttpComponentView* this);

static void HttpComponentView_initFields(HttpComponentView* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    this->transformDocumentInterface = nullptr;
    this->NO_TYPE = 0;
}


void HttpComponentView_init(HttpComponentView* this, TransformInfoInterface* transformInfoInterface) {
        TransformInfoHttpComposite_init(&this->base, transformInfoInterface);
        HttpComponentView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        this->domNodeInterfaceVector = BasicArrayListD_new();
        HttpComponentView_setTransformDocumentInterface(this, TransformHttpRequestDocumentFactory_getInstance(HttpComponentView_getPageContext(this), HttpComponentView_getWeblisketSession(this)));
}

HttpComponentView* HttpComponentView_new(TransformInfoInterface* transformInfoInterface) {
    HttpComponentView* this = calloc(1, sizeof(HttpComponentView));
    HttpComponentView_init(this, transformInfoInterface);
    return this;
}


int32_t HttpComponentView_getTypeId(HttpComponentView* this) {
        return this->NO_TYPE;
}


TransformDocumentInterface* HttpComponentView_getTransformDocumentInterface(HttpComponentView* this) {
        return this->transformDocumentInterface;
}


void HttpComponentView_setTransformDocumentInterface(HttpComponentView* this, TransformDocumentInterface* transformDocumentInterface) {
        this->transformDocumentInterface = transformDocumentInterface;
}


void HttpComponentView_addDomNodeInterface(HttpComponentView* this, DomNodeInterface* domNodeInterface) {
        BasicArrayList_add(this->domNodeInterfaceVector, domNodeInterface);
}


// throws Exception
Document* HttpComponentView_toXmlDoc(HttpComponentView* this) {
        JAVA_TRY {
            int32_t size = BasicArrayList_size(this->domNodeInterfaceVector);
            for (int32_t index = 0; index < size; index++) {
                DomNodeInterface* domNodeInterface = ((DomNodeInterface*) BasicArrayList_get(this->domNodeInterfaceVector, index));
                JAVA_CALL(TransformDocumentInterface_getBaseNode(this->transformDocumentInterface), appendChild, DomNodeInterface_toXmlNode(domNodeInterface, TransformDocumentInterface_getDoc(this->transformDocumentInterface)));
            }
            return JAVA_CALL(HttpComponentView_getTransformDocumentInterface(this), getDoc);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlDoc()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
Document* HttpComponentView_getDoc(HttpComponentView* this) {
        Document* document = JAVA_CALL(HttpComponentView_getTransformInfoInterface(this), getDataDocument);
        Node* node = DomNodeHelper_getFirstChildElement(document);
        if (node != nullptr) {
            Node* dataNode = JAVA_CALL(JAVA_CALL(HttpComponentView_getTransformDocumentInterface(this), getDoc), importNode, node, true);
            if (dataNode != nullptr) {
                JAVA_CALL(JAVA_CALL(HttpComponentView_getTransformDocumentInterface(this), getBaseNode), appendChild, dataNode);
            }
        }
        return JAVA_CALL(HttpComponentView_getTransformDocumentInterface(this), getDoc);
}


// throws Exception
const char* HttpComponentView_view(HttpComponentView* this) {
        JAVA_TRY {
            HttpComponentView_toXmlDoc(this);
            const char* success = XmlDocumentHelper_toString(HttpComponentView_getDoc(this));
            const char* result = BasicTransformer_translate(BasicTransformer_new(this->abeClientInformation, HttpComponentView_getTransformInfoInterface(this)), success);
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* HttpComponentView_getTransformInfoInterface(HttpComponentView* this) {
        return TransformInfoHttpComposite_getTransformInfoInterface((&this->base));
}

