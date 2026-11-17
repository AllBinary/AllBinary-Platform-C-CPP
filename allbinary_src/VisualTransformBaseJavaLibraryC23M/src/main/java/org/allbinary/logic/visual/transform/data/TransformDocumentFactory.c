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
// package org.allbinary.logic.visual.transform.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TransformDocumentFactory TransformDocumentFactory;
struct TransformDocumentFactory {
    char unused;
};


TransformDocumentFactory* TransformDocumentFactory_new(void);

void TransformDocumentFactory_init(TransformDocumentFactory* this);
TransformDocumentInterface* TransformDocumentFactory_getInstance(void);


void TransformDocumentFactory_init(TransformDocumentFactory* this) {
}

TransformDocumentFactory* TransformDocumentFactory_new(void) {
    TransformDocumentFactory* this = calloc(1, sizeof(TransformDocumentFactory));
    TransformDocumentFactory_init(this);
    return this;
}


// throws Exception
TransformDocumentInterface* TransformDocumentFactory_getInstance(void) {
        return ((TransformDocumentInterface*) TransformDocument_new());
}

