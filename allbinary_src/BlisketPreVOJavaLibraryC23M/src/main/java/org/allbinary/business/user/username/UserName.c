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
// package org.allbinary.business.user.username

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct UserName UserName;
struct UserName {
    LogUtil* logUtil;
    const char* userName;
};

static UserName* UserName_instance;

UserName* UserName_new(void);
UserName* UserName_getInstance(void);

void UserName_init(UserName* this);

UserName* UserName_new1(HashMap* hashMap);
void UserName_init1(UserName* this, HashMap* hashMap);
bool UserName_isValid(UserName* this);
const char* UserName_get(UserName* this);
bool UserName_isValid(UserName* this, const char* aUserName);
const char* UserName_getValidationInfo(const char* aUserName);

// Static fields with runtime initializers: call this once at startup
void UserName_staticInit(void) {
    UserName_instance = UserName_new();
}

static void UserName_initFields(UserName* this) {
    this->logUtil = LogUtil_getInstance();
    
}


UserName* UserName_getInstance(void) {
        return UserName_instance;
}


void UserName_init(UserName* this) {
    UserName_initFields(this);
}

UserName* UserName_new(void) {
    UserName* this = calloc(1, sizeof(UserName));
    UserName_init(this);
    return this;
}


void UserName_init1(UserName* this, HashMap* hashMap) {
    UserName_initFields(this);
        this->userName = ((const char*) HashMap_get(hashMap, UserData_USERNAME));
}

UserName* UserName_new1(HashMap* hashMap) {
    UserName* this = calloc(1, sizeof(UserName));
    UserName_init1(this, hashMap);
    return this;
}


bool UserName_isValid(UserName* this) {
        JAVA_TRY {
            return UserName_isValid(this, this->userName);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, "isUserNameValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* UserName_get(UserName* this) {
        return this->userName;
}


// Java overloaded method: C needs a different name
bool UserName_isValid(UserName* this, const char* aUserName) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            BooleanFactory* booleanFactory = BooleanFactory_getInstance();
            bool valid = booleanFactory->TRUE;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VALIDATION)) {
                LogUtil_putF(this->logUtil, java_concat("UserName: ", aUserName), this, commonStrings->IS_VALID);
            }
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), aUserName, 5, UserData_MAXLEN)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VALIDATION)) {
                    LogUtil_putF(this->logUtil, "UserName is invalid", this, commonStrings->IS_VALID);
                }
                valid = booleanFactory->FALSE;
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* UserName_getValidationInfo(const char* aUserName) {
        if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), aUserName, 5, UserData_MAXLEN)) {
            return "Please enter a User Name with more than 5 characters.<br/>";
        }
        return StringUtil_getInstance()->EMPTY_STRING;
}

