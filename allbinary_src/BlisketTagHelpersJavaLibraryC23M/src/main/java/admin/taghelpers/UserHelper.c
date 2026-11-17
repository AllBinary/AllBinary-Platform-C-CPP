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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/business/user/NewUserFactory.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/username/UserName.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "admin/taghelpers/Table.h"

typedef struct UserHelper UserHelper;
struct UserHelper {
    Table base;
    LogUtil* logUtil;
    HashMap* hashMap;
    PageContext* pageContext;
    HttpServletRequest* request;
    const char* path;
    Portion* portion;
};


UserHelper* UserHelper_new(HashMap* hashMap, PageContext* pageContext);

void UserHelper_init(UserHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* UserHelper_delete(UserHelper* this);
const char* UserHelper_insert(UserHelper* this);
const char* UserHelper_update(UserHelper* this);
const char* UserHelper_drop(UserHelper* this);
const char* UserHelper_create(UserHelper* this);
const char* UserHelper_restore(UserHelper* this);
const char* UserHelper_backup(UserHelper* this);

static void UserHelper_initFields(UserHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
}


void UserHelper_init(UserHelper* this, HashMap* hashMap, PageContext* pageContext) {
    Table_init(&this->base);
    UserHelper_initFields(this);
        this->hashMap = hashMap;
        this->pageContext = pageContext;
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->path = JAVA_CALL(Table_URLGLOBALS, getMainPath) + JAVA_CALL(Table_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH;
        this->portion = Portion_new(hashMap);
}

UserHelper* UserHelper_new(HashMap* hashMap, PageContext* pageContext) {
    UserHelper* this = calloc(1, sizeof(UserHelper));
    UserHelper_init(this, hashMap, pageContext);
    return this;
}


const char* UserHelper_delete(UserHelper* this) {
        JAVA_TRY {
            HashMap* requestHashMap = RequestParams_toHashMap(RequestParams_new(this->request));
            UserName* userName = UserName_new(requestHashMap);
            UserEntityFactory_deleteWhere(UserEntityFactory_getInstance(), UserData_USERNAME, UserName_get(userName));
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Successfully Removed the user with ");
            StringMaker_append(stringBuffer, UserData_USERNAME);
            StringMaker_append(stringBuffer, "=");
            StringMaker_append(stringBuffer, UserName_get(userName));
            StringMaker_append(stringBuffer, " from to the user table");
            const char* success = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = java_concat(java_concat("Failed to remove user with ", java_string_of(UserData_USERNAME)), " from User table");
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws Exception
const char* UserHelper_insert(UserHelper* this) {
        JAVA_TRY {
            UserInterface* userInterface = NewUserFactory_getInstance(this->request, this->hashMap);
            const char* enable = ((const char*) HashMap_get(this->hashMap, EntryData_getInstance()->ENABLE));
            if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), enable)) {
                UserInterface_setEnable(userInterface, enable);
            }
            BasicArrayList* values = UserInterface_toVector(userInterface);
            UserEntityFactory_insert(UserEntityFactory_getInstance(), values);
            const char* success = "New User Successfully added to the Users Table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "add()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add User";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "add()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* UserHelper_update(UserHelper* this) {
        JAVA_TRY {
            UserInterface* user = NewUserFactory_getInstance(this->request, this->hashMap);
            HashMap* values = UserInterface_toHashMap(user);
            UserEntityFactory_update(UserEntityFactory_getInstance(), UserInterface_getUserName(user), values);
            const char* success = "New User Successfully added to the Users Table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add User";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* UserHelper_drop(UserHelper* this) {
        JAVA_TRY {
            const char* success = UserEntityFactory_dropTable(UserEntityFactory_getInstance());
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop user table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* UserHelper_create(UserHelper* this) {
        JAVA_TRY {
            const char* success = UserEntityFactory_createTable(UserEntityFactory_getInstance());
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, success, this, "create()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create user table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* UserHelper_restore(UserHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), UserEntityFactory_getInstance(), this->portion);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "restore()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to restore backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "restore()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* UserHelper_backup(UserHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), UserEntityFactory_getInstance());
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, success, this, "backup()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to make backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
            }
            return error;
        } JAVA_END_TRY;
}

