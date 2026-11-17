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
// package tags.admin.storefront

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

typedef struct StoreFrontTag StoreFrontTag;
struct StoreFrontTag {
    StoreValidationTransformTag base;
};


StoreFrontTag* StoreFrontTag_new(void);

void StoreFrontTag_init(StoreFrontTag* this);
int32_t StoreFrontTag_doStartTag(StoreFrontTag* this);


void StoreFrontTag_init(StoreFrontTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

StoreFrontTag* StoreFrontTag_new(void) {
    StoreFrontTag* this = calloc(1, sizeof(StoreFrontTag));
    StoreFrontTag_init(this);
    return this;
}


// throws JspTagException
int32_t StoreFrontTag_doStartTag(StoreFrontTag* this) {
        JAVA_TRY {
            if (StoreFrontTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    StoreFrontTag_setName(this, "Add Validation StoreFront View");
                    StoreFrontTag_setObjectFile(this, "views.admin.storefront.AddValidationStoreFrontView");
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    StoreFrontTag_setName(this, "Edit Validation StoreFront View");
                    StoreFrontTag_setObjectFile(this, "views.admin.storefront.EditValidationStoreFrontView");
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, this->commonStrings->UPDATE) == 0) {
                    StoreFrontTag_setName(this, "Update Validation StoreFront View");
                    StoreFrontTag_setObjectFile(this, "views.admin.storefront.UpdateValidationStoreFrontView");
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    StoreFrontTag_setName(this, "Delete Validation StoreFront View");
                    StoreFrontTag_setObjectFile(this, "views.admin.storefront.DeleteValidationStoreFrontView");
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->BACKUP) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->RESTORE) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, this->commonStrings->DROP) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(StoreFrontTag_getCommand(this), compareTo, this->commonStrings->CREATE) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(StoreFrontTag_getCommand(this)))));
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

