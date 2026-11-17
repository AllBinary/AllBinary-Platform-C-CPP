// Generated Code Do Not Modify
#include "org/allbinary/business/user/role/StoreRoleFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"


static StoreRoleFactory* StoreRoleFactory_instance;






void StoreRoleFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    StoreRoleFactory_instance = StoreRoleFactory_new();
}

void StoreRoleFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StoreRoleFactory", nullptr);
    java_register_method("StoreRoleFactory", "getRoles", (void*) StoreRoleFactory_getRoles);
    java_register_method("StoreRoleFactory", "getSubscriberRoles", (void*) StoreRoleFactory_getSubscriberRoles);
    java_register_method("StoreRoleFactory", "getWholesaleRoles", (void*) StoreRoleFactory_getWholesaleRoles);
}

static void StoreRoleFactory_initFields(StoreRoleFactory* this) {
    this->roles = BasicArrayListD_new();
    this->subscriberRoles = BasicArrayListD_new();
    this->wholesaleRoles = BasicArrayListD_new();
}


StoreRoleFactory* StoreRoleFactory_getInstance(void) {
        return (StoreRoleFactory_staticInit(), StoreRoleFactory_instance);
}


void StoreRoleFactory_init(StoreRoleFactory* this) {
    StoreRoleFactory_register();
    StoreRoleFactory_initFields(this);
        BasicUserRoleFactory* basicUserRoleFactory = BasicUserRoleFactory_getInstance();
        BasicArrayList_add(this->roles, basicUserRoleFactory->CUSTOMER);
        BasicArrayList_add(this->roles, basicUserRoleFactory->SUBSCRIBERCUSTOMER);
        BasicArrayList_add(this->roles, basicUserRoleFactory->WHOLESALECUSTOMER);
        BasicArrayList_add(this->subscriberRoles, basicUserRoleFactory->SUBSCRIBERCUSTOMER);
        BasicArrayList_add(this->wholesaleRoles, basicUserRoleFactory->WHOLESALECUSTOMER);
}

StoreRoleFactory* StoreRoleFactory_new(void) {
    StoreRoleFactory* this = java_object_alloc(sizeof(StoreRoleFactory), "StoreRoleFactory");
    StoreRoleFactory_init(this);
    return this;
}


BasicArrayList* StoreRoleFactory_getRoles(StoreRoleFactory* this) {
        return this->roles;
}


BasicArrayList* StoreRoleFactory_getSubscriberRoles(StoreRoleFactory* this) {
        return this->subscriberRoles;
}


BasicArrayList* StoreRoleFactory_getWholesaleRoles(StoreRoleFactory* this) {
        return this->wholesaleRoles;
}

