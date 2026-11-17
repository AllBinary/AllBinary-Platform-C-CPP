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
// #include "java/lang/reflect/Method.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/JspTagException.h"
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "admin/taghelpers/AuthenticationHelperFactory.h"
#include "admin/taghelpers/AuthenticationRequestHelperFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct AuthenticationTag AuthenticationTag;
struct AuthenticationTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* command;
    const char* userName;
    const char* password;
    const char* newPassword;
    BasicArrayList* roles;
    HashMap* propertiesHashMap;
};


AuthenticationTag* AuthenticationTag_new(void);

void AuthenticationTag_init(AuthenticationTag* this);
void AuthenticationTag_setCommand(AuthenticationTag* this, const char* command);
void AuthenticationTag_setUserName(AuthenticationTag* this, const char* userName);
void AuthenticationTag_setPassword(AuthenticationTag* this, const char* value);
void AuthenticationTag_setNewPassword(AuthenticationTag* this, const char* value);
void AuthenticationTag_setRoles(AuthenticationTag* this, BasicArrayList* values);
static bool AuthenticationTag_changePassword(AuthenticationTag* this);
static bool AuthenticationTag_newPassword(AuthenticationTag* this);
static int32_t AuthenticationTag_invalidateSession(AuthenticationTag* this);
static bool AuthenticationTag_isSessionOld(AuthenticationTag* this);
static bool AuthenticationTag_isRoleValid(AuthenticationTag* this);
static const char* AuthenticationTag_validRole(AuthenticationTag* this);
static const char* AuthenticationTag_invalidRole(AuthenticationTag* this);
static bool AuthenticationTag_isAuthenticationSessionValid(AuthenticationTag* this);
static bool AuthenticationTag_processIfNewLogin(AuthenticationTag* this);
static bool AuthenticationTag_processInvalidation(AuthenticationTag* this);
int32_t AuthenticationTag_doStartTag(AuthenticationTag* this);

static void AuthenticationTag_initFields(AuthenticationTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->command = nullptr;
    
    
    this->newPassword = nullptr;
    this->roles = nullptr;
    this->propertiesHashMap = nullptr;
}


void AuthenticationTag_init(AuthenticationTag* this) {
    CustomTagSupport_init(&this->base);
    AuthenticationTag_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        this->userName = stringUtil->EMPTY_STRING;
        this->password = stringUtil->EMPTY_STRING;
}

AuthenticationTag* AuthenticationTag_new(void) {
    AuthenticationTag* this = calloc(1, sizeof(AuthenticationTag));
    AuthenticationTag_init(this);
    return this;
}


void AuthenticationTag_setCommand(AuthenticationTag* this, const char* command) {
        this->command = command;
}


void AuthenticationTag_setUserName(AuthenticationTag* this, const char* userName) {
        this->userName = userName;
}


void AuthenticationTag_setPassword(AuthenticationTag* this, const char* value) {
        this->password = value;
}


void AuthenticationTag_setNewPassword(AuthenticationTag* this, const char* value) {
        this->newPassword = value;
}


void AuthenticationTag_setRoles(AuthenticationTag* this, BasicArrayList* values) {
        this->roles = values;
}


