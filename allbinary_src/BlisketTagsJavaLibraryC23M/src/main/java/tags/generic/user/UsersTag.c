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
// package tags.generic.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct UsersTag UsersTag;
struct UsersTag {
    StoreValidationTransformTag base;
    const char* role;
};


UsersTag* UsersTag_new(void);

void UsersTag_init(UsersTag* this);
void UsersTag_setRole(UsersTag* this, const char* value);
int32_t UsersTag_doStartTag(UsersTag* this);

static void UsersTag_initFields(UsersTag* this) {
    this->role = nullptr;
}


void UsersTag_init(UsersTag* this) {
    StoreValidationTransformTag_init(&this->base);
    UsersTag_initFields(this);
}

UsersTag* UsersTag_new(void) {
    UsersTag* this = calloc(1, sizeof(UsersTag));
    UsersTag_init(this);
    return this;
}


void UsersTag_setRole(UsersTag* this, const char* value) {
        this->role = value;
}


// throws JspTagException
int32_t UsersTag_doStartTag(UsersTag* this) {
        JAVA_TRY {
            UsersTag_setName(this, "Generic Users View");
            UsersTag_setObjectFile(this, "views.generic.user.UsersValidationView");
            if (UsersTag_getCommand(this) != nullptr) {
                JAVA_CALL(UsersTag_getPropertiesHashMap(this), put, UserRoleData_NAME, this->role);
                if (JAVA_CALL(UsersTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(UsersTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

