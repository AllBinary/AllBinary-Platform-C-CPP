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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/quoterequest/QuoteRequest.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h"
#include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct QuoteHelper QuoteHelper;
struct QuoteHelper {
    BasicTable base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    Portion* portion;
};


QuoteHelper* QuoteHelper_new(HashMap* hashMap, PageContext* pageContext);

void QuoteHelper_init(QuoteHelper* this, HashMap* hashMap, PageContext* pageContext);
static void QuoteHelper_emailUser(QuoteHelper* this, QuoteRequest* quoteRequest);
static void QuoteHelper_emailAdmins(QuoteHelper* this, QuoteRequest* quoteRequest);
const char* QuoteHelper_email(QuoteHelper* this);
const char* QuoteHelper_drop(QuoteHelper* this);
const char* QuoteHelper_create(QuoteHelper* this);
const char* QuoteHelper_restore(QuoteHelper* this);
const char* QuoteHelper_backup(QuoteHelper* this);

static void QuoteHelper_initFields(QuoteHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    this->storeFrontInterface = nullptr;
    
}


void QuoteHelper_init(QuoteHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    QuoteHelper_initFields(this);
        const char* storeName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        } else {
            this->storeFrontInterface = StoreFront_new();
        }
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->portion = Portion_new(hashMap);
}

QuoteHelper* QuoteHelper_new(HashMap* hashMap, PageContext* pageContext) {
    QuoteHelper* this = calloc(1, sizeof(QuoteHelper));
    QuoteHelper_init(this, hashMap, pageContext);
    return this;
}


// throws Exception
static void QuoteHelper_emailUser(QuoteHelper* this, QuoteRequest* quoteRequest) {
        UserInterface* user = UserEntityFactory_getUser(UserEntityFactory_getInstance(), QuoteRequest_getUserName(quoteRequest));
        const char* userEmailSubject = "Quote Request Receipt";
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "This is just a verification email. ");
        StringMaker_append(stringBuffer, "We usually respond to quote request within 24 hours.");
        StringMaker_append(stringBuffer, "\n\nThank You For Your Business.");
        const char* userEmailTextBody = StringMaker_toString(stringBuffer);
        BasicEmailInfo* basicEmailInfo = ((BasicEmailInfo*) StoreEmailInfo_new(this->storeFrontInterface, userEmailSubject, userEmailTextBody));
        EmailInfo* emailInfo = EmailInfo_new(basicEmailInfo);
        UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandlerSingletons_getInstance(UserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_QUOTEREQUEST, user);
        UserEmailEventHandler_receiveEmailInfo(userEmailEventHandler, UserEmailEventNameData_QUOTEREQUEST, emailInfo);
}


// throws Exception
static void QuoteHelper_emailAdmins(QuoteHelper* this, QuoteRequest* quoteRequest) {
        const char* adminEmailSubject = "Quote Request";
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "\nUserName: ");
        StringMaker_append(stringBuffer, QuoteRequest_getUserName(quoteRequest));
        StringMaker_append(stringBuffer, "\nProject Info: \n");
        StringMaker_append(stringBuffer, QuoteRequest_getProjectInfo(quoteRequest));
        StringMaker_append(stringBuffer, "\nUser Comments: \n");
        StringMaker_append(stringBuffer, QuoteRequest_getUserComments(quoteRequest));
        StringMaker_append(stringBuffer, "\nBudget: \n");
        StringMaker_append(stringBuffer, QuoteRequest_getBudget(quoteRequest));
        StringMaker_append(stringBuffer, "\nTime Frame: \n");
        StringMaker_append(stringBuffer, QuoteRequest_getTimeFrame(quoteRequest));
        StringMaker_append(stringBuffer, "\nComments: \n");
        StringMaker_append(stringBuffer, QuoteRequest_getComments(quoteRequest));
        const char* adminEmailTextBody = StringMaker_toString(stringBuffer);
        BasicEmailInfo* basicEmailInfo = ((BasicEmailInfo*) StoreEmailInfo_new(this->storeFrontInterface, adminEmailSubject, adminEmailTextBody));
        EmailInfo* emailInfo = EmailInfo_new(basicEmailInfo);
        UserEmailEventHandler* storeAdminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_QUOTEREQUEST);
        UserEmailEventHandler* adminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons_getInstance(StoreAdminUserEmailEventHandlerSingletons_getInstance(), UserEmailEventNameData_QUOTEREQUEST, this->abeClientInformation, this->storeFrontInterface);
        UserEmailEventHandler_receiveEmailInfo(storeAdminUserEmailEventHandler, UserEmailEventNameData_QUOTEREQUEST, emailInfo);
        UserEmailEventHandler_receiveEmailInfo(adminUserEmailEventHandler, UserEmailEventNameData_QUOTEREQUEST, emailInfo);
}


// throws Exception
const char* QuoteHelper_email(QuoteHelper* this) {
        JAVA_TRY {
            QuoteRequestEntity* quoteRequestEntity = QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance());
            const char* userName = WeblisketSession_getUserName(this->weblisketSession);
            BasicArrayList* vector = QuoteRequestEntity_getIds(quoteRequestEntity, userName);
            int32_t id = 0;
            int32_t size = BasicArrayList_size(vector);
            for (int32_t index = 0; index < size; index++) {
                int32_t nextId = Integer_intValue((((int32_t) BasicArrayList_get(vector, index))));
                if (id < nextId) {
                    id = nextId;
                }
            }
            QuoteRequest* quoteRequest = QuoteRequestEntity_get(quoteRequestEntity, userName, id);
            if (quoteRequest != nullptr) {
                QuoteHelper_emailUser(this, quoteRequest);
                QuoteHelper_emailAdmins(this, quoteRequest);
                return "Thank You For Your Business.<p/>";
            } else {
                java_throw(java_exception_new("Exception", "No Quote Request"));
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "email", e);
            }
            return "Thank You For Your Business.<p>";
        } JAVA_END_TRY;
}


const char* QuoteHelper_drop(QuoteHelper* this) {
        JAVA_TRY {
            const char* success = JAVA_CALL(QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()), dropTable);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop QuoteRequest table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* QuoteHelper_create(QuoteHelper* this) {
        JAVA_TRY {
            const char* success = JAVA_CALL(QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()), createTable);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "create()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create new QuoteRequest table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* QuoteHelper_restore(QuoteHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()), this->portion);
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


const char* QuoteHelper_backup(QuoteHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()));
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

