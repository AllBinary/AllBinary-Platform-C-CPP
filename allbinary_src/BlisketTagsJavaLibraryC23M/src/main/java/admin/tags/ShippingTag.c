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
#include "admin/taghelpers/ShippingHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct ShippingTag ShippingTag;
struct ShippingTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* command;
    const char* storeName;
    HashMap* propertiesHashMap;
};


ShippingTag* ShippingTag_new(void);

void ShippingTag_init(ShippingTag* this);
void ShippingTag_setCommand(ShippingTag* this, const char* command);
void ShippingTag_setStoreName(ShippingTag* this, const char* value);
static const char* ShippingTag_setShippingType(ShippingTag* this);
int32_t ShippingTag_doStartTag(ShippingTag* this);

static void ShippingTag_initFields(ShippingTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->command = nullptr;
    this->storeName = nullptr;
    this->propertiesHashMap = nullptr;
}


void ShippingTag_init(ShippingTag* this) {
    CustomTagSupport_init(&this->base);
    ShippingTag_initFields(this);
}

ShippingTag* ShippingTag_new(void) {
    ShippingTag* this = calloc(1, sizeof(ShippingTag));
    ShippingTag_init(this);
    return this;
}


void ShippingTag_setCommand(ShippingTag* this, const char* command) {
        this->command = command;
}


void ShippingTag_setStoreName(ShippingTag* this, const char* value) {
        this->storeName = value;
}


// throws LicensingException
static const char* ShippingTag_setShippingType(ShippingTag* this) {
        JAVA_TRY {
            Any* anyType = ShippingHelperFactory_getInstance(ShippingHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "setShippingType", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view Shipping Type";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setShippingType()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t ShippingTag_doStartTag(ShippingTag* this) {
        JAVA_TRY {
            if (this->command != nullptr) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                HashMap_put(this->propertiesHashMap, StoreFrontData_getInstance()->NAME, this->storeName);
                if (strcmp(this->command, org_allbinary->globals->GLOBALS2->SETSHIPPINGTYPE) == 0) {
                    ShippingTag_setShippingType(this);
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

