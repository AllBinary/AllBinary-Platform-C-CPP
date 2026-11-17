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
// package tags.admin

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct DateRangeOrderHistoryTag DateRangeOrderHistoryTag;
struct DateRangeOrderHistoryTag {
    StoreValidationTransformTag base;
    LogUtil* logUtil;
    const char* status;
};


DateRangeOrderHistoryTag* DateRangeOrderHistoryTag_new(void);

void DateRangeOrderHistoryTag_init(DateRangeOrderHistoryTag* this);
void DateRangeOrderHistoryTag_setStatus(DateRangeOrderHistoryTag* this, const char* value);
int32_t DateRangeOrderHistoryTag_doStartTag(DateRangeOrderHistoryTag* this);

static void DateRangeOrderHistoryTag_initFields(DateRangeOrderHistoryTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->status = nullptr;
}


void DateRangeOrderHistoryTag_init(DateRangeOrderHistoryTag* this) {
        StoreValidationTransformTag_init(&this->base);
        DateRangeOrderHistoryTag_initFields(this);
}

DateRangeOrderHistoryTag* DateRangeOrderHistoryTag_new(void) {
    DateRangeOrderHistoryTag* this = calloc(1, sizeof(DateRangeOrderHistoryTag));
    DateRangeOrderHistoryTag_init(this);
    return this;
}


void DateRangeOrderHistoryTag_setStatus(DateRangeOrderHistoryTag* this, const char* value) {
        this->status = value;
}


// throws JspTagException
int32_t DateRangeOrderHistoryTag_doStartTag(DateRangeOrderHistoryTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, "Tag Start", this, this->base.tagStrings->DO_START_TAG);
            }
            DateRangeOrderHistoryTag_setName(this, "Range Order History View");
            DateRangeOrderHistoryTag_setObjectFile(this, "views.admin.orderhistory.DateRangeOrderHistoryView");
            if (DateRangeOrderHistoryTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(DateRangeOrderHistoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(DateRangeOrderHistoryTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

