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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/List.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/file/upload/AbFileUploadFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/apache/commons/fileupload/FileUploadBase/InvalidContentTypeException.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"

typedef struct MultipartRequestParams MultipartRequestParams;
struct MultipartRequestParams {
    RequestParams base;
    LogUtil* logUtil;
    bool special;
};


MultipartRequestParams* MultipartRequestParams_new(HttpServletRequest* request);

void MultipartRequestParams_init(MultipartRequestParams* this, HttpServletRequest* request);

MultipartRequestParams* MultipartRequestParams_new1(PageContext* pageContext);
void MultipartRequestParams_init1(MultipartRequestParams* this, PageContext* pageContext);
void MultipartRequestParams_setSpecial(MultipartRequestParams* this);
static void MultipartRequestParams_processMultipartRequest(MultipartRequestParams* this, HttpServletRequest* request);
HashMap* MultipartRequestParams_toHashMap(MultipartRequestParams* this);

static void MultipartRequestParams_initFields(MultipartRequestParams* this) {
    this->logUtil = LogUtil_getInstance();
    this->special = false;
}


void MultipartRequestParams_init(MultipartRequestParams* this, HttpServletRequest* request) {
        RequestParams_init(&this->base);
        MultipartRequestParams_initFields(this);
        MultipartRequestParams_processMultipartRequest(this, request);
}

MultipartRequestParams* MultipartRequestParams_new(HttpServletRequest* request) {
    MultipartRequestParams* this = calloc(1, sizeof(MultipartRequestParams));
    MultipartRequestParams_init(this, request);
    return this;
}


void MultipartRequestParams_init1(MultipartRequestParams* this, PageContext* pageContext) {
        RequestParams_init(&this->base);
        MultipartRequestParams_initFields(this);
        MultipartRequestParams_processMultipartRequest(this, ((HttpServletRequest*) PageContext_getRequest(pageContext)));
}

MultipartRequestParams* MultipartRequestParams_new1(PageContext* pageContext) {
    MultipartRequestParams* this = calloc(1, sizeof(MultipartRequestParams));
    MultipartRequestParams_init1(this, pageContext);
    return this;
}


void MultipartRequestParams_setSpecial(MultipartRequestParams* this) {
        this->special = true;
}


static void MultipartRequestParams_processMultipartRequest(MultipartRequestParams* this, HttpServletRequest* request) {
        JAVA_TRY {
            HashMap* specialRequest = StdUtil_createHashMap(StdUtil_getInstance());
            List* multipartRequestList = AbFileUploadFactory_getFileItemStreamList(AbFileUploadFactory_getInstance(), request);
            if (multipartRequestList != nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, java_concat("FileItem List Size: ", java_string_of(List_size(multipartRequestList))), this, "processMultipartRequest()");
                }
                Any** fileItemArray = List_toArray(multipartRequestList);
                int32_t size = java_array_length(fileItemArray);
                for (int32_t index = 0; index < size; index++) {
                    FileItem* fileItem = ((FileItem*) fileItemArray[index]);
                    const char* name = FileItem_getName(fileItem);
                    if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), name)) {
                        HashMap_put(specialRequest, FileItem_getFieldName(fileItem), FileItem_getString(fileItem));
                    } else {
                        HashMap_put(specialRequest, FileItem_getFieldName(fileItem), fileItem);
                    }
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    LogUtil_putF(this->logUtil, java_concat("Special Request Data: ", HashMap_toString(specialRequest)), this, "processMultipartRequest()");
                }
                MultipartRequestParams_setSpecial(this);
                MultipartRequestParams_setMap(this, specialRequest);
            }
        } JAVA_CATCH(InvalidContentTypeException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                LogUtil_putF(this->logUtil, "Using Normal RequestParams", this, "processMultipartRequest()");
            }
            RequestParams_setMap((&this->base), HttpServletRequest_getParameterMap(request));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUESTERROR)) {
                LogUtil_putF(this->logUtil, "Should Not Occur", this, "processMultipartRequest()");
            }
            RequestParams_setMap((&this->base), HttpServletRequest_getParameterMap(request));
        } JAVA_END_TRY;
}


// throws Exception
HashMap* MultipartRequestParams_toHashMap(MultipartRequestParams* this) {
        if (this->special) {
            return ((HashMap*) MultipartRequestParams_getMap(this));
        } else {
            return RequestParams_toHashMap((&this->base));
        }
}

