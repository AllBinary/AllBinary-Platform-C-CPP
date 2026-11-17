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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "tags/ValidationTransformTag.h"

typedef struct StoreValidationTransformTag StoreValidationTransformTag;
struct StoreValidationTransformTag {
    ValidationTransformTag base;
    LogUtil* logUtil;
    const char* storeName;
};


StoreValidationTransformTag* StoreValidationTransformTag_new(void);

void StoreValidationTransformTag_init(StoreValidationTransformTag* this);
void StoreValidationTransformTag_setStoreName(StoreValidationTransformTag* this, const char* value);
int32_t StoreValidationTransformTag_doStartTag(StoreValidationTransformTag* this);

static void StoreValidationTransformTag_initFields(StoreValidationTransformTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->storeName = nullptr;
}


void StoreValidationTransformTag_init(StoreValidationTransformTag* this) {
        ValidationTransformTag_init(&this->base);
        StoreValidationTransformTag_initFields(this);
}

StoreValidationTransformTag* StoreValidationTransformTag_new(void) {
    StoreValidationTransformTag* this = calloc(1, sizeof(StoreValidationTransformTag));
    StoreValidationTransformTag_init(this);
    return this;
}


void StoreValidationTransformTag_setStoreName(StoreValidationTransformTag* this, const char* value) {
        this->storeName = value;
        JAVA_CALL(StoreValidationTransformTag_getPropertiesHashMap(this), put, StoreFrontData_getInstance()->NAME, this->storeName);
}


// throws JspTagException
int32_t StoreValidationTransformTag_doStartTag(StoreValidationTransformTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, "Tag Start", this, this->base.tagStrings->DO_START_TAG);
            }
            return ValidationTransformTag_doStartTag((&this->base));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return ValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

