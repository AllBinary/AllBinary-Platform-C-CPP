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
// package views.business.context.modules.storefront

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
#include "org/allbinary/logic/visual/transform/StoreTransformer.h"
#include "org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "views/HttpComponentView.h"

typedef struct HttpStoreComponentView HttpStoreComponentView;
struct HttpStoreComponentView {
    HttpComponentView base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


HttpStoreComponentView* HttpStoreComponentView_new(TransformInfoInterface* transformInfoInterface);

void HttpStoreComponentView_init(HttpStoreComponentView* this, TransformInfoInterface* transformInfoInterface);
const char* HttpStoreComponentView_view(HttpStoreComponentView* this);

static void HttpStoreComponentView_initFields(HttpStoreComponentView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void HttpStoreComponentView_init(HttpStoreComponentView* this, TransformInfoInterface* transformInfoInterface) {
        HttpComponentView_init(&this->base, transformInfoInterface);
        HttpStoreComponentView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        HttpStoreComponentView_setTransformDocumentInterface(this, TransformStoreDocumentFactory_getInstance(HttpStoreComponentView_getPageContext(this), HttpStoreComponentView_getWeblisketSession(this)));
}

HttpStoreComponentView* HttpStoreComponentView_new(TransformInfoInterface* transformInfoInterface) {
    HttpStoreComponentView* this = calloc(1, sizeof(HttpStoreComponentView));
    HttpStoreComponentView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* HttpStoreComponentView_view(HttpStoreComponentView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "view");
            }
            HttpStoreComponentView_toXmlDoc(this);
            const char* success = XmlDocumentHelper_toString(HttpStoreComponentView_getDoc(this));
            const char* result = StoreTransformer_translate(StoreTransformer_new(this->abeClientInformation, HttpStoreComponentView_getTransformInfoInterface(this)), success);
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

