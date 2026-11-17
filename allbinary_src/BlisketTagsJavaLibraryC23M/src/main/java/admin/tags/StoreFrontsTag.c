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
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "admin/taghelpers/StoreFrontsHelperFactory.h"
#include "admin/taghelpers/StoreFrontsRequestHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct StoreFrontsTag StoreFrontsTag;
struct StoreFrontsTag {
    TableTag base;
    LogUtil* logUtil;
};


StoreFrontsTag* StoreFrontsTag_new(void);

void StoreFrontsTag_init(StoreFrontsTag* this);
static const char* StoreFrontsTag_generateSelect(StoreFrontsTag* this);
static const char* StoreFrontsTag_install(StoreFrontsTag* this);
static const char* StoreFrontsTag_sendStoreCreatedEmails(StoreFrontsTag* this);
int32_t StoreFrontsTag_doStartTag(StoreFrontsTag* this);

static void StoreFrontsTag_initFields(StoreFrontsTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void StoreFrontsTag_init(StoreFrontsTag* this) {
    TableTag_init(&this->base);
    StoreFrontsTag_initFields(this);
        StoreFrontsTag_setTagHelperFactory(this, StoreFrontsHelperFactory_new());
        StoreFrontsTag_setTagRequestHelperFactory(this, StoreFrontsRequestHelperFactory_new());
}

StoreFrontsTag* StoreFrontsTag_new(void) {
    StoreFrontsTag* this = calloc(1, sizeof(StoreFrontsTag));
    StoreFrontsTag_init(this);
    return this;
}


// throws LicensingException
static const char* StoreFrontsTag_generateSelect(StoreFrontsTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(StoreFrontsTag_getTagHelperFactoryInterface(this), getInstance, StoreFrontsTag_getPropertiesHashMap(this), this->base.pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "generateSelect", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to generate storefronts select";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateSelect()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* StoreFrontsTag_install(StoreFrontsTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(StoreFrontsTag_getTagRequestHelperFactoryInterface(this), getInstance, StoreFrontsTag_getPropertiesHashMap(this), this->base.pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "install", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to generate storefronts select";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateSelect()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* StoreFrontsTag_sendStoreCreatedEmails(StoreFrontsTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(StoreFrontsTag_getTagRequestHelperFactoryInterface(this), getInstance, StoreFrontsTag_getPropertiesHashMap(this), this->base.pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "sendStoreCreatedEmails", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to send email";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "sendStoreCreatedEmails()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t StoreFrontsTag_doStartTag(StoreFrontsTag* this) {
        JAVA_TRY {
            if (StoreFrontsTag_isEnabled(this)) {
                if (StoreFrontsTag_getCommand(this) != nullptr) {
                    StoreFrontData* storeFrontData = StoreFrontData_getInstance();
                    if (JAVA_CALL(StoreFrontsTag_getCommand(this), compareTo, storeFrontData->SELECT) == 0) {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, StoreFrontsTag_generateSelect(this));
                    } else if (JAVA_CALL(StoreFrontsTag_getCommand(this), compareTo, storeFrontData->INSTALL) == 0) {
                        JAVA_CALL(StoreFrontsTag_getPropertiesHashMap(this), put, "current", StoreFrontsTag_getCurrent(this));
                        JAVA_CALL(StoreFrontsTag_getPropertiesHashMap(this), put, "total", StoreFrontsTag_getTotal(this));
                        if (JAVA_CALL(StoreFrontsTag_getCurrent(this), intValue) == JAVA_CALL(StoreFrontsTag_getTotal(this), intValue)) {
                            return TagSupport_EVAL_BODY_INCLUDE;
                        }
                        StoreFrontsTag_install(this);
                    } else if (JAVA_CALL(StoreFrontsTag_getCommand(this), compareTo, storeFrontData->INSTALL_COMPLETE) == 0) {
                        StoreFrontsTag_sendStoreCreatedEmails(this);
                    } else {
                        return TableTag_doStartTag((&this->base));
                    }
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

