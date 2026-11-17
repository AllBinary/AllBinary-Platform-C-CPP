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
// #include "java/util/ArrayList.h"
// #include "java/util/List.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/logic/communication/http/AbFileItemFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/apache/commons/fileupload/FileItemIterator.h"
#include "org/apache/commons/fileupload/FileItemStream.h"
#include "org/apache/commons/fileupload/FileItemUtil.h"

typedef struct AbFileUploadFactory AbFileUploadFactory;
struct AbFileUploadFactory {
    LogUtil* logUtil;
};

static AbFileUploadFactory* AbFileUploadFactory_instance;

AbFileUploadFactory* AbFileUploadFactory_new(void);
AbFileUploadFactory* AbFileUploadFactory_getInstance(void);

void AbFileUploadFactory_init(AbFileUploadFactory* this);
List* AbFileUploadFactory_getFileItemStreamList(AbFileUploadFactory* this, HttpServletRequest* httpServletRequest);
List* AbFileUploadFactory_getFileItemList(AbFileUploadFactory* this, HttpServletRequest* httpServletRequest);

// Static fields with runtime initializers: call this once at startup
void AbFileUploadFactory_staticInit(void) {
    AbFileUploadFactory_instance = AbFileUploadFactory_new();
}

static void AbFileUploadFactory_initFields(AbFileUploadFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


AbFileUploadFactory* AbFileUploadFactory_getInstance(void) {
        return AbFileUploadFactory_instance;
}


void AbFileUploadFactory_init(AbFileUploadFactory* this) {
    AbFileUploadFactory_initFields(this);
}

AbFileUploadFactory* AbFileUploadFactory_new(void) {
    AbFileUploadFactory* this = calloc(1, sizeof(AbFileUploadFactory));
    AbFileUploadFactory_init(this);
    return this;
}


// throws Exception
List* AbFileUploadFactory_getFileItemStreamList(AbFileUploadFactory* this, HttpServletRequest* httpServletRequest) {
        JAVA_TRY {
            AbFileUpload* fileUpload = AbFileUpload_new(AbFileItemFactory_new());
            FileItemIterator* iterator = AbFileUpload_getItemIterator(fileUpload, httpServletRequest);
            List* items = ArrayList_new();
            while (FileItemIterator_hasNext(iterator)) {
                FileItemStream* fileItemStream = FileItemIterator_next(iterator);
                HttpFileUploadUtil_log(fileItemStream);
                AbFileItem* fileItem = AbFileItem_new(FileItemStream_getName(fileItemStream), FileItemStream_getFieldName(fileItemStream), FileItemUtil_getBytes(FileItemUtil_getInstance(), fileItemStream));
                List_add(items, fileItem);
            }
            return items;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "get()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
List* AbFileUploadFactory_getFileItemList(AbFileUploadFactory* this, HttpServletRequest* httpServletRequest) {
        JAVA_TRY {
            AbFileUpload* abFileUpload = AbFileUpload_new(AbFileItemFactory_new());
            return AbFileUpload_parseRequest(abFileUpload, httpServletRequest);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "get()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

