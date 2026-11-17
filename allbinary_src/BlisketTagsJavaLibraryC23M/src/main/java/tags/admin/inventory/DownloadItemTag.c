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
// package tags.admin.inventory

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

typedef struct DownloadItemTag DownloadItemTag;
struct DownloadItemTag {
    StoreValidationTransformTag base;
};


DownloadItemTag* DownloadItemTag_new(void);

void DownloadItemTag_init(DownloadItemTag* this);
int32_t DownloadItemTag_doStartTag(DownloadItemTag* this);


void DownloadItemTag_init(DownloadItemTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

DownloadItemTag* DownloadItemTag_new(void) {
    DownloadItemTag* this = calloc(1, sizeof(DownloadItemTag));
    DownloadItemTag_init(this);
    return this;
}


// throws JspTagException
int32_t DownloadItemTag_doStartTag(DownloadItemTag* this) {
        JAVA_TRY {
            if (DownloadItemTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(DownloadItemTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(DownloadItemTag_getCommand(this)))));
                } else if (JAVA_CALL(DownloadItemTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    DownloadItemTag_setName(this, "Add Inventory Item Validation View");
                    DownloadItemTag_setObjectFile(this, "views.admin.inventory.download.AddFileValidationView");
                } else if (JAVA_CALL(DownloadItemTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    DownloadItemTag_setName(this, "Delete Inventory Item Validation View");
                    DownloadItemTag_setObjectFile(this, "views.admin.inventory.download.DeleteFileValidationView");
                } else if (JAVA_CALL(DownloadItemTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    DownloadItemTag_setName(this, "Edit Inventory Item Validation View");
                    DownloadItemTag_setObjectFile(this, "views.admin.inventory.download.EditValidationView");
                } else if (JAVA_CALL(DownloadItemTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    DownloadItemTag_setName(this, "New Inventory Item Validation View");
                    DownloadItemTag_setObjectFile(this, "views.admin.inventory.download.NewValidationView");
                } else if (JAVA_CALL(DownloadItemTag_getCommand(this), compareTo, this->commonStrings->UPDATE) == 0) {
                    DownloadItemTag_setName(this, "Update Inventory Item Validation View");
                    DownloadItemTag_setObjectFile(this, "views.admin.inventory.download.UpdateFileValidationView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(DownloadItemTag_getCommand(this)))));
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

