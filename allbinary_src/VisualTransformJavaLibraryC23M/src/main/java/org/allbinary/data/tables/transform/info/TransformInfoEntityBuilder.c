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
// package org.allbinary.data.tables.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreFactory.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h"

typedef struct TransformInfoEntityBuilder TransformInfoEntityBuilder;
struct TransformInfoEntityBuilder {
    char unused;
};


TransformInfoEntityBuilder* TransformInfoEntityBuilder_new(void);
TransformInfoEntity* TransformInfoEntityBuilder_getInstance(void);

void TransformInfoEntityBuilder_init(TransformInfoEntityBuilder* this) {
}

TransformInfoEntityBuilder* TransformInfoEntityBuilder_new(void) {
    TransformInfoEntityBuilder* this = calloc(1, sizeof(TransformInfoEntityBuilder));
    TransformInfoEntityBuilder_init(this);
    return this;
}


TransformInfoEntity* TransformInfoEntityBuilder_getInstance(void) {
        return TransformInfoEntityFactory_getInstance(TransformInfoObjectConfigGeneratorFactory_getInstance(), TransformInfoObjectConfigAndManipulatorFactory_getInstance(), TransformInfoHttpStoreFactory_getInstance());
}

