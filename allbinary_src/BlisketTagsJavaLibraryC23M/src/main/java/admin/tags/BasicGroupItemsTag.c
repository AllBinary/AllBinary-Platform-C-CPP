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
// #include "java/util/HashMap.h"
#include "admin/taghelpers/BasicGroupItemsHelperFactory.h"
#include "admin/taghelpers/BasicGroupItemsRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct BasicGroupItemsTag BasicGroupItemsTag;
struct BasicGroupItemsTag {
    TableTag base;
    HashMap* propertiesHashMap;
};


BasicGroupItemsTag* BasicGroupItemsTag_new(void);

void BasicGroupItemsTag_init(BasicGroupItemsTag* this);

static void BasicGroupItemsTag_initFields(BasicGroupItemsTag* this) {
    this->propertiesHashMap = nullptr;
}


void BasicGroupItemsTag_init(BasicGroupItemsTag* this) {
    TableTag_init(&this->base);
    BasicGroupItemsTag_initFields(this);
        BasicGroupItemsTag_setTagHelperFactory(this, BasicGroupItemsHelperFactory_new());
        BasicGroupItemsTag_setTagRequestHelperFactory(this, BasicGroupItemsRequestHelperFactory_new());
}

BasicGroupItemsTag* BasicGroupItemsTag_new(void) {
    BasicGroupItemsTag* this = calloc(1, sizeof(BasicGroupItemsTag));
    BasicGroupItemsTag_init(this);
    return this;
}

