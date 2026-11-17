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
#include "admin/taghelpers/CustomItemsHelperFactory.h"
#include "admin/taghelpers/CustomItemsRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct CustomItemsTag CustomItemsTag;
struct CustomItemsTag {
    TableTag base;
};


CustomItemsTag* CustomItemsTag_new(void);

void CustomItemsTag_init(CustomItemsTag* this);


void CustomItemsTag_init(CustomItemsTag* this) {
    TableTag_init(&this->base);
        CustomItemsTag_setTagHelperFactory(this, CustomItemsHelperFactory_new());
        CustomItemsTag_setTagRequestHelperFactory(this, CustomItemsRequestHelperFactory_new());
}

CustomItemsTag* CustomItemsTag_new(void) {
    CustomItemsTag* this = calloc(1, sizeof(CustomItemsTag));
    CustomItemsTag_init(this);
    return this;
}

