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
// package views.admin.payment.gateways

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
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct SelectExistingValidationView SelectExistingValidationView;
struct SelectExistingValidationView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


SelectExistingValidationView* SelectExistingValidationView_new(TransformInfoInterface* transformInfoInterface);

void SelectExistingValidationView_init(SelectExistingValidationView* this, TransformInfoInterface* transformInfoInterface);
bool SelectExistingValidationView_isValid(SelectExistingValidationView* this);
Document* SelectExistingValidationView_toValidationInfoDoc(SelectExistingValidationView* this);
Node* SelectExistingValidationView_toValidationInfoNode(SelectExistingValidationView* this, Document* document);
const char* SelectExistingValidationView_validationInfo(SelectExistingValidationView* this);
Document* SelectExistingValidationView_toXmlDoc(SelectExistingValidationView* this);
Node* SelectExistingValidationView_toXmlNode(SelectExistingValidationView* this, Document* document);
const char* SelectExistingValidationView_view(SelectExistingValidationView* this);
TransformInfoInterface* SelectExistingValidationView_getTransformInfoInterface(SelectExistingValidationView* this);


void SelectExistingValidationView_init(SelectExistingValidationView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
}

SelectExistingValidationView* SelectExistingValidationView_new(TransformInfoInterface* transformInfoInterface) {
    SelectExistingValidationView* this = calloc(1, sizeof(SelectExistingValidationView));
    SelectExistingValidationView_init(this, transformInfoInterface);
    return this;
}


bool SelectExistingValidationView_isValid(SelectExistingValidationView* this) {
        return true;
}


Document* SelectExistingValidationView_toValidationInfoDoc(SelectExistingValidationView* this) {
        return nullptr;
}


Node* SelectExistingValidationView_toValidationInfoNode(SelectExistingValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* SelectExistingValidationView_validationInfo(SelectExistingValidationView* this) {
        java_throw(java_exception_new("Exception", "validationInfo"));
}


Document* SelectExistingValidationView_toXmlDoc(SelectExistingValidationView* this) {
        return nullptr;
}


Node* SelectExistingValidationView_toXmlNode(SelectExistingValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* SelectExistingValidationView_view(SelectExistingValidationView* this) {
        return SelectExistingView_view(SelectExistingView_new(SelectExistingValidationView_getTransformInfoInterface(this)));
}


// throws Exception
TransformInfoInterface* SelectExistingValidationView_getTransformInfoInterface(SelectExistingValidationView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

