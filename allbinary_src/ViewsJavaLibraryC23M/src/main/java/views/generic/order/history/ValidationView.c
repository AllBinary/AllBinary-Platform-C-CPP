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
// package views.generic.order.history

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/globals/MESSAGES.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/generic/order/history/OrderHistoryView.h"

typedef struct ValidationView ValidationView;
struct ValidationView {
    OrderHistoryView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface);

void ValidationView_init(ValidationView* this, TransformInfoInterface* transformInfoInterface);
bool ValidationView_isValid(ValidationView* this);
Document* ValidationView_toValidationInfoDoc(ValidationView* this);
Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document);
const char* ValidationView_validationInfo(ValidationView* this);
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this);


void ValidationView_init(ValidationView* this, TransformInfoInterface* transformInfoInterface) {
        OrderHistoryView_init(&this->base, transformInfoInterface);
}

ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface) {
    ValidationView* this = calloc(1, sizeof(ValidationView));
    ValidationView_init(this, transformInfoInterface);
    return this;
}


bool ValidationView_isValid(ValidationView* this) {
        return true;
}


Document* ValidationView_toValidationInfoDoc(ValidationView* this) {
        return nullptr;
}


Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document) {
        return nullptr;
}


const char* ValidationView_validationInfo(ValidationView* this) {
        return OrderHistoryView_MESSAGES->CONTACTADMIN;
}


// throws Exception
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this) {
        return OrderHistoryView_getTransformInfoInterface((&this->base));
}

