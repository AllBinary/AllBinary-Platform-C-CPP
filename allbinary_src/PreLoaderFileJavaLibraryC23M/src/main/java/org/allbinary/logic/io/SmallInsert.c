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

typedef struct SmallInsert SmallInsert;
struct SmallInsert {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* fileName;
    const char* string;
};


SmallInsert* SmallInsert_new(const char* fileName);

void SmallInsert_init(SmallInsert* this, const char* fileName);
bool SmallInsert_atBeginning(SmallInsert* this, const char* text);
bool SmallInsert_after(SmallInsert* this, const char* text, const char* after);
bool SmallInsert_atEnd(SmallInsert* this, const char* text);

static void SmallInsert_initFields(SmallInsert* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void SmallInsert_init(SmallInsert* this, const char* fileName) {
    SmallInsert_initFields(this);
        this->fileName = fileName;
        this->string = AbFileSystem_readAsString(AbFileSystem_getInstance(), fileName);
}

SmallInsert* SmallInsert_new(const char* fileName) {
    SmallInsert* this = calloc(1, sizeof(SmallInsert));
    SmallInsert_init(this, fileName);
    return this;
}


bool SmallInsert_atBeginning(SmallInsert* this, const char* text) {
        JAVA_TRY {
            FileOutputStream* idFile = FileOutputStream_new(this->fileName);
            DataOutputStream* idOutData = DataOutputStream_new(idFile);
            DataOutputStream_writeBytes(idOutData, java_concat(text, this->string));
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insertAtBeginning", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool SmallInsert_after(SmallInsert* this, const char* text, const char* after) {
        JAVA_TRY {
            int32_t index = java_string_indexOf(this->string, after);
            if (index < 0) {
                puts(java_string_of(java_concat(java_concat(java_concat("No such start: ", after), " in: "), this->string)));
                return false;
            }
            index = index + ((int32_t) strlen(after));
            const char* start = java_substring(this->string, 0, index);
            const char* end = java_substring(this->string, index + 1, ((int32_t) strlen(this->string)));
            FileOutputStream* idFile = FileOutputStream_new(this->fileName);
            DataOutputStream* idOutData = DataOutputStream_new(idFile);
            DataOutputStream_writeBytes(idOutData, java_concat(java_concat(start, text), end));
            DataOutputStream_close(idOutData);
            FileOutputStream_close(idFile);
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "after", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool SmallInsert_atEnd(SmallInsert* this, const char* text) {
        JAVA_TRY {
            FileOutputStream* idFile = FileOutputStream_new(this->fileName);
            DataOutputStream* idOutData = DataOutputStream_new(idFile);
            DataOutputStream_writeBytes(idOutData, java_concat(this->string, text));
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insertAtEnd", e);
            }
            return false;
        } JAVA_END_TRY;
}

