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
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/TransformTag.h"

typedef struct XmlValidationTransformTag XmlValidationTransformTag;
struct XmlValidationTransformTag {
    TransformTag base;
    LogUtil* logUtil;
};


XmlValidationTransformTag* XmlValidationTransformTag_new(void);

void XmlValidationTransformTag_init(XmlValidationTransformTag* this);
static bool XmlValidationTransformTag_isValid(XmlValidationTransformTag* this);
int32_t XmlValidationTransformTag_doStartTag(XmlValidationTransformTag* this);

static void XmlValidationTransformTag_initFields(XmlValidationTransformTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void XmlValidationTransformTag_init(XmlValidationTransformTag* this) {
    TransformTag_init(&this->base);
    XmlValidationTransformTag_initFields(this);
}

XmlValidationTransformTag* XmlValidationTransformTag_new(void) {
    XmlValidationTransformTag* this = calloc(1, sizeof(XmlValidationTransformTag));
    XmlValidationTransformTag_init(this);
    return this;
}


// throws Exception
static bool XmlValidationTransformTag_isValid(XmlValidationTransformTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(XmlValidationTransformTag_getHelper(this));
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->IS_VALID, nullptr);
            bool result = ((bool) Method_invoke(method, XmlValidationTransformTag_getHelper(this), nullptr));
            return Boolean_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->IS_VALID, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t XmlValidationTransformTag_doStartTag(XmlValidationTransformTag* this) {
        JAVA_TRY {
            XmlValidationTransformTag_setHelper(this);
            if (XmlValidationTransformTag_isValid(this)) {
                TransformTag_doStartTag((&this->base));
                return this->EVAL_BODY_INCLUDE;
            } else {
                TransformTag_doStartTag((&this->base));
                return this->SKIP_BODY;
            }
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TransformTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

