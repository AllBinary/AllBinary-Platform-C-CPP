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
// package tags.admin.customizers

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

typedef struct ViewCustomizersTag ViewCustomizersTag;
struct ViewCustomizersTag {
    StoreValidationTransformTag base;
};


ViewCustomizersTag* ViewCustomizersTag_new(void);

void ViewCustomizersTag_init(ViewCustomizersTag* this);
int32_t ViewCustomizersTag_doStartTag(ViewCustomizersTag* this);


void ViewCustomizersTag_init(ViewCustomizersTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

ViewCustomizersTag* ViewCustomizersTag_new(void) {
    ViewCustomizersTag* this = calloc(1, sizeof(ViewCustomizersTag));
    ViewCustomizersTag_init(this);
    return this;
}


// throws JspTagException
int32_t ViewCustomizersTag_doStartTag(ViewCustomizersTag* this) {
        JAVA_TRY {
            ViewCustomizersTag_setName(this, "Add Validation Customizers View");
            ViewCustomizersTag_setObjectFile(this, "views.admin.customizers.CustomizersValidationView");
            return StoreValidationTransformTag_doStartTag((&this->base));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

