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
#include "org/allbinary/data/tree/dom/ContextUriResolver.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/BasicTransformer.h"

typedef struct ContextTransformer ContextTransformer;
struct ContextTransformer {
    BasicTransformer base;
};


ContextTransformer* ContextTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void ContextTransformer_init(ContextTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);


void ContextTransformer_init(ContextTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        BasicTransformer_init(&this->base, abeClientInformation, transformInfoInterface);
        ContextTransformer_setURIResolver(this, ((URIResolver*) ContextUriResolver_new(((BasicUriResolver*) ContextTransformer_getURIResolver(this)))));
}

ContextTransformer* ContextTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    ContextTransformer* this = calloc(1, sizeof(ContextTransformer));
    ContextTransformer_init(this, abeClientInformation, transformInfoInterface);
    return this;
}

