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
// #include "java/util/Calendar.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/JspTagException.h"
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "org/allbinary/business/init/InstallerInfo.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/http/request/session/BasicWeblisketSession.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/java/bool/BooleanUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct FileAuthenticationTag FileAuthenticationTag;
struct FileAuthenticationTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    int32_t attemptsInteger;
    BasicWeblisketSession* weblisketSession;
    HttpServletRequest* request;
    const char* command;
    const char* userName;
    const char* password;
    const char* newPassword;
    const char* authenticated;
    const char* sessionUserName;
    BasicUserRole* role;
    const char* timeout;
    BasicArrayList* roles;
};


FileAuthenticationTag* FileAuthenticationTag_new(void);

void FileAuthenticationTag_init(FileAuthenticationTag* this);
void FileAuthenticationTag_setCommand(FileAuthenticationTag* this, const char* command);
void FileAuthenticationTag_setUserName(FileAuthenticationTag* this, const char* userName);
void FileAuthenticationTag_setPassword(FileAuthenticationTag* this, const char* value);
void FileAuthenticationTag_setNewPassword(FileAuthenticationTag* this, const char* value);
void FileAuthenticationTag_setRoles(FileAuthenticationTag* this, BasicArrayList* values);
static void FileAuthenticationTag_makeSessionValid(FileAuthenticationTag* this, BasicUserRole* storedRole, const char* userName);
static void FileAuthenticationTag_getFormData(FileAuthenticationTag* this);
void FileAuthenticationTag_nextAttempt(FileAuthenticationTag* this);
static bool FileAuthenticationTag_changePassword(FileAuthenticationTag* this);
static int32_t FileAuthenticationTag_invalidateSession(FileAuthenticationTag* this);
static bool FileAuthenticationTag_isSessionOld(FileAuthenticationTag* this);
static bool FileAuthenticationTag_isRarelyUsedSession(FileAuthenticationTag* this);
static bool FileAuthenticationTag_isRoleValid(FileAuthenticationTag* this);
static const char* FileAuthenticationTag_validRole(FileAuthenticationTag* this);
static const char* FileAuthenticationTag_invalidRole(FileAuthenticationTag* this);
static bool FileAuthenticationTag_isAuthenticationSessionValid(FileAuthenticationTag* this);
static bool FileAuthenticationTag_processIfNewLogin(FileAuthenticationTag* this);
static bool FileAuthenticationTag_processInvalidation(FileAuthenticationTag* this);
int32_t FileAuthenticationTag_doStartTag(FileAuthenticationTag* this);

static void FileAuthenticationTag_initFields(FileAuthenticationTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->attemptsInteger = nullptr;
    this->weblisketSession = nullptr;
    this->request = nullptr;
    this->command = nullptr;
    this->userName = nullptr;
    this->password = nullptr;
    this->newPassword = nullptr;
    this->authenticated = nullptr;
    this->sessionUserName = nullptr;
    this->role = nullptr;
    this->timeout = nullptr;
    this->roles = nullptr;
}


void FileAuthenticationTag_init(FileAuthenticationTag* this) {
    CustomTagSupport_init(&this->base);
    FileAuthenticationTag_initFields(this);
}

FileAuthenticationTag* FileAuthenticationTag_new(void) {
    FileAuthenticationTag* this = calloc(1, sizeof(FileAuthenticationTag));
    FileAuthenticationTag_init(this);
    return this;
}


void FileAuthenticationTag_setCommand(FileAuthenticationTag* this, const char* command) {
        this->command = command;
}


void FileAuthenticationTag_setUserName(FileAuthenticationTag* this, const char* userName) {
        this->userName = userName;
}


void FileAuthenticationTag_setPassword(FileAuthenticationTag* this, const char* value) {
        this->password = value;
}


void FileAuthenticationTag_setNewPassword(FileAuthenticationTag* this, const char* value) {
        this->newPassword = value;
}


void FileAuthenticationTag_setRoles(FileAuthenticationTag* this, BasicArrayList* values) {
        this->roles = values;
}


