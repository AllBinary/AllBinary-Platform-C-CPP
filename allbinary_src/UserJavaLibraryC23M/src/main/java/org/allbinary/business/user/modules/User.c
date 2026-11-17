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
// package org.allbinary.business.user.modules

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationDomDocumentMapping.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterfaceFactory.h"
#include "org/allbinary/business/user/password/Password.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/UserRoleB.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/business/user/username/UserName.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct User User;
struct User {
    UserInterface UserInterface_interface;
    LogUtil* logUtil;
    const char* userName;
    const char* prefixName;
    const char* firstName;
    const char* lastName;
    const char* middleName;
    const char* suffixName;
    const char* company;
    const char* positionAtCompany;
    const char* mainEmail;
    const char* secondaryEmail;
    const char* homePhone;
    const char* cellPhone;
    const char* workPhone;
    const char* otherContact;
    const char* electronicDevice;
    const char* fax;
    UserRole* role;
    const char* encryption;
    const char* secret;
    Password* password;
    const char* enable;
    const char* permissions;
    UserConfigurationInterface* userConfigurationInterface;
};


User* User_new(void);

void User_init(User* this);

User* User_new1(HttpServletRequest* request);
void User_init1(User* this, HttpServletRequest* request);

User* User_new1(HashMap* userHashMap);
void User_init1(User* this, HashMap* userHashMap);
void User_getFormData(User* this, HashMap* userHashMap);
bool User_isValid(User* this);
const char* User_validationInfo(User* this);
void User_setUserName(User* this, const char* value);
void User_setPrefixName(User* this, const char* value);
void User_setFirstName(User* this, const char* value);
void User_setLastName(User* this, const char* value);
void User_setMiddleName(User* this, const char* value);
void User_setSuffixName(User* this, const char* value);
void User_setCompany(User* this, const char* value);
void User_setPositionAtCompany(User* this, const char* value);
void User_setMainEmail(User* this, const char* value);
void User_setSecondaryEmail(User* this, const char* value);
void User_setHomePhone(User* this, const char* value);
void User_setCellPhone(User* this, const char* value);
void User_setWorkPhone(User* this, const char* value);
void User_setOtherContact(User* this, const char* value);
void User_setElectronicContact(User* this, const char* value);
void User_setFax(User* this, const char* value);
void User_setRole(User* this, UserRole* role);
void User_setPermissions(User* this, const char* value);
void User_setEncryption(User* this, const char* value);
void User_setSecret(User* this, const char* value);
void User_setPassword(User* this, const char* value);
void User_enable(User* this);
void User_disable(User* this);
void User_setEnable(User* this, const char* enable);
const char* User_getUserName(User* this);
const char* User_getPrefixName(User* this);
const char* User_getFirstName(User* this);
const char* User_getLastName(User* this);
const char* User_getMiddleName(User* this);
const char* User_getSuffixName(User* this);
const char* User_getCompany(User* this);
const char* User_getPositionAtCompany(User* this);
const char* User_getMainEmail(User* this);
const char* User_getSecondaryEmail(User* this);
const char* User_getHomePhone(User* this);
const char* User_getCellPhone(User* this);
const char* User_getWorkPhone(User* this);
const char* User_getOtherContact(User* this);
const char* User_getElectronicContact(User* this);
const char* User_getFax(User* this);
UserRole* User_getRole(User* this);
const char* User_getPermissions(User* this);
const char* User_getEncryption(User* this);
const char* User_getSecret(User* this);
const char* User_getPassword(User* this);
BasicArrayList* User_toVector(User* this);
HashMap* User_toHashMap(User* this);
HashMap* User_toPasswordHashMap(User* this);
void User_validateSession(User* this, WeblisketSessionInterface* weblisketSession);
void User_updateSession(User* this, WeblisketSessionInterface* weblisketSession);
bool User_isSessionValid(User* this);
Any* User_getKey(User* this);
Document* User_toValidationInfoDoc(User* this);
Node* User_toValidationInfoNode(User* this, Document* document);
UserConfigurationInterface* User_getUserConfigurationInterface(User* this);
void User_setUserConfigurationInterface(User* this, UserConfigurationInterface* userConfigurationInterface);

