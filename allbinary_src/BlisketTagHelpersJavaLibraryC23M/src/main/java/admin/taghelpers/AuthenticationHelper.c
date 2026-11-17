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
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/UserRoleFactory.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/data/tables/user/UserEntityInterface.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/java/bool/BooleanUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct AuthenticationHelper AuthenticationHelper;
struct AuthenticationHelper {
    TagHelper base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    const char* authenticated;
    const char* sessionUserName;
    UserRole* role;
    const char* timeout;
    int32_t attemptsInteger;
};


AuthenticationHelper* AuthenticationHelper_new(HashMap* hashMap, PageContext* pageContext);

void AuthenticationHelper_init(AuthenticationHelper* this, HashMap* hashMap, PageContext* pageContext);

AuthenticationHelper* AuthenticationHelper_new2(HashMap* hashMap, HttpServletRequest* httpServletRequest);
void AuthenticationHelper_init2(AuthenticationHelper* this, HashMap* hashMap, HttpServletRequest* httpServletRequest);
static void AuthenticationHelper_getFormData(AuthenticationHelper* this);
int32_t AuthenticationHelper_invalidateSession(AuthenticationHelper* this);
bool AuthenticationHelper_isSessionOld(AuthenticationHelper* this);
static bool AuthenticationHelper_isRarelyUsedSession(AuthenticationHelper* this);
const char* AuthenticationHelper_validRole(AuthenticationHelper* this);
const char* AuthenticationHelper_invalidRole(AuthenticationHelper* this);
bool AuthenticationHelper_isAuthenticated(AuthenticationHelper* this);
bool AuthenticationHelper_isAuthenticationSessionValid(AuthenticationHelper* this, BasicArrayList* roles);
void AuthenticationHelper_nextAttempt(AuthenticationHelper* this);
bool AuthenticationHelper_processIfNewLogin(AuthenticationHelper* this, const char* userName, const char* password);
bool AuthenticationHelper_processInvalidation(AuthenticationHelper* this);
const char* AuthenticationHelper_outputSessionInfo(AuthenticationHelper* this);
UserRole* AuthenticationHelper_getRole(AuthenticationHelper* this);

static void AuthenticationHelper_initFields(AuthenticationHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->authenticated = nullptr;
    this->sessionUserName = nullptr;
    this->role = nullptr;
    this->timeout = nullptr;
    this->attemptsInteger = nullptr;
}


void AuthenticationHelper_init(AuthenticationHelper* this, HashMap* hashMap, PageContext* pageContext) {
        AuthenticationHelper_init(this, hashMap, ((HttpServletRequest*) PageContext_getRequest(pageContext)));
}

AuthenticationHelper* AuthenticationHelper_new(HashMap* hashMap, PageContext* pageContext) {
    AuthenticationHelper* this = calloc(1, sizeof(AuthenticationHelper));
    AuthenticationHelper_init(this, hashMap, pageContext);
    return this;
}


void AuthenticationHelper_init2(AuthenticationHelper* this, HashMap* hashMap, HttpServletRequest* httpServletRequest) {
    TagHelper_init(&this->base);
    AuthenticationHelper_initFields(this);
        this->weblisketSession = WeblisketSession_new(hashMap, httpServletRequest);
        AuthenticationHelper_getFormData(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
            LogUtil_putF(this->logUtil, AuthenticationHelper_outputSessionInfo(this), this, this->commonStrings->CONSTRUCTOR);
        }
}

AuthenticationHelper* AuthenticationHelper_new2(HashMap* hashMap, HttpServletRequest* httpServletRequest) {
    AuthenticationHelper* this = calloc(1, sizeof(AuthenticationHelper));
    AuthenticationHelper_init2(this, hashMap, httpServletRequest);
    return this;
}


// throws Exception
static void AuthenticationHelper_getFormData(AuthenticationHelper* this) {
        this->authenticated = WeblisketSession_getAuthentication(this->weblisketSession);
        this->sessionUserName = WeblisketSession_getUserName(this->weblisketSession);
        this->role = WeblisketSession_getRole(this->weblisketSession);
        this->attemptsInteger = WeblisketSession_getAttempts(this->weblisketSession);
        this->timeout = WeblisketSession_getTimeout(this->weblisketSession);
}