static void FileAuthenticationTag_makeSessionValid(FileAuthenticationTag* this, BasicUserRole* storedRole, const char* userName) {
        BasicWeblisketSession_setAuthenticated(this->weblisketSession);
        BasicWeblisketSession_setRole(this->weblisketSession, storedRole);
        BasicWeblisketSession_setUserName(this->weblisketSession, userName);
        HttpServletRequest_removeAttribute(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
        HttpServletRequest_removeAttribute(this->request, WeblisketSessionData_REMOVABLEPASSWORD);
}


static void FileAuthenticationTag_getFormData(FileAuthenticationTag* this) {
        this->authenticated = BasicWeblisketSession_getAuthentication(this->weblisketSession);
        this->sessionUserName = BasicWeblisketSession_getUserName(this->weblisketSession);
        this->role = BasicWeblisketSession_getRole(this->weblisketSession);
        this->attemptsInteger = BasicWeblisketSession_getAttempts(this->weblisketSession);
        this->timeout = BasicWeblisketSession_getTimeout(this->weblisketSession);
}


void FileAuthenticationTag_nextAttempt(FileAuthenticationTag* this) {
        if (this->attemptsInteger != nullptr && Integer_intValue(this->attemptsInteger) > 0) {
            BasicWeblisketSession_setAttempts(this->weblisketSession, Integer_intValue(this->attemptsInteger) + 1);
        } else {
            BasicWeblisketSession_setAttempts(this->weblisketSession, 1);
        }
}


// throws LicensingException
static bool FileAuthenticationTag_changePassword(FileAuthenticationTag* this) {
        JAVA_TRY {
            const char* userName = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEUSERNAME);
            const char* password = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEPASSWORD);
            const char* newPassword = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLENEWPASSWORD);
            const char* newReenteredPassword = HttpServletRequest_getParameter(this->request, WeblisketSessionData_REMOVABLEREENTERNEWPASSWORD);
            if (strcmp(newPassword, newReenteredPassword) != 0) {
                return false;
            }
            InstallerInfo* installerInfo = InstallerInfo_new();
            if (InstallerInfo_isValid(installerInfo, userName, password)) {
                InstallerInfo_setPassword(installerInfo, newPassword);
                InstallerInfo_write(installerInfo);
                BasicWeblisketSession_setUserName(this->weblisketSession, userName);
                BasicWeblisketSession_setPassword(this->weblisketSession, newPassword);
                return true;
            }
            return false;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidateSession()", e);
            }
            return false;
        } JAVA_END_TRY;
}


static int32_t FileAuthenticationTag_invalidateSession(FileAuthenticationTag* this) {
        JAVA_TRY {
            BasicWeblisketSession_clear(this->weblisketSession);
            return Integer_intValue(TagSupport_EVAL_BODY_INCLUDE);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidateSession()", e);
            }
            return TagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool FileAuthenticationTag_isSessionOld(FileAuthenticationTag* this) {
        JAVA_TRY {
            if (this->role != nullptr) {
                int64_t timeCreated = BasicWeblisketSession_getCreationTime(this->weblisketSession);
                int64_t sessionTimout = BasicUserRole_getSessionTimeout(this->role);
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
                    return JAVA_CALL(true, booleanValue);
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                    LogUtil_putF(this->logUtil, "Role Is Not In Session", this, "isSessionOld()");
                }
            }
            return JAVA_CALL(FileAuthenticationTag_isRarelyUsedSession(this), booleanValue);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isSessionOld()", e);
            }
            return false;
        } JAVA_END_TRY;
}


static bool FileAuthenticationTag_isRarelyUsedSession(FileAuthenticationTag* this) {
        if (this->role != nullptr) {
            int64_t timeCreated = BasicWeblisketSession_getCreationTime(this->weblisketSession);
            int64_t lastAccess = BasicWeblisketSession_getLastAccessedTime(this->weblisketSession);
            int64_t timePassed = BasicUserRole_getSessionInactivityTimeout(this->role);
            Calendar* calendar = Calendar_getInstance();
            int64_t timeFirst = Calendar_getTimeInMillis(calendar) - lastAccess;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Session Is Rarely Used - Timeout: ");
                StringMaker_appendlong(stringBuffer, lastAccess);
                StringMaker_append(stringBuffer, " Eval: ");
                StringMaker_appendlong(stringBuffer, timeFirst);
                StringMaker_append(stringBuffer, " > ");
                StringMaker_appendlong(stringBuffer, timePassed);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "isRarelyUsedSession()");
            }
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->AUTHENTICATION)) {
                LogUtil_putF(this->logUtil, "Role Is Not In Session", this, "isRarelyUsedSession()");
            }
        }
        return false;
}


