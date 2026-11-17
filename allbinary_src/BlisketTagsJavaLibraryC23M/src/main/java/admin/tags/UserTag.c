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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/UserHelperFactory.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "admin/tags/TableTag.h"

typedef struct UserTag UserTag;
struct UserTag {
    TableTag base;
    const char* role;
    const char* enable;
};


UserTag* UserTag_new(void);

void UserTag_init(UserTag* this);
void UserTag_setRole(UserTag* this, const char* value);
void UserTag_setEnable(UserTag* this, const char* value);
int32_t UserTag_doStartTag(UserTag* this);

static void UserTag_initFields(UserTag* this) {
    this->role = nullptr;
    this->enable = nullptr;
}


void UserTag_init(UserTag* this) {
    TableTag_init(&this->base);
    UserTag_initFields(this);
        UserTag_setTagHelperFactory(this, UserHelperFactory_new());
        UserTag_setTagRequestHelperFactory(this, UserHelperFactory_new());
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


void UserTag_setEnable(UserTag* this, const char* value) {
        this->enable = value;
        JAVA_CALL(UserTag_getPropertiesHashMap(this), put, EntryData_getInstance()->ENABLE, this->enable);
}


// throws JspTagException
int32_t UserTag_doStartTag(UserTag* this) {
        JAVA_TRY {
            if (UserTag_isEnabled(this)) {
                return TableTag_doStartTag((&this->base));
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

