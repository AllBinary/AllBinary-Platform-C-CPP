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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/http/request/RequestMapInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "taghelpers/ValidationViewHelper.h"
#include "tags/HelperTag.h"
#include "views/admin/inventory/InventoryItemView.h"
#include "views/admin/inventory/download/DownloadableInventoryItemView.h"

typedef struct InventoryItemViewParentTagHelper InventoryItemViewParentTagHelper;
struct InventoryItemViewParentTagHelper {
    char unused;
};

static InventoryItemViewParentTagHelper* InventoryItemViewParentTagHelper_instance;

InventoryItemViewParentTagHelper* InventoryItemViewParentTagHelper_new(void);
InventoryItemViewParentTagHelper* InventoryItemViewParentTagHelper_getInstance(void);
InventoryItemView* InventoryItemViewParentTagHelper_getInventoryItemView(InventoryItemViewParentTagHelper* this, HelperTag* inventoryTag);
DownloadableInventoryItemView* InventoryItemViewParentTagHelper_getDownloadableInventoryItemView(InventoryItemViewParentTagHelper* this, HelperTag* inventoryTag);
RequestMapInterface* InventoryItemViewParentTagHelper_getRequestMapInterface(InventoryItemViewParentTagHelper* this, HelperTag* inventoryTag);
void InventoryItemViewParentTagHelper_checkForValidationViewHelper(InventoryItemViewParentTagHelper* this, Any* helperObject);

// Static fields with runtime initializers: call this once at startup
void InventoryItemViewParentTagHelper_staticInit(void) {
    InventoryItemViewParentTagHelper_instance = InventoryItemViewParentTagHelper_new();
}

void InventoryItemViewParentTagHelper_init(InventoryItemViewParentTagHelper* this) {
}

InventoryItemViewParentTagHelper* InventoryItemViewParentTagHelper_new(void) {
    InventoryItemViewParentTagHelper* this = calloc(1, sizeof(InventoryItemViewParentTagHelper));
    InventoryItemViewParentTagHelper_init(this);
    return this;
}


InventoryItemViewParentTagHelper* InventoryItemViewParentTagHelper_getInstance(void) {
        return InventoryItemViewParentTagHelper_instance;
}


// throws Exception
InventoryItemView* InventoryItemViewParentTagHelper_getInventoryItemView(InventoryItemViewParentTagHelper* this, HelperTag* inventoryTag) {
        if (inventoryTag != nullptr) {
            InventoryItemViewParentTagHelper_checkForValidationViewHelper(this, HelperTag_getHelper(inventoryTag));
            ValidationViewHelper* validationViewHelper = ((ValidationViewHelper*) HelperTag_getHelper(inventoryTag));
            TransformInterface* viewObject = ValidationViewHelper_getViewObject(validationViewHelper);
            if (TransformInterface_getTypeId(viewObject) != InventoryItemView_TYPE_ID) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Must have ");
                StringMaker_append(stringBuffer, "InventoryItemView and not: ");
                StringMaker_append(stringBuffer, java_class_of(HelperTag_getHelper(inventoryTag)));
                java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
            }
            return ((InventoryItemView*) viewObject);
        } else {
            java_throw(java_exception_new("Exception", "Must have parent tag."));
        }
}


// throws Exception
DownloadableInventoryItemView* InventoryItemViewParentTagHelper_getDownloadableInventoryItemView(InventoryItemViewParentTagHelper* this, HelperTag* inventoryTag) {
        if (inventoryTag != nullptr) {
            InventoryItemViewParentTagHelper_checkForValidationViewHelper(this, HelperTag_getHelper(inventoryTag));
            ValidationViewHelper* validationViewHelper = ((ValidationViewHelper*) HelperTag_getHelper(inventoryTag));
            TransformInterface* viewObject = ValidationViewHelper_getViewObject(validationViewHelper);
            if (TransformInterface_getTypeId(viewObject) != DownloadableInventoryItemView_TYPE_ID) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Must have ");
                StringMaker_append(stringBuffer, "DownloadableInventoryItemView and not: ");
                StringMaker_append(stringBuffer, java_class_of(HelperTag_getHelper(inventoryTag)));
                java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
            }
            return ((DownloadableInventoryItemView*) viewObject);
        } else {
            java_throw(java_exception_new("Exception", "Must have parent tag."));
        }
}


// throws Exception
RequestMapInterface* InventoryItemViewParentTagHelper_getRequestMapInterface(InventoryItemViewParentTagHelper* this, HelperTag* inventoryTag) {
        if (inventoryTag != nullptr) {
            InventoryItemViewParentTagHelper_checkForValidationViewHelper(this, HelperTag_getHelper(inventoryTag));
            ValidationViewHelper* validationViewHelper = ((ValidationViewHelper*) HelperTag_getHelper(inventoryTag));
            TransformInterface* viewObject = ValidationViewHelper_getViewObject(validationViewHelper);
            if (TransformInterface_getTypeId(viewObject) != InventoryItemView_TYPE_ID && TransformInterface_getTypeId(viewObject) != DownloadableInventoryItemView_TYPE_ID) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Must have ");
                StringMaker_append(stringBuffer, "specific TYPE_ID and not: ");
                StringMaker_append(stringBuffer, java_class_of(HelperTag_getHelper(inventoryTag)));
                java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
            }
            return ((RequestMapInterface*) viewObject);
        } else {
            java_throw(java_exception_new("Exception", "Must have parent tag."));
        }
}


// throws Exception
void InventoryItemViewParentTagHelper_checkForValidationViewHelper(InventoryItemViewParentTagHelper* this, Any* helperObject) {
        if (!(java_instanceof(helperObject, "ValidationViewHelper"))) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Must have ");
            StringMaker_append(stringBuffer, "ValidationViewHelper");
            StringMaker_append(stringBuffer, "and not: ");
            StringMaker_append(stringBuffer, java_class_of(helperObject));
            java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
        }
}

