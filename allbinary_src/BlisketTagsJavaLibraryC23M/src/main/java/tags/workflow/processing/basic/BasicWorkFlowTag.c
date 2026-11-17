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
// package tags.workflow.processing.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "tags/StoreWorkFlowTag.h"

//and remove the hidden fields
typedef struct BasicWorkFlowTag BasicWorkFlowTag;
struct BasicWorkFlowTag {
    StoreWorkFlowTag base;
    LogUtil* logUtil;
};


BasicWorkFlowTag* BasicWorkFlowTag_new(void);

void BasicWorkFlowTag_init(BasicWorkFlowTag* this);
int32_t BasicWorkFlowTag_doStartTag(BasicWorkFlowTag* this);

static void BasicWorkFlowTag_initFields(BasicWorkFlowTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void BasicWorkFlowTag_init(BasicWorkFlowTag* this) {
    StoreWorkFlowTag_init(&this->base);
    BasicWorkFlowTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

BasicWorkFlowTag* BasicWorkFlowTag_new(void) {
    BasicWorkFlowTag* this = calloc(1, sizeof(BasicWorkFlowTag));
    BasicWorkFlowTag_init(this);
    return this;
}


// throws JspTagException
int32_t BasicWorkFlowTag_doStartTag(BasicWorkFlowTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->base.tagStrings->DO_START_TAG);
            }
            JAVA_CALL(BasicWorkFlowTag_getPropertiesHashMap(this), put, DynamicObjectData_NAME, "workflows.template.data.BasicStoreWorkFlow");
            return StoreWorkFlowTag_doStartTag((&this->base));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreWorkFlowTag_SKIP_BODY;
        } JAVA_END_TRY;
}

