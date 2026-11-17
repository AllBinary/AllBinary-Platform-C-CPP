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
// package org.allbinary.business.user.password

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Random.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct Password Password;
struct Password {
    LogUtil* logUtil;
    const char* password;
};


Password* Password_new(const char* password);

void Password_init(Password* this, const char* password);
void Password_set(Password* this, const char* value);
const char* Password_get(Password* this);
bool Password_isValid(Password* this);
const char* Password_getValidationInfo(Password* this);
BasicArrayList* Password_toVector(Password* this, const char* secret);
HashMap* Password_toHashMap(Password* this, const char* secret);

static void Password_initFields(Password* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void Password_init(Password* this, const char* password) {
    Password_initFields(this);
        this->password = password;
}

Password* Password_new(const char* password) {
    Password* this = calloc(1, sizeof(Password));
    Password_init(this, password);
    return this;
}


void Password_set(Password* this, const char* value) {
        this->password = value;
}


const char* Password_get(Password* this) {
        return this->password;
}


bool Password_isValid(Password* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            bool valid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VALIDATION)) {
                LogUtil_putF(this->logUtil, java_concat("Password: ", this->password), this, commonStrings->IS_VALID);
            }
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), this->password, 6, UserData_MAXLEN)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VALIDATION)) {
                    LogUtil_putF(this->logUtil, "Password is invalid", this, commonStrings->IS_VALID);
                }
                valid = false;
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VALIDATIONERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", "Password", commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* Password_getValidationInfo(Password* this) {
        if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), this->password, 6, UserData_MAXLEN)) {
            return "Please enter a Password with more than 6 characters.<br />";
        }
        StringUtil* stringUtil = StringUtil_getInstance();
        return stringUtil->EMPTY_STRING;
}


BasicArrayList* Password_toVector(Password* this, const char* secret) {
        this->password = StringUtil_getNonNull(StringUtil_getInstance(), this->password);
        int32_t random = Random_nextInt(Random_new(), SuperCrypt_KEYMAX);
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, Integer_toString(random));
        BasicArrayList_add(vector, secret);
        BasicArrayList_add(vector, SuperCrypt_encrypt(SuperCrypt_new(random), this->password));
        return vector;
}


HashMap* Password_toHashMap(Password* this, const char* secret) {
        this->password = StringUtil_getNonNull(StringUtil_getInstance(), this->password);
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        int32_t random = Random_nextInt(Random_new(), SuperCrypt_KEYMAX);
        HashMap_put(values, EntryData_getInstance()->ENCRYPTION, Integer_toString(random));
        HashMap_put(values, UserData_SECRET, secret);
        HashMap_put(values, UserData_PASSWORD, SuperCrypt_encrypt(SuperCrypt_new(random), this->password));
        return values;
}

