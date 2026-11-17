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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ThemePropertiesView ThemePropertiesView;
struct ThemePropertiesView {
    DomNodeInterface DomNodeInterface_interface;
    ThemeInterface* themeInterface;
};


ThemePropertiesView* ThemePropertiesView_new(ThemeInterface* themeInterface);

void ThemePropertiesView_init(ThemePropertiesView* this, ThemeInterface* themeInterface);
Node* ThemePropertiesView_toXmlNode(ThemePropertiesView* this, Document* document);

static void ThemePropertiesView_initFields(ThemePropertiesView* this) {
    
}


void ThemePropertiesView_init(ThemePropertiesView* this, ThemeInterface* themeInterface) {
    ThemePropertiesView_initFields(this);
        this->themeInterface = themeInterface;
}

ThemePropertiesView* ThemePropertiesView_new(ThemeInterface* themeInterface) {
    ThemePropertiesView* this = calloc(1, sizeof(ThemePropertiesView));
    ThemePropertiesView_init(this, themeInterface);
    return this;
}


// throws Exception
Node* ThemePropertiesView_toXmlNode(ThemePropertiesView* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, ThemeData_getInstance()->NAME, ThemeInterface_toHashMap(this->themeInterface));
        return node;
}

