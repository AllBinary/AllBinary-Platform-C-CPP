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
// package org.allbinary.logic.communication.http.file.upload

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
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct HttpFilePermissions HttpFilePermissions;
struct HttpFilePermissions {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbFile* file;
    BasicArrayList* userRoles;
};


HttpFilePermissions* HttpFilePermissions_new(AbPath* fullPath);

void HttpFilePermissions_init(HttpFilePermissions* this, AbPath* fullPath);
bool HttpFilePermissions_isFile(HttpFilePermissions* this);
BasicArrayList* HttpFilePermissions_getUserRoles(HttpFilePermissions* this);

static void HttpFilePermissions_initFields(HttpFilePermissions* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->userRoles = BasicArrayListD_new();
}


void HttpFilePermissions_init(HttpFilePermissions* this, AbPath* fullPath) {
    HttpFilePermissions_initFields(this);
        this->file = AbFile_createAbFileFromAbPath(AbPath_new(AbPath_toFileSystemString(fullPath), FileUploadData_getInstance()->FILE));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
            LogUtil_putF(this->logUtil, java_concat("Loading Privileges: ", java_string_of(AbPath_toFileSystemString(fullPath))), this, this->commonStrings->CONSTRUCTOR);
        }
        if (HttpFilePermissions_isFile(this)) {
            BasicArrayList_add(this->userRoles, BasicUserRoleFactory_getInstance()->ADMINISTRATOR);
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
            LogUtil_putF(this->logUtil, java_concat("User Roles: ", java_string_of(this->userRoles)), this, this->commonStrings->CONSTRUCTOR);
        }
}

HttpFilePermissions* HttpFilePermissions_new(AbPath* fullPath) {
    HttpFilePermissions* this = calloc(1, sizeof(HttpFilePermissions));
    HttpFilePermissions_init(this, fullPath);
    return this;
}


bool HttpFilePermissions_isFile(HttpFilePermissions* this) {
        return AbFile_isFile(this->file);
}


BasicArrayList* HttpFilePermissions_getUserRoles(HttpFilePermissions* this) {
        return this->userRoles;
}

