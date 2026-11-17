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
// package org.allbinary.logic.visual.dhtml.style.css

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
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/w3c/dom/Node.h"

typedef struct CssElementsValidationFactory CssElementsValidationFactory;
struct CssElementsValidationFactory {
    char unused;
};


CssElementsValidationFactory* CssElementsValidationFactory_new(void);

void CssElementsValidationFactory_init(CssElementsValidationFactory* this);
BasicArrayList* CssElementsValidationFactory_getInstance(BasicArrayList* cssElementStyleNodeList);
BasicArrayList* CssElementsValidationFactory_getInstance(HashMap* hashMap);


void CssElementsValidationFactory_init(CssElementsValidationFactory* this) {
}

CssElementsValidationFactory* CssElementsValidationFactory_new(void) {
    CssElementsValidationFactory* this = calloc(1, sizeof(CssElementsValidationFactory));
    CssElementsValidationFactory_init(this);
    return this;
}


// throws Exception
BasicArrayList* CssElementsValidationFactory_getInstance(BasicArrayList* cssElementStyleNodeList) {
        BasicArrayList* styles = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(cssElementStyleNodeList);
        Node* cssElementStyleNode = nullptr;
        ValidationInterface* cssValidationInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            cssElementStyleNode = ((Node*) BasicArrayList_get(cssElementStyleNodeList, index));
            cssValidationInterface = ((ValidationInterface*) CssElementValidationFactory_getInstance(cssElementStyleNode));
            BasicArrayList_add(styles, cssValidationInterface);
        }
        return styles;
}


// Java overloaded method: C needs a different name
BasicArrayList* CssElementsValidationFactory_getInstance(HashMap* hashMap) {
        BasicArrayList* styles = BasicArrayListD_new();
        return styles;
}

