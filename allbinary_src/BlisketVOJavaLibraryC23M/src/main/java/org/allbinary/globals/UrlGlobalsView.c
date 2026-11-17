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
// package org.allbinary.globals

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
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct UrlGlobalsView UrlGlobalsView;
struct UrlGlobalsView {
    DomNodeInterface DomNodeInterface_interface;
};


UrlGlobalsView* UrlGlobalsView_new(void);

void UrlGlobalsView_init(UrlGlobalsView* this);
Node* UrlGlobalsView_toXmlNode(UrlGlobalsView* this, Document* document);


void UrlGlobalsView_init(UrlGlobalsView* this) {
}

UrlGlobalsView* UrlGlobalsView_new(void) {
    UrlGlobalsView* this = calloc(1, sizeof(UrlGlobalsView));
    UrlGlobalsView_init(this);
    return this;
}


// throws Exception
Node* UrlGlobalsView_toXmlNode(UrlGlobalsView* this, Document* document) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, UrlGlobalsData_WEBAPPPATH, JAVA_CALL(org_allbinary->globals->URLGLOBALS, getWebappPath));
        Node* node = ModDomHelper_createNameValueNodes(document, UrlGlobalsData_NAME, hashMap);
        return node;
}

