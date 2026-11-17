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
// package tags.admin

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
#include "org/allbinary/logic/communication/sql/SqlStrings.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct UserTag UserTag;
struct UserTag {
    StoreValidationTransformTag base;
    const char* role;
};


UserTag* UserTag_new(void);

void UserTag_init(UserTag* this);
void UserTag_setRole(UserTag* this, const char* value);
int32_t UserTag_doStartTag(UserTag* this);

static void UserTag_initFields(UserTag* this) {
    this->role = nullptr;
}


void UserTag_init(UserTag* this) {
    StoreValidationTransformTag_init(&this->base);
    UserTag_initFields(this);
}

UserTag* UserTag_new(void) {
    UserTag* this = calloc(1, sizeof(UserTag));
    UserTag_init(this);
    return this;
}


void UserTag_setRole(UserTag* this, const char* value) {
        this->role = value;
        JAVA_CALL(UserTag_getPropertiesHashMap(this), put, UserRoleData_NAME, this->role);
}


// throws JspTagException
int32_t UserTag_doStartTag(UserTag* this) {
        JAVA_TRY {
            if (UserTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(UserTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    UserTag_setName(this, "New User View");
                    UserTag_setObjectFile(this, "views.admin.user.NewUserView");
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0 || JAVA_CALL(UserTag_getCommand(this), compareTo, SqlStrings_getInstance()->INSERT_INTO) == 0) {
                    UserTag_setName(this, "Add Validation User View");
                    UserTag_setObjectFile(this, "views.admin.user.AddValidationUserView");
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    UserTag_setName(this, "Validation User View");
                    UserTag_setObjectFile(this, "views.admin.user.ViewValidationUserView");
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    UserTag_setName(this, "Validation User View");
                    UserTag_setObjectFile(this, "views.admin.user.EditValidationUserView");
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, this->commonStrings->UPDATE) == 0 || JAVA_CALL(UserTag_getCommand(this), compareTo, SqlStrings_getInstance()->UPDATE) == 0) {
                    UserTag_setName(this, "Update Validation User View");
                    UserTag_setObjectFile(this, "views.admin.user.UpdateValidationUserView");
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    UserTag_setName(this, "Delete Validation User View");
                    UserTag_setObjectFile(this, "views.admin.user.DeleteValidationUserView");
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->BACKUP) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->RESTORE) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, this->commonStrings->DROP) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(UserTag_getCommand(this), compareTo, this->commonStrings->CREATE) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(UserTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

