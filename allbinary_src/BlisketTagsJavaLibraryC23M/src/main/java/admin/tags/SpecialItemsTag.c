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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "admin/taghelpers/SpecialItemsHelperFactory.h"
#include "admin/taghelpers/SpecialItemsRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct SpecialItemsTag SpecialItemsTag;
struct SpecialItemsTag {
    TableTag base;
};


SpecialItemsTag* SpecialItemsTag_new(void);

void SpecialItemsTag_init(SpecialItemsTag* this);


void SpecialItemsTag_init(SpecialItemsTag* this) {
    TableTag_init(&this->base);
        SpecialItemsTag_setTagHelperFactory(this, SpecialItemsHelperFactory_new());
        SpecialItemsTag_setTagRequestHelperFactory(this, SpecialItemsRequestHelperFactory_new());
}

SpecialItemsTag* SpecialItemsTag_new(void) {
    SpecialItemsTag* this = calloc(1, sizeof(SpecialItemsTag));
    SpecialItemsTag_init(this);
    return this;
}

