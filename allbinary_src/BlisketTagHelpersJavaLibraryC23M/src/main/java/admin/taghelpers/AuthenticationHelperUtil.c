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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/file/upload/HttpFilePermissions.h"
#include "org/allbinary/logic/communication/http/request/HttpRequestUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct AuthenticationHelperUtil AuthenticationHelperUtil;
struct AuthenticationHelperUtil {
    LogUtil* logUtil;
};

static AuthenticationHelperUtil* AuthenticationHelperUtil_instance;

AuthenticationHelperUtil* AuthenticationHelperUtil_new(void);
AuthenticationHelperUtil* AuthenticationHelperUtil_getInstance(void);
bool AuthenticationHelperUtil_isAuthorized(AuthenticationHelperUtil* this, AuthenticationHelper* authenticationHelper, const char* filePath);

// Static fields with runtime initializers: call this once at startup
void AuthenticationHelperUtil_staticInit(void) {
    AuthenticationHelperUtil_instance = AuthenticationHelperUtil_new();
}

static void AuthenticationHelperUtil_initFields(AuthenticationHelperUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void AuthenticationHelperUtil_init(AuthenticationHelperUtil* this) {
    AuthenticationHelperUtil_initFields(this);
}

AuthenticationHelperUtil* AuthenticationHelperUtil_new(void) {
    AuthenticationHelperUtil* this = calloc(1, sizeof(AuthenticationHelperUtil));
    AuthenticationHelperUtil_init(this);
    return this;
}


AuthenticationHelperUtil* AuthenticationHelperUtil_getInstance(void) {
        return AuthenticationHelperUtil_instance;
}


// throws Exception
bool AuthenticationHelperUtil_isAuthorized(AuthenticationHelperUtil* this, AuthenticationHelper* authenticationHelper, const char* filePath) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
            LogUtil_putF(this->logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START), filePath), this, "isAuthorized()");
        }
        int32_t endIndex = HttpRequestUtil_getLastSeparatorIndex(HttpRequestUtil_getInstance(), filePath);
        AbPath* fullPath = AbPath_new(java_concat(java_string_of(JAVA_CALL(_URLGLOBALS, getWebappPath)), java_substring(filePath, 0, endIndex)), StringUtil_getInstance()->EMPTY_STRING);
        HttpFilePermissions* downloadFilePermissions = HttpFilePermissions_new(fullPath);
        BasicArrayList* userRoles = HttpFilePermissions_getUserRoles(downloadFilePermissions);
        UserRole* userRole = AuthenticationHelper_getRole(authenticationHelper);
        BasicUserRole* basicUserRole = UserRole_getBasicUserRole(userRole);
        if (BasicArrayList_contains(userRoles, basicUserRole)) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Authorized", this, "isAuthorized()");
            }
            return true;
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Not Authorized: ", BasicUserRole_toString(basicUserRole)), this, "isAuthorized()");
            }
            return false;
        }
}

