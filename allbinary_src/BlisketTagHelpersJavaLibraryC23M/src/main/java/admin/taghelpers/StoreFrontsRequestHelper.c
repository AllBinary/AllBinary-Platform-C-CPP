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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct StoreFrontsRequestHelper StoreFrontsRequestHelper;
struct StoreFrontsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    PageContext* pageContext;
    HttpServletRequest* request;
    WeblisketSession* weblisketSession;
    const char* storeName;
    StoreFrontInterface* modifyingStoreFrontInterface;
    Portion* portion;
};


StoreFrontsRequestHelper* StoreFrontsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void StoreFrontsRequestHelper_init(StoreFrontsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
static void StoreFrontsRequestHelper_getFormData(StoreFrontsRequestHelper* this);
const char* StoreFrontsRequestHelper_update(StoreFrontsRequestHelper* this);
void StoreFrontsRequestHelper_sendStoreCreatedEmails(StoreFrontsRequestHelper* this);
const char* StoreFrontsRequestHelper_install(StoreFrontsRequestHelper* this);
const char* StoreFrontsRequestHelper_insert(StoreFrontsRequestHelper* this);
const char* StoreFrontsRequestHelper_delete(StoreFrontsRequestHelper* this);

static void StoreFrontsRequestHelper_initFields(StoreFrontsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    
    
    this->storeName = nullptr;
    this->modifyingStoreFrontInterface = nullptr;
    
}


void StoreFrontsRequestHelper_init(StoreFrontsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    StoreFrontsRequestHelper_initFields(this);
        this->pageContext = pageContext;
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->portion = Portion_new(hashMap);
        StoreFrontsRequestHelper_getFormData(this);
}

StoreFrontsRequestHelper* StoreFrontsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    StoreFrontsRequestHelper* this = calloc(1, sizeof(StoreFrontsRequestHelper));
    StoreFrontsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


// throws Exception
static void StoreFrontsRequestHelper_getFormData(StoreFrontsRequestHelper* this) {
        this->storeName = WeblisketSession_getStoreName(this->weblisketSession);
        this->modifyingStoreFrontInterface = ((StoreFrontInterface*) StoreFront_new(this->request));
}


const char* StoreFrontsRequestHelper_update(StoreFrontsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Updated Successfully";
            HashMap* hashMapData = StoreFrontInterface_toHashMap(this->modifyingStoreFrontInterface);
            JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), update, hashMapData);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws Exception
void StoreFrontsRequestHelper_sendStoreCreatedEmails(StoreFrontsRequestHelper* this) {
        const char* storeManagerEmailSubject = java_concat("Store Manager Nofification For Store: ", StoreFrontInterface_getName(this->modifyingStoreFrontInterface));
        const char* adminEmailSubject = java_concat("Admin Notification For Store: ", StoreFrontInterface_getName(this->modifyingStoreFrontInterface));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Store Created: ");
        StringMaker_append(stringBuffer, StoreFrontInterface_getName(this->modifyingStoreFrontInterface));
        StringMaker_append(stringBuffer, "\n\n");
        StringMaker_append(stringBuffer, "Click here for the Admin Interface:\n");
        StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHomeHostName(this->modifyingStoreFrontInterface));
        StringMaker_append(stringBuffer, "/admin/login.jsp\n\n");
        StringMaker_append(stringBuffer, "Goto Your Store:\n");
        StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHomeHostName(this->modifyingStoreFrontInterface));
        StringMaker_append(stringBuffer, StoreFrontInterface_getName(this->modifyingStoreFrontInterface));
        StringMaker_append(stringBuffer, "/index.jsp");
        StringMaker_append(stringBuffer, "\n\n");
        StringMaker_append(stringBuffer, "UserName: ");
        StringMaker_append(stringBuffer, WeblisketSession_getUserName(this->weblisketSession));
        const char* adminEmailTextBody = StringMaker_toString(stringBuffer);
        BasicEmailInfo* adminBasicEmailInfo = ((BasicEmailInfo*) AdminEmailInfo_new(adminEmailSubject, adminEmailTextBody));
        BasicEmailInfo* storeAdminBasicEmailInfo = ((BasicEmailInfo*) StoreEmailInfo_new(this->modifyingStoreFrontInterface, storeManagerEmailSubject, adminEmailTextBody));
        EmailInfo* storeAdminEmailInfo = EmailInfo_new(storeAdminBasicEmailInfo);
        EmailInfo* adminEmailInfo = EmailInfo_new(adminBasicEmailInfo);
        UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_STORECREATED);
        UserEmailEventHandler* storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons_getInstance(StoreAdminUserEmailEventHandlerSingletons_getInstance(), UserEmailEventNameData_STORECREATED, this->abeClientInformation, this->modifyingStoreFrontInterface);
        UserEmailEventHandler_receiveEmailInfo(storeAdminUserEmailEventHandler, UserEmailEventNameData_STORECREATED, storeAdminEmailInfo);
        UserEmailEventHandler_receiveEmailInfo(adminUserEmailEventHandler, UserEmailEventNameData_STORECREATED, adminEmailInfo);
}


// synchronized
const char* StoreFrontsRequestHelper_install(StoreFrontsRequestHelper* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Intall StoreFront Successfully: ");
            StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(Portion_getCurrent(this->portion), intValue)));
            StringMaker_append(stringBuffer, " of ");
            StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(Portion_getTotal(this->portion), intValue)));
            const char* success = StringMaker_toString(stringBuffer);
            StoreFrontInterface_install(this->modifyingStoreFrontInterface, JAVA_CALL(Portion_getCurrent(this->portion), intValue), JAVA_CALL(Portion_getTotal(this->portion), intValue));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "install()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to Install storefront";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "install()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// synchronized
const char* StoreFrontsRequestHelper_insert(StoreFrontsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Added Successfully";
            BasicArrayList* values = StoreFrontInterface_toVector(this->modifyingStoreFrontInterface);
            JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), insert, values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add storefront";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* StoreFrontsRequestHelper_delete(StoreFrontsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Delete Successfully";
            JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), delete, this->storeName);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to delete storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}