static void User_initFields(User* this) {
    this->logUtil = LogUtil_getInstance();
    this->userName = nullptr;
    this->prefixName = nullptr;
    this->firstName = nullptr;
    this->lastName = nullptr;
    this->middleName = nullptr;
    this->suffixName = nullptr;
    this->company = nullptr;
    this->positionAtCompany = nullptr;
    this->mainEmail = nullptr;
    this->secondaryEmail = nullptr;
    this->homePhone = nullptr;
    this->cellPhone = nullptr;
    this->workPhone = nullptr;
    this->otherContact = nullptr;
    this->electronicDevice = nullptr;
    this->fax = nullptr;
    this->role = nullptr;
    this->encryption = nullptr;
    this->secret = nullptr;
    
    this->enable = nullptr;
    this->permissions = nullptr;
    
}


void User_init(User* this) {
    User_initFields(this);
        this->userConfigurationInterface = UserConfigurationInterfaceFactory_getInstance();
        this->password = Password_new(StringUtil_getInstance()->EMPTY_STRING);
}

User* User_new(void) {
    User* this = calloc(1, sizeof(User));
    User_init(this);
    return this;
}


void User_init1(User* this, HttpServletRequest* request) {
    User_initFields(this);
        User_getFormData(this, RequestParams_toHashMap(RequestParams_new(request)));
        this->userConfigurationInterface = UserConfigurationInterfaceFactory_getInstance(User_getRole(this));
}

User* User_new1(HttpServletRequest* request) {
    User* this = calloc(1, sizeof(User));
    User_init1(this, request);
    return this;
}


void User_init1(User* this, HashMap* userHashMap) {
    User_initFields(this);
        User_getFormData(this, userHashMap);
        this->userConfigurationInterface = UserConfigurationInterfaceFactory_getInstance(User_getRole(this));
}

User* User_new1(HashMap* userHashMap) {
    User* this = calloc(1, sizeof(User));
    User_init1(this, userHashMap);
    return this;
}


// throws Exception
void User_getFormData(User* this, HashMap* userHashMap) {
        this->userName = UserName_get(UserName_new(userHashMap));
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* passwordString = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_PASSWORD)));
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, this->userName) && StringValidationUtil_isEmpty(stringValidationUtil, passwordString)) {
            this->userName = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, WeblisketSessionData_REMOVABLEUSERNAME)));
            passwordString = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, WeblisketSessionData_REMOVABLEPASSWORD)));
        }
        const char* encryption = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, EntryData_getInstance()->ENCRYPTION)));
        const char* secret = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_SECRET)));
        this->password = Password_new(passwordString);
        this->prefixName = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_PREFIXNAME)));
        this->firstName = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_FIRSTNAME)));
        this->lastName = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_LASTNAME)));
        this->middleName = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_MIDDLENAME)));
        this->suffixName = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_SUFFIXNAME)));
        this->company = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_COMPANY)));
        this->positionAtCompany = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_POSITIONATCOMPANY)));
        this->mainEmail = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_MAINEMAIL)));
        this->secondaryEmail = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_SECONDARYEMAIL)));
        this->homePhone = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_HOMEPHONE)));
        this->cellPhone = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_CELLPHONE)));
        this->workPhone = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_WORKPHONE)));
        this->otherContact = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_OTHERCONTACT)));
        this->electronicDevice = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_ELECTRONICDEVICE)));
        this->fax = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_FAX)));
        this->role = UserRoleB_getRole(((const char*) HashMap_get(userHashMap, JAVA_CALL(UserRoleData_NAME, toString))));
        this->permissions = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, UserData_PERMISSIONS)));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, this->permissions) && strcmp(this->permissions, StoreFrontData_getInstance()->NAME) == 0) {
            this->permissions = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, StoreFrontData_getInstance()->NAME)));
        } else if (this->permissions == nullptr) {
            this->permissions = "No Permissions";
        }
        this->enable = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(userHashMap, EntryData_getInstance()->ENABLE)));
}


