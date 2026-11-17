// Generated Code Do Not Modify
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/BasicUserRoles.h"





static int32_t BasicUserRole_getRoleId(BasicUserRole* this);






void BasicUserRole_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicUserRole_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicUserRole", nullptr);
    java_register_method("BasicUserRole", "getRoleId", (void*) BasicUserRole_getRoleId);
    java_register_method("BasicUserRole", "getRole", (void*) BasicUserRole_getRole);
    java_register_method("BasicUserRole", "getSessionTimeout", (void*) BasicUserRole_getSessionTimeout);
    java_register_method("BasicUserRole", "getSessionInactivityTimeout", (void*) BasicUserRole_getSessionInactivityTimeout);
    java_register_method("BasicUserRole", "equals", (void*) BasicUserRole_equals);
    java_register_method("BasicUserRole", "toString", (void*) BasicUserRole_toString);
}

static void BasicUserRole_initFields(BasicUserRole* this) {
    
    
    
    
    
}


void BasicUserRole_init(BasicUserRole* this, const char* aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout) {
    BasicUserRole_register();
        BasicUserRole_init5(this, aRole, aRole, a_int_RoleId, aSessionTimeout, aSessionInactivityTimeout);
}

BasicUserRole* BasicUserRole_new(const char* aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout) {
    BasicUserRole* this = java_object_alloc(sizeof(BasicUserRole), "BasicUserRole");
    BasicUserRole_init(this, aRole, a_int_RoleId, aSessionTimeout, aSessionInactivityTimeout);
    return this;
}


void BasicUserRole_init5(BasicUserRole* this, const char* aRole, const char* aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout) {
    BasicUserRole_register();
    BasicUserRole_initFields(this);
        this->m_int_RoleId = a_int_RoleId;
        this->role = aRole;
        this->displayValue = aDisplayValue;
        this->sessionTimeout = aSessionTimeout;
        this->sessionInactivityTimeout = aSessionInactivityTimeout;
        BasicArrayList_add(BasicUserRoles_getInstance()->roleVector, this);
}

BasicUserRole* BasicUserRole_new5(const char* aRole, const char* aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout) {
    BasicUserRole* this = java_object_alloc(sizeof(BasicUserRole), "BasicUserRole");
    BasicUserRole_init5(this, aRole, aDisplayValue, a_int_RoleId, aSessionTimeout, aSessionInactivityTimeout);
    return this;
}


static int32_t BasicUserRole_getRoleId(BasicUserRole* this) {
        return this->m_int_RoleId;
}


const char* BasicUserRole_getRole(BasicUserRole* this) {
        return this->role;
}


int64_t BasicUserRole_getSessionTimeout(BasicUserRole* this) {
        return this->sessionTimeout;
}


int64_t BasicUserRole_getSessionInactivityTimeout(BasicUserRole* this) {
        return this->sessionInactivityTimeout;
}


bool BasicUserRole_equals(BasicUserRole* this, BasicUserRole* basicUserRole) {
        if (BasicUserRole_getRoleId(this) == BasicUserRole_getRoleId(basicUserRole)) {
            return true;
        }
        return false;
}


const char* BasicUserRole_toString(BasicUserRole* this) {
        return BasicUserRole_getRole(this);
}

