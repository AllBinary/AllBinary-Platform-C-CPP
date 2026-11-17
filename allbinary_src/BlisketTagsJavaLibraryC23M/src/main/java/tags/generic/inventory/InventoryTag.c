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
// package tags.generic.inventory

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
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "taghelpers/InventoryHelperFactory.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct InventoryTag InventoryTag;
struct InventoryTag {
    StoreValidationTransformTag base;
    LogUtil* logUtil;
};


InventoryTag* InventoryTag_new(void);

void InventoryTag_init(InventoryTag* this);
static void InventoryTag_search(InventoryTag* this);
static void InventoryTag_viewSummary(InventoryTag* this);
int32_t InventoryTag_doStartTag(InventoryTag* this);

static void InventoryTag_initFields(InventoryTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void InventoryTag_init(InventoryTag* this) {
        StoreValidationTransformTag_init(&this->base);
        InventoryTag_initFields(this);
}

InventoryTag* InventoryTag_new(void) {
    InventoryTag* this = calloc(1, sizeof(InventoryTag));
    InventoryTag_init(this);
    return this;
}


// throws LicensingException
static void InventoryTag_search(InventoryTag* this) {
        JAVA_TRY {
            Any* anyType = InventoryHelperFactory_getInstance(InventoryHelperFactory_new(), InventoryTag_getPropertiesHashMap(this), this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "search", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, result);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to search Inventory by keyword";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "search()", e);
            }
            JAVA_TRY {
                JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, java_concat(error, "<br>"));
                JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, java_concat(java_concat("Exception: ", java_string_of(e)), "<br>"));
            } JAVA_CATCH(Exception, e2) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LICENSINGERROR)) {
                    LogUtil_put(this->logUtil, "Exception in Exception Handling", this, "search()", e);
                }
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


// throws LicensingException
static void InventoryTag_viewSummary(InventoryTag* this) {
        JAVA_TRY {
            Any* anyType = InventoryHelperFactory_getInstance(InventoryHelperFactory_new(), InventoryTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "viewSummary", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, result);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to View Summary";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "viewSummary()", e);
            }
            JAVA_TRY {
                JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, java_concat(error, "<br>"));
                JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, java_concat(java_concat("Exception: ", java_string_of(e)), "<br>"));
            } JAVA_CATCH(Exception, e2) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LICENSINGERROR)) {
                    LogUtil_put(this->logUtil, "Exception in Exception Handling", this, "viewSummary())", e);
                }
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t InventoryTag_doStartTag(InventoryTag* this) {
        JAVA_TRY {
            if (InventoryTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->SEARCH) == 0) {
                    InventoryTag_setName(this, "Basic Search Inventory View");
                    InventoryTag_setObjectFile(this, "views.generic.inventory.AutoSearchValidationInventoryView");
                    InventoryTag_search(this);
                    return StoreValidationTransformTag_EVAL_BODY_INCLUDE;
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEWSUMMARY) == 0) {
                    InventoryTag_setName(this, "Basic Inventory View");
                    InventoryTag_setObjectFile(this, "views.generic.inventory.AutoValidationInventoryView");
                    InventoryTag_viewSummary(this);
                    return StoreValidationTransformTag_EVAL_BODY_INCLUDE;
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    InventoryTag_setName(this, "Basic Inventory View");
                    InventoryTag_setObjectFile(this, "views.generic.inventory.AutoValidationInventoryView");
                    return StoreValidationTransformTag_doStartTag((&this->base));
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(InventoryTag_getCommand(this)))));
                }
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