// throws LicensingException
static bool AuthenticationTag_changePassword(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationRequestHelperFactory_getInstance(AuthenticationRequestHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "changePassword", nullptr);
            bool result = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(result);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "changePassword()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool AuthenticationTag_newPassword(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationRequestHelperFactory_getInstance(AuthenticationRequestHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "newPassword", nullptr);
            bool result = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(result);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "newPassword()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static int32_t AuthenticationTag_invalidateSession(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "invalidateSession", nullptr);
            int32_t resultInteger = ((int32_t) Method_invoke(method, anyType, nullptr));
            return Integer_intValue(resultInteger);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidateSession()", e);
            }
            return TagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool AuthenticationTag_isSessionOld(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "isSessionOld", nullptr);
            bool resultBoolean = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(resultBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isSessionOld()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool AuthenticationTag_isRoleValid(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationRequestHelperFactory_getInstance(AuthenticationRequestHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            const char** methodParams = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_class_of(this->userName), java_class_of(this->password), java_class_of(this->roles) }) / sizeof(const char*), (const char*[]){ java_class_of(this->userName), java_class_of(this->password), java_class_of(this->roles) }));
            Method* method = Class_getMethod(addressHelperClass, "isRoleValid", methodParams);
            Any** methodArgs = ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ this->userName, this->password, this->roles }) / sizeof(Any*), (Any*[]){ this->userName, this->password, this->roles }));
            bool resultBoolean = ((bool) Method_invoke(method, anyType, methodArgs));
            return Boolean_booleanValue(resultBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isRoleValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* AuthenticationTag_validRole(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "validRole", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set valid role";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "validRole()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* AuthenticationTag_invalidRole(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "invalidRole", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set role invalid";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "invalidRole()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool AuthenticationTag_isAuthenticationSessionValid(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            const char** methodParams = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_class_of(this->roles) }) / sizeof(const char*), (const char*[]){ java_class_of(this->roles) }));
            Method* method = Class_getMethod(addressHelperClass, "isAuthenticationSessionValid", methodParams);
            Any** methodArgs = ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ this->roles }) / sizeof(Any*), (Any*[]){ this->roles }));
            bool resultBoolean = ((bool) Method_invoke(method, anyType, methodArgs));
            return Boolean_booleanValue(resultBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isAuthenticationSessionValid()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool AuthenticationTag_processIfNewLogin(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* helperClass = java_class_of(anyType);
            const char** methodParams = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_class_of(this->userName), java_class_of(this->password) }) / sizeof(const char*), (const char*[]){ java_class_of(this->userName), java_class_of(this->password) }));
            Method* method = Class_getMethod(helperClass, "processIfNewLogin", methodParams);
            Any** methodArgs = ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ this->userName, this->password }) / sizeof(Any*), (Any*[]){ this->userName, this->password }));
            bool resultBoolean = ((bool) Method_invoke(method, anyType, methodArgs));
            return Boolean_booleanValue(resultBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processIfNewLogin()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool AuthenticationTag_processInvalidation(AuthenticationTag* this) {
        JAVA_TRY {
            Any* anyType = AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "processInvalidation", nullptr);
            bool resultBoolean = ((bool) Method_invoke(method, anyType, nullptr));
            return Boolean_booleanValue(resultBoolean);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isSetToInvalidate()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t AuthenticationTag_doStartTag(AuthenticationTag* this) {
        JAVA_TRY {
            StringUtil* stringUtil = StringUtil_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                HttpServletRequest* request = ((HttpServletRequest*) JAVA_CALL(this->pageContext, getRequest));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, " Request URI: ");
                StringMaker_append(stringBuffer, HttpServletRequest_getRequestURI(request));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->base.tagStrings->DO_START_TAG);
            }
            if (this->command != nullptr) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                if (strcmp(this->command, org_allbinary->globals->GLOBALS2->NEWPASSWORD) == 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        LogUtil_putF(this->logUtil, "New Password", this, this->base.tagStrings->DO_START_TAG);
                    }
                    if (!AuthenticationTag_newPassword(this)) {
                        JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "New Password Request Failed.<p/>");
                        return CustomTagSupport_EVAL_BODY_INCLUDE;
                    } else {
                        JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "New Password Was Sent.<p/>");
                        return CustomTagSupport_SKIP_BODY;
                    }
                } else if (strcmp(this->command, org_allbinary->globals->GLOBALS2->CHANGEPASSWORD) == 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        LogUtil_putF(this->logUtil, "Change Password", this, this->base.tagStrings->DO_START_TAG);
                    }
                    if (!AuthenticationTag_changePassword(this)) {
                        JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Password Change Attempt Failed.<p/>");
                        return CustomTagSupport_EVAL_BODY_INCLUDE;
                    } else {
                        JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Password Changed Successfully.<p/>");
                        return CustomTagSupport_SKIP_BODY;
                    }
                } else if (strcmp(this->command, WeblisketSessionData_INVALIDATESESSION) == 0) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        LogUtil_putF(this->logUtil, "INVALIDATESESSION", this, this->base.tagStrings->DO_START_TAG);
                    }
                    return AuthenticationTag_invalidateSession(this);
                } else {
                    if (AuthenticationTag_isSessionOld(this)) {
                        if (AuthenticationTag_processInvalidation(this)) {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Processing Invalidation", this, this->base.tagStrings->DO_START_TAG);
                            }
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Please login again.<p>");
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return TagSupport_SKIP_BODY;
                            } else {
                                return TagSupport_EVAL_BODY_INCLUDE;
                            }
                        } else {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Preparing session for invalidation", this, this->base.tagStrings->DO_START_TAG);
                            }
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return TagSupport_SKIP_BODY;
                            } else {
                                return TagSupport_EVAL_BODY_INCLUDE;
                            }
                        }
                    }
                    if ((this->userName == nullptr || strcmp(this->userName, stringUtil->EMPTY_STRING) == 0) && (this->password == nullptr || strcmp(this->password, stringUtil->EMPTY_STRING) == 0) && this->roles != nullptr && AuthenticationTag_isAuthenticationSessionValid(this)) {
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                            LogUtil_putF(this->logUtil, "Authenticated session is valid", this, this->base.tagStrings->DO_START_TAG);
                        }
                        if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                            return TagSupport_EVAL_BODY_INCLUDE;
                        } else {
                            return TagSupport_SKIP_BODY;
                        }
                    }
                    if (this->userName != nullptr && this->password != nullptr && AuthenticationTag_processIfNewLogin(this)) {
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                            LogUtil_putF(this->logUtil, "Processing new login.", this, this->base.tagStrings->DO_START_TAG);
                        }
                        if (AuthenticationTag_isRoleValid(this)) {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Role is valid - Processing new login", this, this->base.tagStrings->DO_START_TAG);
                            }
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, AuthenticationTag_validRole(this));
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return CustomTagSupport_EVAL_BODY_INCLUDE;
                            } else {
                                return CustomTagSupport_SKIP_BODY;
                            }
                        } else {
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                                LogUtil_putF(this->logUtil, "Role is not valid - Processing new login", this, this->base.tagStrings->DO_START_TAG);
                            }
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, AuthenticationTag_invalidRole(this));
                            if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESSBODYIFAUTHENTICATED) == 0) {
                                return CustomTagSupport_SKIP_BODY;
                            } else {
                                return CustomTagSupport_EVAL_BODY_INCLUDE;
                            }
                        }
                    } else {
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                            LogUtil_putF(this->logUtil, "Invalid Login", this, this->base.tagStrings->DO_START_TAG);
                        }
                        if (this->userName != nullptr && strcmp(this->userName, stringUtil->EMPTY_STRING) != 0 && this->password != nullptr && strcmp(this->password, stringUtil->EMPTY_STRING) != 0) {
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, "Sorry your username and/or password is invalid.<p/>");
                        }
                    }
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Major authentication error - userName: "), append, this->userName), append, " Password: "), append, this->password), append, " Command: "), append, this->command), toString), this, this->base.tagStrings->DO_START_TAG);
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

