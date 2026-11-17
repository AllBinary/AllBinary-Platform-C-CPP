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
// package org.allbinary.servlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "javax/servlet/ServletException.h"
// #include "javax/servlet/http/HttpServlet.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/http/HttpServletResponse.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/CloudStreamUtil.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CloudImageServlet CloudImageServlet;
struct CloudImageServlet {
    HttpServlet base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


CloudImageServlet* CloudImageServlet_new(void);
void CloudImageServlet_processRequest(CloudImageServlet* this, HttpServletRequest* request, HttpServletResponse* response);
void CloudImageServlet_doGet(CloudImageServlet* this, HttpServletRequest* request, HttpServletResponse* response);
void CloudImageServlet_doPost(CloudImageServlet* this, HttpServletRequest* request, HttpServletResponse* response);
const char* CloudImageServlet_getServletInfo(CloudImageServlet* this);

static void CloudImageServlet_initFields(CloudImageServlet* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void CloudImageServlet_init(CloudImageServlet* this) {
    HttpServlet_init(&this->base);
    CloudImageServlet_initFields(this);
}

CloudImageServlet* CloudImageServlet_new(void) {
    CloudImageServlet* this = calloc(1, sizeof(CloudImageServlet));
    CloudImageServlet_init(this);
    return this;
}


// throws ServletException, IOException
void CloudImageServlet_processRequest(CloudImageServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        InputStream* inputStream = nullptr;
        JAVA_TRY {
            BlisketServletUtil_init(BlisketServletUtil_getInstance(), request);
            const char* requestURI = HttpServletRequest_getRequestURI(request);
            AbFile* file = AbFile_createAbFile(java_concat(java_string_of(JAVA_CALL(HttpServlet_URLGLOBALS, getWebappPath)), requestURI));
            inputStream = CloudStreamUtil_getFile(CloudStreamUtil_getInstance(), file);
            ByteArrayOutputStream* outputStream = ByteArrayOutputStream_new(8000);
            int8_t* byteArray = StreamUtil_getByteArray(StreamUtil_getInstance(), inputStream, outputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384)));
            HttpServletResponse_setContentType(response, "image/jpeg;charset=utf-8");
            JAVA_CALL(HttpServletResponse_getOutputStream(response), write, byteArray);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "processRequest()", e);
            }
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), HttpServletResponse_getOutputStream(response));
            if (!StreamUtil_close(StreamUtil_getInstance(), inputStream)) {
                HttpServletResponse_sendError(response, HttpServletResponse_SC_NOT_FOUND);
            }
        } JAVA_END_TRY;
}


// throws ServletException, IOException
void CloudImageServlet_doGet(CloudImageServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        CloudImageServlet_processRequest(this, request, response);
}


// throws ServletException, IOException
void CloudImageServlet_doPost(CloudImageServlet* this, HttpServletRequest* request, HttpServletResponse* response) {
        CloudImageServlet_processRequest(this, request, response);
}


const char* CloudImageServlet_getServletInfo(CloudImageServlet* this) {
        return "Serves Up Cloud Image";
}

