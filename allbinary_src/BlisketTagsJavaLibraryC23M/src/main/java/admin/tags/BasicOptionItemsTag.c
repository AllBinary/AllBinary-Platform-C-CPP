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
#include "admin/taghelpers/BasicOptionItemsHelperFactory.h"
#include "admin/taghelpers/BasicOptionItemsRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct BasicOptionItemsTag BasicOptionItemsTag;
struct BasicOptionItemsTag {
    TableTag base;
    HashMap* propertiesHashMap;
};


BasicOptionItemsTag* BasicOptionItemsTag_new(void);

void BasicOptionItemsTag_init(BasicOptionItemsTag* this);

static void BasicOptionItemsTag_initFields(BasicOptionItemsTag* this) {
    this->propertiesHashMap = nullptr;
}


void BasicOptionItemsTag_init(BasicOptionItemsTag* this) {
    TableTag_init(&this->base);
    BasicOptionItemsTag_initFields(this);
        BasicOptionItemsTag_setTagHelperFactory(this, BasicOptionItemsHelperFactory_new());
        BasicOptionItemsTag_setTagRequestHelperFactory(this, BasicOptionItemsRequestHelperFactory_new());
}

BasicOptionItemsTag* BasicOptionItemsTag_new(void) {
    BasicOptionItemsTag* this = calloc(1, sizeof(BasicOptionItemsTag));
    BasicOptionItemsTag_init(this);
    return this;
}

