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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/lang/reflect/Method.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/BasicTextEmailHelperFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "tags/CustomTagSupport.h"

typedef struct BasicTextEmailTag BasicTextEmailTag;
struct BasicTextEmailTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* subject;
    const char* body;
};


BasicTextEmailTag* BasicTextEmailTag_new(void);

void BasicTextEmailTag_init(BasicTextEmailTag* this);
void BasicTextEmailTag_setSubject(BasicTextEmailTag* this, const char* value);
void BasicTextEmailTag_setBody(BasicTextEmailTag* this, const char* value);
const char* BasicTextEmailTag_send(BasicTextEmailTag* this);
int32_t BasicTextEmailTag_doStartTag(BasicTextEmailTag* this);

static void BasicTextEmailTag_initFields(BasicTextEmailTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->subject = nullptr;
    this->body = nullptr;
}


void BasicTextEmailTag_init(BasicTextEmailTag* this) {
    CustomTagSupport_init(&this->base);
    BasicTextEmailTag_initFields(this);
}

BasicTextEmailTag* BasicTextEmailTag_new(void) {
    BasicTextEmailTag* this = calloc(1, sizeof(BasicTextEmailTag));
    BasicTextEmailTag_init(this);
    return this;
}


void BasicTextEmailTag_setSubject(BasicTextEmailTag* this, const char* value) {
        this->subject = value;
}


void BasicTextEmailTag_setBody(BasicTextEmailTag* this, const char* value) {
        this->body = value;
}


const char* BasicTextEmailTag_send(BasicTextEmailTag* this) {
        JAVA_TRY {
            HashMap* propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(propertiesHashMap, "Subject", this->subject);
            HashMap_put(propertiesHashMap, "Body", this->body);
            Any* anyType = BasicTextEmailHelperFactory_getInstance(BasicTextEmailHelperFactory_new(), propertiesHashMap, this->pageContext);
            Method* method = JAVA_CALL(java_class_of(anyType), getMethod, "send", nullptr);
            Method_invoke(method, anyType, nullptr);
            return "Email Sent";
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to Send Email.";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "send()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t BasicTextEmailTag_doStartTag(BasicTextEmailTag* this) {
        JAVA_TRY {
            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, BasicTextEmailTag_send(this));
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}

