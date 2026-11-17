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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/anyType/clazz/ClassUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/apache/commons/fileupload/FileItemStream.h"

typedef struct HttpFileUploadUtil HttpFileUploadUtil;
struct HttpFileUploadUtil {
    LogUtil* logUtil;
};

static HttpFileUploadUtil* HttpFileUploadUtil_instance;

HttpFileUploadUtil* HttpFileUploadUtil_new(void);
HttpFileUploadUtil* HttpFileUploadUtil_getInstance(void);

void HttpFileUploadUtil_init(HttpFileUploadUtil* this);
bool HttpFileUploadUtil_isValid(HttpFileUploadUtil* this, Any* anyType);
void HttpFileUploadUtil_log(FileItemStream* fileItem);
void HttpFileUploadUtil_log(FileItem* fileItem);

// Static fields with runtime initializers: call this once at startup
void HttpFileUploadUtil_staticInit(void) {
    HttpFileUploadUtil_instance = HttpFileUploadUtil_new();
}

static void HttpFileUploadUtil_initFields(HttpFileUploadUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


HttpFileUploadUtil* HttpFileUploadUtil_getInstance(void) {
        return HttpFileUploadUtil_instance;
}


void HttpFileUploadUtil_init(HttpFileUploadUtil* this) {
    HttpFileUploadUtil_initFields(this);
}

HttpFileUploadUtil* HttpFileUploadUtil_new(void) {
    HttpFileUploadUtil* this = calloc(1, sizeof(HttpFileUploadUtil));
    HttpFileUploadUtil_init(this);
    return this;
}


// throws Exception
bool HttpFileUploadUtil_isValid(HttpFileUploadUtil* this, Any* anyType) {
        if (anyType != nullptr && !(java_instanceof(anyType, "String"))) {
            if (java_instanceof(anyType, "FileItem")) {
                return true;
            } else {
                java_throw(java_exception_new("Exception", java_concat("Object Not Instance Of FileItem but is: ", java_string_of(ClassUtil_viewAll(anyType, CommonSeps_getInstance()->NEW_LINE)))));
            }
        }
        return false;
}


// throws Exception
void HttpFileUploadUtil_log(FileItemStream* fileItem) {
        LogUtil* logUtil = LogUtil_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, "FileItem Log:");
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Content Type:");
        StringMaker_append(stringBuffer, FileItemStream_getContentType(fileItem));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Field Name:");
        StringMaker_append(stringBuffer, FileItemStream_getFieldName(fileItem));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Name:");
        StringMaker_append(stringBuffer, FileItemStream_getName(fileItem));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Size:");
        StringMaker_append(stringBuffer, " Not Calculated Yet");
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTP)) {
            LogUtil_putF(logUtil, StringMaker_toString(stringBuffer), HttpFileUploadUtil_getInstance(), "log()");
        }
}


// Java overloaded method: C needs a different name
void HttpFileUploadUtil_log(FileItem* fileItem) {
        LogUtil* logUtil = LogUtil_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, "FileItem Log:");
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Content Type:");
        StringMaker_append(stringBuffer, FileItemStream_getContentType(fileItem));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Field Name:");
        StringMaker_append(stringBuffer, FileItemStream_getFieldName(fileItem));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Name:");
        StringMaker_append(stringBuffer, FileItemStream_getName(fileItem));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, "Size:");
        StringMaker_appendlong(stringBuffer, ((int64_t) FileItemStream_getSize(fileItem)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            LogUtil_putF(logUtil, StringMaker_toString(stringBuffer), HttpFileUploadUtil_getInstance(), "log()");
        }
}

