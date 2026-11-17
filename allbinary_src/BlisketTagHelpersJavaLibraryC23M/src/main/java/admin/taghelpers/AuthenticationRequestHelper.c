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
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/password/Password.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/data/tables/user/UserEntityInterface.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/email/NewPasswordEmail.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct AuthenticationRequestHelper AuthenticationRequestHelper;
struct AuthenticationRequestHelper {
    TagHelper base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    WeblisketSession* weblisketSession;
    HttpServletRequest* request;
};


AuthenticationRequestHelper* AuthenticationRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void AuthenticationRequestHelper_init(AuthenticationRequestHelper* this, HashMap* hashMap, PageContext* pageContext);

AuthenticationRequestHelper* AuthenticationRequestHelper_new2(HashMap* hashMap, HttpServletRequest* httpServletRequest);
void AuthenticationRequestHelper_init2(AuthenticationRequestHelper* this, HashMap* hashMap, HttpServletRequest* httpServletRequest);
static const char* AuthenticationRequestHelper_generateNewPassword(AuthenticationRequestHelper* this);
bool AuthenticationRequestHelper_newPassword(AuthenticationRequestHelper* this);
bool AuthenticationRequestHelper_changePassword(AuthenticationRequestHelper* this);
bool AuthenticationRequestHelper_isRoleValid(AuthenticationRequestHelper* this, const char* userName, const char* password, BasicArrayList* roles);

static void AuthenticationRequestHelper_initFields(AuthenticationRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    
}


void AuthenticationRequestHelper_init(AuthenticationRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    AuthenticationRequestHelper_initFields(this);
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
}

AuthenticationRequestHelper* AuthenticationRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    AuthenticationRequestHelper* this = calloc(1, sizeof(AuthenticationRequestHelper));
    AuthenticationRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void AuthenticationRequestHelper_init2(AuthenticationRequestHelper* this, HashMap* hashMap, HttpServletRequest* httpServletRequest) {
    TagHelper_init(&this->base);
    AuthenticationRequestHelper_initFields(this);
        this->weblisketSession = WeblisketSession_new(hashMap, httpServletRequest);
        this->request = httpServletRequest;
}

AuthenticationRequestHelper* AuthenticationRequestHelper_new2(HashMap* hashMap, HttpServletRequest* httpServletRequest) {
    AuthenticationRequestHelper* this = calloc(1, sizeof(AuthenticationRequestHelper));
    AuthenticationRequestHelper_init2(this, hashMap, httpServletRequest);
    return this;
}


// throws Exception
static const char* AuthenticationRequestHelper_generateNewPassword(AuthenticationRequestHelper* this) {
        if (this->weblisketSession != nullptr && WeblisketSession_getId(this->weblisketSession) != nullptr) {
            int32_t startIndex = JAVA_CALL(WeblisketSession_getId(this->weblisketSession), length);
            if (startIndex >= 8) {
                return JAVA_CALL(WeblisketSession_getId(this->weblisketSession), substring, startIndex - 8);
            } else {
                java_throw(java_exception_new("Exception", "Error Generating New Password"));
            }
        } else {
            java_throw(java_exception_new("Exception", "No Session Available For Generating New Password"));
        }
}


