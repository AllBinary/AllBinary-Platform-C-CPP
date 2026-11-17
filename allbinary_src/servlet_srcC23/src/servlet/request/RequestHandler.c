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
// package servlet.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/control/workflow/RequestWorkFlowFactory.h"
#include "servlet/request/HttpServlet.h"

typedef struct RequestHandler RequestHandler;
struct RequestHandler {
    HttpServlet base;
    LogUtil* logUtil;
};


RequestHandler* RequestHandler_new(void);
void RequestHandler_init(RequestHandler* this, ServletConfig* config);
void RequestHandler_destroy(RequestHandler* this);
void RequestHandler_processRequest(RequestHandler* this, HttpServletRequest* request, HttpServletResponse* response);
void RequestHandler_doGet(RequestHandler* this, HttpServletRequest* request, HttpServletResponse* response);
void RequestHandler_doPost(RequestHandler* this, HttpServletRequest* request, HttpServletResponse* response);
const char* RequestHandler_getServletInfo(RequestHandler* this);

static void RequestHandler_initFields(RequestHandler* this) {
    this->logUtil = LogUtil_getInstance();
}

void RequestHandler_init(RequestHandler* this) {
    HttpServlet_init(&this->base);
    RequestHandler_initFields(this);
}

RequestHandler* RequestHandler_new(void) {
    RequestHandler* this = calloc(1, sizeof(RequestHandler));
    RequestHandler_init(this);
    return this;
}


// throws ServletException
void RequestHandler_init(RequestHandler* this, ServletConfig* config) {
        HttpServlet_init((&this->base), config);
}


void RequestHandler_destroy(RequestHandler* this) {
}


// throws ServletException, IOException
void RequestHandler_processRequest(RequestHandler* this, HttpServletRequest* request, HttpServletResponse* response) {
        JAVA_TRY {
            HttpServletResponse_setContentType(response, "text/html");
            PrintWriter* out = HttpServletResponse_getWriter(response);
            WorkFlowInterface* workflowInterface = RequestWorkFlowFactory_getInstance(((ServletRequest*) request), ((ServletResponse*) response), RequestHandler_getServletConfig(this), RequestHandler_getServletContext(this));
            if (workflowInterface != nullptr) {
                PrintWriter_print(out, WorkFlowInterface_process(workflowInterface));
            }
            PrintWriter_flush(out);
            PrintWriter_close(out);
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SERVLETERROR)) {
                LogUtil_put(this->logUtil, "Servlet LicensingException", this, "processRequest()", e);
            }
            HttpServletResponse_sendRedirect(response, this->base.abcs->globals->URLGLOBALS->LICENSEERRORPAGE);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SERVLETERROR)) {
                LogUtil_put(this->logUtil, "Servlet Exception", this, "processRequest()", e);
            }
            HttpServletResponse_sendRedirect(response, this->base.abcs->globals->URLGLOBALS->ERRORPAGE);
        } JAVA_END_TRY;
}


// throws ServletException, IOException
void RequestHandler_doGet(RequestHandler* this, HttpServletRequest* request, HttpServletResponse* response) {
        RequestHandler_processRequest(this, request, response);
}


// throws ServletException, IOException
void RequestHandler_doPost(RequestHandler* this, HttpServletRequest* request, HttpServletResponse* response) {
        RequestHandler_processRequest(this, request, response);
}


const char* RequestHandler_getServletInfo(RequestHandler* this) {
        return "WorkFlow Request Handler";
}

