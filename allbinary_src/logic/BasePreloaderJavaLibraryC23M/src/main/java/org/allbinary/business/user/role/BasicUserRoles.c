// Generated Code Do Not Modify
#include "org/allbinary/business/user/role/BasicUserRoles.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"


static BasicUserRoles* BasicUserRoles_instance;




void BasicUserRoles_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicUserRoles_instance = BasicUserRoles_new();
}

void BasicUserRoles_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicUserRoles", nullptr);
    java_register_method("BasicUserRoles", "getRole", (void*) BasicUserRoles_getRole);
    java_register_method("BasicUserRoles", "getAll", (void*) BasicUserRoles_getAll);
}

static void BasicUserRoles_initFields(BasicUserRoles* this) {
    this->roleVector = BasicArrayListD_new();
}

void BasicUserRoles_init(BasicUserRoles* this) {
    BasicUserRoles_register();
    BasicUserRoles_initFields(this);
}

BasicUserRoles* BasicUserRoles_new(void) {
    BasicUserRoles* this = java_object_alloc(sizeof(BasicUserRoles), "BasicUserRoles");
    BasicUserRoles_init(this);
    return this;
}


BasicUserRoles* BasicUserRoles_getInstance(void) {
        return (BasicUserRoles_staticInit(), BasicUserRoles_instance);
}


// throws Exception
BasicUserRole* BasicUserRoles_getRole(BasicUserRoles* this, const char* role) {
        BasicArrayList* roleVector = BasicUserRoles_getAll(this);
        int32_t size = BasicArrayList_size(roleVector);
        for (int32_t index = 0; index < size; index++) {
            BasicUserRole* userRole = ((BasicUserRole*) BasicArrayList_get(roleVector, index));
            if (strcmp(role, java_string_of(userRole)) == 0) {
                return userRole;
            }
        }
        java_throw(java_exception_new("Exception", "Unable to get role - Unknown Role"));
}


BasicArrayList* BasicUserRoles_getAll(BasicUserRoles* this) {
        return this->roleVector;
}

