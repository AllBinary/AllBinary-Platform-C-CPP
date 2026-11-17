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
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct ShippingAddressHelper ShippingAddressHelper;
struct ShippingAddressHelper {
    BasicTable base;
    LogUtil* logUtil;
    StringUtil* stringUtil;
    WeblisketSession* weblisketSession;
    HttpServletRequest* request;
    const char* userName;
    StreetAddress* streetAddress;
    Portion* portion;
};


ShippingAddressHelper* ShippingAddressHelper_new(HashMap* hashMap, PageContext* pageContext);

void ShippingAddressHelper_init(ShippingAddressHelper* this, HashMap* hashMap, PageContext* pageContext);
static void ShippingAddressHelper_getAddressForm(ShippingAddressHelper* this);
const char* ShippingAddressHelper_drop(ShippingAddressHelper* this);
const char* ShippingAddressHelper_create(ShippingAddressHelper* this);
const char* ShippingAddressHelper_restore(ShippingAddressHelper* this);
const char* ShippingAddressHelper_backup(ShippingAddressHelper* this);
const char* ShippingAddressHelper_insert(ShippingAddressHelper* this);
const char* ShippingAddressHelper_update(ShippingAddressHelper* this);
static const char* ShippingAddressHelper_setToBillingAddress(ShippingAddressHelper* this);
const char* ShippingAddressHelper_delete(ShippingAddressHelper* this);
const char* ShippingAddressHelper_set(ShippingAddressHelper* this);

static void ShippingAddressHelper_initFields(ShippingAddressHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
    
    
    this->userName = nullptr;
    this->streetAddress = nullptr;
    
}


void ShippingAddressHelper_init(ShippingAddressHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    ShippingAddressHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->portion = Portion_new(hashMap);
        ShippingAddressHelper_getAddressForm(this);
}

ShippingAddressHelper* ShippingAddressHelper_new(HashMap* hashMap, PageContext* pageContext) {
    ShippingAddressHelper* this = calloc(1, sizeof(ShippingAddressHelper));
    ShippingAddressHelper_init(this, hashMap, pageContext);
    return this;
}


static void ShippingAddressHelper_getAddressForm(ShippingAddressHelper* this) {
        this->userName = HttpServletRequest_getParameter(this->request, UserData_USERNAME);
        if (this->userName == nullptr) {
            this->userName = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
        }
        this->streetAddress = StreetAddress_new(this->request);
}


const char* ShippingAddressHelper_drop(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = ShippingAddressesEntity_drop(ShippingAddressesEntity_new(this->stringUtil->EMPTY_STRING));
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


const char* ShippingAddressHelper_create(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = ShippingAddressesEntity_createTable(ShippingAddressesEntity_new(this->stringUtil->EMPTY_STRING));
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


const char* ShippingAddressHelper_restore(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), ShippingAddressesEntity_new(StringUtil_getInstance()->EMPTY_STRING), this->portion);
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


const char* ShippingAddressHelper_backup(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Backup Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), ShippingAddressesEntity_new(StringUtil_getInstance()->EMPTY_STRING));
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


const char* ShippingAddressHelper_insert(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Added Shipping Address";
            JAVA_CALL(ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), add, this->streetAddress);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add Shipping streetAddress";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* ShippingAddressHelper_update(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Updated Shipping Address";
            JAVA_CALL(ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), update, this->streetAddress);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successfull update of a Users Shipping Address table", this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed update of a Users Shipping Address Table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update", e);
            }
            return error;
        } JAVA_END_TRY;
}


static const char* ShippingAddressHelper_setToBillingAddress(ShippingAddressHelper* this) {
        JAVA_TRY {
            StreetAddress* streetAddress = JAVA_CALL(BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), getDefault);
            if (streetAddress != nullptr) {
                JAVA_CALL(ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), add, streetAddress);
            } else {
                return "No Billing Address";
            }
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed Setting Shipping address to Billing Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setToBillingAddress()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* ShippingAddressHelper_delete(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Removed Shipping Address";
            JAVA_CALL(ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), remove, StreetAddress_getId(this->streetAddress));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "remove()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to remove Shipping Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "remove()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* ShippingAddressHelper_set(ShippingAddressHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Set Shipping Address";
            JAVA_CALL(ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), WeblisketSession_getUserName(this->weblisketSession)), setDefault, StreetAddress_getId(this->streetAddress));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "set()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set Shipping Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "set()", e);
            }
            return error;
        } JAVA_END_TRY;
}

