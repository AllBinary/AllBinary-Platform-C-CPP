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
// package tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/lang/reflect/Method.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "taghelpers/ValidatedViewHelperFactory.h"
#include "tags/TransformTag.h"

typedef struct ValidationTransformTag ValidationTransformTag;
struct ValidationTransformTag {
    TransformTag base;
    LogUtil* logUtil;
    const char* xslFile;
    bool logic;
};


ValidationTransformTag* ValidationTransformTag_new(void);

void ValidationTransformTag_init(ValidationTransformTag* this);
void ValidationTransformTag_setXsl(ValidationTransformTag* this, const char* value);
void ValidationTransformTag_setLogic(ValidationTransformTag* this, bool logic);
static bool ValidationTransformTag_isValid(ValidationTransformTag* this);
static const char* ValidationTransformTag_validationInfo(ValidationTransformTag* this);
int32_t ValidationTransformTag_doStartTag(ValidationTransformTag* this);
int32_t ValidationTransformTag_doEndTag(ValidationTransformTag* this);

static void ValidationTransformTag_initFields(ValidationTransformTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->xslFile = nullptr;
    
}


void ValidationTransformTag_init(ValidationTransformTag* this) {
        TransformTag_init(&this->base, ValidatedViewHelperFactory_new());
        ValidationTransformTag_initFields(this);
        this->logic = true;
}

ValidationTransformTag* ValidationTransformTag_new(void) {
    ValidationTransformTag* this = calloc(1, sizeof(ValidationTransformTag));
    ValidationTransformTag_init(this);
    return this;
}


void ValidationTransformTag_setXsl(ValidationTransformTag* this, const char* value) {
        this->xslFile = value;
        ValidationTransformTag_setTemplateFile(this, this->xslFile);
}


void ValidationTransformTag_setLogic(ValidationTransformTag* this, bool logic) {
        this->logic = logic;
}


// throws Exception
static bool ValidationTransformTag_isValid(ValidationTransformTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(ValidationTransformTag_getHelper(this));
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->IS_VALID, nullptr);
            bool result = ((bool) Method_invoke(method, ValidationTransformTag_getHelper(this), nullptr));
            return Boolean_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->IS_VALID, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
static const char* ValidationTransformTag_validationInfo(ValidationTransformTag* this) {
        JAVA_TRY {
            const char* addressHelperClass = java_class_of(ValidationTransformTag_getHelper(this));
            Method* method = Class_getMethod(addressHelperClass, "validationInfo", nullptr);
            const char* result = ((const char*) Method_invoke(method, ValidationTransformTag_getHelper(this), nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "validationInfo()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t ValidationTransformTag_doStartTag(ValidationTransformTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                StringMaker* stringBuffer = StringMaker_new();
                HttpServletRequest* request = ((HttpServletRequest*) JAVA_CALL(this->pageContext, getRequest));
                StringMaker_append(stringBuffer, "ValidationViewTag Start For: ");
                StringMaker_append(stringBuffer, ValidationTransformTag_getName(this));
                StringMaker_append(stringBuffer, "\nView FIle: ");
                StringMaker_append(stringBuffer, ValidationTransformTag_getObjectFile(this));
                StringMaker_append(stringBuffer, "\nRequest URI: ");
                StringMaker_append(stringBuffer, HttpServletRequest_getRequestURI(request));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->base.tagStrings->DO_START_TAG);
            }
            ValidationTransformTag_setHelper(this);
            if (ValidationTransformTag_isValid(this)) {
                TransformTag_doStartTag((&this->base));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "View File: ");
                    StringMaker_append(stringBuffer, ValidationTransformTag_getObjectFile(this));
                    StringMaker_append(stringBuffer, "\nLogic includes body if true=");
                    StringMaker_appendboolean(stringBuffer, this->logic);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->base.tagStrings->DO_START_TAG);
                }
                if (this->logic) {
                    return TransformTag_EVAL_BODY_INCLUDE;
                } else {
                    return TransformTag_SKIP_BODY;
                }
            } else {
                JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, ValidationTransformTag_validationInfo(this));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "View File: ");
                    StringMaker_append(stringBuffer, ValidationTransformTag_getObjectFile(this));
                    StringMaker_append(stringBuffer, "\nisValid()=false");
                    StringMaker_append(stringBuffer, "\nLogic skips body if true=");
                    StringMaker_appendboolean(stringBuffer, this->logic);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->base.tagStrings->DO_START_TAG);
                }
                if (this->logic) {
                    return TransformTag_SKIP_BODY;
                } else {
                    return TransformTag_EVAL_BODY_INCLUDE;
                }
            }
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TransformTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}


int32_t ValidationTransformTag_doEndTag(ValidationTransformTag* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, "Tag Ended", this, "doEndTag");
        }
        this->logic = true;
        return TransformTag_doEndTag((&this->base));
}

