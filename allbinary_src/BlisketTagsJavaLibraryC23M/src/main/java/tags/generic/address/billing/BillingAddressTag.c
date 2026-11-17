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
// package tags.generic.address.billing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/business/user/address/BillingAddressData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct BillingAddressTag BillingAddressTag;
struct BillingAddressTag {
    StoreValidationTransformTag base;
};


BillingAddressTag* BillingAddressTag_new(void);

void BillingAddressTag_init(BillingAddressTag* this);
int32_t BillingAddressTag_doStartTag(BillingAddressTag* this);


void BillingAddressTag_init(BillingAddressTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

BillingAddressTag* BillingAddressTag_new(void) {
    BillingAddressTag* this = calloc(1, sizeof(BillingAddressTag));
    BillingAddressTag_init(this);
    return this;
}


// throws JspTagException
int32_t BillingAddressTag_doStartTag(BillingAddressTag* this) {
        JAVA_TRY {
            if (BillingAddressTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.ValidationView");
                } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.EditValidationView");
                } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.NewValidationView");
                } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.AddValidationView");
                } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.DeleteValidationView");
                } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, BillingAddressData_SELECT) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.SelectValidationView");
                } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, BillingAddressData_SETTOSHIPPINGADDRESS) == 0) {
                    BillingAddressTag_setName(this, "Basic Billing Address View");
                    BillingAddressTag_setObjectFile(this, "views.generic.address.billing.SetValidationView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(BillingAddressTag_getCommand(this)))));
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

