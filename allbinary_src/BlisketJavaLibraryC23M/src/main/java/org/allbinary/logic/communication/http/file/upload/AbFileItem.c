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
// #include "java/io/File.h"
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "java/io/OutputStream.h"
// #include "java/io/UnsupportedEncodingException.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/apache/commons/fileupload/FileItemHeaders.h"
#include "org/apache/commons/fileupload/FileItemUtil.h"

typedef struct AbFileItem AbFileItem;
struct AbFileItem {
    FileItem FileItem_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* name;
    const char* fieldName;
    int8_t* byteArray;
};


AbFileItem* AbFileItem_new(const char* name, const char* fieldName, int8_t* byteArray);

void AbFileItem_init(AbFileItem* this, const char* name, const char* fieldName, int8_t* byteArray);
InputStream* AbFileItem_getInputStream(AbFileItem* this);
const char* AbFileItem_getContentType(AbFileItem* this);
const char* AbFileItem_getName(AbFileItem* this);
bool AbFileItem_isInMemory(AbFileItem* this);
int64_t AbFileItem_getSize(AbFileItem* this);
int8_t* AbFileItem_get(AbFileItem* this);
const char* AbFileItem_getString(AbFileItem* this, const char* encoding);
const char* AbFileItem_getString(AbFileItem* this);
void AbFileItem_write(AbFileItem* this, File* file);
void AbFileItem_write(AbFileItem* this, AbFile* file);
void AbFileItem_delete(AbFileItem* this);
const char* AbFileItem_getFieldName(AbFileItem* this);
void AbFileItem_setFieldName(AbFileItem* this, const char* name);
bool AbFileItem_isFormField(AbFileItem* this);
void AbFileItem_setFormField(AbFileItem* this, bool state);
OutputStream* AbFileItem_getOutputStream(AbFileItem* this);
FileItemHeaders* AbFileItem_getHeaders(AbFileItem* this);
void AbFileItem_setHeaders(AbFileItem* this, FileItemHeaders* fih);

static void AbFileItem_initFields(AbFileItem* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void AbFileItem_init(AbFileItem* this, const char* name, const char* fieldName, int8_t* byteArray) {
    AbFileItem_initFields(this);
        this->name = name;
        this->fieldName = fieldName;
        this->byteArray = byteArray;
}

AbFileItem* AbFileItem_new(const char* name, const char* fieldName, int8_t* byteArray) {
    AbFileItem* this = calloc(1, sizeof(AbFileItem));
    AbFileItem_init(this, name, fieldName, byteArray);
    return this;
}


// throws IOException
InputStream* AbFileItem_getInputStream(AbFileItem* this) {
        java_throw(java_exception_new("IOException", this->commonStrings->NOT_IMPLEMENTED));
}


const char* AbFileItem_getContentType(AbFileItem* this) {
        return nullptr;
}


const char* AbFileItem_getName(AbFileItem* this) {
        return this->name;
}


bool AbFileItem_isInMemory(AbFileItem* this) {
        return true;
}


int64_t AbFileItem_getSize(AbFileItem* this) {
        return ((int64_t) java_array_length(this->byteArray));
}


int8_t* AbFileItem_get(AbFileItem* this) {
        return this->byteArray;
}


// throws UnsupportedEncodingException
const char* AbFileItem_getString(AbFileItem* this, const char* encoding) {
        return java_string_new(this->byteArray, encoding);
}


// Java overloaded method: C needs a different name
const char* AbFileItem_getString(AbFileItem* this) {
        JAVA_TRY {
            return FileItemUtil_getString(FileItemUtil_getInstance(), this->byteArray);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getString", e);
            }
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_END_TRY;
}


// throws Exception
void AbFileItem_write(AbFileItem* this, File* file) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
// Java overloaded method: C needs a different name
void AbFileItem_write(AbFileItem* this, AbFile* file) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void AbFileItem_delete(AbFileItem* this) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, "delete()");
}


const char* AbFileItem_getFieldName(AbFileItem* this) {
        return this->fieldName;
}


void AbFileItem_setFieldName(AbFileItem* this, const char* name) {
        this->fieldName = name;
}


bool AbFileItem_isFormField(AbFileItem* this) {
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->fieldName)) {
            return false;
        } else {
            return true;
        }
}


void AbFileItem_setFormField(AbFileItem* this, bool state) {
}


// throws IOException
OutputStream* AbFileItem_getOutputStream(AbFileItem* this) {
        java_throw(java_exception_new("IOException", this->commonStrings->NOT_IMPLEMENTED));
}


FileItemHeaders* AbFileItem_getHeaders(AbFileItem* this) {
        java_throw(java_exception_new("RuntimeException", this->commonStrings->NOT_IMPLEMENTED));
}


void AbFileItem_setHeaders(AbFileItem* this, FileItemHeaders* fih) {
        java_throw(java_exception_new("RuntimeException", this->commonStrings->NOT_IMPLEMENTED));
}

