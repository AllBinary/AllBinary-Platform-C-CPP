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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/CloudStreamUtil.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/servlet/BlisketServletUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct DownloadFileServlet DownloadFileServlet;
struct DownloadFileServlet {
    HttpServlet base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* DOWNLOAD;
    int32_t DEFAULT_BUFFER_SIZE;
};


DownloadFileServlet* DownloadFileServlet_new(void);
void DownloadFileServlet_processRequest(DownloadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response);
void DownloadFileServlet_doGet(DownloadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response);
void DownloadFileServlet_doPost(DownloadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response);
const char* DownloadFileServlet_getServletInfo(DownloadFileServlet* this);

static void DownloadFileServlet_initFields(DownloadFileServlet* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->DOWNLOAD = "download";
    this->DEFAULT_BUFFER_SIZE = 16384;
}

void DownloadFileServlet_init(DownloadFileServlet* this) {
    HttpServlet_init(&this->base);
    DownloadFileServlet_initFields(this);
}

DownloadFileServlet* DownloadFileServlet_new(void) {
    DownloadFileServlet* this = calloc(1, sizeof(DownloadFileServlet));
    DownloadFileServlet_init(this);
    return this;
}


// throws ServletException, IOException
void DownloadFileServlet_processRequest(DownloadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        InputStream* inputStream = nullptr;
        JAVA_TRY {
            BlisketServletUtil_init(BlisketServletUtil_getInstance(), request);
            const char* requestPath = HttpServletRequest_getRequestURI(request);
            if (requestPath == nullptr) {
                HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
                return;
            }
            int32_t beginIndex = java_string_indexOf(requestPath, this->DOWNLOAD);
            const char* filePath = StringUtil_getInstance()->EMPTY_STRING;
            if (beginIndex >= 0) {
                filePath = java_substring(requestPath, beginIndex + ((int32_t) strlen(this->DOWNLOAD)), (int32_t) strlen(requestPath));
            } else {
                HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
            }
            AbFile* file = AbFile_createAbFile(java_concat(java_string_of(JAVA_CALL(HttpServlet_URLGLOBALS, getWebappPath)), filePath));
            if (!AbFile_exists(file)) {
                HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
                return;
            }
            HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
            AuthenticationHelper* authenticationHelper = ((AuthenticationHelper*) AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory_new(), hashMap, request));
            if (AuthenticationHelper_isAuthenticated(authenticationHelper)) {
                if (AuthenticationHelperUtil_isAuthorized(AuthenticationHelperUtil_getInstance(), authenticationHelper, filePath)) {
                    inputStream = CloudStreamUtil_getFile(CloudStreamUtil_getInstance(), file);
                    const char* contentType = JAVA_CALL(DownloadFileServlet_getServletContext(this), getMimeType, AbFile_getName(file));
                    if (contentType == nullptr) {
                        contentType = "application/octet-stream";
                    }
                    HttpServletResponse_reset(response);
                    HttpServletResponse_setBufferSize(response, this->DEFAULT_BUFFER_SIZE);
                    HttpServletResponse_setContentType(response, contentType);
                    HttpServletResponse_setHeader(response, "Content-Length", java_string_of(AbFile_length(file)));
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "attachment; filename=\"");
                    StringMaker_append(stringBuffer, AbFile_getName(file));
                    StringMaker_append(stringBuffer, CommonSeps_getInstance()->QUOTE);
                    HttpServletResponse_setHeader(response, "Content-Disposition", StringMaker_toString(stringBuffer));
                    StreamUtil_get(StreamUtil_getInstance(), inputStream, HttpServletResponse_getOutputStream(response), ((int8_t*) java_array_new(sizeof(int8_t), 16348)));
                } else {
                    HttpServletResponse_sendError(response, HttpServletResponse_SC_UNAUTHORIZED, "You are not Authorized");
                }
            } else {
                HttpServletResponse_sendError(response, HttpServletResponse_SC_UNAUTHORIZED, "Please Login");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processRequest()", e);
            }
            HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), HttpServletResponse_getOutputStream(response));
            if (!StreamUtil_close(StreamUtil_getInstance(), inputStream)) {
            }
        } JAVA_END_TRY;
}


// throws ServletException, IOException
void DownloadFileServlet_doGet(DownloadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        DownloadFileServlet_processRequest(this, request, response);
}


// throws ServletException, IOException
void DownloadFileServlet_doPost(DownloadFileServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        DownloadFileServlet_processRequest(this, request, response);
}


const char* DownloadFileServlet_getServletInfo(DownloadFileServlet* this) {
        return "Serves Up Cloud Files";
}

