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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/quoterequest/QuoteRequest.h"
#include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/ModifyTable.h"

//TWB - Am I missing the correct Quote Request? Probably not
typedef struct QuoteRequestHelper QuoteRequestHelper;
struct QuoteRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    QuoteRequest* quoteRequest;
};


QuoteRequestHelper* QuoteRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void QuoteRequestHelper_init(QuoteRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
bool QuoteRequestHelper_isValid(QuoteRequestHelper* this);
const char* QuoteRequestHelper_validationInfo(QuoteRequestHelper* this);
const char* QuoteRequestHelper_insert(QuoteRequestHelper* this);
const char* QuoteRequestHelper_update(QuoteRequestHelper* this);
const char* QuoteRequestHelper_delete(QuoteRequestHelper* this);

static void QuoteRequestHelper_initFields(QuoteRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->storeFrontInterface = nullptr;
    
}


void QuoteRequestHelper_init(QuoteRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    QuoteRequestHelper_initFields(this);
        HttpServletRequest* request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->quoteRequest = QuoteRequest_new(WeblisketSession_getUserName(this->weblisketSession), request);
        const char* storeName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        }
}

QuoteRequestHelper* QuoteRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    QuoteRequestHelper* this = calloc(1, sizeof(QuoteRequestHelper));
    QuoteRequestHelper_init(this, hashMap, pageContext);
    return this;
}


bool QuoteRequestHelper_isValid(QuoteRequestHelper* this) {
        return QuoteRequest_isValid(this->quoteRequest);
}


const char* QuoteRequestHelper_validationInfo(QuoteRequestHelper* this) {
        return QuoteRequest_validationInfo(this->quoteRequest);
}


const char* QuoteRequestHelper_insert(QuoteRequestHelper* this) {
        JAVA_TRY {
            BasicArrayList* values = QuoteRequest_toVector(this->quoteRequest);
            JAVA_CALL(QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()), insert, values);
            const char* success = "New QuoteRequest Successfully added to the QuoteRequest Table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "add()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add QuoteRequest";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "add()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* QuoteRequestHelper_update(QuoteRequestHelper* this) {
        JAVA_TRY {
            HashMap* values = QuoteRequest_toHashMap(this->quoteRequest);
            JAVA_CALL(QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()), update, QuoteRequest_getUserName(this->quoteRequest), values);
            const char* success = "New QuoteRequest Successfully updated";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update QuoteRequest";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* QuoteRequestHelper_delete(QuoteRequestHelper* this) {
        return this->base.commonStrings->NOT_IMPLEMENTED;
}

