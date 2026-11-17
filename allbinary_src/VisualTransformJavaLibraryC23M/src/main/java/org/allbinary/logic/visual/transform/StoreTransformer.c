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
// package org.allbinary.logic.visual.transform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/xml/transform/URIResolver.h"
#include "org/allbinary/data/tree/dom/BasicUriResolver.h"
#include "org/allbinary/data/tree/dom/StoreUriResolver.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/BasicTransformer.h"

typedef struct StoreTransformer StoreTransformer;
struct StoreTransformer {
    BasicTransformer base;
};


StoreTransformer* StoreTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void StoreTransformer_init(StoreTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);


void StoreTransformer_init(StoreTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        BasicTransformer_init(&this->base, abeClientInformation, transformInfoInterface);
        StoreTransformer_setURIResolver(this, ((URIResolver*) StoreUriResolver_new(StoreTransformer_getTransformInfoInterface(this), ((BasicUriResolver*) StoreTransformer_getURIResolver(this)))));
}

StoreTransformer* StoreTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    StoreTransformer* this = calloc(1, sizeof(StoreTransformer));
    StoreTransformer_init(this, abeClientInformation, transformInfoInterface);
    return this;
}

