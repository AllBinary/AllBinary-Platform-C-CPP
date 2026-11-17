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
// package org.allbinary.servlet.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/ServletException.h"
// #include "javax/servlet/http/HttpServlet.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/http/HttpServletResponse.h"
#include "admin/taghelpers/AuthenticationHelper.h"
#include "admin/taghelpers/AuthenticationHelperFactory.h"
#include "admin/taghelpers/AuthenticationHelperUtil.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/file/upload/FileUploadData.h"
#include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
#include "org/allbinary/logic/communication/http/request/HttpRequestUtil.h"
#include "org/allbinary/logic/communication/http/request/MultipartRequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/servlet/BlisketServletUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/apache/commons/fileupload/FileItem.h"

typedef struct UploadFileServlet UploadFileServlet;
struct UploadFileServlet {
    HttpServlet base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* requestHashMap;
    const char* fileName;
};


UploadFileServlet* UploadFileServlet_new(void);
void UploadFileServlet_processRequest(UploadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response);
static void UploadFileServlet_saveFile(UploadFileServlet* this, const char* filePath);
void UploadFileServlet_doGet(UploadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response);
void UploadFileServlet_doPost(UploadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response);
const char* UploadFileServlet_getServletInfo(UploadFileServlet* this);

static void UploadFileServlet_initFields(UploadFileServlet* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->requestHashMap = nullptr;
    this->fileName = nullptr;
}

void UploadFileServlet_init(UploadFileServlet* this) {
    HttpServlet_init(&this->base);
    UploadFileServlet_initFields(this);
}

UploadFileServlet* UploadFileServlet_new(void) {
    UploadFileServlet* this = calloc(1, sizeof(UploadFileServlet));
    UploadFileServlet_init(this);
    return this;
}


// throws ServletException, IOException
void UploadFileServlet_processRequest(UploadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        bool isError = false;
        InputStream* inputStream = nullptr;
        JAVA_TRY {
            BlisketServletUtil_init(BlisketServletUtil_getInstance(), request);
            this->requestHashMap = MultipartRequestParams_toHashMap(MultipartRequestParams_new(request));
            const char* filePath = ((const char*) HashMap_get(this->requestHashMap, FileUploadData_getInstance()->UPLOAD_TO_FILE_PATH));
            if (filePath == nullptr) {
                isError = true;
                HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
                return;
            }
            HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
            AuthenticationHelper* authenticationHelper = ((AuthenticationHelper*) AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), hashMap, request));
            if (AuthenticationHelper_isAuthenticated(authenticationHelper)) {
                if (AuthenticationHelperUtil_isAuthorized(AuthenticationHelperUtil_getInstance(), authenticationHelper, filePath)) {
                    UploadFileServlet_saveFile(this, filePath);
                    HttpServletResponse_setContentType(response, "text/plain");
                    JAVA_CALL(HttpServletResponse_getOutputStream(response), write, java_string_getBytes("OK!"));
                } else {
                    isError = true;
                    HttpServletResponse_sendError(response, HttpServletResponse_SC_UNAUTHORIZED, "You are not Authorized");
                }
            } else {
                isError = true;
                HttpServletResponse_sendError(response, HttpServletResponse_SC_UNAUTHORIZED, "Please Login");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processRequest()", e);
            }
            isError = true;
            HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
        } JAVA_FINALLY {
            if (!isError) {
                StreamUtil_close(StreamUtil_getInstance(), HttpServletResponse_getOutputStream(response));
            }
            if (!StreamUtil_close(StreamUtil_getInstance(), inputStream)) {
            }
        } JAVA_END_TRY;
}


// throws Exception
static void UploadFileServlet_saveFile(UploadFileServlet* this, const char* filePath) {
        AbFileOutputStream* fileOutputStream = nullptr;
        JAVA_TRY {
            FileItem* fileItem = ((FileItem*) HashMap_get(this->requestHashMap, FileUploadData_getInstance()->FILE_DATA));
            if (fileItem != nullptr && FileItem_getSize(fileItem) > 1) {
                this->fileName = HttpRequestUtil_generateFileName(HttpRequestUtil_getInstance(), FileItem_getName(fileItem));
                if (java_string_endsWith(filePath, "/") || java_string_endsWith(filePath, "\\")) {
                    filePath = java_concat(filePath, this->fileName);
                }
                AbFile* file = AbFile_createAbFile(java_concat(java_string_of(JAVA_CALL(HttpServlet_URLGLOBALS, getWebappPath)), filePath));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Uploaded File: ");
                    StringMaker_append(stringBuffer, this->fileName);
                    StringMaker_append(stringBuffer, " New File: ");
                    StringMaker_append(stringBuffer, AbFile_getPath(file));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "saveFile()");
                }
                HttpFileUploadUtil_log(fileItem);
                int8_t* byteArray = FileItem_get(fileItem);
                if (AbFile_isFile(file)) {
                    AbFile_delete(file);
                    AbFile_createNewFile(file);
                }
                fileOutputStream = AbFileOutputStream_createFromAbFile(file);
                AbFileOutputStream_write(fileOutputStream, byteArray);
            }
        } JAVA_FINALLY {
            if (fileOutputStream != nullptr) {
                AbFileOutputStream_close(fileOutputStream);
            }
        } JAVA_END_TRY;
}


// throws ServletException, IOException
void UploadFileServlet_doGet(UploadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        UploadFileServlet_processRequest(this, request, response);
}


// throws ServletException, IOException
void UploadFileServlet_doPost(UploadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        UploadFileServlet_processRequest(this, request, response);
}


const char* UploadFileServlet_getServletInfo(UploadFileServlet* this) {
        return "Upload Cloud Files";
}

