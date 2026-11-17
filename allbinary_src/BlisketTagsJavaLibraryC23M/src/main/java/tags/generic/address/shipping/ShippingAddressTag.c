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
// package tags.generic.address.shipping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct ShippingAddressTag ShippingAddressTag;
struct ShippingAddressTag {
    StoreValidationTransformTag base;
    const char* value;
};


ShippingAddressTag* ShippingAddressTag_new(void);

void ShippingAddressTag_init(ShippingAddressTag* this);
int32_t ShippingAddressTag_doStartTag(ShippingAddressTag* this);

static void ShippingAddressTag_initFields(ShippingAddressTag* this) {
    this->value = nullptr;
}


void ShippingAddressTag_init(ShippingAddressTag* this) {
    StoreValidationTransformTag_init(&this->base);
    ShippingAddressTag_initFields(this);
}

ShippingAddressTag* ShippingAddressTag_new(void) {
    ShippingAddressTag* this = calloc(1, sizeof(ShippingAddressTag));
    ShippingAddressTag_init(this);
    return this;
}


// throws JspTagException
int32_t ShippingAddressTag_doStartTag(ShippingAddressTag* this) {
        JAVA_TRY {
            if (ShippingAddressTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.ViewShippingAddressesView");
                } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.EditShippingAddressesView");
                } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.NewShippingAddressesView");
                } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.AddShippingAddressesView");
                } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.DeleteShippingAddressesView");
                } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, ShippingAddressData_SELECT) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.SelectShippingAddressesView");
                } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, ShippingAddressData_SETTOBILLINGADDRESS) == 0) {
                    ShippingAddressTag_setName(this, "Basic Shipping Address View");
                    ShippingAddressTag_setObjectFile(this, "views.generic.address.shipping.SetShippingAddressesView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(ShippingAddressTag_getCommand(this)))));
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

