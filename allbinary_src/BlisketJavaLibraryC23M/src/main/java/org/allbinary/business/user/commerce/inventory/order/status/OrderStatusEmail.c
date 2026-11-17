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
// package org.allbinary.business.user.commerce.inventory.order.status

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct OrderStatusEmail OrderStatusEmail;
struct OrderStatusEmail {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    OrderHistory* orderHistory;
    StoreFrontInterface* storeFrontInterface;
    UserInterface* user;
};


OrderStatusEmail* OrderStatusEmail_new(AbeClientInformationInterface* abeClientInformation, OrderHistory* orderHistory);

void OrderStatusEmail_init(OrderStatusEmail* this, AbeClientInformationInterface* abeClientInformation, OrderHistory* orderHistory);
void OrderStatusEmail_process(OrderStatusEmail* this);
static void OrderStatusEmail_notifyStoreAdmin(OrderStatusEmail* this);
static void OrderStatusEmail_notifyUser(OrderStatusEmail* this);

static void OrderStatusEmail_initFields(OrderStatusEmail* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
}


void OrderStatusEmail_init(OrderStatusEmail* this, AbeClientInformationInterface* abeClientInformation, OrderHistory* orderHistory) {
    OrderStatusEmail_initFields(this);
        this->abeClientInformation = abeClientInformation;
        this->orderHistory = orderHistory;
        const char* storeName = OrderHistory_getStoreName(orderHistory);
        this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        this->user = UserEntityFactory_getUser(UserEntityFactory_getInstance(), OrderHistory_getUserName(orderHistory));
}

OrderStatusEmail* OrderStatusEmail_new(AbeClientInformationInterface* abeClientInformation, OrderHistory* orderHistory) {
    OrderStatusEmail* this = calloc(1, sizeof(OrderStatusEmail));
    OrderStatusEmail_init(this, abeClientInformation, orderHistory);
    return this;
}


// throws Exception
void OrderStatusEmail_process(OrderStatusEmail* this) {
        OrderStatusEmail_notifyStoreAdmin(this);
        OrderStatusEmail_notifyUser(this);
}


// throws Exception
static void OrderStatusEmail_notifyStoreAdmin(OrderStatusEmail* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Order Email", this, "emailStoreAdmin");
            }
            const char* adminEmailSubject = java_concat(java_concat("Order ", java_string_of(OrderHistory_getStatus(this->orderHistory))), " Attempt");
            const char* adminEmailTextBody = java_concat(java_concat(java_concat("Order attempt: ", java_string_of(OrderHistory_getId(this->orderHistory))), " Preprocessing by: "), java_string_of(UserInterface_getUserName(this->user)));
            BasicEmailInfo* adminBasicEmailInfo = ((BasicEmailInfo*) AdminEmailInfo_new(adminEmailSubject, adminEmailTextBody));
            BasicEmailInfo* storeAdminBasicEmailInfo = ((BasicEmailInfo*) StoreEmailInfo_new(this->storeFrontInterface, adminEmailSubject, adminEmailTextBody));
            EmailInfo* storeAdminEmailInfo = EmailInfo_new(storeAdminBasicEmailInfo);
            EmailInfo* adminEmailInfo = EmailInfo_new(adminBasicEmailInfo);
            UserEmailEventNameData* userEmailEventNameData = UserEmailEventNameData_getInstance(OrderHistory_getStatus(this->orderHistory));
            UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, userEmailEventNameData);
            UserEmailEventHandler* storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons_getInstance(StoreAdminUserEmailEventHandlerSingletons_getInstance(), userEmailEventNameData, this->abeClientInformation, this->storeFrontInterface);
            UserEmailEventHandler_receiveEmailInfo(storeAdminUserEmailEventHandler, userEmailEventNameData, storeAdminEmailInfo);
            UserEmailEventHandler_receiveEmailInfo(adminUserEmailEventHandler, userEmailEventNameData, adminEmailInfo);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "emailAdmin", e);
            }
        } JAVA_END_TRY;
}


// throws Exception
static void OrderStatusEmail_notifyUser(OrderStatusEmail* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Email User", this, "notifyUser()");
            }
            const char* subject = java_concat(java_concat("Order ", java_string_of(OrderHistory_getStatus(this->orderHistory))), " Attempt");
            const char* textBody = java_concat(java_concat(java_concat("Order attempt: ", java_string_of(OrderHistory_getId(this->orderHistory))), " Preprocessing by: "), java_string_of(UserInterface_getUserName(this->user)));
            BasicEmailInfo* basicEmailInfo = ((BasicEmailInfo*) StoreEmailInfo_new(this->storeFrontInterface, subject, textBody));
            EmailInfo* emailInfo = EmailInfo_new(basicEmailInfo);
            UserEmailEventNameData* userEmailEventNameData = UserEmailEventNameData_getInstance(OrderHistory_getStatus(this->orderHistory));
            UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandlerSingletons_getInstance(UserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, userEmailEventNameData, this->user);
            UserEmailEventHandler_receiveEmailInfo(userEmailEventHandler, userEmailEventNameData, emailInfo);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "notifyUser", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

