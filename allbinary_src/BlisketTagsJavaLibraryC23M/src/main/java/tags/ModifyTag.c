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
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"
#include "tags/HelperTag.h"

typedef struct ModifyTag ModifyTag;
struct ModifyTag {
    HelperTag base;
    LogUtil* logUtil;
};


ModifyTag* ModifyTag_new(TagHelperFactoryInterface* tagHelperFactoryInterface);

void ModifyTag_init(ModifyTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface);
const char* ModifyTag_insert(ModifyTag* this);
const char* ModifyTag_delete(ModifyTag* this);
const char* ModifyTag_update(ModifyTag* this);
int32_t ModifyTag_doStartTag(ModifyTag* this);

static void ModifyTag_initFields(ModifyTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void ModifyTag_init(ModifyTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface) {
        HelperTag_init(&this->base, tagHelperFactoryInterface);
        ModifyTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

ModifyTag* ModifyTag_new(TagHelperFactoryInterface* tagHelperFactoryInterface) {
    ModifyTag* this = calloc(1, sizeof(ModifyTag));
    ModifyTag_init(this, tagHelperFactoryInterface);
    return this;
}


// throws LicensingException
const char* ModifyTag_insert(ModifyTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(ModifyTag_getHelper(this));
            Method* method = Class_getMethod(helperClass, "insert", nullptr);
            const char* result = ((const char*) Method_invoke(method, ModifyTag_getHelper(this), nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to insert";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* ModifyTag_delete(ModifyTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(ModifyTag_getHelper(this));
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->delete, nullptr);
            const char* result = ((const char*) Method_invoke(method, ModifyTag_getHelper(this), nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to delete";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* ModifyTag_update(ModifyTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(ModifyTag_getHelper(this));
            Method* method = Class_getMethod(helperClass, "update", nullptr);
            const char* result = ((const char*) Method_invoke(method, ModifyTag_getHelper(this), nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t ModifyTag_doStartTag(ModifyTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                HttpServletRequest* request = ((HttpServletRequest*) JAVA_CALL(this->pageContext, getRequest));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Command: ");
                StringMaker_append(stringBuffer, ModifyTag_getCommand(this));
                StringMaker_append(stringBuffer, " Request URI: ");
                StringMaker_append(stringBuffer, HttpServletRequest_getRequestURI(request));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->base.tagStrings->DO_START_TAG);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            }
            if (ModifyTag_getCommand(this) != nullptr) {
                ModifyTag_setHelper(this);
                CommonStrings* commonStrings = CommonStrings_getInstance();
                if (JAVA_CALL(ModifyTag_getCommand(this), compareTo, commonStrings->INSERT) == 0) {
                    const char* output = ModifyTag_insert(this);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                    }
                } else if (JAVA_CALL(ModifyTag_getCommand(this), compareTo, commonStrings->DELETE) == 0) {
                    const char* output = ModifyTag_delete(this);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                    }
                } else if (JAVA_CALL(ModifyTag_getCommand(this), compareTo, commonStrings->UPDATE) == 0) {
                    const char* output = ModifyTag_update(this);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                    }
                }
            }
            return this->EVAL_BODY_INCLUDE;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return HelperTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return HelperTag_SKIP_BODY;
        } JAVA_END_TRY;
}

