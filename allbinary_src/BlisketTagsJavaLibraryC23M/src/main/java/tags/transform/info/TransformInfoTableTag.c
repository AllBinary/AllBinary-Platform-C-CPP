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
// package tags.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "admin/tags/TableTag.h"
#include "taghelpers/transform/info/TransformInfoHelperFactory.h"

typedef struct TransformInfoTableTag TransformInfoTableTag;
struct TransformInfoTableTag {
    TableTag base;
};


TransformInfoTableTag* TransformInfoTableTag_new(void);

void TransformInfoTableTag_init(TransformInfoTableTag* this);


void TransformInfoTableTag_init(TransformInfoTableTag* this) {
    TableTag_init(&this->base);
        TransformInfoTableTag_setTagHelperFactory(this, TransformInfoHelperFactory_new());
}

TransformInfoTableTag* TransformInfoTableTag_new(void) {
    TransformInfoTableTag* this = calloc(1, sizeof(TransformInfoTableTag));
    TransformInfoTableTag_init(this);
    return this;
}

