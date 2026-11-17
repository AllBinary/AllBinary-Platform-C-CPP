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
// package tags.generic.basket

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

typedef struct MiniBasketTag MiniBasketTag;
struct MiniBasketTag {
    StoreValidationTransformTag base;
};


MiniBasketTag* MiniBasketTag_new(void);

void MiniBasketTag_init(MiniBasketTag* this);
int32_t MiniBasketTag_doStartTag(MiniBasketTag* this);


void MiniBasketTag_init(MiniBasketTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

MiniBasketTag* MiniBasketTag_new(void) {
    MiniBasketTag* this = calloc(1, sizeof(MiniBasketTag));
    MiniBasketTag_init(this);
    return this;
}


// throws JspTagException
int32_t MiniBasketTag_doStartTag(MiniBasketTag* this) {
        JAVA_TRY {
            MiniBasketTag_setName(this, "Mini Basket View");
            MiniBasketTag_setObjectFile(this, "views.generic.basket.mini.ValidationView");
            if (MiniBasketTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(MiniBasketTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(MiniBasketTag_getCommand(this)))));
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

