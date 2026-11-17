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
// package org.allbinary.logic.visual.transform.template.customizer.includes.style.css.template.retail

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/visual/dhtml/style/StyleData.h"
#include "org/allbinary/logic/visual/dhtml/style/StylesData.h"
#include "org/allbinary/logic/visual/dhtml/style/color/ColorsView.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h"

typedef struct EditCssStyleValidation EditCssStyleValidation;
struct EditCssStyleValidation {
    CssStyleValidation base;
    ValidationInterface ValidationInterface_interface;
    DomNodeInterface DomNodeInterface_interface;
};


EditCssStyleValidation* EditCssStyleValidation_new(void);

void EditCssStyleValidation_init(EditCssStyleValidation* this);

EditCssStyleValidation* EditCssStyleValidation_new1(Document* document);
void EditCssStyleValidation_init1(EditCssStyleValidation* this, Document* document);

EditCssStyleValidation* EditCssStyleValidation_new1(HashMap* hashMap);
void EditCssStyleValidation_init1(EditCssStyleValidation* this, HashMap* hashMap);
bool EditCssStyleValidation_isValid(EditCssStyleValidation* this);
const char* EditCssStyleValidation_validationInfo(EditCssStyleValidation* this);
Document* EditCssStyleValidation_toValidationInfoDoc(EditCssStyleValidation* this);
Node* EditCssStyleValidation_toValidationInfoNode(EditCssStyleValidation* this, Document* document);
Node* EditCssStyleValidation_toXmlNode(EditCssStyleValidation* this, Document* document);


void EditCssStyleValidation_init(EditCssStyleValidation* this) {
    CssStyleValidation_init(&this->base);
}

EditCssStyleValidation* EditCssStyleValidation_new(void) {
    EditCssStyleValidation* this = calloc(1, sizeof(EditCssStyleValidation));
    EditCssStyleValidation_init(this);
    return this;
}


void EditCssStyleValidation_init1(EditCssStyleValidation* this, Document* document) {
        CssStyleValidation_init(&this->base, document);
}

EditCssStyleValidation* EditCssStyleValidation_new1(Document* document) {
    EditCssStyleValidation* this = calloc(1, sizeof(EditCssStyleValidation));
    EditCssStyleValidation_init1(this, document);
    return this;
}


void EditCssStyleValidation_init1(EditCssStyleValidation* this, HashMap* hashMap) {
        CssStyleValidation_init(&this->base, hashMap);
}

EditCssStyleValidation* EditCssStyleValidation_new1(HashMap* hashMap) {
    EditCssStyleValidation* this = calloc(1, sizeof(EditCssStyleValidation));
    EditCssStyleValidation_init1(this, hashMap);
    return this;
}


bool EditCssStyleValidation_isValid(EditCssStyleValidation* this) {
        return CssStyleValidation_isValid((&this->base));
}


const char* EditCssStyleValidation_validationInfo(EditCssStyleValidation* this) {
        return CssStyleValidation_validationInfo((&this->base));
}


Document* EditCssStyleValidation_toValidationInfoDoc(EditCssStyleValidation* this) {
        return nullptr;
}


Node* EditCssStyleValidation_toValidationInfoNode(EditCssStyleValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* EditCssStyleValidation_toXmlNode(EditCssStyleValidation* this, Document* document) {
        Node* node = Document_createElement(document, StylesData_getInstance()->NAME);
        Node* styleNode = Document_createElement(document, StyleData_getInstance()->NAME);
        Node_appendChild(node, styleNode);
        Node_appendChild(styleNode, ColorsView_toXmlNode(ColorsView_new(), document));
        int32_t size = JAVA_CALL(this->cssStyleElementVector, size);
        for (int32_t i = 0; i < size; i++) {
            DomNodeInterface* styleDomNodeInterface = ((DomNodeInterface*) JAVA_CALL(this->base.cssStyleElementVector, get, i));
            Node_appendChild(styleNode, DomNodeInterface_toXmlNode(styleDomNodeInterface, document));
        }
        return node;
}

