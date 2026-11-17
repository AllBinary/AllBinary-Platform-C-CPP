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
// package org.allbinary.logic.control.workflow

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/ServletConfig.h"
// #include "javax/servlet/ServletContext.h"
// #include "javax/servlet/ServletRequest.h"
// #include "javax/servlet/ServletResponse.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"

typedef struct RequestWorkFlowFactory RequestWorkFlowFactory;
struct RequestWorkFlowFactory {
    char unused;
};


RequestWorkFlowFactory* RequestWorkFlowFactory_new(void);

void RequestWorkFlowFactory_init(RequestWorkFlowFactory* this);
WorkFlowInterface* RequestWorkFlowFactory_getInstance(ServletRequest* request, ServletResponse* response, ServletConfig* servletConfig, ServletContext* servletContext);
WorkFlowInterface* RequestWorkFlowFactory_getInstance(HashMap* hashMap, PageContext* pageContext);


void RequestWorkFlowFactory_init(RequestWorkFlowFactory* this) {
}

RequestWorkFlowFactory* RequestWorkFlowFactory_new(void) {
    RequestWorkFlowFactory* this = calloc(1, sizeof(RequestWorkFlowFactory));
    RequestWorkFlowFactory_init(this);
    return this;
}


// throws Exception, LicensingException
WorkFlowInterface* RequestWorkFlowFactory_getInstance(ServletRequest* request, ServletResponse* response, ServletConfig* servletConfig, ServletContext* servletContext) {
        HttpServletRequest* httpRequest = ((HttpServletRequest*) request);
        const char* requestCommand = HttpServletRequest_getPathInfo(httpRequest);
        int32_t index = java_string_indexOf(requestCommand, AbPathData_getInstance()->SEPARATOR);
        const char* storeName = java_substring(requestCommand, 0, index);
        const char* requestName = java_substring(requestCommand, index, ((int32_t) strlen(requestCommand)));
        return JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), get, requestName, storeName);
}


// throws Exception, LicensingException
// Java overloaded method: C needs a different name
WorkFlowInterface* RequestWorkFlowFactory_getInstance(HashMap* hashMap, PageContext* pageContext) {
        const char* workFlowName = ((const char*) JAVA_CALL(PageContext_getRequest(pageContext), getParameter, WorkFlowData_getInstance()->NAME));
        WeblisketSession* weblisketSession = WeblisketSession_new(hashMap, pageContext);
        const char* storeName = WeblisketSession_getStoreName(weblisketSession);
        return JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), get, workFlowName, storeName);
}

