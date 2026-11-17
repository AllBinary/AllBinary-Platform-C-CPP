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
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct CssPropertiesValidationFactory CssPropertiesValidationFactory;
struct CssPropertiesValidationFactory {
    char unused;
};


CssPropertiesValidationFactory* CssPropertiesValidationFactory_new(void);

void CssPropertiesValidationFactory_init(CssPropertiesValidationFactory* this);
BasicArrayList* CssPropertiesValidationFactory_getInstance(NodeList* nodeList);
BasicArrayList* CssPropertiesValidationFactory_getInstance(HashMap* hashMap);


void CssPropertiesValidationFactory_init(CssPropertiesValidationFactory* this) {
}

CssPropertiesValidationFactory* CssPropertiesValidationFactory_new(void) {
    CssPropertiesValidationFactory* this = calloc(1, sizeof(CssPropertiesValidationFactory));
    CssPropertiesValidationFactory_init(this);
    return this;
}


// throws Exception
BasicArrayList* CssPropertiesValidationFactory_getInstance(NodeList* nodeList) {
        BasicArrayList* propertiesVector = BasicArrayListD_new();
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* node = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(node), compareTo, CssPropertyData_getInstance()->NAME) == 0) {
                ValidationInterface* cssPropertyValidationInterface = ((ValidationInterface*) CssPropertyValidationFactory_getInstance(node));
                BasicArrayList_add(propertiesVector, cssPropertyValidationInterface);
            }
        }
        return propertiesVector;
}


// Java overloaded method: C needs a different name
BasicArrayList* CssPropertiesValidationFactory_getInstance(HashMap* hashMap) {
        BasicArrayList* styles = BasicArrayListD_new();
        return styles;
}

