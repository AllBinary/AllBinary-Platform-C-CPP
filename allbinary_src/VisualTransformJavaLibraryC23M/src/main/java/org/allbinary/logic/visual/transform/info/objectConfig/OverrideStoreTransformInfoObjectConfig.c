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
// package org.allbinary.logic.visual.transform.info.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"

typedef struct OverrideStoreTransformInfoObjectConfig OverrideStoreTransformInfoObjectConfig;
struct OverrideStoreTransformInfoObjectConfig {
    GenericStoreTransformInfoObjectConfig base;
};


OverrideStoreTransformInfoObjectConfig* OverrideStoreTransformInfoObjectConfig_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void OverrideStoreTransformInfoObjectConfig_init(OverrideStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

OverrideStoreTransformInfoObjectConfig* OverrideStoreTransformInfoObjectConfig_new3(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);
void OverrideStoreTransformInfoObjectConfig_init3(OverrideStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

OverrideStoreTransformInfoObjectConfig* OverrideStoreTransformInfoObjectConfig_new4(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void OverrideStoreTransformInfoObjectConfig_init4(OverrideStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
Document* OverrideStoreTransformInfoObjectConfig_generate(OverrideStoreTransformInfoObjectConfig* this, Document* objectConfigDocument);


void OverrideStoreTransformInfoObjectConfig_init(OverrideStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        GenericStoreTransformInfoObjectConfig_init(&this->base, abeClientInformation, transformInfoInterface);
}

OverrideStoreTransformInfoObjectConfig* OverrideStoreTransformInfoObjectConfig_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    OverrideStoreTransformInfoObjectConfig* this = calloc(1, sizeof(OverrideStoreTransformInfoObjectConfig));
    OverrideStoreTransformInfoObjectConfig_init(this, abeClientInformation, transformInfoInterface);
    return this;
}


void OverrideStoreTransformInfoObjectConfig_init3(OverrideStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
        GenericStoreTransformInfoObjectConfig_init(&this->base, abeClientInformation, transformInfoInterface, document);
        OverrideStoreTransformInfoObjectConfig_setDocument(this, OverrideStoreTransformInfoObjectConfig_generate(this, OverrideStoreTransformInfoObjectConfig_toXmlDoc(this)));
}

OverrideStoreTransformInfoObjectConfig* OverrideStoreTransformInfoObjectConfig_new3(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
    OverrideStoreTransformInfoObjectConfig* this = calloc(1, sizeof(OverrideStoreTransformInfoObjectConfig));
    OverrideStoreTransformInfoObjectConfig_init3(this, abeClientInformation, transformInfoInterface, document);
    return this;
}


void OverrideStoreTransformInfoObjectConfig_init4(OverrideStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
        GenericStoreTransformInfoObjectConfig_init(&this->base, abeClientInformation, transformInfoInterface, name, type);
        OverrideStoreTransformInfoObjectConfig_setDocument(this, OverrideStoreTransformInfoObjectConfig_generate(this, OverrideStoreTransformInfoObjectConfig_toXmlDoc(this)));
}

OverrideStoreTransformInfoObjectConfig* OverrideStoreTransformInfoObjectConfig_new4(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    OverrideStoreTransformInfoObjectConfig* this = calloc(1, sizeof(OverrideStoreTransformInfoObjectConfig));
    OverrideStoreTransformInfoObjectConfig_init4(this, abeClientInformation, transformInfoInterface, name, type);
    return this;
}


// throws Exception
Document* OverrideStoreTransformInfoObjectConfig_generate(OverrideStoreTransformInfoObjectConfig* this, Document* objectConfigDocument) {
        Document* newObjectConfigDocument = GenericStoreTransformInfoObjectConfig_generate((&this->base), objectConfigDocument);
        return newObjectConfigDocument;
}

