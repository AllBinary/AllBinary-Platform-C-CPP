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
#include "org/allbinary/logic/visual/transform/TransformInfoCustomUriTransformer.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CustomUriTransformView CustomUriTransformView;
struct CustomUriTransformView {
    TransformInterface TransformInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    TransformInfoInterface* transformInfoInterface;
    TransformDocumentInterface* transformDocumentInterface;
    int32_t NO_TYPE;
};


CustomUriTransformView* CustomUriTransformView_new(TransformInfoInterface* transformInfoInterface);

void CustomUriTransformView_init(CustomUriTransformView* this, TransformInfoInterface* transformInfoInterface);
int32_t CustomUriTransformView_getTypeId(CustomUriTransformView* this);
TransformInfoInterface* CustomUriTransformView_getTransformInfoInterface(CustomUriTransformView* this);
void CustomUriTransformView_setTransformInfoInterface(CustomUriTransformView* this, TransformInfoInterface* transformInfoInterface);
TransformDocumentInterface* CustomUriTransformView_getTransformDocumentInterface(CustomUriTransformView* this);
void CustomUriTransformView_setTransformDocumentInterface(CustomUriTransformView* this, TransformDocumentInterface* transformDocumentInterface);
Document* CustomUriTransformView_toXmlDoc(CustomUriTransformView* this);
Document* CustomUriTransformView_getDoc(CustomUriTransformView* this);
const char* CustomUriTransformView_view(CustomUriTransformView* this);

static void CustomUriTransformView_initFields(CustomUriTransformView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    this->transformInfoInterface = nullptr;
    this->transformDocumentInterface = nullptr;
    this->NO_TYPE = 0;
}


void CustomUriTransformView_init(CustomUriTransformView* this, TransformInfoInterface* transformInfoInterface) {
    CustomUriTransformView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        CustomUriTransformView_setTransformInfoInterface(this, transformInfoInterface);
        CustomUriTransformView_setTransformDocumentInterface(this, TransformDocumentFactory_getInstance());
}

CustomUriTransformView* CustomUriTransformView_new(TransformInfoInterface* transformInfoInterface) {
    CustomUriTransformView* this = calloc(1, sizeof(CustomUriTransformView));
    CustomUriTransformView_init(this, transformInfoInterface);
    return this;
}


int32_t CustomUriTransformView_getTypeId(CustomUriTransformView* this) {
        return this->NO_TYPE;
}


TransformInfoInterface* CustomUriTransformView_getTransformInfoInterface(CustomUriTransformView* this) {
        return this->transformInfoInterface;
}


void CustomUriTransformView_setTransformInfoInterface(CustomUriTransformView* this, TransformInfoInterface* transformInfoInterface) {
        this->transformInfoInterface = transformInfoInterface;
}


TransformDocumentInterface* CustomUriTransformView_getTransformDocumentInterface(CustomUriTransformView* this) {
        return this->transformDocumentInterface;
}


void CustomUriTransformView_setTransformDocumentInterface(CustomUriTransformView* this, TransformDocumentInterface* transformDocumentInterface) {
        this->transformDocumentInterface = transformDocumentInterface;
}


Document* CustomUriTransformView_toXmlDoc(CustomUriTransformView* this) {
        return TransformDocumentInterface_getDoc(this->transformDocumentInterface);
}


// throws Exception
Document* CustomUriTransformView_getDoc(CustomUriTransformView* this) {
        Document* document = JAVA_CALL(CustomUriTransformView_getTransformInfoInterface(this), getDataDocument);
        Node* dataNode = JAVA_CALL(JAVA_CALL(CustomUriTransformView_getTransformDocumentInterface(this), getDoc), importNode, Document_getFirstChild(document), true);
        if (dataNode != nullptr) {
            JAVA_CALL(JAVA_CALL(CustomUriTransformView_getTransformDocumentInterface(this), getBaseNode), appendChild, dataNode);
        }
        return JAVA_CALL(CustomUriTransformView_getTransformDocumentInterface(this), getDoc);
}


// throws Exception
const char* CustomUriTransformView_view(CustomUriTransformView* this) {
        JAVA_TRY {
            const char* success = XmlDocumentHelper_toString(CustomUriTransformView_getDoc(this));
            const char* result = TransformInfoCustomUriTransformer_translate(TransformInfoCustomUriTransformer_new(this->abeClientInformation, CustomUriTransformView_getTransformInfoInterface(this)), success);
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

