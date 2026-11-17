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
#include "org/allbinary/business/context/AbContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/AcceptableResponseGenerator.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h"
#include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "views/admin/inventory/listings/ProductListingFactory.h"
#include "admin/taghelpers/TagHelperInterface.h"

typedef struct StaticPagesRequestHelper StaticPagesRequestHelper;
struct StaticPagesRequestHelper {
    AbContext base;
    TagHelperInterface TagHelperInterface_interface;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    HttpServletRequest* request;
    const char* storeName;
    SearchParams* searchParams;
    const char* xslFile;
};


StaticPagesRequestHelper* StaticPagesRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void StaticPagesRequestHelper_init(StaticPagesRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
static void StaticPagesRequestHelper_getFormData(StaticPagesRequestHelper* this);
static void StaticPagesRequestHelper_email(StaticPagesRequestHelper* this);
const char* StaticPagesRequestHelper_generateStaticPages(StaticPagesRequestHelper* this);
const char* StaticPagesRequestHelper_makePublic(StaticPagesRequestHelper* this);

static void StaticPagesRequestHelper_initFields(StaticPagesRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    this->storeName = nullptr;
    this->searchParams = nullptr;
    
}


void StaticPagesRequestHelper_init(StaticPagesRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        AbContext_init(&this->base, propertiesHashMap, pageContext);
        StaticPagesRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->xslFile = ((const char*) HashMap_get(propertiesHashMap, TransformInfoData_getInstance()->TEMPLATEFILENAME));
        StaticPagesRequestHelper_getFormData(this);
}

StaticPagesRequestHelper* StaticPagesRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    StaticPagesRequestHelper* this = calloc(1, sizeof(StaticPagesRequestHelper));
    StaticPagesRequestHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


static void StaticPagesRequestHelper_getFormData(StaticPagesRequestHelper* this) {
        this->storeName = HttpServletRequest_getParameter(this->request, StoreFrontData_getInstance()->NAME);
        this->searchParams = SearchParams_new(this->request);
}


// throws Exception
static void StaticPagesRequestHelper_email(StaticPagesRequestHelper* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Generated Static Pages Notification Email", this, "email");
            }
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(this->storeName);
            const char* adminEmailSubject = "Generated Static Pages Email Notification";
            const char* adminEmailTextBody = java_concat("Generated static pages for store: ", this->storeName);
            BasicEmailInfo* adminBasicEmailInfo = ((BasicEmailInfo*) AdminEmailInfo_new(adminEmailSubject, adminEmailTextBody));
            BasicEmailInfo* storeAdminBasicEmailInfo = ((BasicEmailInfo*) StoreEmailInfo_new(storeFrontInterface, adminEmailSubject, adminEmailTextBody));
            EmailInfo* storeAdminEmailInfo = EmailInfo_new(storeAdminBasicEmailInfo);
            EmailInfo* adminEmailInfo = EmailInfo_new(adminBasicEmailInfo);
            UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_STOREGENERATINGSTATICPAGES);
            UserEmailEventHandler* storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons_getInstance(StoreAdminUserEmailEventHandlerSingletons_getInstance(), UserEmailEventNameData_STOREGENERATINGSTATICPAGES, this->abeClientInformation, storeFrontInterface);
            UserEmailEventHandler_receiveEmailInfo(storeAdminUserEmailEventHandler, UserEmailEventNameData_STOREGENERATINGSTATICPAGES, storeAdminEmailInfo);
            UserEmailEventHandler_receiveEmailInfo(adminUserEmailEventHandler, UserEmailEventNameData_STOREGENERATINGSTATICPAGES, adminEmailInfo);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "email", e);
            }
        } JAVA_END_TRY;
}


const char* StaticPagesRequestHelper_generateStaticPages(StaticPagesRequestHelper* this) {
        JAVA_TRY {
            const char* contentType = AcceptableResponseGenerator_get(AcceptableResponseGenerator_getInstance(), this->request);
            SearchRequest* searchRequest = SearchRequest_new(nullptr, this->searchParams, this->xslFile, contentType, StaticPagesRequestHelper_getPropertiesHashMap(this), StaticPagesRequestHelper_getPageContext(this));
            const char* success = ProductListingFactory_generateAll(ProductListingFactory_getInstance(searchRequest), this->storeName);
            StaticPagesRequestHelper_email(this);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "generateStaticPages()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to generate staticpages table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateStaticPages()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* StaticPagesRequestHelper_makePublic(StaticPagesRequestHelper* this) {
        JAVA_TRY {
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(this->storeName);
            AbPath* fromAbPath = AbPath_new(StoreFrontInterface_getTestHtmlPath(storeFrontInterface) + StoreFrontInterface_getStaticPath(storeFrontInterface), StringUtil_getInstance()->EMPTY_STRING);
            AbPath* toAbPath = AbPath_new(java_concat(java_concat(java_concat(java_string_of(JAVA_CALL(AbContext_URLGLOBALS, getWebappPath)), StoreFrontInterface_getName(storeFrontInterface)), java_string_of(AbPathData_getInstance()->SEPARATOR)), java_string_of(StoreFrontInterface_getStaticPath(storeFrontInterface))), StringUtil_getInstance()->EMPTY_STRING);
            FileUtil_copy(FileUtil_getInstance(), fromAbPath, toAbPath);
            const char* success = "Made Public";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "makePublic()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to makePublic";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "makePublic()", e);
            }
            return error;
        } JAVA_END_TRY;
}

