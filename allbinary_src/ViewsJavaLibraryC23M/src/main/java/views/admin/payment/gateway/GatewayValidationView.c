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
// package views.admin.payment.gateway

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

typedef struct GatewayValidationView GatewayValidationView;
struct GatewayValidationView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


GatewayValidationView* GatewayValidationView_new(TransformInfoInterface* transformInfoInterface);

void GatewayValidationView_init(GatewayValidationView* this, TransformInfoInterface* transformInfoInterface);
bool GatewayValidationView_isValid(GatewayValidationView* this);
Document* GatewayValidationView_toValidationInfoDoc(GatewayValidationView* this);
Node* GatewayValidationView_toValidationInfoNode(GatewayValidationView* this, Document* document);
const char* GatewayValidationView_validationInfo(GatewayValidationView* this);
Document* GatewayValidationView_toXmlDoc(GatewayValidationView* this);
Node* GatewayValidationView_toXmlNode(GatewayValidationView* this, Document* document);
const char* GatewayValidationView_view(GatewayValidationView* this);
TransformInfoInterface* GatewayValidationView_getTransformInfoInterface(GatewayValidationView* this);


void GatewayValidationView_init(GatewayValidationView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
}

GatewayValidationView* GatewayValidationView_new(TransformInfoInterface* transformInfoInterface) {
    GatewayValidationView* this = calloc(1, sizeof(GatewayValidationView));
    GatewayValidationView_init(this, transformInfoInterface);
    return this;
}


bool GatewayValidationView_isValid(GatewayValidationView* this) {
        return true;
}


Document* GatewayValidationView_toValidationInfoDoc(GatewayValidationView* this) {
        return nullptr;
}


Node* GatewayValidationView_toValidationInfoNode(GatewayValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* GatewayValidationView_validationInfo(GatewayValidationView* this) {
        java_throw(java_exception_new("Exception", "validationInfo"));
}


Document* GatewayValidationView_toXmlDoc(GatewayValidationView* this) {
        return nullptr;
}


Node* GatewayValidationView_toXmlNode(GatewayValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* GatewayValidationView_view(GatewayValidationView* this) {
        return GatewayView_view(GatewayView_new(GatewayValidationView_getTransformInfoInterface(this)));
}


// throws Exception
TransformInfoInterface* GatewayValidationView_getTransformInfoInterface(GatewayValidationView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

