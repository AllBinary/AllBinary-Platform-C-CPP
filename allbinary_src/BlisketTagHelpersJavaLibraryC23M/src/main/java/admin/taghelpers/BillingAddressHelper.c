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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "admin/taghelpers/Table.h"

typedef struct BillingAddressHelper BillingAddressHelper;
struct BillingAddressHelper {
    Table base;
    LogUtil* logUtil;
    StringUtil* stringUtil;
    WeblisketSession* weblisketSession;
    HttpServletRequest* request;
    const char* userName;
    StreetAddress* streetAddress;
    Portion* portion;
};


BillingAddressHelper* BillingAddressHelper_new(HashMap* hashMap, PageContext* pageContext);

void BillingAddressHelper_init(BillingAddressHelper* this, HashMap* hashMap, PageContext* pageContext);
static void BillingAddressHelper_getAddressForm(BillingAddressHelper* this);
const char* BillingAddressHelper_drop(BillingAddressHelper* this);
const char* BillingAddressHelper_create(BillingAddressHelper* this);
const char* BillingAddressHelper_restore(BillingAddressHelper* this);
const char* BillingAddressHelper_backup(BillingAddressHelper* this);
const char* BillingAddressHelper_insert(BillingAddressHelper* this);
const char* BillingAddressHelper_update(BillingAddressHelper* this);
static const char* BillingAddressHelper_setToShippingAddress(BillingAddressHelper* this);
const char* BillingAddressHelper_delete(BillingAddressHelper* this);
const char* BillingAddressHelper_set(BillingAddressHelper* this);

static void BillingAddressHelper_initFields(BillingAddressHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
    
    
    this->userName = nullptr;
    this->streetAddress = nullptr;
    
}


void BillingAddressHelper_init(BillingAddressHelper* this, HashMap* hashMap, PageContext* pageContext) {
    Table_init(&this->base);
    BillingAddressHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->portion = Portion_new(hashMap);
        BillingAddressHelper_getAddressForm(this);
}

BillingAddressHelper* BillingAddressHelper_new(HashMap* hashMap, PageContext* pageContext) {
    BillingAddressHelper* this = calloc(1, sizeof(BillingAddressHelper));
    BillingAddressHelper_init(this, hashMap, pageContext);
    return this;
}


static void BillingAddressHelper_getAddressForm(BillingAddressHelper* this) {
        this->userName = HttpServletRequest_getParameter(this->request, UserData_USERNAME);
        if (this->userName == nullptr) {
            this->userName = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
        }
        this->streetAddress = StreetAddress_new(this->request);
}


const char* BillingAddressHelper_drop(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = BillingAddressesEntity_drop(BillingAddressesEntity_new(this->stringUtil->EMPTY_STRING));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop Admin table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_create(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = BillingAddressesEntity_createTable(BillingAddressesEntity_new(this->stringUtil->EMPTY_STRING));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "create()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create user table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_restore(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            BillingAddressesEntity* billingAddressesEntity = BillingAddressesEntity_new(StringUtil_getInstance()->EMPTY_STRING);
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), billingAddressesEntity, this->portion);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "restore()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to restore backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "restore()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_backup(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Backup Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), BillingAddressesEntity_new(StringUtil_getInstance()->EMPTY_STRING));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "backup()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to make backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_insert(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Added Billing Address";
            JAVA_CALL(BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), add, this->streetAddress);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "add()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add Billing Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "add()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_update(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Updated Billing Address";
            JAVA_CALL(BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), update, this->streetAddress);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successfull update of a user Billing Address table", this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed update of a User Billing Address Table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


static const char* BillingAddressHelper_setToShippingAddress(BillingAddressHelper* this) {
        JAVA_TRY {
            ShippingAddressesEntityFactory* shippingAddressesEntityFactory = ShippingAddressesEntityFactory_getInstance();
            StreetAddress* streetAddress = shippingAddressesEntityFactory_getDefault(ShippingAddressesEntityFactory_getInstance(shippingAddressesEntityFactory, WeblisketSession_getUserName(this->weblisketSession)));
            if (streetAddress != nullptr) {
                shippingAddressesEntityFactory_add(ShippingAddressesEntityFactory_getInstance(shippingAddressesEntityFactory, WeblisketSession_getUserName(this->weblisketSession)), streetAddress);
            } else {
                return "No Shipping Address";
            }
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to Set Billing address to Shipping Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setToShippingAddress()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_delete(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Removed Billing Address";
            JAVA_CALL(BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), remove, StreetAddress_getId(this->streetAddress));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to remove Billing Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* BillingAddressHelper_set(BillingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Set Billing Address";
            JAVA_CALL(BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), setDefault, StreetAddress_getId(this->streetAddress));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "set()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set billing Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "set()", e);
            }
            return error;
        } JAVA_END_TRY;
}