bool User_isValid(User* this) {
        JAVA_TRY {
            bool valid = true;
            if (!JAVA_CALL(UserName_isValid(UserName_getInstance(), this->userName), booleanValue)) {
                valid = false;
            }
            if (!JAVA_CALL(Password_isValid(this->password), booleanValue)) {
                valid = false;
            }
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->firstName, 1, UserData_MAXLEN)) {
                valid = false;
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->lastName, 1, UserData_MAXLEN)) {
                valid = false;
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->mainEmail, 1, UserData_MAXLEN) || java_string_indexOf(this->mainEmail, "@") == -1) {
                valid = false;
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VALIDATIONERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, "Failed to validate form", this, commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* User_validationInfo(User* this) {
        JAVA_TRY {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, UserName_getValidationInfo(this->userName));
            StringMaker_append(stringBuffer, Password_getValidationInfo(this->password));
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->firstName, 1, UserData_MAXLEN)) {
                StringMaker_append(stringBuffer, "Please enter a valid First Name.<br />");
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->lastName, 1, UserData_MAXLEN)) {
                StringMaker_append(stringBuffer, "Please enter a valid Last Name.<br />");
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->mainEmail, 1, UserData_MAXLEN) || java_string_indexOf(this->mainEmail, "@") == -1) {
                StringMaker_append(stringBuffer, "Please enter a valid email address.<br />");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


void User_setUserName(User* this, const char* value) {
        this->userName = value;
}


void User_setPrefixName(User* this, const char* value) {
        this->prefixName = value;
}


void User_setFirstName(User* this, const char* value) {
        this->firstName = value;
}


void User_setLastName(User* this, const char* value) {
        this->lastName = value;
}


void User_setMiddleName(User* this, const char* value) {
        this->middleName = value;
}


void User_setSuffixName(User* this, const char* value) {
        this->suffixName = value;
}


void User_setCompany(User* this, const char* value) {
        this->company = value;
}


void User_setPositionAtCompany(User* this, const char* value) {
        this->positionAtCompany = value;
}


void User_setMainEmail(User* this, const char* value) {
        this->mainEmail = value;
}


void User_setSecondaryEmail(User* this, const char* value) {
        this->secondaryEmail = value;
}


void User_setHomePhone(User* this, const char* value) {
        this->homePhone = value;
}


void User_setCellPhone(User* this, const char* value) {
        this->cellPhone = value;
}


void User_setWorkPhone(User* this, const char* value) {
        this->workPhone = value;
}


void User_setOtherContact(User* this, const char* value) {
        this->otherContact = value;
}


void User_setElectronicContact(User* this, const char* value) {
        this->electronicDevice = value;
}


void User_setFax(User* this, const char* value) {
        this->fax = value;
}


void User_setRole(User* this, UserRole* role) {
        this->role = role;
}


void User_setPermissions(User* this, const char* value) {
        this->permissions = value;
}


void User_setEncryption(User* this, const char* value) {
        this->encryption = value;
}


void User_setSecret(User* this, const char* value) {
        this->secret = value;
}


void User_setPassword(User* this, const char* value) {
        Password_set(this->password, value);
}


void User_enable(User* this) {
        User_setEnable(this, "Yes");
}


void User_disable(User* this) {
        User_setEnable(this, "No");
}


void User_setEnable(User* this, const char* enable) {
        this->enable = enable;
}


const char* User_getUserName(User* this) {
        return this->userName;
}


const char* User_getPrefixName(User* this) {
        return this->prefixName;
}


const char* User_getFirstName(User* this) {
        return this->firstName;
}


const char* User_getLastName(User* this) {
        return this->lastName;
}


const char* User_getMiddleName(User* this) {
        return this->middleName;
}


const char* User_getSuffixName(User* this) {
        return this->suffixName;
}


const char* User_getCompany(User* this) {
        return this->company;
}


const char* User_getPositionAtCompany(User* this) {
        return this->positionAtCompany;
}


const char* User_getMainEmail(User* this) {
        return this->mainEmail;
}


const char* User_getSecondaryEmail(User* this) {
        return this->secondaryEmail;
}


const char* User_getHomePhone(User* this) {
        return this->homePhone;
}


const char* User_getCellPhone(User* this) {
        return this->cellPhone;
}


const char* User_getWorkPhone(User* this) {
        return this->workPhone;
}


const char* User_getOtherContact(User* this) {
        return this->otherContact;
}


const char* User_getElectronicContact(User* this) {
        return this->electronicDevice;
}


const char* User_getFax(User* this) {
        return this->fax;
}


UserRole* User_getRole(User* this) {
        return this->role;
}


const char* User_getPermissions(User* this) {
        return this->permissions;
}


const char* User_getEncryption(User* this) {
        return this->encryption;
}


const char* User_getSecret(User* this) {
        return this->secret;
}


const char* User_getPassword(User* this) {
        return Password_get(this->password);
}


// throws Exception
BasicArrayList* User_toVector(User* this) {
        BasicArrayList* values = BasicArrayListD_new();
        BasicArrayList_add(values, this->userName);
        BasicArrayList_add(values, this->prefixName);
        BasicArrayList_add(values, this->firstName);
        BasicArrayList_add(values, this->lastName);
        BasicArrayList_add(values, this->middleName);
        BasicArrayList_add(values, this->suffixName);
        BasicArrayList_add(values, this->company);
        BasicArrayList_add(values, this->positionAtCompany);
        BasicArrayList_add(values, this->mainEmail);
        BasicArrayList_add(values, this->secondaryEmail);
        BasicArrayList_add(values, this->homePhone);
        BasicArrayList_add(values, this->cellPhone);
        BasicArrayList_add(values, this->workPhone);
        BasicArrayList_add(values, this->otherContact);
        BasicArrayList_add(values, this->electronicDevice);
        BasicArrayList_add(values, this->fax);
        BasicArrayList_add(values, JAVA_CALL(User_getRole(this), toString));
        UserConfigurationDomDocumentMapping* userConfigurationDomDocumentMapping = UserConfigurationDomDocumentMapping_new(User_getUserConfigurationInterface(this));
        BasicArrayList_add(values, UserConfigurationDomDocumentMapping_toDomDocumentString(userConfigurationDomDocumentMapping));
        BasicArrayList_add(values, this->permissions);
        BasicArrayList_addAllList(values, Password_toVector(this->password, this->secret));
        BasicArrayList_add(values, this->enable);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_add(values, time);
        BasicArrayList_add(values, time);
        return values;
}


// throws Exception
HashMap* User_toHashMap(User* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList_put(values, UserData_USERNAME, this->userName);
        BasicArrayList_put(values, UserData_PREFIXNAME, this->prefixName);
        BasicArrayList_put(values, UserData_FIRSTNAME, this->firstName);
        BasicArrayList_put(values, UserData_LASTNAME, this->lastName);
        BasicArrayList_put(values, UserData_MIDDLENAME, this->middleName);
        BasicArrayList_put(values, UserData_SUFFIXNAME, this->suffixName);
        BasicArrayList_put(values, UserData_COMPANY, this->company);
        BasicArrayList_put(values, UserData_POSITIONATCOMPANY, this->positionAtCompany);
        BasicArrayList_put(values, UserData_MAINEMAIL, this->mainEmail);
        BasicArrayList_put(values, UserData_SECONDARYEMAIL, this->secondaryEmail);
        BasicArrayList_put(values, UserData_HOMEPHONE, this->homePhone);
        BasicArrayList_put(values, UserData_CELLPHONE, this->cellPhone);
        BasicArrayList_put(values, UserData_WORKPHONE, this->workPhone);
        BasicArrayList_put(values, UserData_OTHERCONTACT, this->otherContact);
        BasicArrayList_put(values, UserData_ELECTRONICDEVICE, this->electronicDevice);
        BasicArrayList_put(values, UserData_FAX, this->fax);
        if (User_getRole(this) != nullptr) {
            BasicArrayList_put(values, JAVA_CALL(UserRoleData_NAME, toString), JAVA_CALL(User_getRole(this), toString));
        }
        UserConfigurationDomDocumentMapping* userConfigurationDomDocumentMapping = UserConfigurationDomDocumentMapping_new(User_getUserConfigurationInterface(this));
        BasicArrayList_put(values, UserData_CONFIGURATION, UserConfigurationDomDocumentMapping_toDomDocumentString(userConfigurationDomDocumentMapping));
        BasicArrayList_put(values, UserData_PERMISSIONS, this->permissions);
        BasicArrayList_putAll(values, Password_toHashMap(this->password, this->secret));
        BasicArrayList_put(values, EntryData_getInstance()->ENABLE, this->enable);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


HashMap* User_toPasswordHashMap(User* this) {
        return Password_toHashMap(this->password, this->secret);
}


void User_validateSession(User* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setAuthenticated(weblisketSession);
        WeblisketSessionInterface_setRole(weblisketSession, User_getRole(this));
        WeblisketSessionInterface_setUserName(weblisketSession, User_getUserName(this));
}


void User_updateSession(User* this, WeblisketSessionInterface* weblisketSession) {
}


bool User_isSessionValid(User* this) {
        return true;
}


// throws Exception
Any* User_getKey(User* this) {
        return ((Any*) this->userName);
}


Document* User_toValidationInfoDoc(User* this) {
        return nullptr;
}


Node* User_toValidationInfoNode(User* this, Document* document) {
        return nullptr;
}


UserConfigurationInterface* User_getUserConfigurationInterface(User* this) {
        return this->userConfigurationInterface;
}


void User_setUserConfigurationInterface(User* this, UserConfigurationInterface* userConfigurationInterface) {
        this->userConfigurationInterface = userConfigurationInterface;
}