// throws LicensingException
static bool FileAuthenticationTag_isRoleValid(FileAuthenticationTag* this) {
        JAVA_TRY {
            FileAuthenticationTag_makeSessionValid(this, BasicUserRoleFactory_getInstance()->INSTALLER, this->userName);
            return JAVA_CALL(true, booleanValue);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isRoleValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* FileAuthenticationTag_validRole(FileAuthenticationTag* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Trying New login<p>");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set valid role";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "validRole()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* FileAuthenticationTag_invalidRole(FileAuthenticationTag* this) {
        JAVA_TRY {
            BasicWeblisketSession_setAuthenticated(this->weblisketSession, false);
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Sorry your username and password is invalid on this page.");
            StringMaker_append(stringBuffer, "Trying New login<p>");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set role invalid";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidRole()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool FileAuthenticationTag_isAuthenticationSessionValid(FileAuthenticationTag* this) {
        JAVA_TRY {
            if (BooleanUtil_getFromString(BooleanUtil_getInstance(), this->authenticated)) {
                int32_t size = BasicArrayList_size(this->roles);
                for (int32_t index = 0; index < size; index++) {
                    BasicUserRole* mustBeOfRole = ((BasicUserRole*) BasicArrayList_get(this->roles, index));
                    if (this->sessionUserName != nullptr && BasicUserRole_equals(this->role, mustBeOfRole)) {
                        return JAVA_CALL(true, booleanValue);
                    }
                }
                return JAVA_CALL(false, booleanValue);
            }
            return JAVA_CALL(false, booleanValue);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isAuthenticationSessionValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool FileAuthenticationTag_processIfNewLogin(FileAuthenticationTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Starting for User: ", this->userName), " Attempt: "), java_string_of(BasicWeblisketSession_getAttempts(this->weblisketSession))), this, "processIfNewLogin()");
            }
            if (this->userName != nullptr && strcmp(this->userName, StringUtil_getInstance()->EMPTY_STRING) != 0 && this->password != nullptr && strcmp(this->password, StringUtil_getInstance()->EMPTY_STRING) != 0) {
                const char* login = nullptr;
                InstallerInfo* installerInfo = InstallerInfo_new();
                if (InstallerInfo_isValid(installerInfo, this->userName, this->password)) {
                    login = org_allbinary->globals->GLOBALS2->LOGINSUCCESS;
                } else {
                    login = org_allbinary->globals->GLOBALS2->LOGINFAILED;
                }
                if (strcmp(login, org_allbinary->globals->GLOBALS2->LOGINSUCCESS) == 0) {
                    BasicWeblisketSession_setAttempts(this->weblisketSession, 0);
                    return JAVA_CALL(true, booleanValue);
                }
                FileAuthenticationTag_nextAttempt(this);
                return JAVA_CALL(false, booleanValue);
            }
            FileAuthenticationTag_nextAttempt(this);
            return JAVA_CALL(false, booleanValue);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processIfNewLogin()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool FileAuthenticationTag_processInvalidation(FileAuthenticationTag* this) {
        JAVA_TRY {
            if (BooleanUtil_getFromString(BooleanUtil_getInstance(), this->timeout)) {
                FileAuthenticationTag_invalidateSession(this);
                return JAVA_CALL(true, booleanValue);
            }
            {
                BasicWeblisketSession_setTimeout(this->weblisketSession, BooleanFactory_getInstance()->TRUE_STRING);
                return JAVA_CALL(false, booleanValue);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isSetToInvalidate()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t FileAuthenticationTag_doStartTag(FileAuthenticationTag* this) {
        JAVA_TRY {
            StringUtil* stringUtil = StringUtil_getInstance();
            this->request = ((HttpServletRequest*) JAVA_CALL(this->base.pageContext, getRequest));
            this->weblisketSession = BasicWeblisketSession_new(this->base.pageContext);
            FileAuthenticationTag_getFormData(this);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, "Started", this, this->tagStrings->DO_START_TAG);
            }
            if (this->command != nullptr) {
                if (strcmp(this->command, org_allbinary->globals->GLOBALS2->CHANGEPASSWORD) == 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        LogUtil_putF(this->logUtil, "Change Password", this, this->tagStrings->DO_START_TAG);
                    }
                    if (!FileAuthenticationTag_changePassword(this)) {
                        JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Password Change Attempt Failed.<p>");
                        return CustomTagSupport_EVAL_BODY_INCLUDE;
                    } else {
                        JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Password Changed Successfully.<p>");
                        return CustomTagSupport_SKIP_BODY;
                    }
                } else if (strcmp(this->command, WeblisketSessionData_INVALIDATESESSION) == 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        LogUtil_putF(this->logUtil, "INVALIDATESESSION", this, this->tagStrings->DO_START_TAG);
                    }
                    return FileAuthenticationTag_invalidateSession(this);
                } else {
                    if (FileAuthenticationTag_isSessionOld(this)) {
                        if (FileAuthenticationTag_processInvalidation(this)) {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Processing Invalidation", this, this->tagStrings->DO_START_TAG);
                            }
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Please login again.<p>");
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return TagSupport_SKIP_BODY;
                            } else {
                                return TagSupport_EVAL_BODY_INCLUDE;
                            }
                        } else {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Preparing session for invalidation", this, this->tagStrings->DO_START_TAG);
                            }
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return TagSupport_SKIP_BODY;
                            } else {
                                return TagSupport_EVAL_BODY_INCLUDE;
                            }
                        }
                    }
                    if ((this->userName == nullptr || strcmp(this->userName, stringUtil->EMPTY_STRING) == 0) && (this->password == nullptr || strcmp(this->password, stringUtil->EMPTY_STRING) == 0) && this->roles != nullptr && FileAuthenticationTag_isAuthenticationSessionValid(this)) {
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                            LogUtil_putF(this->logUtil, "Authenticated session is valid", this, this->tagStrings->DO_START_TAG);
                        }
                        if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                            return TagSupport_EVAL_BODY_INCLUDE;
                        } else {
                            return TagSupport_SKIP_BODY;
                        }
                    }
                    if (this->userName != nullptr && this->password != nullptr && FileAuthenticationTag_processIfNewLogin(this)) {
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                            LogUtil_putF(this->logUtil, "Processing new login.", this, this->tagStrings->DO_START_TAG);
                        }
                        if (FileAuthenticationTag_isRoleValid(this)) {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Role is valid - Processing new login", this, this->tagStrings->DO_START_TAG);
                            }
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, FileAuthenticationTag_validRole(this));
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return CustomTagSupport_EVAL_BODY_INCLUDE;
                            } else {
                                return CustomTagSupport_SKIP_BODY;
                            }
                        } else {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Role is not valid - Processing new login", this, this->tagStrings->DO_START_TAG);
                            }
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, FileAuthenticationTag_invalidRole(this));
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return CustomTagSupport_SKIP_BODY;
                            } else {
                                return CustomTagSupport_EVAL_BODY_INCLUDE;
                            }
                        }
                    } else {
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                            LogUtil_putF(this->logUtil, "Invalid Login", this, this->tagStrings->DO_START_TAG);
                        }
                        if (this->userName != nullptr && strcmp(this->userName, StringUtil_getInstance()->EMPTY_STRING) != 0 && this->password != nullptr && strcmp(this->password, StringUtil_getInstance()->EMPTY_STRING) != 0) {
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Sorry your username and/or password is invalid.<p>");
                        }
                    }
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "Major authentication error - userName: ");
                        StringMaker_append(stringBuffer, this->userName);
                        StringMaker_append(stringBuffer, " Password: ");
                        StringMaker_append(stringBuffer, this->password);
                        StringMaker_append(stringBuffer, " Command: ");
                        StringMaker_append(stringBuffer, this->command);
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->tagStrings->DO_START_TAG);
                    }
                    if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                        return TagSupport_SKIP_BODY;
                    } else {
                        return TagSupport_EVAL_BODY_INCLUDE;
                    }
                }
            }
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}

