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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/lang/reflect/Method.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/QuoteHelperFactory.h"
#include "admin/taghelpers/QuoteRequestHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct QuoteRequestTag QuoteRequestTag;
struct QuoteRequestTag {
    TableTag base;
    LogUtil* logUtil;
    const char* storeName;
};


QuoteRequestTag* QuoteRequestTag_new(void);

void QuoteRequestTag_init(QuoteRequestTag* this);
void QuoteRequestTag_setStoreName(QuoteRequestTag* this, const char* storeName);
static const char* QuoteRequestTag_email(QuoteRequestTag* this);
int32_t QuoteRequestTag_doStartTag(QuoteRequestTag* this);

static void QuoteRequestTag_initFields(QuoteRequestTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->storeName = nullptr;
}


void QuoteRequestTag_init(QuoteRequestTag* this) {
    TableTag_init(&this->base);
    QuoteRequestTag_initFields(this);
        QuoteRequestTag_setTagHelperFactory(this, QuoteHelperFactory_new());
        QuoteRequestTag_setTagRequestHelperFactory(this, QuoteRequestHelperFactory_new());
}

QuoteRequestTag* QuoteRequestTag_new(void) {
    QuoteRequestTag* this = calloc(1, sizeof(QuoteRequestTag));
    QuoteRequestTag_init(this);
    return this;
}


void QuoteRequestTag_setStoreName(QuoteRequestTag* this, const char* storeName) {
        this->storeName = storeName;
}


// throws LicensingException
static const char* QuoteRequestTag_email(QuoteRequestTag* this) {
        JAVA_TRY {
            Any* anyType = QuoteHelperFactory_getInstance(QuoteHelperFactory_new(), QuoteRequestTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "email", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to send QuoteRequest emails";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "sendEmail()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t QuoteRequestTag_doStartTag(QuoteRequestTag* this) {
        JAVA_TRY {
            if (QuoteRequestTag_getCommand(this) != nullptr) {
                JAVA_CALL(QuoteRequestTag_getPropertiesHashMap(this), put, StoreFrontData_getInstance()->NAME, this->storeName);
                if (JAVA_CALL(QuoteRequestTag_getCommand(this), compareTo, "EMAIL") == 0) {
                    QuoteRequestTag_email(this);
                    return this->EVAL_BODY_INCLUDE;
                } else {
                    return TableTag_doStartTag((&this->base));
                }
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

