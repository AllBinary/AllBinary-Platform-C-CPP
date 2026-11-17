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
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "taghelpers/ViewHelperFactory.h"
#include "tags/transform/info/TransformInfoTag.h"

typedef struct TransformTag TransformTag;
struct TransformTag {
    TransformInfoTag base;
    LogUtil* logUtil;
};


TransformTag* TransformTag_new(void);

void TransformTag_init(TransformTag* this);

TransformTag* TransformTag_new1(TagHelperFactoryInterface* tagHelperFactoryInterface);
void TransformTag_init1(TransformTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface);
const char* TransformTag_view(TransformTag* this);
int32_t TransformTag_doStartTag(TransformTag* this);

static void TransformTag_initFields(TransformTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void TransformTag_init(TransformTag* this) {
        TransformInfoTag_init(&this->base, ViewHelperFactory_new());
        TransformTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

TransformTag* TransformTag_new(void) {
    TransformTag* this = calloc(1, sizeof(TransformTag));
    TransformTag_init(this);
    return this;
}


void TransformTag_init1(TransformTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface) {
        TransformInfoTag_init(&this->base, tagHelperFactoryInterface);
        TransformTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

TransformTag* TransformTag_new1(TagHelperFactoryInterface* tagHelperFactoryInterface) {
    TransformTag* this = calloc(1, sizeof(TransformTag));
    TransformTag_init1(this, tagHelperFactoryInterface);
    return this;
}


// throws Exception
const char* TransformTag_view(TransformTag* this) {
        JAVA_TRY {
            const char* result = ((const char*) JAVA_CALL(JAVA_CALL(java_class_of(TransformTag_getHelper(this)), getMethod, "view", nullptr), invoke, TransformTag_getHelper(this), nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t TransformTag_doStartTag(TransformTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, java_concat("Creating with: \n", JAVA_CALL(TransformTag_getPropertiesHashMap(this), toString)), this, this->base.tagStrings->DO_START_TAG);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "ViewTag Start For: ");
                StringMaker_append(stringBuffer, TransformTag_getName(this));
                StringMaker_append(stringBuffer, "\nViewFile: ");
                StringMaker_append(stringBuffer, TransformTag_getObjectFile(this));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->base.tagStrings->DO_START_TAG);
            }
            TransformTag_setHelper(this);
            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, TransformTag_view(this));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, "Tag End", this, this->base.tagStrings->DO_START_TAG);
            }
            return TransformInfoTag_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TransformInfoTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TransformInfoTag_SKIP_BODY;
        } JAVA_END_TRY;
}

