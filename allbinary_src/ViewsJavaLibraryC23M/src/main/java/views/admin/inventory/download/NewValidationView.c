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
// package views.admin.inventory.download

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/inventory/download/DownloadableInventoryItemView.h"

typedef struct NewValidationView NewValidationView;
struct NewValidationView {
    DownloadableInventoryItemView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


NewValidationView* NewValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewValidationView_init(NewValidationView* this, TransformInfoInterface* transformInfoInterface);
bool NewValidationView_isValid(NewValidationView* this);
Document* NewValidationView_toValidationInfoDoc(NewValidationView* this);
Node* NewValidationView_toValidationInfoNode(NewValidationView* this, Document* document);
const char* NewValidationView_validationInfo(NewValidationView* this);
TransformInfoInterface* NewValidationView_getTransformInfoInterface(NewValidationView* this);


void NewValidationView_init(NewValidationView* this, TransformInfoInterface* transformInfoInterface) {
        DownloadableInventoryItemView_init(&this->base, transformInfoInterface, StringUtil_getInstance()->EMPTY_STRING);
        this->itemInterface = ((ItemInterface*) BasicItem_new());
        this->downloadableItem = DownloadableItem_new(JAVA_CALL(this->itemInterface, getId));
}

NewValidationView* NewValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewValidationView* this = calloc(1, sizeof(NewValidationView));
    NewValidationView_init(this, transformInfoInterface);
    return this;
}


bool NewValidationView_isValid(NewValidationView* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


Document* NewValidationView_toValidationInfoDoc(NewValidationView* this) {
        return nullptr;
}


Node* NewValidationView_toValidationInfoNode(NewValidationView* this, Document* document) {
        return nullptr;
}


const char* NewValidationView_validationInfo(NewValidationView* this) {
        return "Error Creating New Downloadable Item";
}


// throws Exception
TransformInfoInterface* NewValidationView_getTransformInfoInterface(NewValidationView* this) {
        return DownloadableInventoryItemView_getTransformInfoInterface((&this->base));
}

