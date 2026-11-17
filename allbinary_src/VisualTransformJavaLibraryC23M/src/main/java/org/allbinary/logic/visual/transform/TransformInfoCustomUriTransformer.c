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
#include "org/allbinary/data/tree/dom/CustomUriResolver.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/allbinary/logic/visual/transform/BasicTransformer.h"

typedef struct TransformInfoCustomUriTransformer TransformInfoCustomUriTransformer;
struct TransformInfoCustomUriTransformer {
    BasicTransformer base;
};


TransformInfoCustomUriTransformer* TransformInfoCustomUriTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void TransformInfoCustomUriTransformer_init(TransformInfoCustomUriTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);


void TransformInfoCustomUriTransformer_init(TransformInfoCustomUriTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        BasicTransformer_init(&this->base, abeClientInformation, transformInfoInterface);
        TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = ((TransformInfoObjectConfigInterface*) TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory_getInstance(), abeClientInformation, transformInfoInterface));
        TransformInfoCustomUriTransformer_setURIResolver(this, ((URIResolver*) CustomUriResolver_new(TransformInfoObjectConfigInterface_getImportUriPath(transformInfoObjectConfigInterface), ((BasicUriResolver*) TransformInfoCustomUriTransformer_getURIResolver(this)))));
}

TransformInfoCustomUriTransformer* TransformInfoCustomUriTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    TransformInfoCustomUriTransformer* this = calloc(1, sizeof(TransformInfoCustomUriTransformer));
    TransformInfoCustomUriTransformer_init(this, abeClientInformation, transformInfoInterface);
    return this;
}

