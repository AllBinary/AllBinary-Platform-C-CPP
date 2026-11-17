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
#include "org/allbinary/business/user/commerce/money/payment/PaymentFactory.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/Table.h"

typedef struct PaymentHelper PaymentHelper;
struct PaymentHelper {
    Table base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    HttpServletRequest* request;
    const char* value;
    Portion* portion;
};


PaymentHelper* PaymentHelper_new(HashMap* hashMap, PageContext* pageContext);

void PaymentHelper_init(PaymentHelper* this, HashMap* hashMap, PageContext* pageContext);
static void PaymentHelper_getFormData(PaymentHelper* this);
const char* PaymentHelper_insert(PaymentHelper* this);
const char* PaymentHelper_select(PaymentHelper* this);
const char* PaymentHelper_delete(PaymentHelper* this);
const char* PaymentHelper_drop(PaymentHelper* this);
const char* PaymentHelper_create(PaymentHelper* this);
const char* PaymentHelper_restore(PaymentHelper* this);
const char* PaymentHelper_backup(PaymentHelper* this);
const char* PaymentHelper_update(PaymentHelper* this);

static void PaymentHelper_initFields(PaymentHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    this->value = nullptr;
    
}


void PaymentHelper_init(PaymentHelper* this, HashMap* hashMap, PageContext* pageContext) {
    Table_init(&this->base);
    PaymentHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->portion = Portion_new(hashMap);
        PaymentHelper_getFormData(this);
}

PaymentHelper* PaymentHelper_new(HashMap* hashMap, PageContext* pageContext) {
    PaymentHelper* this = calloc(1, sizeof(PaymentHelper));
    PaymentHelper_init(this, hashMap, pageContext);
    return this;
}


static void PaymentHelper_getFormData(PaymentHelper* this) {
        this->value = HttpServletRequest_getParameter(this->request, "VALUE");
}


const char* PaymentHelper_insert(PaymentHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Added Payment";
            PaymentEntity* paymentEntity = PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance());
            PaymentInterface* paymentInterface = PaymentFactory_getInstance(this->request);
            PaymentEntity_add(paymentEntity, WeblisketSession_getUserName(this->weblisketSession), paymentInterface);
            PaymentEntity_setDefault(paymentEntity, WeblisketSession_getUserName(this->weblisketSession), PaymentEntity_getLastId(paymentEntity, WeblisketSession_getUserName(this->weblisketSession)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "addPayment()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add Payment";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "addPayment()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* PaymentHelper_select(PaymentHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Selected Payment";
            PaymentEntity* paymentEntity = PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance());
            PaymentEntity_setDefault(paymentEntity, WeblisketSession_getUserName(this->weblisketSession), this->value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "selectPayment()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to select Payment";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "selectPayment()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* PaymentHelper_delete(PaymentHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Removed Payment";
            PaymentEntity* paymentEntity = PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance());
            PaymentEntity_remove(paymentEntity, WeblisketSession_getUserName(this->weblisketSession), this->value);
            PaymentInterface* paymentInterface = PaymentEntity_getDefault(paymentEntity, WeblisketSession_getUserName(this->weblisketSession));
            if (paymentInterface == nullptr) {
                PaymentEntity_setDefault(paymentEntity, WeblisketSession_getUserName(this->weblisketSession), PaymentEntity_getLastId(paymentEntity, WeblisketSession_getUserName(this->weblisketSession)));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "removePayment()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to remove Payment";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "removePayment()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* PaymentHelper_drop(PaymentHelper* this) {
        JAVA_TRY {
            PaymentEntity* paymentEntity = PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance());
            const char* success = PaymentEntity_dropTable(paymentEntity);
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


const char* PaymentHelper_create(PaymentHelper* this) {
        JAVA_TRY {
            PaymentEntity* paymentEntity = PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance());
            const char* success = PaymentEntity_createTable(paymentEntity);
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


const char* PaymentHelper_restore(PaymentHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance()), this->portion);
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


const char* PaymentHelper_backup(PaymentHelper* this) {
        JAVA_TRY {
            const char* success = "Backup Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance()));
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


// throws LicensingException
const char* PaymentHelper_update(PaymentHelper* this) {
        return this->base.commonStrings->NOT_IMPLEMENTED;
}

