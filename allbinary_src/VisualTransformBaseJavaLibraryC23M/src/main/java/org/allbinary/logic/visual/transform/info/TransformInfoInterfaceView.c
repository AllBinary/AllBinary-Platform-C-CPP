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
// package org.allbinary.logic.visual.transform.info

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

typedef struct TransformInfoInterfaceView TransformInfoInterfaceView;
struct TransformInfoInterfaceView {
    DomNodeInterface DomNodeInterface_interface;
    TransformInfoInterface* transformInfoInterface;
};


TransformInfoInterfaceView* TransformInfoInterfaceView_new(TransformInfoInterface* transformInfoInterface);

void TransformInfoInterfaceView_init(TransformInfoInterfaceView* this, TransformInfoInterface* transformInfoInterface);
Node* TransformInfoInterfaceView_toXmlNode(TransformInfoInterfaceView* this, Document* document);

static void TransformInfoInterfaceView_initFields(TransformInfoInterfaceView* this) {
    
}


void TransformInfoInterfaceView_init(TransformInfoInterfaceView* this, TransformInfoInterface* transformInfoInterface) {
    TransformInfoInterfaceView_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
}

TransformInfoInterfaceView* TransformInfoInterfaceView_new(TransformInfoInterface* transformInfoInterface) {
    TransformInfoInterfaceView* this = calloc(1, sizeof(TransformInfoInterfaceView));
    TransformInfoInterfaceView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* TransformInfoInterfaceView_toXmlNode(TransformInfoInterfaceView* this, Document* document) {
        return ModDomHelper_createNameValueNodes(document, TransformInfoData_getInstance()->NAME, TransformInfoInterface_toHashMap(this->transformInfoInterface));
}

