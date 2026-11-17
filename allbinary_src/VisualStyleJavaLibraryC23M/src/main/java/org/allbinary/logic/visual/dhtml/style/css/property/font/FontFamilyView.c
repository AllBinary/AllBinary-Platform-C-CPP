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
// package org.allbinary.logic.visual.dhtml.style.css.property.font

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyView.h"
#include "org/w3c/dom/Node.h"

typedef struct FontFamilyView FontFamilyView;
struct FontFamilyView {
    CssPropertyView base;
};


FontFamilyView* FontFamilyView_new(void);

void FontFamilyView_init(FontFamilyView* this);

FontFamilyView* FontFamilyView_new1(Node* node);
void FontFamilyView_init1(FontFamilyView* this, Node* node);


void FontFamilyView_init(FontFamilyView* this) {
        CssPropertyView_init(&this->base, FontFamilyData_getInstance()->VALUE);
}

FontFamilyView* FontFamilyView_new(void) {
    FontFamilyView* this = calloc(1, sizeof(FontFamilyView));
    FontFamilyView_init(this);
    return this;
}


void FontFamilyView_init1(FontFamilyView* this, Node* node) {
        CssPropertyView_init(&this->base, node);
}

FontFamilyView* FontFamilyView_new1(Node* node) {
    FontFamilyView* this = calloc(1, sizeof(FontFamilyView));
    FontFamilyView_init1(this, node);
    return this;
}

