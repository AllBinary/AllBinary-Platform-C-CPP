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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigNoManipulationFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h"

typedef struct TransformInfoHttpStoreNoManipulation TransformInfoHttpStoreNoManipulation;
struct TransformInfoHttpStoreNoManipulation {
    TransformInfoHttpStore base;
};


TransformInfoHttpStoreNoManipulation* TransformInfoHttpStoreNoManipulation_new(HashMap* propertiesHashMap, PageContext* pageContext);

void TransformInfoHttpStoreNoManipulation_init(TransformInfoHttpStoreNoManipulation* this, HashMap* propertiesHashMap, PageContext* pageContext);
void TransformInfoHttpStoreNoManipulation_setObjectConfigFile(TransformInfoHttpStoreNoManipulation* this, const char* value);
void TransformInfoHttpStoreNoManipulation_setObjectConfig(TransformInfoHttpStoreNoManipulation* this, const char* value);


void TransformInfoHttpStoreNoManipulation_init(TransformInfoHttpStoreNoManipulation* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoHttpStore_init(&this->base, propertiesHashMap, pageContext);
}

TransformInfoHttpStoreNoManipulation* TransformInfoHttpStoreNoManipulation_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoHttpStoreNoManipulation* this = calloc(1, sizeof(TransformInfoHttpStoreNoManipulation));
    TransformInfoHttpStoreNoManipulation_init(this, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
void TransformInfoHttpStoreNoManipulation_setObjectConfigFile(TransformInfoHttpStoreNoManipulation* this, const char* value) {
        TransformInfoHttpStoreNoManipulation_setObjectConfigFileName(this, value);
        TransformInfoHttpStoreNoManipulation_setObjectConfigInterface(this, TransformInfoObjectConfigNoManipulationFactory_getInstance(TransformInfoObjectConfigNoManipulationFactory_getInstance(), this, TransformInfoHttpStoreNoManipulation_getObjectConfigFilePath(this)));
}


// throws Exception
void TransformInfoHttpStoreNoManipulation_setObjectConfig(TransformInfoHttpStoreNoManipulation* this, const char* value) {
        java_throw(java_exception_new("Exception", "Should not set from config"));
}

