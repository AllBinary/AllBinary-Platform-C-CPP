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
// package org.allbinary.business.user.role

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/modules/UserFactory.h"
#include "org/allbinary/business/user/modules/admin/AdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/StoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/customer/CustomerStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/order/OrderStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/order/adjust/AdjustOrderStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/order/review/ReviewOrderStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/order/ship/ShipOrderStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/payment/PaymentStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/product/ProductStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/web/WebStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/web/view/editor/ViewEditorWebStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/web/wizard/WizardWebStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/admin/store/web/workflow/editor/WorkflowEditorWebStoreAdminUserFactory.h"
#include "org/allbinary/business/user/modules/customer/subscriber/SubscriberUserFactory.h"
#include "org/allbinary/business/user/modules/customer/wholesale/WholesaleUserFactory.h"

typedef struct UserRoleFactory UserRoleFactory;
struct UserRoleFactory {
    BasicUserRoleFactory* basicUserRoleFactory;
    UserRole* INSTALLER;
    UserRole* ADMINISTRATOR;
    UserRole* CUSTOMER;
    UserRole* SUBSCRIBERCUSTOMER;
    UserRole* WHOLESALECUSTOMER;
    UserRole* STOREMANAGER;
    UserRole* PRODUCTMANAGER;
    UserRole* CUSTOMERMANAGER;
    UserRole* PAYMENTMANAGER;
    UserRole* ORDERMANAGER;
    UserRole* WEBMANAGER;
    UserRole* REVIEWER;
    UserRole* SHIPPING;
    UserRole* ADJUSTER;
    UserRole* WORKFLOWEDITOR;
    UserRole* WIZARD;
    UserRole* VIEWEDITOR;
};

static UserRoleFactory* UserRoleFactory_instance;

UserRoleFactory* UserRoleFactory_new(void);
UserRoleFactory* UserRoleFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void UserRoleFactory_staticInit(void) {
    UserRoleFactory_instance = UserRoleFactory_new();
}

static void UserRoleFactory_initFields(UserRoleFactory* this) {
    this->basicUserRoleFactory = BasicUserRoleFactory_getInstance();
    this->INSTALLER = UserRoleB_new(this->basicUserRoleFactory->INSTALLER, nullptr);
    this->ADMINISTRATOR = UserRoleB_new(this->basicUserRoleFactory->ADMINISTRATOR, AdminUserFactory_new());
    this->CUSTOMER = UserRoleB_new(this->basicUserRoleFactory->CUSTOMER, UserFactory_new());
    this->SUBSCRIBERCUSTOMER = UserRoleB_new(this->basicUserRoleFactory->SUBSCRIBERCUSTOMER, SubscriberUserFactory_new());
    this->WHOLESALECUSTOMER = UserRoleB_new(this->basicUserRoleFactory->WHOLESALECUSTOMER, WholesaleUserFactory_new());
    this->STOREMANAGER = UserRoleB_new(this->basicUserRoleFactory->STOREMANAGER, StoreAdminUserFactory_new());
    this->PRODUCTMANAGER = UserRoleB_new(this->basicUserRoleFactory->PRODUCTMANAGER, ProductStoreAdminUserFactory_new());
    this->CUSTOMERMANAGER = UserRoleB_new(this->basicUserRoleFactory->CUSTOMERMANAGER, CustomerStoreAdminUserFactory_new());
    this->PAYMENTMANAGER = UserRoleB_new(this->basicUserRoleFactory->PAYMENTMANAGER, PaymentStoreAdminUserFactory_new());
    this->ORDERMANAGER = UserRoleB_new(this->basicUserRoleFactory->ORDERMANAGER, OrderStoreAdminUserFactory_new());
    this->WEBMANAGER = UserRoleB_new(this->basicUserRoleFactory->WEBMANAGER, WebStoreAdminUserFactory_new());
    this->REVIEWER = UserRoleB_new(this->basicUserRoleFactory->REVIEWER, ReviewOrderStoreAdminUserFactory_new());
    this->SHIPPING = UserRoleB_new(this->basicUserRoleFactory->SHIPPING, ShipOrderStoreAdminUserFactory_new());
    this->ADJUSTER = UserRoleB_new(this->basicUserRoleFactory->ADJUSTER, AdjustOrderStoreAdminUserFactory_new());
    this->WORKFLOWEDITOR = UserRoleB_new(this->basicUserRoleFactory->WORKFLOWEDITOR, WorkflowEditorWebStoreAdminUserFactory_new());
    this->WIZARD = UserRoleB_new(this->basicUserRoleFactory->WIZARD, WizardWebStoreAdminUserFactory_new());
    this->VIEWEDITOR = UserRoleB_new(this->basicUserRoleFactory->VIEWEDITOR, ViewEditorWebStoreAdminUserFactory_new());
}

void UserRoleFactory_init(UserRoleFactory* this) {
    UserRoleFactory_initFields(this);
}

UserRoleFactory* UserRoleFactory_new(void) {
    UserRoleFactory* this = calloc(1, sizeof(UserRoleFactory));
    UserRoleFactory_init(this);
    return this;
}


UserRoleFactory* UserRoleFactory_getInstance(void) {
        return UserRoleFactory_instance;
}

