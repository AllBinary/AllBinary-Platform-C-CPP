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
// package org.allbinary.logic.visual.transform.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontViewFactory.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h"

typedef struct TransformStoreDocument TransformStoreDocument;
struct TransformStoreDocument {
    TransformHttpRequestDocument base;
    LogUtil* logUtil;
};


TransformStoreDocument* TransformStoreDocument_new(PageContext* pageContext, WeblisketSession* weblisketSession);

void TransformStoreDocument_init(TransformStoreDocument* this, PageContext* pageContext, WeblisketSession* weblisketSession);

TransformStoreDocument* TransformStoreDocument_new1(SearchRequest* searchRequest);
void TransformStoreDocument_init1(TransformStoreDocument* this, SearchRequest* searchRequest);

static void TransformStoreDocument_initFields(TransformStoreDocument* this) {
    this->logUtil = LogUtil_getInstance();
}


void TransformStoreDocument_init(TransformStoreDocument* this, PageContext* pageContext, WeblisketSession* weblisketSession) {
        TransformHttpRequestDocument_init(&this->base, pageContext, weblisketSession);
        TransformStoreDocument_initFields(this);
        JAVA_TRY {
            const char* storeName = WeblisketSession_getStoreName(weblisketSession);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Using Session StoreName: ", storeName), this, this->commonStrings->CONSTRUCTOR);
            }
            JAVA_CALL(TransformStoreDocument_getBaseNode(this), appendChild, StoreFrontViewFactory_toXmlNode(StoreFrontViewFactory_getInstance(storeName), TransformStoreDocument_getDoc(this)));
            JAVA_CALL(TransformStoreDocument_getBaseNode(this), appendChild, RequestParams_toXmlNode(RequestParams_new(((HttpServletRequest*) PageContext_getRequest(pageContext))), TransformStoreDocument_getDoc(this)));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

TransformStoreDocument* TransformStoreDocument_new(PageContext* pageContext, WeblisketSession* weblisketSession) {
    TransformStoreDocument* this = calloc(1, sizeof(TransformStoreDocument));
    TransformStoreDocument_init(this, pageContext, weblisketSession);
    return this;
}


void TransformStoreDocument_init1(TransformStoreDocument* this, SearchRequest* searchRequest) {
        TransformHttpRequestDocument_init(&this->base, searchRequest);
        TransformStoreDocument_initFields(this);
        JAVA_TRY {
            JAVA_CALL(TransformStoreDocument_getBaseNode(this), appendChild, StoreFrontViewFactory_toXmlNode(StoreFrontViewFactory_getInstance(JAVA_CALL(SearchRequest_getStoreFront(searchRequest), getName)), TransformStoreDocument_getDoc(this)));
            JAVA_CALL(TransformStoreDocument_getBaseNode(this), appendChild, JAVA_CALL(SearchRequest_getParams(searchRequest), getParamsNode, TransformStoreDocument_getDoc(this)));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

TransformStoreDocument* TransformStoreDocument_new1(SearchRequest* searchRequest) {
    TransformStoreDocument* this = calloc(1, sizeof(TransformStoreDocument));
    TransformStoreDocument_init1(this, searchRequest);
    return this;
}

