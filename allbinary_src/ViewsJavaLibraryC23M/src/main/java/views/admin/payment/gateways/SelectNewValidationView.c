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

typedef struct SelectNewValidationView SelectNewValidationView;
struct SelectNewValidationView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


SelectNewValidationView* SelectNewValidationView_new(TransformInfoInterface* transformInfoInterface);

void SelectNewValidationView_init(SelectNewValidationView* this, TransformInfoInterface* transformInfoInterface);
bool SelectNewValidationView_isValid(SelectNewValidationView* this);
Document* SelectNewValidationView_toValidationInfoDoc(SelectNewValidationView* this);
Node* SelectNewValidationView_toValidationInfoNode(SelectNewValidationView* this, Document* document);
const char* SelectNewValidationView_validationInfo(SelectNewValidationView* this);
Document* SelectNewValidationView_toXmlDoc(SelectNewValidationView* this);
Node* SelectNewValidationView_toXmlNode(SelectNewValidationView* this, Document* document);
const char* SelectNewValidationView_view(SelectNewValidationView* this);
TransformInfoInterface* SelectNewValidationView_getTransformInfoInterface(SelectNewValidationView* this);


void SelectNewValidationView_init(SelectNewValidationView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
}

SelectNewValidationView* SelectNewValidationView_new(TransformInfoInterface* transformInfoInterface) {
    SelectNewValidationView* this = calloc(1, sizeof(SelectNewValidationView));
    SelectNewValidationView_init(this, transformInfoInterface);
    return this;
}


bool SelectNewValidationView_isValid(SelectNewValidationView* this) {
        return true;
}


Document* SelectNewValidationView_toValidationInfoDoc(SelectNewValidationView* this) {
        return nullptr;
}


Node* SelectNewValidationView_toValidationInfoNode(SelectNewValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* SelectNewValidationView_validationInfo(SelectNewValidationView* this) {
        java_throw(java_exception_new("Exception", "validationInfo"));
}


Document* SelectNewValidationView_toXmlDoc(SelectNewValidationView* this) {
        return nullptr;
}


Node* SelectNewValidationView_toXmlNode(SelectNewValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* SelectNewValidationView_view(SelectNewValidationView* this) {
        return SelectNewView_view(SelectNewView_new(SelectNewValidationView_getTransformInfoInterface(this)));
}


// throws Exception
TransformInfoInterface* SelectNewValidationView_getTransformInfoInterface(SelectNewValidationView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

