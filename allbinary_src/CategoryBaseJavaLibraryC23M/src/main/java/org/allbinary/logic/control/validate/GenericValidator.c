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
// package org.allbinary.logic.control.validate

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/control/validate/ValidatorBase.h"

typedef struct GenericValidator GenericValidator;
struct GenericValidator {
    ValidatorBase base;
};


GenericValidator* GenericValidator_new(void);

void GenericValidator_init(GenericValidator* this);
Document* GenericValidator_toValidationInfoDoc(GenericValidator* this);
Node* GenericValidator_toValidationInfoNode(GenericValidator* this, Document* document);


void GenericValidator_init(GenericValidator* this) {
    ValidatorBase_init(&this->base);
}

GenericValidator* GenericValidator_new(void) {
    GenericValidator* this = calloc(1, sizeof(GenericValidator));
    GenericValidator_init(this);
    return this;
}


Document* GenericValidator_toValidationInfoDoc(GenericValidator* this) {
        return nullptr;
}


Node* GenericValidator_toValidationInfoNode(GenericValidator* this, Document* document) {
        return nullptr;
}

