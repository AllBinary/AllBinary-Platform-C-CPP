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
#include "admin/taghelpers/BasketHelperFactory.h"
#include "admin/taghelpers/BasketRequestHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct BasketTag BasketTag;
struct BasketTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* command;
    const char* storeName;
    HashMap* propertiesHashMap;
};


BasketTag* BasketTag_new(void);

void BasketTag_init(BasketTag* this);
void BasketTag_setCommand(BasketTag* this, const char* command);
void BasketTag_setStoreName(BasketTag* this, const char* value);
static bool BasketTag_isBasketEmpty(BasketTag* this);
static bool BasketTag_addItemToBasket(BasketTag* this);
static bool BasketTag_removeItemFromBasket(BasketTag* this);
static bool BasketTag_adjustBasket(BasketTag* this);
int32_t BasketTag_doStartTag(BasketTag* this);

static void BasketTag_initFields(BasketTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->command = nullptr;
    this->storeName = nullptr;
    this->propertiesHashMap = nullptr;
}


void BasketTag_init(BasketTag* this) {
    CustomTagSupport_init(&this->base);
    BasketTag_initFields(this);
}

BasketTag* BasketTag_new(void) {
    BasketTag* this = calloc(1, sizeof(BasketTag));
    BasketTag_init(this);
    return this;
}


void BasketTag_setCommand(BasketTag* this, const char* command) {
        this->command = command;
}


void BasketTag_setStoreName(BasketTag* this, const char* value) {
        this->storeName = value;
}


// throws LicensingException
static bool BasketTag_isBasketEmpty(BasketTag* this) {
        JAVA_TRY {
            Any* anyType = BasketHelperFactory_getInstance(BasketHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "isBasketEmpty", nullptr);
            bool emptyBoolean = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(emptyBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isBasketEmpty()", e);
            }
            return true;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool BasketTag_addItemToBasket(BasketTag* this) {
        JAVA_TRY {
            Any* anyType = BasketRequestHelperFactory_getInstance(BasketRequestHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "addItemToBasket", nullptr);
            bool emptyBoolean = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(emptyBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add item from Basket";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "addItemToBasket()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool BasketTag_removeItemFromBasket(BasketTag* this) {
        JAVA_TRY {
            Any* anyType = BasketRequestHelperFactory_getInstance(BasketRequestHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "removeItemFromBasket", nullptr);
            bool emptyBoolean = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(emptyBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to remove item from Basket";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "removeItemFromBasket()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool BasketTag_adjustBasket(BasketTag* this) {
        JAVA_TRY {
            Any* anyType = BasketRequestHelperFactory_getInstance(BasketRequestHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "adjustBasket", nullptr);
            bool emptyBoolean = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(emptyBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to Adjust Basket";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "adjustBasket()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t BasketTag_doStartTag(BasketTag* this) {
        JAVA_TRY {
            if (this->command != nullptr) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                HashMap_put(this->propertiesHashMap, StoreFrontData_getInstance()->NAME, this->storeName);
                if (strcmp(this->command, BasketData_INSERT) == 0) {
                    if (!BasketTag_addItemToBasket(this)) {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), println, "Item is not currently being sold.<p/>");
                    }
                } else if (strcmp(this->command, BasketData_DELETE) == 0) {
                    BasketTag_removeItemFromBasket(this);
                } else if (strcmp(this->command, BasketData_ADJUST) == 0) {
                    BasketTag_adjustBasket(this);
                } else if (strcmp(this->command, BasketData_ISEMPTY) == 0) {
                    if (BasketTag_isBasketEmpty(this)) {
                        return this->EVAL_BODY_INCLUDE;
                    } else {
                        return CustomTagSupport_SKIP_BODY;
                    }
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

