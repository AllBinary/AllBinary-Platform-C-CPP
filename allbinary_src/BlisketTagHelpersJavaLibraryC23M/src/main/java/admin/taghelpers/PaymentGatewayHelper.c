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
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct PaymentGatewayHelper PaymentGatewayHelper;
struct PaymentGatewayHelper {
    BasicTable base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    HttpServletRequest* httpServletRequest;
    Portion* portion;
};


PaymentGatewayHelper* PaymentGatewayHelper_new(HashMap* hashMap, PageContext* pageContext);

void PaymentGatewayHelper_init(PaymentGatewayHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* PaymentGatewayHelper_insert(PaymentGatewayHelper* this);
const char* PaymentGatewayHelper_update(PaymentGatewayHelper* this);
const char* PaymentGatewayHelper_delete(PaymentGatewayHelper* this);
const char* PaymentGatewayHelper_drop(PaymentGatewayHelper* this);
const char* PaymentGatewayHelper_create(PaymentGatewayHelper* this);
const char* PaymentGatewayHelper_restore(PaymentGatewayHelper* this);
const char* PaymentGatewayHelper_backup(PaymentGatewayHelper* this);

static void PaymentGatewayHelper_initFields(PaymentGatewayHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->weblisketSession = nullptr;
    this->httpServletRequest = nullptr;
    this->portion = nullptr;
}


void PaymentGatewayHelper_init(PaymentGatewayHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    PaymentGatewayHelper_initFields(this);
        JAVA_TRY {
            this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
            this->httpServletRequest = ((HttpServletRequest*) PageContext_getRequest(pageContext));
            this->portion = Portion_new(hashMap);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENTERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

PaymentGatewayHelper* PaymentGatewayHelper_new(HashMap* hashMap, PageContext* pageContext) {
    PaymentGatewayHelper* this = calloc(1, sizeof(PaymentGatewayHelper));
    PaymentGatewayHelper_init(this, hashMap, pageContext);
    return this;
}


const char* PaymentGatewayHelper_insert(PaymentGatewayHelper* this) {
        JAVA_TRY {
            PaymentGatewayInterface* paymentGatewayInterface = PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory_new(), this->httpServletRequest);
            PaymentGatewayInterface_setStoreName(paymentGatewayInterface, WeblisketSession_getStoreName(this->weblisketSession));
            PaymentGatewayEntityFactory_add(PaymentGatewayEntityFactory_getInstance(), paymentGatewayInterface);
            const char* success = "Successfully Added New Payment Gateway";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return java_concat(success, "<br/>");
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "add()", e);
            }
            return java_concat(java_concat(java_concat(java_concat(error, "<br>"), "Exception: "), java_string_of(e)), "<br>");
        } JAVA_END_TRY;
}


const char* PaymentGatewayHelper_update(PaymentGatewayHelper* this) {
        JAVA_TRY {
            PaymentGatewayInterface* paymentGatewayInterface = PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory_new(), this->httpServletRequest);
            PaymentGatewayInterface_setStoreName(paymentGatewayInterface, WeblisketSession_getStoreName(this->weblisketSession));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Gateway Name: ");
                StringMaker_append(stringBuffer, PaymentGatewayInterface_getName(paymentGatewayInterface));
                StringMaker_append(stringBuffer, " HashMap=");
                StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayInterface_toHashMap(paymentGatewayInterface, true), toString));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "update()");
            }
            PaymentGatewayEntityFactory_update(PaymentGatewayEntityFactory_getInstance(), paymentGatewayInterface);
            const char* success = "Successfully Updated Payment Gateway information";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return java_concat(success, "<br/>");
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update payment gateway information";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return java_concat(java_concat(java_concat(java_concat(error, "<br/>"), "Exception: "), java_string_of(e)), "<br/>");
        } JAVA_END_TRY;
}


const char* PaymentGatewayHelper_delete(PaymentGatewayHelper* this) {
        JAVA_TRY {
            PaymentGatewayInterface* paymentGatewayInterface = PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory_new(), this->httpServletRequest);
            PaymentGatewayInterface_setStoreName(paymentGatewayInterface, WeblisketSession_getStoreName(this->weblisketSession));
            const char* storeName = PaymentGatewayInterface_getStoreName(paymentGatewayInterface);
            const char* gatewayName = PaymentGatewayInterface_getName(paymentGatewayInterface);
            PaymentGatewayEntityFactory_remove(PaymentGatewayEntityFactory_getInstance(), storeName, BasicPaymentTypeUtil_get(BasicPaymentTypeUtil_getInstance(), gatewayName));
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Successfully Removed payment gateway where store name=");
            StringMaker_append(stringBuffer, storeName);
            StringMaker_append(stringBuffer, " and gateway name=");
            StringMaker_append(stringBuffer, gatewayName);
            const char* success = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return java_concat(success, "<br/>");
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to remove payment gateway from table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "remove()", e);
            }
            return java_concat(java_concat(java_concat(java_concat(error, "<br/>"), "Exception: "), java_string_of(e)), "<br>");
        } JAVA_END_TRY;
}


const char* PaymentGatewayHelper_drop(PaymentGatewayHelper* this) {
        JAVA_TRY {
            const char* success = PaymentGatewayEntityFactory_dropTable(PaymentGatewayEntityFactory_getInstance());
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop payment transaction result table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* PaymentGatewayHelper_create(PaymentGatewayHelper* this) {
        JAVA_TRY {
            const char* success = PaymentGatewayEntityFactory_createTable(PaymentGatewayEntityFactory_getInstance());
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "create()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create payment transaction result table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* PaymentGatewayHelper_restore(PaymentGatewayHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), PaymentGatewayEntityFactory_getInstance(), this->portion);
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


const char* PaymentGatewayHelper_backup(PaymentGatewayHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), PaymentGatewayEntityFactory_getInstance());
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

