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
#include "org/allbinary/logic/control/search/SearchRequest.h"

typedef struct TransformStoreDocumentFactory TransformStoreDocumentFactory;
struct TransformStoreDocumentFactory {
    char unused;
};


TransformStoreDocumentFactory* TransformStoreDocumentFactory_new(void);

void TransformStoreDocumentFactory_init(TransformStoreDocumentFactory* this);
TransformDocumentInterface* TransformStoreDocumentFactory_getInstance(PageContext* pageContext, WeblisketSession* weblisketSession);
TransformDocumentInterface* TransformStoreDocumentFactory_getInstance(SearchRequest* searchRequest);


void TransformStoreDocumentFactory_init(TransformStoreDocumentFactory* this) {
}

TransformStoreDocumentFactory* TransformStoreDocumentFactory_new(void) {
    TransformStoreDocumentFactory* this = calloc(1, sizeof(TransformStoreDocumentFactory));
    TransformStoreDocumentFactory_init(this);
    return this;
}


// throws Exception
TransformDocumentInterface* TransformStoreDocumentFactory_getInstance(PageContext* pageContext, WeblisketSession* weblisketSession) {
        return ((TransformDocumentInterface*) TransformStoreDocument_new(pageContext, weblisketSession));
}


// throws Exception
// Java overloaded method: C needs a different name
TransformDocumentInterface* TransformStoreDocumentFactory_getInstance(SearchRequest* searchRequest) {
        return ((TransformDocumentInterface*) TransformStoreDocument_new(searchRequest));
}

