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

typedef struct InventoryTag InventoryTag;
struct InventoryTag {
    StoreValidationTransformTag base;
};


InventoryTag* InventoryTag_new(void);

void InventoryTag_init(InventoryTag* this);
int32_t InventoryTag_doStartTag(InventoryTag* this);


void InventoryTag_init(InventoryTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

InventoryTag* InventoryTag_new(void) {
    InventoryTag* this = calloc(1, sizeof(InventoryTag));
    InventoryTag_init(this);
    return this;
}


// throws JspTagException
int32_t InventoryTag_doStartTag(InventoryTag* this) {
        JAVA_TRY {
            if (InventoryTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(InventoryTag_getCommand(this)))));
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    InventoryTag_setName(this, "Add Inventory Item Validation View");
                    InventoryTag_setObjectFile(this, "views.admin.inventory.AddFileValidationView");
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    InventoryTag_setName(this, "Delete Inventory Item Validation View");
                    InventoryTag_setObjectFile(this, "views.admin.inventory.DeleteFileValidationView");
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    InventoryTag_setName(this, "Edit Inventory Item Validation View");
                    InventoryTag_setObjectFile(this, "views.admin.inventory.EditValidationView");
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    InventoryTag_setName(this, "New Inventory Item Validation View");
                    InventoryTag_setObjectFile(this, "views.admin.inventory.NewValidationView");
                } else if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, this->commonStrings->UPDATE) == 0) {
                    InventoryTag_setName(this, "Update Inventory Item Validation View");
                    InventoryTag_setObjectFile(this, "views.admin.inventory.UpdateFileValidationView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(InventoryTag_getCommand(this)))));
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

