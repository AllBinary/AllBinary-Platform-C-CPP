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
// package views.business.context

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
#include "org/allbinary/logic/visual/transform/ContextTransformer.h"
#include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "views/HttpComponentView.h"

typedef struct HttpContextView HttpContextView;
struct HttpContextView {
    HttpComponentView base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


HttpContextView* HttpContextView_new(TransformInfoInterface* transformInfoInterface);

void HttpContextView_init(HttpContextView* this, TransformInfoInterface* transformInfoInterface);
const char* HttpContextView_view(HttpContextView* this);

static void HttpContextView_initFields(HttpContextView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void HttpContextView_init(HttpContextView* this, TransformInfoInterface* transformInfoInterface) {
        HttpComponentView_init(&this->base, transformInfoInterface);
        HttpContextView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        HttpContextView_setTransformDocumentInterface(this, TransformHttpRequestDocumentFactory_getInstance(HttpContextView_getPageContext(this), HttpContextView_getWeblisketSession(this)));
}

HttpContextView* HttpContextView_new(TransformInfoInterface* transformInfoInterface) {
    HttpContextView* this = calloc(1, sizeof(HttpContextView));
    HttpContextView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* HttpContextView_view(HttpContextView* this) {
        JAVA_TRY {
            HttpContextView_toXmlDoc(this);
            const char* success = XmlDocumentHelper_toString(HttpContextView_getDoc(this));
            const char* result = ContextTransformer_translate(ContextTransformer_new(this->abeClientInformation, HttpContextView_getTransformInfoInterface(this)), success);
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

