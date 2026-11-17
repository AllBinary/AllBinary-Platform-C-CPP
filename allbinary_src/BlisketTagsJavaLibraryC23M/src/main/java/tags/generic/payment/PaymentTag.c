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
// package tags.generic.payment

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct PaymentTag PaymentTag;
struct PaymentTag {
    StoreValidationTransformTag base;
};


PaymentTag* PaymentTag_new(void);

void PaymentTag_init(PaymentTag* this);
int32_t PaymentTag_doStartTag(PaymentTag* this);


void PaymentTag_init(PaymentTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

PaymentTag* PaymentTag_new(void) {
    PaymentTag* this = calloc(1, sizeof(PaymentTag));
    PaymentTag_init(this);
    return this;
}


// throws JspTagException
int32_t PaymentTag_doStartTag(PaymentTag* this) {
        JAVA_TRY {
            PaymentTag_setName(this, "Basic Payment View");
            PaymentTag_setObjectFile(this, "views.generic.payment.ValidationView");
            if (PaymentTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(PaymentTag_getCommand(this), compareTo, PaymentData_VIEW) == 0 || JAVA_CALL(PaymentTag_getCommand(this), compareTo, PaymentData_CHANGE) == 0 || JAVA_CALL(PaymentTag_getCommand(this), compareTo, PaymentData_ADDNEW) == 0) {
                } else if (JAVA_CALL(PaymentTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                } else if (JAVA_CALL(PaymentTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    return this->EVAL_BODY_INCLUDE;
                } else if (JAVA_CALL(PaymentTag_getCommand(this), compareTo, PaymentData_SELECT) == 0) {
                    return this->EVAL_BODY_INCLUDE;
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(PaymentTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

