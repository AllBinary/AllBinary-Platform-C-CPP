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
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct TaxAddressTag TaxAddressTag;
struct TaxAddressTag {
    StoreValidationTransformTag base;
};


TaxAddressTag* TaxAddressTag_new(void);

void TaxAddressTag_init(TaxAddressTag* this);
int32_t TaxAddressTag_doStartTag(TaxAddressTag* this);


void TaxAddressTag_init(TaxAddressTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

TaxAddressTag* TaxAddressTag_new(void) {
    TaxAddressTag* this = calloc(1, sizeof(TaxAddressTag));
    TaxAddressTag_init(this);
    return this;
}


// throws JspTagException
int32_t TaxAddressTag_doStartTag(TaxAddressTag* this) {
        JAVA_TRY {
            if (TaxAddressTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(TaxAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    TaxAddressTag_setName(this, "Basic Shipping Address View");
                    TaxAddressTag_setObjectFile(this, "views.generic.address.shipping.TaxValidationView");
                } else if (JAVA_CALL(TaxAddressTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    TaxAddressTag_setName(this, "Basic Shipping Address View");
                    TaxAddressTag_setObjectFile(this, "views.generic.address.shipping.NewValidationView");
                } else if (JAVA_CALL(TaxAddressTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    TaxAddressTag_setName(this, "Basic Shipping Address View");
                    TaxAddressTag_setObjectFile(this, "views.generic.address.shipping.AddTaxValidationView");
                } else if (JAVA_CALL(TaxAddressTag_getCommand(this), compareTo, this->commonStrings->UPDATE) == 0) {
                    TaxAddressTag_setName(this, "Basic Shipping Address View");
                    TaxAddressTag_setObjectFile(this, "views.generic.address.shipping.UpdateTaxValidationView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(TaxAddressTag_getCommand(this)))));
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

