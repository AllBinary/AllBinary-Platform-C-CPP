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
// package views.generic.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/inventory/InventoryView.h"

typedef struct AutoValidationInventoryView AutoValidationInventoryView;
struct AutoValidationInventoryView {
    InventoryView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


AutoValidationInventoryView* AutoValidationInventoryView_new(TransformInfoInterface* transformInfoInterface);

void AutoValidationInventoryView_init(AutoValidationInventoryView* this, TransformInfoInterface* transformInfoInterface);
bool AutoValidationInventoryView_isValid(AutoValidationInventoryView* this);
Document* AutoValidationInventoryView_toValidationInfoDoc(AutoValidationInventoryView* this);
Node* AutoValidationInventoryView_toValidationInfoNode(AutoValidationInventoryView* this, Document* document);
const char* AutoValidationInventoryView_validationInfo(AutoValidationInventoryView* this);
TransformInfoInterface* AutoValidationInventoryView_getTransformInfoInterface(AutoValidationInventoryView* this);


void AutoValidationInventoryView_init(AutoValidationInventoryView* this, TransformInfoInterface* transformInfoInterface) {
        InventoryView_init(&this->base, transformInfoInterface);
}

AutoValidationInventoryView* AutoValidationInventoryView_new(TransformInfoInterface* transformInfoInterface) {
    AutoValidationInventoryView* this = calloc(1, sizeof(AutoValidationInventoryView));
    AutoValidationInventoryView_init(this, transformInfoInterface);
    return this;
}


bool AutoValidationInventoryView_isValid(AutoValidationInventoryView* this) {
        return true;
}


Document* AutoValidationInventoryView_toValidationInfoDoc(AutoValidationInventoryView* this) {
        return nullptr;
}


Node* AutoValidationInventoryView_toValidationInfoNode(AutoValidationInventoryView* this, Document* document) {
        return nullptr;
}


const char* AutoValidationInventoryView_validationInfo(AutoValidationInventoryView* this) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* AutoValidationInventoryView_getTransformInfoInterface(AutoValidationInventoryView* this) {
        return InventoryView_getTransformInfoInterface((&this->base));
}