// throws Exception
int32_t AuthenticationHelper_invalidateSession(AuthenticationHelper* this) {
        JAVA_TRY {
            WeblisketSession_clear(this->weblisketSession);
            return TagSupport_EVAL_BODY_INCLUDE;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidateSession()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


bool AuthenticationHelper_isSessionOld(AuthenticationHelper* this) {
        if (this->role != nullptr) {
            int64_t timeCreated = WeblisketSession_getCreationTime(this->weblisketSession);
            int64_t sessionTimout = UserRole_getSessionTimeout(this->role);
            Calendar* calendar = Calendar_getInstance();
            int64_t timeFirst = Calendar_getTimeInMillis(calendar) - sessionTimout;
            if (timeFirst > timeCreated) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Session Is Old - Timeout: ");
                    StringMaker_appendlong(stringBuffer, sessionTimout);
                    StringMaker_append(stringBuffer, " Eval: ");
                    StringMaker_appendlong(stringBuffer, timeFirst);
                    StringMaker_append(stringBuffer, " > ");
                    StringMaker_appendlong(stringBuffer, timeCreated);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "isSessionOld()");
                }
                return true;
            }
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                LogUtil_putF(this->logUtil, "Role Is Not In Session", this, "isSessionOld()");
            }
        }
        return AuthenticationHelper_isRarelyUsedSession(this);
}


static bool AuthenticationHelper_isRarelyUsedSession(AuthenticationHelper* this) {
        if (this->role != nullptr) {
            int64_t timeCreated = WeblisketSession_getCreationTime(this->weblisketSession);
            int64_t lastAccess = WeblisketSession_getLastAccessedTime(this->weblisketSession);
            int64_t inactivityAllowed = UserRole_getSessionInactivityTimeout(this->role);
            Calendar* calendar = Calendar_getInstance();
            int64_t timeFirst = Calendar_getTimeInMillis(calendar) - lastAccess;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Session Is Rarely Used - Timeout: ");
                StringMaker_appendlong(stringBuffer, lastAccess);
                StringMaker_append(stringBuffer, " Eval: ");
                StringMaker_appendlong(stringBuffer, timeFirst);
                StringMaker_append(stringBuffer, " > ");
                StringMaker_appendlong(stringBuffer, inactivityAllowed);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "isRarelyUsedSession()");
            }
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                LogUtil_putF(this->logUtil, "Role Is Not In Session", this, "isRarelyUsedSession()");
            }
        }
        return false;
}


