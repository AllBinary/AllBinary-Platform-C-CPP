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
// #include "javax/servlet/RequestDispatcher.h"
// #include "javax/servlet/ServletException.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/http/HttpServletResponse.h"
// #include "javax/servlet/jsp/JspTagException.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"

typedef struct AbResponseHandler AbResponseHandler;
struct AbResponseHandler {
    LogUtil* logUtil;
};


AbResponseHandler* AbResponseHandler_new(void);

void AbResponseHandler_init(AbResponseHandler* this);
void AbResponseHandler_sendJspTagRedirect(PageContext* pageContext, JavaException* e);
void AbResponseHandler_sendServletRedirect(PageContext* pageContext, JavaException* e);
void AbResponseHandler_sendJspTagLicensingRedirect(PageContext* pageContext, JavaException* e);
void AbResponseHandler_sendServletLicensingRedirect(PageContext* pageContext, JavaException* e);
void AbResponseHandler_sendRedirect(PageContext* pageContext, const char* page);

static void AbResponseHandler_initFields(AbResponseHandler* this) {
    this->logUtil = LogUtil_getInstance();
}


void AbResponseHandler_init(AbResponseHandler* this) {
    AbResponseHandler_initFields(this);
}

AbResponseHandler* AbResponseHandler_new(void) {
    AbResponseHandler* this = calloc(1, sizeof(AbResponseHandler));
    AbResponseHandler_init(this);
    return this;
}


// throws JspTagException
void AbResponseHandler_sendJspTagRedirect(PageContext* pageContext, JavaException* e) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->JSPTAGERROR)) {
                LogUtil_put(logUtil, "Jsp Tag Exception", "AbResponseHandler", "sendJspRedirect()", e);
            }
            AbResponseHandler_sendRedirect(pageContext, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->ERRORPAGE);
        } JAVA_CATCH(Exception, e2) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->LICENSINGERROR)) {
                LogUtil_put(logUtil, "Exception in Redirect Handling", "AbResponseHandler", "sendJspRedirect", e);
            }
            java_throw(java_exception_new("JspTagException", ""));
        } JAVA_END_TRY;
}


// throws ServletException
void AbResponseHandler_sendServletRedirect(PageContext* pageContext, JavaException* e) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->JSPTAGERROR)) {
                LogUtil_put(logUtil, "Jsp Tag Exception", "AbResponseHandler", "sendJspRedirect()", e);
            }
            AbResponseHandler_sendRedirect(pageContext, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->ERRORPAGE);
        } JAVA_CATCH(Exception, e2) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->LICENSINGERROR)) {
                LogUtil_put(logUtil, "Exception in Redirect Handling", "AbResponseHandler", "sendJspRedirect", e);
            }
            java_throw(java_exception_new("ServletException", ""));
        } JAVA_END_TRY;
}


// throws JspTagException
void AbResponseHandler_sendJspTagLicensingRedirect(PageContext* pageContext, JavaException* e) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->JSPTAGERROR)) {
                LogUtil_put(logUtil, "Licensing Exception", "AbResponseHandler", "sendJspTagLicensingRedirect()", e);
            }
            AbResponseHandler_sendRedirect(pageContext, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->LICENSEERRORPAGE);
        } JAVA_CATCH(Exception, e2) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->LICENSINGERROR)) {
                LogUtil_put(logUtil, "Exception in Redirect Handling", "AbResponseHandler", "sendJspTagLicensingRedirect", e);
            }
            java_throw(java_exception_new("JspTagException", ""));
        } JAVA_END_TRY;
}


// throws ServletException
void AbResponseHandler_sendServletLicensingRedirect(PageContext* pageContext, JavaException* e) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->JSPTAGERROR)) {
                LogUtil_put(logUtil, "Licensing Exception", "AbResponseHandler", "sendServletLicensingRedirect()", e);
            }
            AbResponseHandler_sendRedirect(pageContext, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->LICENSEERRORPAGE);
        } JAVA_CATCH(Exception, e2) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->LICENSINGERROR)) {
                LogUtil_put(logUtil, "Exception in Redirect Handling", "AbResponseHandler", "sendServletLicensingRedirect", e);
            }
            java_throw(java_exception_new("ServletException", ""));
        } JAVA_END_TRY;
}


// throws Exception
void AbResponseHandler_sendRedirect(PageContext* pageContext, const char* page) {
        HttpServletRequest* request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        HttpServletResponse* response = ((HttpServletResponse*) PageContext_getResponse(pageContext));
        RequestDispatcher* requestDispatcher = HttpServletRequest_getRequestDispatcher(request, page);
        if (HttpServletResponse_isCommitted(response)) {
            HttpServletResponse_sendRedirect(response, page);
        } else {
            JAVA_TRY {
                RequestDispatcher_forward(requestDispatcher, request, response);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(PageContext_getOut(pageContext), print, java_concat("Error: ", page));
            } JAVA_END_TRY;
        }
}

