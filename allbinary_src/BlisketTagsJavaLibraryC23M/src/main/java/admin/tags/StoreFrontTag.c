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
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/StoreFrontHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct StoreFrontTag StoreFrontTag;
struct StoreFrontTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* command;
    const char* storeName;
    HashMap* propertiesHashMap;
};


StoreFrontTag* StoreFrontTag_new(void);

void StoreFrontTag_init(StoreFrontTag* this);
void StoreFrontTag_setCommand(StoreFrontTag* this, const char* command);
void StoreFrontTag_setStoreName(StoreFrontTag* this, const char* value);
static const char* StoreFrontTag_getCurrentLocation(StoreFrontTag* this);
static const char* StoreFrontTag_getCurrentHomeLocation(StoreFrontTag* this);
int32_t StoreFrontTag_doStartTag(StoreFrontTag* this);

static void StoreFrontTag_initFields(StoreFrontTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->command = nullptr;
    this->storeName = nullptr;
    this->propertiesHashMap = nullptr;
}


void StoreFrontTag_init(StoreFrontTag* this) {
    CustomTagSupport_init(&this->base);
    StoreFrontTag_initFields(this);
}

StoreFrontTag* StoreFrontTag_new(void) {
    StoreFrontTag* this = calloc(1, sizeof(StoreFrontTag));
    StoreFrontTag_init(this);
    return this;
}


void StoreFrontTag_setCommand(StoreFrontTag* this, const char* command) {
        this->command = command;
}


void StoreFrontTag_setStoreName(StoreFrontTag* this, const char* value) {
        this->storeName = value;
}


// throws LicensingException
static const char* StoreFrontTag_getCurrentLocation(StoreFrontTag* this) {
        JAVA_TRY {
            Any* anyType = StoreFrontHelperFactory_getInstance(StoreFrontHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "getCurrentLocation", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to retrieve current location";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getCurrentLocation()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* StoreFrontTag_getCurrentHomeLocation(StoreFrontTag* this) {
        JAVA_TRY {
            Any* anyType = StoreFrontHelperFactory_getInstance(StoreFrontHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "getCurrentHomeLocation", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to retrieve current home location";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getCurrentHomeLocation()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t StoreFrontTag_doStartTag(StoreFrontTag* this) {
        JAVA_TRY {
            if (this->command != nullptr) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                HashMap_put(this->propertiesHashMap, StoreFrontData_getInstance()->NAME, this->storeName);
                if (strcmp(this->command, org_allbinary->globals->GLOBALS2->GETCURRENTLOCATION) == 0) {
                    JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, StoreFrontTag_getCurrentLocation(this));
                } else if (strcmp(this->command, org_allbinary->globals->GLOBALS2->GETCURRENTHOMELOCATION) == 0) {
                    JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, StoreFrontTag_getCurrentHomeLocation(this));
                }
            }
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}

