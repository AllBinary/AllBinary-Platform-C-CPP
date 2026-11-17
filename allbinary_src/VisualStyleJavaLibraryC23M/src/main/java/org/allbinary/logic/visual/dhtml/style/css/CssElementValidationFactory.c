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
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/w3c/dom/Node.h"

typedef struct CssElementValidationFactory CssElementValidationFactory;
struct CssElementValidationFactory {
    char unused;
};


CssElementValidationFactory* CssElementValidationFactory_new(void);

void CssElementValidationFactory_init(CssElementValidationFactory* this);
ValidationInterface* CssElementValidationFactory_getInstance(Node* node);


void CssElementValidationFactory_init(CssElementValidationFactory* this) {
}

CssElementValidationFactory* CssElementValidationFactory_new(void) {
    CssElementValidationFactory* this = calloc(1, sizeof(CssElementValidationFactory));
    CssElementValidationFactory_init(this);
    return this;
}


// throws Exception
ValidationInterface* CssElementValidationFactory_getInstance(Node* node) {
        return ((ValidationInterface*) CssElementValidation_new(node));
}

