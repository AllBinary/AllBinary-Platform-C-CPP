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
// package tags.generic.shipping

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
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct ShippingMethodsTag ShippingMethodsTag;
struct ShippingMethodsTag {
    StoreValidationTransformTag base;
};


ShippingMethodsTag* ShippingMethodsTag_new(void);

void ShippingMethodsTag_init(ShippingMethodsTag* this);
int32_t ShippingMethodsTag_doStartTag(ShippingMethodsTag* this);


void ShippingMethodsTag_init(ShippingMethodsTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

ShippingMethodsTag* ShippingMethodsTag_new(void) {
    ShippingMethodsTag* this = calloc(1, sizeof(ShippingMethodsTag));
    ShippingMethodsTag_init(this);
    return this;
}


// throws JspTagException
int32_t ShippingMethodsTag_doStartTag(ShippingMethodsTag* this) {
        JAVA_TRY {
            if (ShippingMethodsTag_getCommand(this) != nullptr) {
                ShippingMethodsTag_setName(this, "Basic Shipping View");
                ShippingMethodsTag_setObjectFile(this, "views.generic.shipping.ValidationView");
                if (JAVA_CALL(ShippingMethodsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(ShippingMethodsTag_getCommand(this)))));
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

