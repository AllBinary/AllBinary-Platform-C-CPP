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
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"

typedef struct TransformHttpRequestDocumentFactory TransformHttpRequestDocumentFactory;
struct TransformHttpRequestDocumentFactory {
    char unused;
};


TransformHttpRequestDocumentFactory* TransformHttpRequestDocumentFactory_new(void);

void TransformHttpRequestDocumentFactory_init(TransformHttpRequestDocumentFactory* this);
TransformDocumentInterface* TransformHttpRequestDocumentFactory_getInstance(PageContext* pageContext, WeblisketSession* weblisketSession);


void TransformHttpRequestDocumentFactory_init(TransformHttpRequestDocumentFactory* this) {
}

TransformHttpRequestDocumentFactory* TransformHttpRequestDocumentFactory_new(void) {
    TransformHttpRequestDocumentFactory* this = calloc(1, sizeof(TransformHttpRequestDocumentFactory));
    TransformHttpRequestDocumentFactory_init(this);
    return this;
}


// throws Exception
TransformDocumentInterface* TransformHttpRequestDocumentFactory_getInstance(PageContext* pageContext, WeblisketSession* weblisketSession) {
        return ((TransformDocumentInterface*) TransformHttpRequestDocument_new(pageContext, weblisketSession));
}

