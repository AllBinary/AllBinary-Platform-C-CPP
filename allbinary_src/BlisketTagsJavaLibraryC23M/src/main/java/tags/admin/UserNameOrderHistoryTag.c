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
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct UserNameOrderHistoryTag UserNameOrderHistoryTag;
struct UserNameOrderHistoryTag {
    StoreValidationTransformTag base;
    const char* status;
};


UserNameOrderHistoryTag* UserNameOrderHistoryTag_new(void);

void UserNameOrderHistoryTag_init(UserNameOrderHistoryTag* this);
void UserNameOrderHistoryTag_setStatus(UserNameOrderHistoryTag* this, const char* value);
int32_t UserNameOrderHistoryTag_doStartTag(UserNameOrderHistoryTag* this);

static void UserNameOrderHistoryTag_initFields(UserNameOrderHistoryTag* this) {
    this->status = nullptr;
}


void UserNameOrderHistoryTag_init(UserNameOrderHistoryTag* this) {
        StoreValidationTransformTag_init(&this->base);
        UserNameOrderHistoryTag_initFields(this);
}

UserNameOrderHistoryTag* UserNameOrderHistoryTag_new(void) {
    UserNameOrderHistoryTag* this = calloc(1, sizeof(UserNameOrderHistoryTag));
    UserNameOrderHistoryTag_init(this);
    return this;
}


void UserNameOrderHistoryTag_setStatus(UserNameOrderHistoryTag* this, const char* value) {
        this->status = value;
}


// throws JspTagException
int32_t UserNameOrderHistoryTag_doStartTag(UserNameOrderHistoryTag* this) {
        JAVA_TRY {
            UserNameOrderHistoryTag_setName(this, "Range Order History View");
            UserNameOrderHistoryTag_setObjectFile(this, "views.admin.orderhistory.UserNameOrderHistoryView");
            if (UserNameOrderHistoryTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(UserNameOrderHistoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(UserNameOrderHistoryTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

