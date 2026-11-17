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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/DataOutputStream.h"
// #include "java/io/FileOutputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFileSystem.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct SmallDelete SmallDelete;
struct SmallDelete {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* fileName;
    const char* string;
};


SmallDelete* SmallDelete_new(const char* fileName);

void SmallDelete_init(SmallDelete* this, const char* fileName);
bool SmallDelete_deleteAtStart(SmallDelete* this, const char* start, const char* end);
bool SmallDelete_deleteBetween(SmallDelete* this, const char* start, const char* end, const char* newText);

static void SmallDelete_initFields(SmallDelete* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void SmallDelete_init(SmallDelete* this, const char* fileName) {
    SmallDelete_initFields(this);
        this->fileName = fileName;
        this->string = AbFileSystem_readAsString(AbFileSystem_getInstance(), fileName);
}

SmallDelete* SmallDelete_new(const char* fileName) {
    SmallDelete* this = calloc(1, sizeof(SmallDelete));
    SmallDelete_init(this, fileName);
    return this;
}


bool SmallDelete_deleteAtStart(SmallDelete* this, const char* start, const char* end) {
        JAVA_TRY {
            int32_t beginIndex = 0;
            int32_t endIndex = 0;
            beginIndex = java_string_indexOf(this->string, start);
            endIndex = java_string_indexOf(this->string, end);
            if (endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 10 && endIndex < 525) {
                const char* text = java_substring(this->string, endIndex, ((int32_t) strlen(this->string)));
                FileOutputStream* idFile = FileOutputStream_new(this->fileName);
                DataOutputStream* idOutData = DataOutputStream_new(idFile);
                DataOutputStream_writeBytes(idOutData, text);
                return true;
            }
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "deleteAtStart", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool SmallDelete_deleteBetween(SmallDelete* this, const char* start, const char* end, const char* newText) {
        JAVA_TRY {
            int32_t beginIndex = 0;
            int32_t endIndex = 0;
            beginIndex = java_string_indexOf(this->string, start);
            endIndex = java_string_indexOf(this->string, end);
            if (endIndex > beginIndex && beginIndex >= 0 && endIndex >= 0 && beginIndex < 50 && endIndex < 425) {
                const char* newStart = java_substring(this->string, 0, beginIndex);
                const char* text = java_substring(this->string, endIndex + ((int32_t) strlen(end)), ((int32_t) strlen(this->string)));
                FileOutputStream* idFile = FileOutputStream_new(this->fileName);
                DataOutputStream* idOutData = DataOutputStream_new(idFile);
                DataOutputStream_writeBytes(idOutData, java_concat(java_concat(newStart, newText), text));
                return true;
            }
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "deleteAtStart", e);
            }
            return false;
        } JAVA_END_TRY;
}

