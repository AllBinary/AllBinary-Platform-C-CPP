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
// package org.allbinary.logic.visual.dhtml.style.css.property

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CssPropertyView CssPropertyView;
struct CssPropertyView {
    DomNodeInterface DomNodeInterface_interface;
    CommonStrings* commonStrings;
    CssProperty* cssProperty;
};


CssPropertyView* CssPropertyView_new(const char* name);

void CssPropertyView_init(CssPropertyView* this, const char* name);

CssPropertyView* CssPropertyView_new1(Node* node);
void CssPropertyView_init1(CssPropertyView* this, Node* node);
CssProperty* CssPropertyView_getProperty(CssPropertyView* this);
Node* CssPropertyView_toXmlNode(CssPropertyView* this, Document* document);

static void CssPropertyView_initFields(CssPropertyView* this) {
    this->commonStrings = CommonStrings_getInstance();
    
}


void CssPropertyView_init(CssPropertyView* this, const char* name) {
    CssPropertyView_initFields(this);
        this->cssProperty = CssProperty_new(name);
}

CssPropertyView* CssPropertyView_new(const char* name) {
    CssPropertyView* this = calloc(1, sizeof(CssPropertyView));
    CssPropertyView_init(this, name);
    return this;
}


void CssPropertyView_init1(CssPropertyView* this, Node* node) {
    CssPropertyView_initFields(this);
        this->cssProperty = CssProperty_new(node);
}

CssPropertyView* CssPropertyView_new1(Node* node) {
    CssPropertyView* this = calloc(1, sizeof(CssPropertyView));
    CssPropertyView_init1(this, node);
    return this;
}


CssProperty* CssPropertyView_getProperty(CssPropertyView* this) {
        return this->cssProperty;
}


// throws Exception
Node* CssPropertyView_toXmlNode(CssPropertyView* this, Document* document) {
        return CssProperty_toXmlNode(this->cssProperty, document);
}

