// Generated Code Do Not Modify
#include "org/allbinary/business/user/role/AdminRoleFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"


static AdminRoleFactory* AdminRoleFactory_instance;














void AdminRoleFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AdminRoleFactory_instance = AdminRoleFactory_new();
}

void AdminRoleFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdminRoleFactory", nullptr);
    java_register_method("AdminRoleFactory", "getProductManagementRoles", (void*) AdminRoleFactory_getProductManagementRoles);
    java_register_method("AdminRoleFactory", "getAdminRoles", (void*) AdminRoleFactory_getAdminRoles);
    java_register_method("AdminRoleFactory", "getStoreAdminRoles", (void*) AdminRoleFactory_getStoreAdminRoles);
    java_register_method("AdminRoleFactory", "getStoreManagementRoles", (void*) AdminRoleFactory_getStoreManagementRoles);
    java_register_method("AdminRoleFactory", "getReviewManagementRoles", (void*) AdminRoleFactory_getReviewManagementRoles);
    java_register_method("AdminRoleFactory", "getCustomerManagementRoles", (void*) AdminRoleFactory_getCustomerManagementRoles);
    java_register_method("AdminRoleFactory", "getWorkflowManagementRoles", (void*) AdminRoleFactory_getWorkflowManagementRoles);
    java_register_method("AdminRoleFactory", "getWebManagementRoles", (void*) AdminRoleFactory_getWebManagementRoles);
    java_register_method("AdminRoleFactory", "getShippingManagementRoles", (void*) AdminRoleFactory_getShippingManagementRoles);
    java_register_method("AdminRoleFactory", "getAdjusterManagementRoles", (void*) AdminRoleFactory_getAdjusterManagementRoles);
    java_register_method("AdminRoleFactory", "getOrderManagementRoles", (void*) AdminRoleFactory_getOrderManagementRoles);
}

static void AdminRoleFactory_initFields(AdminRoleFactory* this) {
    this->adminRoles = BasicArrayListD_new();
    this->storeAdminRoles = BasicArrayListD_new();
    this->storeManagementRoles = BasicArrayListD_new();
    this->productManagementRoles = BasicArrayListD_new();
    this->reviewManagementRoles = BasicArrayListD_new();
    this->customerManagementRoles = BasicArrayListD_new();
    this->workflowManagementRoles = BasicArrayListD_new();
    this->orderManagementRoles = BasicArrayListD_new();
    this->adjusterManagementRoles = BasicArrayListD_new();
    this->shippingManagementRoles = BasicArrayListD_new();
    this->webManagementRoles = BasicArrayListD_new();
}


AdminRoleFactory* AdminRoleFactory_getInstance(void) {
        return (AdminRoleFactory_staticInit(), AdminRoleFactory_instance);
}


void AdminRoleFactory_init(AdminRoleFactory* this) {
    AdminRoleFactory_register();
    AdminRoleFactory_initFields(this);
        BasicUserRoleFactory* basicUserRoleFactory = BasicUserRoleFactory_getInstance();
        BasicArrayList_add(this->adminRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->storeAdminRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->storeAdminRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->CUSTOMERMANAGER);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->ADJUSTER);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->PRODUCTMANAGER);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->REVIEWER);
        BasicArrayList_add(this->storeManagementRoles, basicUserRoleFactory->SHIPPING);
        BasicArrayList_add(this->productManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->productManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->productManagementRoles, basicUserRoleFactory->PRODUCTMANAGER);
        BasicArrayList_add(this->reviewManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->reviewManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->reviewManagementRoles, basicUserRoleFactory->REVIEWER);
        BasicArrayList_add(this->customerManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->customerManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->customerManagementRoles, basicUserRoleFactory->CUSTOMERMANAGER);
        BasicArrayList_add(this->workflowManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->workflowManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->workflowManagementRoles, basicUserRoleFactory->WORKFLOWEDITOR);
        BasicArrayList_add(this->orderManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->orderManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->adjusterManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->adjusterManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->adjusterManagementRoles, basicUserRoleFactory->ADJUSTER);
        BasicArrayList_add(this->shippingManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->shippingManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->shippingManagementRoles, basicUserRoleFactory->SHIPPING);
        BasicArrayList_add(this->webManagementRoles, basicUserRoleFactory->ADMINISTRATOR);
        BasicArrayList_add(this->webManagementRoles, basicUserRoleFactory->STOREMANAGER);
        BasicArrayList_add(this->webManagementRoles, basicUserRoleFactory->WEBMANAGER);
        BasicArrayList_add(this->webManagementRoles, basicUserRoleFactory->WORKFLOWEDITOR);
        BasicArrayList_add(this->webManagementRoles, basicUserRoleFactory->VIEWEDITOR);
}

AdminRoleFactory* AdminRoleFactory_new(void) {
    AdminRoleFactory* this = java_object_alloc(sizeof(AdminRoleFactory), "AdminRoleFactory");
    AdminRoleFactory_init(this);
    return this;
}


BasicArrayList* AdminRoleFactory_getProductManagementRoles(AdminRoleFactory* this) {
        return this->productManagementRoles;
}


BasicArrayList* AdminRoleFactory_getAdminRoles(AdminRoleFactory* this) {
        return this->adminRoles;
}


BasicArrayList* AdminRoleFactory_getStoreAdminRoles(AdminRoleFactory* this) {
        return this->storeAdminRoles;
}


BasicArrayList* AdminRoleFactory_getStoreManagementRoles(AdminRoleFactory* this) {
        return this->storeManagementRoles;
}


BasicArrayList* AdminRoleFactory_getReviewManagementRoles(AdminRoleFactory* this) {
        return this->reviewManagementRoles;
}


BasicArrayList* AdminRoleFactory_getCustomerManagementRoles(AdminRoleFactory* this) {
        return this->customerManagementRoles;
}


BasicArrayList* AdminRoleFactory_getWorkflowManagementRoles(AdminRoleFactory* this) {
        return this->workflowManagementRoles;
}


BasicArrayList* AdminRoleFactory_getWebManagementRoles(AdminRoleFactory* this) {
        return this->webManagementRoles;
}


BasicArrayList* AdminRoleFactory_getShippingManagementRoles(AdminRoleFactory* this) {
        return this->shippingManagementRoles;
}


BasicArrayList* AdminRoleFactory_getAdjusterManagementRoles(AdminRoleFactory* this) {
        return this->adjusterManagementRoles;
}


BasicArrayList* AdminRoleFactory_getOrderManagementRoles(AdminRoleFactory* this) {
        return this->orderManagementRoles;
}

