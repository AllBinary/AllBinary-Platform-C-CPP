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
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/BasicTransformer.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct BasicComponentView BasicComponentView;
struct BasicComponentView {
    TransformInterface TransformInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    TransformDocumentInterface* transformDocumentInterface;
    TransformInfoInterface* transformInfoInterface;
    int32_t NO_TYPE;
};


BasicComponentView* BasicComponentView_new(TransformInfoInterface* transformInfoInterface);

void BasicComponentView_init(BasicComponentView* this, TransformInfoInterface* transformInfoInterface);
int32_t BasicComponentView_getTypeId(BasicComponentView* this);
TransformDocumentInterface* BasicComponentView_getTransformDocumentInterface(BasicComponentView* this);
void BasicComponentView_setTransformDocumentInterface(BasicComponentView* this, TransformDocumentInterface* transformDocumentInterface);
TransformInfoInterface* BasicComponentView_getTransformInfoInterface(BasicComponentView* this);
void BasicComponentView_setTransformInfoInterface(BasicComponentView* this, TransformInfoInterface* transformInfoInterface);
Document* BasicComponentView_toXmlDoc(BasicComponentView* this);
Document* BasicComponentView_getDoc(BasicComponentView* this);
const char* BasicComponentView_view(BasicComponentView* this);

static void BasicComponentView_initFields(BasicComponentView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    this->transformDocumentInterface = nullptr;
    this->transformInfoInterface = nullptr;
    this->NO_TYPE = 0;
}


void BasicComponentView_init(BasicComponentView* this, TransformInfoInterface* transformInfoInterface) {
    BasicComponentView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        BasicComponentView_setTransformInfoInterface(this, transformInfoInterface);
        BasicComponentView_setTransformDocumentInterface(this, TransformDocumentFactory_getInstance());
}

BasicComponentView* BasicComponentView_new(TransformInfoInterface* transformInfoInterface) {
    BasicComponentView* this = calloc(1, sizeof(BasicComponentView));
    BasicComponentView_init(this, transformInfoInterface);
    return this;
}


int32_t BasicComponentView_getTypeId(BasicComponentView* this) {
        return this->NO_TYPE;
}


TransformDocumentInterface* BasicComponentView_getTransformDocumentInterface(BasicComponentView* this) {
        return this->transformDocumentInterface;
}


void BasicComponentView_setTransformDocumentInterface(BasicComponentView* this, TransformDocumentInterface* transformDocumentInterface) {
        this->transformDocumentInterface = transformDocumentInterface;
}


TransformInfoInterface* BasicComponentView_getTransformInfoInterface(BasicComponentView* this) {
        return this->transformInfoInterface;
}


void BasicComponentView_setTransformInfoInterface(BasicComponentView* this, TransformInfoInterface* transformInfoInterface) {
        this->transformInfoInterface = transformInfoInterface;
}


Document* BasicComponentView_toXmlDoc(BasicComponentView* this) {
        return TransformDocumentInterface_getDoc(this->transformDocumentInterface);
}


// throws Exception
Document* BasicComponentView_getDoc(BasicComponentView* this) {
        Document* document = JAVA_CALL(BasicComponentView_getTransformInfoInterface(this), getDataDocument);
        Node* dataNode = JAVA_CALL(JAVA_CALL(BasicComponentView_getTransformDocumentInterface(this), getDoc), importNode, Document_getFirstChild(document), true);
        if (dataNode != nullptr) {
            JAVA_CALL(JAVA_CALL(BasicComponentView_getTransformDocumentInterface(this), getBaseNode), appendChild, dataNode);
        }
        return JAVA_CALL(BasicComponentView_getTransformDocumentInterface(this), getDoc);
}


// throws Exception
const char* BasicComponentView_view(BasicComponentView* this) {
        JAVA_TRY {
            const char* success = XmlDocumentHelper_toString(BasicComponentView_getDoc(this));
            const char* result = BasicTransformer_translate(BasicTransformer_new(this->abeClientInformation, BasicComponentView_getTransformInfoInterface(this)), success);
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

