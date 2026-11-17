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
// package tags.generic.advertisement

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

typedef struct AdvertisementTag AdvertisementTag;
struct AdvertisementTag {
    StoreValidationTransformTag base;
};


AdvertisementTag* AdvertisementTag_new(void);

void AdvertisementTag_init(AdvertisementTag* this);
int32_t AdvertisementTag_doStartTag(AdvertisementTag* this);


void AdvertisementTag_init(AdvertisementTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

AdvertisementTag* AdvertisementTag_new(void) {
    AdvertisementTag* this = calloc(1, sizeof(AdvertisementTag));
    AdvertisementTag_init(this);
    return this;
}


// throws JspTagException
int32_t AdvertisementTag_doStartTag(AdvertisementTag* this) {
        JAVA_TRY {
            AdvertisementTag_setName(this, "Basic Ad View");
            AdvertisementTag_setObjectFile(this, "views.generic.advertisement.ValidationView");
            if (AdvertisementTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(AdvertisementTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(AdvertisementTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