bool AuthenticationRequestHelper_newPassword(AuthenticationRequestHelper* this) {
        JAVA_TRY {
            const char* userName = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
            const char* email = HttpServletRequest_getParameter(this->request, UserData_MAINEMAIL);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, java_concat("Generating New Password For: ", userName), this, "newPassword()");
            }
            UserEntityInterface* userEntityInterface = UserEntityFactory_getInstance();
            UserInterface* userInterface = UserEntityInterface_getUser(userEntityInterface, userName);
            if (JAVA_CALL(UserInterface_getMainEmail(userInterface), compareTo, email) != 0) {
                if (UserInterface_getSecondaryEmail(userInterface) != nullptr && JAVA_CALL(UserInterface_getSecondaryEmail(userInterface), compareTo, email) != 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                        LogUtil_putF(this->logUtil, "Requested Email Is Not In User Profile", this, "newPassword()");
                    }
                    return false;
                }
            }
            const char* newPassword = AuthenticationRequestHelper_generateNewPassword(this);
            UserInterface_setPassword(userInterface, newPassword);
            HashMap* newPasswordHashMap = UserInterface_toPasswordHashMap(userInterface);
            UserEntityFactory_update(UserEntityFactory_getInstance(), userName, newPasswordHashMap);
            NewPasswordEmail_process(NewPasswordEmail_new(this->abeClientInformation, userInterface, newPassword));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, java_concat("Generated New Password For: ", userName), this, "newPassword()");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "newPassword()", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool AuthenticationRequestHelper_changePassword(AuthenticationRequestHelper* this) {
        JAVA_TRY {
            const char* userName = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
            const char* passwordString = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEPASSWORD);
            const char* newPassword = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLENEWPASSWORD);
            const char* newReenteredPassword = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEREENTERNEWPASSWORD);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, java_concat("Changing Password For User: ", userName), this, "changePassword()");
            }
            Password* password = Password_new(newPassword);
            if (!JAVA_CALL(Password_isValid(password), booleanValue)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    LogUtil_putF(this->logUtil, "New Password Is Not Valid", this, "changePassword()");
                }
                return false;
            }
            if (strcmp(newPassword, newReenteredPassword) != 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    LogUtil_putF(this->logUtil, "New Password Fields Do Not Match", this, "changePassword()");
                }
                return false;
            }
            const char* sessionPassword = WeblisketSession_getPassword(this->weblisketSession);
            UserEntityInterface* userEntityInterface = UserEntityFactory_getInstance();
            UserInterface* userInterface = UserEntityInterface_getUser(userEntityInterface, userName);
            const char* login = UserEntityInterface_login(userEntityInterface, userName, passwordString);
            if (strcmp(login, TagHelper_GLOBALS2->LOGINSUCCESS) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    LogUtil_putF(this->logUtil, "Authentication Successful", this, "changePassword()");
                }
                HashMap* newPasswordHashMap = Password_toHashMap(password, nullptr);
                UserEntityFactory_update(UserEntityFactory_getInstance(), userName, newPasswordHashMap);
                NewPasswordEmail_process(NewPasswordEmail_new(this->abeClientInformation, userInterface, newPassword));
                return true;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, "Authentication Failed", this, "changePassword()");
            }
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, "Authentication Failed", this, "changePassword()", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool AuthenticationRequestHelper_isRoleValid(AuthenticationRequestHelper* this, const char* userName, const char* password, BasicArrayList* roles) {
        JAVA_TRY {
            UserEntityInterface* userEntityInterface = UserEntityFactory_getInstance();
            UserInterface* userInterface = UserEntityInterface_getUser(userEntityInterface, userName);
            if (UserInterface_getRole(userInterface) == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Role is null: ", java_string_of(UserInterface_getRole(userInterface))), " Valid Roles: "), BasicArrayList_toString(roles)), this, "isRoleValid()");
                }
                return false;
            }
            Any** basicUserRoleArray = BasicArrayList_toArray(roles);
            int32_t size = java_array_length(basicUserRoleArray);
            for (int32_t index = 0; index < size; index++) {
                BasicUserRole* nextRole = ((BasicUserRole*) basicUserRoleArray[index]);
                if (JAVA_CALL(JAVA_CALL(UserInterface_getRole(userInterface), getBasicUserRole), equals, nextRole)) {
                    UserInterface_validateSession(userInterface, ((WeblisketSessionInterface*) this->weblisketSession));
                    HttpServletRequest_removeAttribute(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
                    HttpServletRequest_removeAttribute(this->request, WeblisketSessionData_REMOVABLEPASSWORD);
                    return true;
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Role is not valid: ");
                StringMaker_append(stringBuffer, JAVA_CALL(UserInterface_getRole(userInterface), toString));
                StringMaker_append(stringBuffer, " Valid Roles: ");
                StringMaker_append(stringBuffer, BasicArrayList_toString(roles));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "isRoleValid()");
            }
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isRoleValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}

