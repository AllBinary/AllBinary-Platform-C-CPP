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
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/StaticPagesHelperFactory.h"
#include "admin/taghelpers/StaticPagesRequestHelperFactory.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchData.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "admin/tags/TableTag.h"

typedef struct StaticPagesTag StaticPagesTag;
struct StaticPagesTag {
    TableTag base;
    LogUtil* logUtil;
    const char* xslFile;
};


StaticPagesTag* StaticPagesTag_new(void);

void StaticPagesTag_init(StaticPagesTag* this);
void StaticPagesTag_setXsl(StaticPagesTag* this, const char* value);
const char* StaticPagesTag_generateStaticPages(StaticPagesTag* this);
const char* StaticPagesTag_makePublic(StaticPagesTag* this);
int32_t StaticPagesTag_doStartTag(StaticPagesTag* this);

static void StaticPagesTag_initFields(StaticPagesTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->xslFile = nullptr;
}


void StaticPagesTag_init(StaticPagesTag* this) {
    TableTag_init(&this->base);
    StaticPagesTag_initFields(this);
        StaticPagesTag_setTagHelperFactory(this, StaticPagesHelperFactory_new());
        StaticPagesTag_setTagRequestHelperFactory(this, StaticPagesRequestHelperFactory_new());
}

StaticPagesTag* StaticPagesTag_new(void) {
    StaticPagesTag* this = calloc(1, sizeof(StaticPagesTag));
    StaticPagesTag_init(this);
    return this;
}


void StaticPagesTag_setXsl(StaticPagesTag* this, const char* value) {
        this->xslFile = value;
}


// throws LicensingException
const char* StaticPagesTag_generateStaticPages(StaticPagesTag* this) {
        JAVA_TRY {
            Any* anyType = StaticPagesRequestHelperFactory_getInstance(StaticPagesRequestHelperFactory_new(), StaticPagesTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "generateStaticPages", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to generate staticpages table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateStaticPages()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* StaticPagesTag_makePublic(StaticPagesTag* this) {
        JAVA_TRY {
            Any* anyType = StaticPagesRequestHelperFactory_getInstance(StaticPagesRequestHelperFactory_new(), StaticPagesTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "makePublic", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to makePublic";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "makePublic()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t StaticPagesTag_doStartTag(StaticPagesTag* this) {
        JAVA_TRY {
            if (StaticPagesTag_isEnabled(this)) {
                if (StaticPagesTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(StaticPagesTag_getCommand(this), compareTo, SearchData_GENERATESTATICPAGES) == 0) {
                        JAVA_CALL(StaticPagesTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->TEMPLATEFILENAME, this->xslFile);
                        const char* output = StaticPagesTag_generateStaticPages(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, output);
                        }
                    } else if (JAVA_CALL(StaticPagesTag_getCommand(this), compareTo, SearchData_MAKEPUBLIC) == 0) {
                        const char* output = StaticPagesTag_makePublic(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, output);
                        }
                    } else {
                        return TableTag_doStartTag((&this->base));
                    }
                }
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

