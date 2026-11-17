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
// package org.allbinary.logic.visual.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ThemesValidation ThemesValidation;
struct ThemesValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    BasicArrayList* themeVector;
};


ThemesValidation* ThemesValidation_new(void);

void ThemesValidation_init(ThemesValidation* this);

ThemesValidation* ThemesValidation_new1(Node* node);
void ThemesValidation_init1(ThemesValidation* this, Node* node);

ThemesValidation* ThemesValidation_new1(HashMap* hashMap);
void ThemesValidation_init1(ThemesValidation* this, HashMap* hashMap);
bool ThemesValidation_isValid(ThemesValidation* this);
const char* ThemesValidation_validationInfo(ThemesValidation* this);
Document* ThemesValidation_toValidationInfoDoc(ThemesValidation* this);
Node* ThemesValidation_toValidationInfoNode(ThemesValidation* this, Document* document);
Node* ThemesValidation_toXmlNode(ThemesValidation* this, Document* document);

static void ThemesValidation_initFields(ThemesValidation* this) {
    
}


void ThemesValidation_init(ThemesValidation* this) {
    Validation_init(&this->base);
    ThemesValidation_initFields(this);
        this->themeVector = BasicArrayListD_new();
}

ThemesValidation* ThemesValidation_new(void) {
    ThemesValidation* this = calloc(1, sizeof(ThemesValidation));
    ThemesValidation_init(this);
    return this;
}


void ThemesValidation_init1(ThemesValidation* this, Node* node) {
    Validation_init(&this->base);
    ThemesValidation_initFields(this);
}

ThemesValidation* ThemesValidation_new1(Node* node) {
    ThemesValidation* this = calloc(1, sizeof(ThemesValidation));
    ThemesValidation_init1(this, node);
    return this;
}


void ThemesValidation_init1(ThemesValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    ThemesValidation_initFields(this);
}

ThemesValidation* ThemesValidation_new1(HashMap* hashMap) {
    ThemesValidation* this = calloc(1, sizeof(ThemesValidation));
    ThemesValidation_init1(this, hashMap);
    return this;
}


bool ThemesValidation_isValid(ThemesValidation* this) {
        return true;
}


const char* ThemesValidation_validationInfo(ThemesValidation* this) {
        return nullptr;
}


Document* ThemesValidation_toValidationInfoDoc(ThemesValidation* this) {
        return nullptr;
}


Node* ThemesValidation_toValidationInfoNode(ThemesValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* ThemesValidation_toXmlNode(ThemesValidation* this, Document* document) {
        Node* node = Document_createElement(document, ThemesData_getInstance()->NAME);
        int32_t size = BasicArrayList_size(this->themeVector);
        for (int32_t i = 0; i < size; i++) {
            DomNodeInterface* themeDomNodeInterface = ((DomNodeInterface*) BasicArrayList_get(this->themeVector, i));
            Node_appendChild(node, DomNodeInterface_toXmlNode(themeDomNodeInterface, document));
        }
        return node;
}