const char* AuthenticationHelper_validRole(AuthenticationHelper* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Trying New login<p/>");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set valid role";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "validRole()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* AuthenticationHelper_invalidRole(AuthenticationHelper* this) {
        JAVA_TRY {
            WeblisketSession_setAuthenticated(this->weblisketSession, false);
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Sorry your username and password is invalid on this page. ");
            StringMaker_append(stringBuffer, "Trying New login<p/>");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set role invalid";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidRole()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws Exception
bool AuthenticationHelper_isAuthenticated(AuthenticationHelper* this) {
        if (BooleanUtil_getFromString(BooleanUtil_getInstance(), this->authenticated)) {
            return true;
        } else {
            return false;
        }
}


bool AuthenticationHelper_isAuthenticationSessionValid(AuthenticationHelper* this, BasicArrayList* roles) {
        JAVA_TRY {
            if (this->role != nullptr) {
                if (AuthenticationHelper_isAuthenticated(this)) {
                    if (this->sessionUserName != nullptr) {
                        BasicUserRole* basicUserRole = UserRole_getBasicUserRole(this->role);
                        Any** basicUserRoleArray = BasicArrayList_toArray(roles);
                        int32_t size = java_array_length(basicUserRoleArray);
                        for (int32_t index = 0; index < size; index++) {
                            BasicUserRole* mustBeOfRole = ((BasicUserRole*) basicUserRoleArray[index]);
                            if (BasicUserRole_equals(basicUserRole, mustBeOfRole)) {
                                if (BasicUserRole_equals(basicUserRole, UserRoleFactory_getInstance()->CUSTOMER)) {
                                    UserEntityInterface* userEntityInterface = UserEntityFactory_getInstance();
                                    UserInterface* userInterface = UserEntityInterface_getUser(userEntityInterface, this->sessionUserName);
                                    if (!JAVA_CALL(UserInterface_isSessionValid(userInterface), booleanValue)) {
                                        return false;
                                    }
                                }
                                return true;
                            }
                        }
                    }
                    return false;
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                    LogUtil_putF(this->logUtil, "Role Is Not In Session", this, "isAuthenticationSessionValid()");
                }
            }
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isAuthenticatedSessionValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}


void AuthenticationHelper_nextAttempt(AuthenticationHelper* this) {
        if (this->attemptsInteger != nullptr && Integer_intValue(this->attemptsInteger) > 0) {
            WeblisketSession_setAttempts(this->weblisketSession, Integer_intValue(this->attemptsInteger) + 1);
        } else {
            WeblisketSession_setAttempts(this->weblisketSession, 1);
        }
}


bool AuthenticationHelper_processIfNewLogin(AuthenticationHelper* this, const char* userName, const char* password) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_putF(this->logUtil, java_concat("Starting: ", userName), this, "processIfNewLogin()");
            }
            if (userName != nullptr && strcmp(userName, StringUtil_getInstance()->EMPTY_STRING) != 0 && password != nullptr && strcmp(password, StringUtil_getInstance()->EMPTY_STRING) != 0) {
                const char* login = nullptr;
                UserEntityInterface* userEntityInterface = UserEntityFactory_getInstance();
                login = UserEntityInterface_login(userEntityInterface, userName, password);
                if (strcmp(login, TagHelper_GLOBALS2->LOGINSUCCESS) == 0) {
                    UserInterface* userInterface = UserEntityInterface_getUser(userEntityInterface, userName);
                    if (JAVA_CALL(UserInterface_isSessionValid(userInterface), booleanValue)) {
                        WeblisketSession_setAttempts(this->weblisketSession, 0);
                        return true;
                    }
                }
                AuthenticationHelper_nextAttempt(this);
                return false;
            }
            AuthenticationHelper_nextAttempt(this);
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processIfNewLogin()", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool AuthenticationHelper_processInvalidation(AuthenticationHelper* this) {
        JAVA_TRY {
            if (BooleanUtil_getFromString(BooleanUtil_getInstance(), this->timeout)) {
                AuthenticationHelper_invalidateSession(this);
                return true;
            }
            {
                WeblisketSession_setTimeout(this->weblisketSession, BooleanFactory_getInstance()->TRUE_STRING);
                return false;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATIONERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processInvalidation()", e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* AuthenticationHelper_outputSessionInfo(AuthenticationHelper* this) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            int64_t timeCreated = WeblisketSession_getCreationTime(this->weblisketSession);
            StringMaker* stringBuffer = StringMaker_new();
            int64_t lastAccess = WeblisketSession_getLastAccessedTime(this->weblisketSession);
            StringMaker_append(stringBuffer, java_concat(java_concat("Time Since Last Access: ", java_string_of((Calendar_getTimeInMillis(calendar) - lastAccess))), "<br/>\n"));
            if (this->role != nullptr) {
                StringMaker_append(stringBuffer, "Auth: ");
                StringMaker_append(stringBuffer, this->authenticated);
                StringMaker_append(stringBuffer, " UserName: ");
                StringMaker_append(stringBuffer, this->sessionUserName);
                StringMaker_append(stringBuffer, " Role: ");
                StringMaker_append(stringBuffer, UserRole_toString(this->role));
                StringMaker_append(stringBuffer, "<br/>\n");
                StringMaker_append(stringBuffer, "Time Left: ");
                StringMaker_appendlong(stringBuffer, ((int64_t) (UserRole_getSessionTimeout(this->role) - (Calendar_getTimeInMillis(calendar) - timeCreated))));
                StringMaker_append(stringBuffer, "<br/>\n");
                StringMaker_append(stringBuffer, "Inactivity Time Allowed: ");
                StringMaker_appendlong(stringBuffer, ((int64_t) UserRole_getSessionTimeout(this->role)));
                StringMaker_append(stringBuffer, "<br/>\n");
                StringMaker_append(stringBuffer, "Inactivity Time Allowed: ");
                StringMaker_appendlong(stringBuffer, ((int64_t) UserRole_getSessionInactivityTimeout(this->role)));
                StringMaker_append(stringBuffer, "<br/>\n");
            } else {
                StringMaker_append(stringBuffer, "Role Is Not Set<br/>\n");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            return "Error";
        } JAVA_END_TRY;
}


UserRole* AuthenticationHelper_getRole(AuthenticationHelper* this) {
        return this->role;
}

