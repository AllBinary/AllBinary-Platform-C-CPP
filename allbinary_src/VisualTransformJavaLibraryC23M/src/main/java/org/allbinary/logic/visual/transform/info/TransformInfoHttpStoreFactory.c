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
#include "org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h"

typedef struct TransformInfoHttpStoreFactory TransformInfoHttpStoreFactory;
struct TransformInfoHttpStoreFactory {
    TransformInfoFactoryInterface TransformInfoFactoryInterface_interface;
};

static TransformInfoHttpStoreFactory* TransformInfoHttpStoreFactory_instance;

TransformInfoHttpStoreFactory* TransformInfoHttpStoreFactory_new(void);
TransformInfoHttpStoreFactory* TransformInfoHttpStoreFactory_getInstance(void);

void TransformInfoHttpStoreFactory_init(TransformInfoHttpStoreFactory* this);
TransformInfoInterface* TransformInfoHttpStoreFactory_getInstance(TransformInfoHttpStoreFactory* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext);

// Static fields with runtime initializers: call this once at startup
void TransformInfoHttpStoreFactory_staticInit(void) {
    TransformInfoHttpStoreFactory_instance = TransformInfoHttpStoreFactory_new();
}


TransformInfoHttpStoreFactory* TransformInfoHttpStoreFactory_getInstance(void) {
        return TransformInfoHttpStoreFactory_instance;
}


void TransformInfoHttpStoreFactory_init(TransformInfoHttpStoreFactory* this) {
}

TransformInfoHttpStoreFactory* TransformInfoHttpStoreFactory_new(void) {
    TransformInfoHttpStoreFactory* this = calloc(1, sizeof(TransformInfoHttpStoreFactory));
    TransformInfoHttpStoreFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoInterface* TransformInfoHttpStoreFactory_getInstance(TransformInfoHttpStoreFactory* this, HashMap* databaseHashMap, HashMap* propertiesHashMap, PageContext* pageContext) {
        return TransformInfoHttpStore_new(databaseHashMap, propertiesHashMap, pageContext);
}

