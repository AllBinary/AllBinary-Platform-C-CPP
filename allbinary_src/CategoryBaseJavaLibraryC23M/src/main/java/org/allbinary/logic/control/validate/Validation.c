/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"

typedef struct Validation Validation;
struct Validation {
    ValidationInterface ValidationInterface_interface;
    CommonStrings* commonStrings;
};


Validation* Validation_new(void);
bool Validation_isValid(Validation* this);
Node* Validation_toValidationInfoNode(Validation* this, Document* document);
Document* Validation_toValidationInfoDoc(Validation* this);
const char* Validation_validationInfo(Validation* this);

static void Validation_initFields(Validation* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void Validation_init(Validation* this) {
    Validation_initFields(this);
}

Validation* Validation_new(void) {
    Validation* this = calloc(1, sizeof(Validation));
    Validation_init(this);
    return this;
}


// throws Exception
bool Validation_isValid(Validation* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Node* Validation_toValidationInfoNode(Validation* this, Document* document) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Document* Validation_toValidationInfoDoc(Validation* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Validation_validationInfo(Validation* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

