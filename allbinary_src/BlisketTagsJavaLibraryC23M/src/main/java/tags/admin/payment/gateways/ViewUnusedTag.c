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
// package tags.admin.payment.gateways

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
#include "tags/StoreValidationTransformTag.h"

typedef struct ViewUnusedTag ViewUnusedTag;
struct ViewUnusedTag {
    StoreValidationTransformTag base;
};


ViewUnusedTag* ViewUnusedTag_new(void);

void ViewUnusedTag_init(ViewUnusedTag* this);
int32_t ViewUnusedTag_doStartTag(ViewUnusedTag* this);


void ViewUnusedTag_init(ViewUnusedTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

ViewUnusedTag* ViewUnusedTag_new(void) {
    ViewUnusedTag* this = calloc(1, sizeof(ViewUnusedTag));
    ViewUnusedTag_init(this);
    return this;
}


// throws JspTagException
int32_t ViewUnusedTag_doStartTag(ViewUnusedTag* this) {
        JAVA_TRY {
            if (ViewUnusedTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(ViewUnusedTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    ViewUnusedTag_setName(this, "Validation User View");
                    ViewUnusedTag_setObjectFile(this, "views.admin.payment.gateways.SelectNewValidationView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(ViewUnusedTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

